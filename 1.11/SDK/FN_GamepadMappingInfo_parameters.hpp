#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged
struct UGamepadMappingInfo_C_HandleConfigChanged_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena
struct UGamepadMappingInfo_C_HandleConfigChanged_Athena_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged
struct UGamepadMappingInfo_C_OnConfigChanged_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
struct UGamepadMappingInfo_C_Update_Displayed_Mapping_Params
{
	int                                                platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Configuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
