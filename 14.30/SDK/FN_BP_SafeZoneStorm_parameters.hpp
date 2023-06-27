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

// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.UserConstructionScript
struct ABP_SafeZoneStorm_C_UserConstructionScript_Params
{
};

// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ReceiveBeginPlay
struct ABP_SafeZoneStorm_C_ReceiveBeginPlay_Params
{
};

// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.MobileClouds
struct ABP_SafeZoneStorm_C_MobileClouds_Params
{
	bool                                               Mobile;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowClouds
struct ABP_SafeZoneStorm_C_ShowClouds_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowStormScreenEffect
struct ABP_SafeZoneStorm_C_ShowStormScreenEffect_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ExecuteUbergraph_BP_SafeZoneStorm
struct ABP_SafeZoneStorm_C_ExecuteUbergraph_BP_SafeZoneStorm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
