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

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ReceiveBeginPlay
struct ABP_Frontend_ShopBG_C_ReceiveBeginPlay_Params
{
};

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicBG
struct ABP_Frontend_ShopBG_C_SetDynamicBG_Params
{
	class UTexture*                                    InTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.EnableDynamicShopBG
struct ABP_Frontend_ShopBG_C_EnableDynamicShopBG_Params
{
};

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicEnvironmentEvent
struct ABP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent_Params
{
	struct FString                                     InPresetEnvName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DebugShopBG
struct ABP_Frontend_ShopBG_C_DebugShopBG_Params
{
};

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleRequestHide
struct ABP_Frontend_ShopBG_C_HandleRequestHide_Params
{
};

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleItemShopEntered
struct ABP_Frontend_ShopBG_C_HandleItemShopEntered_Params
{
};

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleStoreEntered
struct ABP_Frontend_ShopBG_C_HandleStoreEntered_Params
{
};

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ResetDonut
struct ABP_Frontend_ShopBG_C_ResetDonut_Params
{
};

// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ExecuteUbergraph_BP_Frontend_ShopBG
struct ABP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
