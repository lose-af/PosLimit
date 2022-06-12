// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
// TODO: Need to verify
enum Mirror : unsigned char {
    None_15=0,
    X,
    Z,
    XZ,
};
enum Rotation : unsigned char {
    None_14=0,
    Rotate90,
    Rotate180,
    Rotate270,
    Total,
};

#undef BEFORE_EXTRA

class StructureSettings {

#define AFTER_EXTRA
// Add Member There
private:
char filler[96];

public:
inline StructureSettings(BlockPos const& size, bool ignoreEntities, bool ignoreBlocks)
    : StructureSettings()
{
    setIgnoreBlocks(ignoreBlocks);
    setIgnoreEntities(ignoreEntities);
    setStructureSize(size);
};

#undef AFTER_EXTRA

public:
    MCAPI StructureSettings(class StructureSettings &&);
    MCAPI StructureSettings(class StructureSettings const &);
    MCAPI StructureSettings();
    MCAPI enum AnimationMode getAnimationMode() const;
    MCAPI float getAnimationSeconds() const;
    MCAPI unsigned int getAnimationTicks() const;
    MCAPI bool getIgnoreBlocks() const;
    MCAPI bool getIgnoreEntities() const;
    MCAPI unsigned int getIntegritySeed() const;
    MCAPI float getIntegrityValue() const;
    MCAPI struct ActorUniqueID getLastTouchedByPlayerID() const;
    MCAPI enum Mirror getMirror() const;
    MCAPI std::string const & getPaletteName() const;
    MCAPI class Vec3 const & getPivot() const;
    MCAPI enum Rotation getRotation() const;
    MCAPI class BlockPos const & getStructureOffset() const;
    MCAPI class BlockPos const & getStructureSize() const;
    MCAPI bool isAnimated() const;
    MCAPI class StructureSettings & operator=(class StructureSettings &&);
    MCAPI class StructureSettings & operator=(class StructureSettings const &);
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);
    MCAPI void setAnimationMode(enum AnimationMode);
    MCAPI void setAnimationSeconds(float);
    MCAPI void setIgnoreBlocks(bool);
    MCAPI void setIgnoreEntities(bool);
    MCAPI void setIgnoreJigsawBlocks(bool);
    MCAPI void setIntegritySeed(unsigned int);
    MCAPI void setIntegrityValue(float);
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    MCAPI void setMirror(enum Mirror);
    MCAPI void setPaletteName(std::string);
    MCAPI void setPivot(class Vec3 const &);
    MCAPI void setReloadActorEquipment(bool);
    MCAPI void setRotation(enum Rotation);
    MCAPI void setStructureOffset(class BlockPos const &);
    MCAPI void setStructureSize(class BlockPos const &);
    MCAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;
    MCAPI ~StructureSettings();
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_OFFSET;
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_SIZE;

protected:

private:

};