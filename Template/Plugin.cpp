#include "pch.h"
#include <EventAPI.h>
#include <LoggerAPI.h>
#include <MC/Level.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/Block.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Actor.hpp>
#include <MC/Player.hpp>
#include <MC/ItemStack.hpp>
#include "Version.h"
#include <LLAPI.h>
#include <ServerAPI.h>

Logger logger(PLUGIN_NAME);

namespace Setting {
	namespace Main {
		namespace PointA {
			int x, y, z;
		}
		namespace PointB {
			int x, y, z;
		}
	}

	namespace Nether {
		namespace PointA {
			int x, y, z;
		}
		namespace PointB {
			int x, y, z;
		}
	}

	namespace End {
		namespace PointA {
			int x, y, z;
		}
		namespace PointB {
			int x, y, z;
		}
	}
}

std::vector<AABB> areas;

void PluginInit()
{
	try {
		auto json = nlohmann::json::parse(ReadAllFile("./plugins/PosLimit/setting.json").value());

		auto pa = json["Main"]["PointA"];
		Setting::Main::PointA::x = pa["x"].get<int>();
		Setting::Main::PointA::y = pa["y"].get<int>();
		Setting::Main::PointA::z = pa["z"].get<int>();

		auto pb = json["Main"]["PointB"];
		Setting::Main::PointB::x = pb["x"].get<int>();
		Setting::Main::PointB::y = pb["y"].get<int>();
		Setting::Main::PointB::z = pb["z"].get<int>();

		auto nether_pa = json["Nether"]["PointA"];
		Setting::Nether::PointA::x = nether_pa["x"].get<int>();
		Setting::Nether::PointA::y = nether_pa["y"].get<int>();
		Setting::Nether::PointA::z = nether_pa["z"].get<int>();

		auto nether_pb = json["Nether"]["PointB"];
		Setting::Nether::PointB::x = nether_pb["x"].get<int>();
		Setting::Nether::PointB::y = nether_pb["y"].get<int>();
		Setting::Nether::PointB::z = nether_pb["z"].get<int>();

		auto end_pa = json["Main"]["PointA"];
		Setting::End::PointA::x = end_pa["x"].get<int>();
		Setting::End::PointA::y = end_pa["y"].get<int>();
		Setting::End::PointA::z = end_pa["z"].get<int>();

		auto end_pb = json["Main"]["PointB"];
		Setting::End::PointB::x = end_pb["x"].get<int>();
		Setting::End::PointB::y = end_pb["y"].get<int>();
		Setting::End::PointB::z = end_pb["z"].get<int>();
	}
	catch (nlohmann::detail::exception e) {
		logger.error(e.what());
	}

	areas.push_back(
		AABB{
		   {
			   Setting::Main::PointA::x,
			   Setting::Main::PointA::y,
			   Setting::Main::PointA::z
		   },
		   {
			   Setting::Main::PointB::x,
			   Setting::Main::PointB::y,
			   Setting::Main::PointB::z
		   }
		}
	);

	areas.push_back(
		AABB{
		   {
			   Setting::Nether::PointA::x,
			   Setting::Nether::PointA::y,
			   Setting::Nether::PointA::z
		   },
		   {
			   Setting::Nether::PointB::x,
			   Setting::Nether::PointB::y,
			   Setting::Nether::PointB::z
		   }
		}
	);

	areas.push_back(
		AABB{
		   {
			   Setting::End::PointA::x,
			   Setting::End::PointA::y,
			   Setting::End::PointA::z
		   },
		   {
			   Setting::End::PointB::x,
			   Setting::End::PointB::y,
			   Setting::End::PointB::z
		   }
		}
	);
}


THook(void, "?tickWorld@ServerPlayer@@UEAAXAEBUTick@@@Z",
	Player* self, void* tick) {
	auto pos = self->getPos();
	auto area = areas[self->getDimensionId()];
	if (!area.contains(pos)) {
		self->teleport(area.getCenter(), self->getDimensionId());
	}
	return original(self, tick);
}
