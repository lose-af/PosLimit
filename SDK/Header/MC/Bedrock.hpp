// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace Bedrock {

#define AFTER_EXTRA
// Add Member There
struct PlatformRuntimeInfo {
    PlatformRuntimeInfo() = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&) = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&&) = delete;
};
class CrashTelemetryProcessor {
public:
    CrashTelemetryProcessor() = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&) = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&&) = delete;
};
struct CrashUploadStatus {
    CrashUploadStatus() = delete;
    CrashUploadStatus(CrashUploadStatus const&) = delete;
    CrashUploadStatus(CrashUploadStatus const&&) = delete;
};
template <typename T0>
class NonOwnerPointer {
public:
    NonOwnerPointer() = delete;
    NonOwnerPointer(NonOwnerPointer const&) = delete;
    NonOwnerPointer(NonOwnerPointer const&&) = delete;
};
struct StorageMigration {
    enum StorageMigrationType;
    StorageMigration() = delete;
    StorageMigration(StorageMigration const&) = delete;
    StorageMigration(StorageMigration const&&) = delete;
};
namespace PubSub {
class Subscription {
public:
    Subscription() = delete;
    Subscription(Subscription const&) = delete;
    Subscription(Subscription const&&) = delete;
};
} // namespace PubSub
namespace Threading {
enum AsyncStatus;
class CountReference {
public:
    CountReference() = delete;
    CountReference(CountReference const&) = delete;
    CountReference(CountReference const&&) = delete;
};
template <typename T0>
class IAsyncResult {
public:
    IAsyncResult() = delete;
    IAsyncResult(IAsyncResult const&) = delete;
    IAsyncResult(IAsyncResult const&&) = delete;
};
template <typename T0, typename T1>
class ThreadLocalObject {
public:
    ThreadLocalObject() = delete;
    ThreadLocalObject(ThreadLocalObject const&) = delete;
    ThreadLocalObject(ThreadLocalObject const&&) = delete;
};
template <typename T>
class LockGuard
{
    MCAPI LockGuard(T);
    MCAPI ~LockGuard();
};
} // namespace Threading

class ScopeExit;

class SessionInfo
{
public:
    SessionInfo() = delete;
    SessionInfo(SessionInfo const&) = delete;
    SessionInfo(SessionInfo const&&) = delete;
};

#undef AFTER_EXTRA
    MCAPI std::string getExceptionMessage(class std::exception_ptr);
    MCAPI int strtoint32(char const *, char **, int);
    MCAPI unsigned int strtouint32(char const *, char **, int);
    MCAPI void throw_system_error(enum std::errc);

};