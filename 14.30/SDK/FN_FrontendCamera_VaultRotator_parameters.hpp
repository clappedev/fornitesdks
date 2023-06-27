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

// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.SetVaultRotatorLighting
struct AFrontendCamera_VaultRotator_C_SetVaultRotatorLighting_Params
{
	struct FName                                       ItemRotatorTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.OnActivated
struct AFrontendCamera_VaultRotator_C_OnActivated_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.OnDeactivated
struct AFrontendCamera_VaultRotator_C_OnDeactivated_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.ExecuteUbergraph_FrontendCamera_VaultRotator
struct AFrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
