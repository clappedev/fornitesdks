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
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Reset Intro
struct UFeatureUnlockScreen_C_Reset_Intro_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.HandleBack
struct UFeatureUnlockScreen_C_HandleBack_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5594[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Construct
struct UFeatureUnlockScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
struct UFeatureUnlockScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnBeginIntro
struct UFeatureUnlockScreen_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Destruct
struct UFeatureUnlockScreen_C_Destruct_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.ExecuteUbergraph_FeatureUnlockScreen
struct UFeatureUnlockScreen_C_ExecuteUbergraph_FeatureUnlockScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5595[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleBack_Passthrough;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
