#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SocialSettingToggle.SocialSettingToggle_C.SetFontSize
struct USocialSettingToggle_C_SetFontSize_Params
{
	class UCommonTextBlock*                            Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                DefaultSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MobileSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialSettingToggle.SocialSettingToggle_C.UpdateSize
struct USocialSettingToggle_C_UpdateSize_Params
{
};

// Function SocialSettingToggle.SocialSettingToggle_C.Construct
struct USocialSettingToggle_C_Construct_Params
{
};

// Function SocialSettingToggle.SocialSettingToggle_C.ExecuteUbergraph_SocialSettingToggle
struct USocialSettingToggle_C_ExecuteUbergraph_SocialSettingToggle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
