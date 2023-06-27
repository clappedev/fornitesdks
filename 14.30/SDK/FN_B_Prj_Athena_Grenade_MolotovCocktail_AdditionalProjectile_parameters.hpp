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

// Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.Find Mesh Angle
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C_Find_Mesh_Angle_Params
{
	struct FVector                                     HitLoc;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNotmal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.Landed In Water
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C_Landed_In_Water_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.ReceiveHit
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C_ReceiveHit_Params
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

// Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.HasNotLandedFadeOut
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C_HasNotLandedFadeOut_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.BeginDrunkenMovement
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C_BeginDrunkenMovement_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.ReceiveBeginPlay
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.PlayClientFX
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C_PlayClientFX_Params
{
	struct FVector                                     HitLocationData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C_ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
