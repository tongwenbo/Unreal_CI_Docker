#include "VsGameInstance.h"
#include "Misc/NetworkVersion.h"

void UVsGameInstance::Init()
{
	Super::Init();

#if !UE_BUILD_SHIPPING
	FNetworkVersion::IsNetworkCompatibleOverride.BindLambda([](
		uint32 LocalNetworkVersion,
		uint32 RemoteNetworkVersion
		) { return true; });
#endif
}