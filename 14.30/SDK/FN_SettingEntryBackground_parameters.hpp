#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SettingEntryBackground.SettingEntryBackground_C.OnMouseEnter
struct USettingEntryBackground_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingEntryBackground.SettingEntryBackground_C.OnMouseLeave
struct USettingEntryBackground_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingEntryBackground.SettingEntryBackground_C.ExecuteUbergraph_SettingEntryBackground
struct USettingEntryBackground_C_ExecuteUbergraph_SettingEntryBackground_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingEntryBackground.SettingEntryBackground_C.OnMouseEnterChanged__DelegateSignature
struct USettingEntryBackground_C_OnMouseEnterChanged__DelegateSignature_Params
{
	bool                                               IsEnterEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
