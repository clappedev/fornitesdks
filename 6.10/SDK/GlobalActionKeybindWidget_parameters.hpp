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
// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateActionDetailsContext
struct UGlobalActionKeybindWidget_C_PropagateActionDetailsContext_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetActionDetailsContext
struct UGlobalActionKeybindWidget_C_SetActionDetailsContext_Params
{
public:
	struct FFortGlobalActionDetailsFunctionContext Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetGlobalAction
struct UGlobalActionKeybindWidget_C_SetGlobalAction_Params
{
public:
	enum class EFortGlobalAction                 Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateGlobalAction
struct UGlobalActionKeybindWidget_C_PropagateGlobalAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.OnInitialized
struct UGlobalActionKeybindWidget_C_OnInitialized_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.ExecuteUbergraph_GlobalActionKeybindWidget
struct UGlobalActionKeybindWidget_C_ExecuteUbergraph_GlobalActionKeybindWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGlobalActionDetailsFunctionContext Temp_struct_Variable;                              // 0x4(0x1)(ConstParm, NoDestructor)
	uint8                                        Pad_5B36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStandardGlobalActionDetailsDataSource* CallFunc_ConstructWithDefaultContexts_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          CallFunc_SetActionSource_Value_CastInput;          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
