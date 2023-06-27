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
// 0x58 (0x58 - 0x0)
// Function GameSettingsDetailView.GameSettingsDetailView_C.GatherDetailExtensions
struct UGameSettingsDetailView_C_GatherDetailExtensions_Params
{
public:
	//class UFortSetting*                        InSetting;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//TArray<TSoftClassPtr<class UFortSettingDetailExtension>> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper)
	TArray<TSoftClassPtr<class UFortSettingDetailExtension>> K2Node_MakeArray_Array;                            // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	class UFortSettingControllerInput*           K2Node_DynamicCast_AsFort_Setting_Controller_Input; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSettingValueDiscrete*             K2Node_DynamicCast_AsFort_Setting_Value_Discrete;  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UFortSettingDetailExtension>> K2Node_MakeArray_Array_1;                          // 0x48(0x10)(ZeroConstructor, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
