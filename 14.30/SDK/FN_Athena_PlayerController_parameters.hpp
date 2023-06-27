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

// Function Athena_PlayerController.Athena_PlayerController_C.FadeAudioComponents
struct AAthena_PlayerController_C_FadeAudioComponents_Params
{
	class UAudioComponent*                             NewMusicComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             PreviousMusicComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Music;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.Is Creative Mode
struct AAthena_PlayerController_C_Is_Creative_Mode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer
struct AAthena_PlayerController_C_SetupPermissionRecheckTimer_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes
struct AAthena_PlayerController_C_LeftAllVolumes_Params
{
	bool                                               bLeftVolumes;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
struct AAthena_PlayerController_C_UserConstructionScript_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D
struct AAthena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnReady_B4409EAB4038578B1EBA9DB1586489B9
struct AAthena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay
struct AAthena_PlayerController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music
struct AAthena_PlayerController_C_Start_Victory_Royale_Music_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded
struct AAthena_PlayerController_C_OnMusicPackLoaded_Params
{
	class UAthenaMusicPackItemDefinition*              NewMusicPack;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.GrantItem
struct AAthena_PlayerController_C_GrantItem_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem
struct AAthena_PlayerController_C_RevokeItem_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction
struct AAthena_PlayerController_C_OnLocalInteraction_Params
{
	class AActor*                                      ReceivingActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem
struct AAthena_PlayerController_C_RemoveItem_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
struct AAthena_PlayerController_C_PlayWinEffects_Params
{
	class APawn*                                       FinisherPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWeaponItemDefinition*                   FinishingWeapon;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDeathCause                                        DeathCause;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAudioOnly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
struct AAthena_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession
struct AAthena_PlayerController_C_ReactToPawnPossession_Params
{
	class APawn*                                       PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.ReplicateRotationScaleReset
struct AAthena_PlayerController_C_ReplicateRotationScaleReset_Params
{
};

// Function Athena_PlayerController.Athena_PlayerController_C.K2_OnLeaveVolume
struct AAthena_PlayerController_C_K2_OnLeaveVolume_Params
{
	class AFortVolume*                                 Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.K2_OnEnterVolume
struct AAthena_PlayerController_C_K2_OnEnterVolume_Params
{
	class AFortVolume*                                 Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.Handle Victory Royale Audio
struct AAthena_PlayerController_C_Handle_Victory_Royale_Audio_Params
{
	bool                                               Audio_Only;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.Change Music
struct AAthena_PlayerController_C_Change_Music_Params
{
	class USoundBase*                                  New_Music;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
struct AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature
struct AAthena_PlayerController_C_PawnPossessedDispatcher__DelegateSignature_Params
{
	class APawn*                                       PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
