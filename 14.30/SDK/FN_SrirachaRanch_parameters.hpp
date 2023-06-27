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

// Function SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive
struct UStreamingRadioPlayerComponent_ToggleRadioActive_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
struct UStreamingRadioPlayerComponent_StopRadioWithFadeout_Params
{
	int                                                Milliseconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadio
struct UStreamingRadioPlayerComponent_StopRadio_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
struct UStreamingRadioPlayerComponent_StopIfNoDriver_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
struct UStreamingRadioPlayerComponent_StartRadio_Params
{
	int                                                IdxToPlay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFallbackOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
struct UStreamingRadioPlayerComponent_SoundMixUpdateWeaponState_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
struct UStreamingRadioPlayerComponent_SoundMixUpdateTargetingState_Params
{
	bool                                               bNewIsTargeting;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
struct UStreamingRadioPlayerComponent_SetInteriorVolume_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
struct UStreamingRadioPlayerComponent_SetExteriorVolume_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex
struct UStreamingRadioPlayerComponent_PlayPrevIndex_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex
struct UStreamingRadioPlayerComponent_PlayNextIndex_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex
struct UStreamingRadioPlayerComponent_PlayDefaultIndex_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL
struct UStreamingRadioPlayerComponent_OnSuccessfulURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData
struct UStreamingRadioPlayerComponent_OnRep_RadioSourceData_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
struct UStreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged_Params
{
	bool                                               bPiPPlayerBlocking;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
struct UStreamingRadioPlayerComponent_OnPawnExitVehicle_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
struct UStreamingRadioPlayerComponent_OnPawnExitSeat_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
struct UStreamingRadioPlayerComponent_OnPawnEnterVehicle_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
struct UStreamingRadioPlayerComponent_OnPawnEnterSeat_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
struct UStreamingRadioPlayerComponent_OnOwningVehicleDied_Params
{
	class AFortAthenaVehicle*                          DeadVehicle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       InTags;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered
struct UStreamingRadioPlayerComponent_OnOwnerUnpowered_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled
struct UStreamingRadioPlayerComponent_OnOwnerReFueled_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel
struct UStreamingRadioPlayerComponent_OnOwnerOutOfFuel_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded
struct UStreamingRadioPlayerComponent_OnOwnerExploded_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL
struct UStreamingRadioPlayerComponent_OnFailedURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
struct UStreamingRadioPlayerComponent_NativeOnPawnExitVehicle_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
struct UStreamingRadioPlayerComponent_NativeOnPawnExitSeat_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
struct UStreamingRadioPlayerComponent_NativeOnPawnEnterVehicle_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
struct UStreamingRadioPlayerComponent_NativeOnPawnEnterSeat_Params
{
	TScriptInterface<class UFortVehicleInterface>      Vehicle;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaReady
struct UStreamingRadioPlayerComponent_MediaReady_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaPlayed
struct UStreamingRadioPlayerComponent_MediaPlayed_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaLoad
struct UStreamingRadioPlayerComponent_MediaLoad_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFinishedOrClosed
struct UStreamingRadioPlayerComponent_MediaFinishedOrClosed_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen
struct UStreamingRadioPlayerComponent_MediaFailedToOpen_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose
struct UStreamingRadioPlayerComponent_MediaExplicitClose_Params
{
	bool                                               bReallyExplicit;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
struct UStreamingRadioPlayerComponent_IsPlayingLiveFeed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
struct UStreamingRadioPlayerComponent_IsExternalSeat_Params
{
	int                                                SeatIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
struct UStreamingRadioPlayerComponent_GetOptionAt_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class URadioContentSourceItemDefinition*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthStopRadio
struct UStreamingRadioPlayerComponent_AuthStopRadio_Params
{
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveFadeOutTime
struct UStreamingRadioPlayerComponent_AuthSaveFadeOutTime_Params
{
	float                                              FadeoutSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSavedSource
struct UStreamingRadioPlayerComponent_AuthSavedSource_Params
{
	class URadioContentSourceItemDefinition*           Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveAutoStart
struct UStreamingRadioPlayerComponent_AuthSaveAutoStart_Params
{
	bool                                               bAutoStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthPlayIndex
struct UStreamingRadioPlayerComponent_AuthPlayIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
