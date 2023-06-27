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
// 0x0 (0x0 - 0x0)
// Function B_BadgerGrape_Athena.B_BadgerGrape_Athena_C.Completed_BE41CB29498F607004FD09B58498B6DA
struct AB_BadgerGrape_Athena_C_Completed_BE41CB29498F607004FD09B58498B6DA_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BadgerGrape_Athena.B_BadgerGrape_Athena_C.ReceiveBeginPlay
struct AB_BadgerGrape_Athena_C_ReceiveBeginPlay_Params
{
public:
};

// 0x51 (0x51 - 0x0)
// Function B_BadgerGrape_Athena.B_BadgerGrape_Athena_C.ExecuteUbergraph_B_BadgerGrape_Athena
struct AB_BadgerGrape_Athena_C_ExecuteUbergraph_B_BadgerGrape_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_468E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x18(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPrimaryAssetId>               K2Node_MakeArray_Array_1;                          // 0x28(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class FName>                          K2Node_MakeArray_Array_2;                          // 0x38(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UAsyncActionChangePrimaryAssetBundles* CallFunc_AsyncChangeBundleStateForPrimaryAssetList_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
