#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x30 (0x30 - 0x0)
// Function AthenaServerAddress.AthenaServerAddress_C.UpdateServerAddress
struct UAthenaServerAddress_C_UpdateServerAddress_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSessionConnectString_ReturnValue;      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaServerAddress.AthenaServerAddress_C.Construct
struct UAthenaServerAddress_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AthenaServerAddress.AthenaServerAddress_C.ExecuteUbergraph_AthenaServerAddress
struct UAthenaServerAddress_C_ExecuteUbergraph_AthenaServerAddress_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
