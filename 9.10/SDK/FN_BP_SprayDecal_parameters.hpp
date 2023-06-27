#pragma once

// Fortnite (9.1) SDK
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

// Function BP_SprayDecal.BP_SprayDecal_C.AddBoxCollisionForCreative
struct ABP_SprayDecal_C_AddBoxCollisionForCreative_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.FindNearbyBuildingActorsAndBindDelegates
struct ABP_SprayDecal_C_FindNearbyBuildingActorsAndBindDelegates_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.UnbindAndClearNearbyBuildingActors
struct ABP_SprayDecal_C_UnbindAndClearNearbyBuildingActors_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnRep_DecalFadeoutTime
struct ABP_SprayDecal_C_OnRep_DecalFadeoutTime_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.GetInstigatorPlayerId
struct ABP_SprayDecal_C_GetInstigatorPlayerId_Params
{
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_SprayDecal.BP_SprayDecal_C.CreateDecalComponents
struct ABP_SprayDecal_C_CreateDecalComponents_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.UserConstructionScript
struct ABP_SprayDecal_C_UserConstructionScript_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA
struct ABP_SprayDecal_C_OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F925FF00475A018319C73E9FB1540BC6
struct ABP_SprayDecal_C_OnLoaded_F925FF00475A018319C73E9FB1540BC6_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnReady_B252FED346EAB98D54D786BD15C1CC7B
struct ABP_SprayDecal_C_OnReady_B252FED346EAB98D54D786BD15C1CC7B_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_SprayDecal.BP_SprayDecal_C.ReceiveBeginPlay
struct ABP_SprayDecal_C_ReceiveBeginPlay_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnSprayAssetReplicatedDown
struct ABP_SprayDecal_C_OnSprayAssetReplicatedDown_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnSprayInfoReady
struct ABP_SprayDecal_C_OnSprayInfoReady_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.StartSprayFadeOutDueToNewPlacement
struct ABP_SprayDecal_C_StartSprayFadeOutDueToNewPlacement_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDied
struct ABP_SprayDecal_C_OnNearbyWallDied_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDamaged
struct ABP_SprayDecal_C_OnNearbyWallDamaged_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnBounceOccurs
struct ABP_SprayDecal_C_OnBounceOccurs_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyTrapPlaced
struct ABP_SprayDecal_C_OnNearbyTrapPlaced_Params
{
	class ABuildingTrap*                               Trap;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDetatched;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprayDecal.BP_SprayDecal_C.PostLevelSaveSpawnCleanup
struct ABP_SprayDecal_C_PostLevelSaveSpawnCleanup_Params
{
};

// Function BP_SprayDecal.BP_SprayDecal_C.OnWallDestoryed
struct ABP_SprayDecal_C_OnWallDestoryed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SprayDecal.BP_SprayDecal_C.ExecuteUbergraph_BP_SprayDecal
struct ABP_SprayDecal_C_ExecuteUbergraph_BP_SprayDecal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
