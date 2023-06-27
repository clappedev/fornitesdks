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

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnSetCustomDepthStencilValue
struct ATiered_Chest_Athena_C_OnSetCustomDepthStencilValue_Params
{
	TArray<class UPrimitiveComponent*>                 PrimComponents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bUseCustomDepth;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StencilValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutConsume;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.SetVisibleMobileInteractIcon
struct ATiered_Chest_Athena_C_SetVisibleMobileInteractIcon_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.GetMaxAudibleDistance
struct ATiered_Chest_Athena_C_GetMaxAudibleDistance_Params
{
	float                                              Max_Distance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.CleanupWiggleMIDs
struct ATiered_Chest_Athena_C_CleanupWiggleMIDs_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.CreateMobileMIDs
struct ATiered_Chest_Athena_C_CreateMobileMIDs_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ShouldDie
struct ATiered_Chest_Athena_C_ShouldDie_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.BlueprintCanInteract
struct ATiered_Chest_Athena_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.SetLightVisibility
struct ATiered_Chest_Athena_C_SetLightVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.UserConstructionScript
struct ATiered_Chest_Athena_C_UserConstructionScript_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileOnInteractTL__FinishedFunc
struct ATiered_Chest_Athena_C_MobileOnInteractTL__FinishedFunc_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileOnInteractTL__UpdateFunc
struct ATiered_Chest_Athena_C_MobileOnInteractTL__UpdateFunc_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileSelectedTL__FinishedFunc
struct ATiered_Chest_Athena_C_MobileSelectedTL__FinishedFunc_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileSelectedTL__UpdateFunc
struct ATiered_Chest_Athena_C_MobileSelectedTL__UpdateFunc_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Timeline_0__FinishedFunc
struct ATiered_Chest_Athena_C_Timeline_0__FinishedFunc_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Timeline_0__UpdateFunc
struct ATiered_Chest_Athena_C_Timeline_0__UpdateFunc_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnLoot
struct ATiered_Chest_Athena_C_OnLoot_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ReceiveBeginPlay
struct ATiered_Chest_Athena_C_ReceiveBeginPlay_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ReceiveDestroyed
struct ATiered_Chest_Athena_C_ReceiveDestroyed_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnSetSearched
struct ATiered_Chest_Athena_C_OnSetSearched_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_Outline_On
struct ATiered_Chest_Athena_C_Mobile_Outline_On_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_Outline_Off
struct ATiered_Chest_Athena_C_Mobile_Outline_Off_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_OnInteract
struct ATiered_Chest_Athena_C_Mobile_OnInteract_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_OnDisconnect
struct ATiered_Chest_Athena_C_Mobile_OnDisconnect_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.EnableBacchusHighlight
struct ATiered_Chest_Athena_C_EnableBacchusHighlight_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.DisableBacchusHighlight
struct ATiered_Chest_Athena_C_DisableBacchusHighlight_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnBeginSearch
struct ATiered_Chest_Athena_C_OnBeginSearch_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnDeathPlayEffects
struct ATiered_Chest_Athena_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.HideChestOpenableCosmetics
struct ATiered_Chest_Athena_C_HideChestOpenableCosmetics_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.DetermineVFXRotation
struct ATiered_Chest_Athena_C_DetermineVFXRotation_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.SpawnChestOpenVFX
struct ATiered_Chest_Athena_C_SpawnChestOpenVFX_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.PlayChestOpeningTimeline
struct ATiered_Chest_Athena_C_PlayChestOpeningTimeline_Params
{
};

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ExecuteUbergraph_Tiered_Chest_Athena
struct ATiered_Chest_Athena_C_ExecuteUbergraph_Tiered_Chest_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
