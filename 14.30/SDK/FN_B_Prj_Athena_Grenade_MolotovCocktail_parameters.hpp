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

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.FireflyProjectileLogic
struct AB_Prj_Athena_Grenade_MolotovCocktail_C_FireflyProjectileLogic_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Drunk Projectiles
struct AB_Prj_Athena_Grenade_MolotovCocktail_C_Drunk_Projectiles_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.OnCurieActive_7575DCC3440AA42836D7988BCA6485E5
struct AB_Prj_Athena_Grenade_MolotovCocktail_C_OnCurieActive_7575DCC3440AA42836D7988BCA6485E5_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveBeginPlay
struct AB_Prj_Athena_Grenade_MolotovCocktail_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveHit
struct AB_Prj_Athena_Grenade_MolotovCocktail_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Athena_Grenade_MolotovCocktail_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.HasEnteredWater
struct AB_Prj_Athena_Grenade_MolotovCocktail_C_HasEnteredWater_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Defer BGA Spawn
struct AB_Prj_Athena_Grenade_MolotovCocktail_C_Defer_BGA_Spawn_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail
struct AB_Prj_Athena_Grenade_MolotovCocktail_C_ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
