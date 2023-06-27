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

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Can Respawn
struct ABGA_Athena_FlopperSpawn_Parent_C_Can_Respawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetRespawnDelay
struct ABGA_Athena_FlopperSpawn_Parent_C_SetRespawnDelay_Params
{
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.GetLootTier
struct ABGA_Athena_FlopperSpawn_Parent_C_GetLootTier_Params
{
	bool                                               IsExplosion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsProFishingRod;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Output_Get;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ShouldKill
struct ABGA_Athena_FlopperSpawn_Parent_C_ShouldKill_Params
{
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HandleUseTracking
struct ABGA_Athena_FlopperSpawn_Parent_C_HandleUseTracking_Params
{
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetBalanceValues
struct ABGA_Athena_FlopperSpawn_Parent_C_SetBalanceValues_Params
{
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BlueprintCanInteract
struct ABGA_Athena_FlopperSpawn_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UserConstructionScript
struct ABGA_Athena_FlopperSpawn_Parent_C_UserConstructionScript_Params
{
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.OnReady_5804F209455A50B3EE64E3AED087DE64
struct ABGA_Athena_FlopperSpawn_Parent_C_OnReady_5804F209455A50B3EE64E3AED087DE64_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_Athena_FlopperSpawn_Parent_C_BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.PlaySpawnItemHightier
struct ABGA_Athena_FlopperSpawn_Parent_C_PlaySpawnItemHightier_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.FishingComplete
struct ABGA_Athena_FlopperSpawn_Parent_C_FishingComplete_Params
{
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndKill
struct ABGA_Athena_FlopperSpawn_Parent_C_HideAndKill_Params
{
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ReceiveBeginPlay
struct ABGA_Athena_FlopperSpawn_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SpawnItem
struct ABGA_Athena_FlopperSpawn_Parent_C_SpawnItem_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hooked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HookComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     SpawnLoc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ItemSpawnDelay;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CaughtWithFishingRod;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CaughtWithHappyGhost;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ItemUsedToFish;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APrj_Athena_FloppingRabbit_C*                Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       Required_Tags;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UpdateCollectionsComponent
struct ABGA_Athena_FlopperSpawn_Parent_C_UpdateCollectionsComponent_Params
{
	bool                                               bCaughtFish;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPickup*                                 Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Clear Saved Collection Data
struct ABGA_Athena_FlopperSpawn_Parent_C_Clear_Saved_Collection_Data_Params
{
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndDelayForRespawn
struct ABGA_Athena_FlopperSpawn_Parent_C_HideAndDelayForRespawn_Params
{
	float                                              TimeToDelay;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent
struct ABGA_Athena_FlopperSpawn_Parent_C_ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
