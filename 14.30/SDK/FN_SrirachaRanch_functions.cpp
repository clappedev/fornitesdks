// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive
// (Final, Native, Public, BlueprintCallable)

void UStreamingRadioPlayerComponent::ToggleRadioActive()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive");

	UStreamingRadioPlayerComponent_ToggleRadioActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            Milliseconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::StopRadioWithFadeout(int Milliseconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout");

	UStreamingRadioPlayerComponent_StopRadioWithFadeout_Params params;
	params.Milliseconds = Milliseconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadio
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void UStreamingRadioPlayerComponent::StopRadio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadio");

	UStreamingRadioPlayerComponent_StopRadio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStreamingRadioPlayerComponent::StopIfNoDriver(const TScriptInterface<class UFortVehicleInterface>& Vehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver");

	UStreamingRadioPlayerComponent_StopIfNoDriver_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            IdxToPlay                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFallbackOverride              (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::StartRadio(int IdxToPlay, bool bFallbackOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio");

	UStreamingRadioPlayerComponent_StartRadio_Params params;
	params.IdxToPlay = IdxToPlay;
	params.bFallbackOverride = bFallbackOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
// (Final, Native, Private)
// Parameters:
// class AFortWeapon*             NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::SoundMixUpdateWeaponState(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState");

	UStreamingRadioPlayerComponent_SoundMixUpdateWeaponState_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
// (Final, Native, Private)
// Parameters:
// bool                           bNewIsTargeting                (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::SoundMixUpdateTargetingState(bool bNewIsTargeting)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState");

	UStreamingRadioPlayerComponent_SoundMixUpdateTargetingState_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStreamingRadioPlayerComponent::SetInteriorVolume(const TScriptInterface<class UFortVehicleInterface>& Vehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume");

	UStreamingRadioPlayerComponent_SetInteriorVolume_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStreamingRadioPlayerComponent::SetExteriorVolume(const TScriptInterface<class UFortVehicleInterface>& Vehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume");

	UStreamingRadioPlayerComponent_SetExteriorVolume_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void UStreamingRadioPlayerComponent::PlayPrevIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex");

	UStreamingRadioPlayerComponent_PlayPrevIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void UStreamingRadioPlayerComponent::PlayNextIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex");

	UStreamingRadioPlayerComponent_PlayNextIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void UStreamingRadioPlayerComponent::PlayDefaultIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex");

	UStreamingRadioPlayerComponent_PlayDefaultIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL
// (Final, Native, Protected)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UStreamingRadioPlayerComponent::OnSuccessfulURL(const struct FString& URL)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL");

	UStreamingRadioPlayerComponent_OnSuccessfulURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData
// (Final, Native, Protected)

void UStreamingRadioPlayerComponent::OnRep_RadioSourceData()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData");

	UStreamingRadioPlayerComponent_OnRep_RadioSourceData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bPiPPlayerBlocking             (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged");

	UStreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged_Params params;
	params.bPiPPlayerBlocking = bPiPPlayerBlocking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AFortPawn*               PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::OnPawnExitVehicle(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle");

	UStreamingRadioPlayerComponent_OnPawnExitVehicle_Params params;
	params.Vehicle = Vehicle;
	params.PlayerPawn = PlayerPawn;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AFortPawn*               PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::OnPawnExitSeat(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat");

	UStreamingRadioPlayerComponent_OnPawnExitSeat_Params params;
	params.Vehicle = Vehicle;
	params.PlayerPawn = PlayerPawn;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AFortPawn*               PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::OnPawnEnterVehicle(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle");

	UStreamingRadioPlayerComponent_OnPawnEnterVehicle_Params params;
	params.Vehicle = Vehicle;
	params.PlayerPawn = PlayerPawn;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AFortPawn*               PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::OnPawnEnterSeat(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat");

	UStreamingRadioPlayerComponent_OnPawnEnterSeat_Params params;
	params.Vehicle = Vehicle;
	params.PlayerPawn = PlayerPawn;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class AFortAthenaVehicle*      DeadVehicle                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   InTags                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::OnOwningVehicleDied(class AFortAthenaVehicle* DeadVehicle, const struct FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied");

	UStreamingRadioPlayerComponent_OnOwningVehicleDied_Params params;
	params.DeadVehicle = DeadVehicle;
	params.InTags = InTags;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered
// (Final, Native, Protected)

void UStreamingRadioPlayerComponent::OnOwnerUnpowered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered");

	UStreamingRadioPlayerComponent_OnOwnerUnpowered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled
// (Final, Native, Protected)

void UStreamingRadioPlayerComponent::OnOwnerReFueled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled");

	UStreamingRadioPlayerComponent_OnOwnerReFueled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel
// (Final, Native, Protected)

void UStreamingRadioPlayerComponent::OnOwnerOutOfFuel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel");

	UStreamingRadioPlayerComponent_OnOwnerOutOfFuel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded
// (Final, Native, Protected)

void UStreamingRadioPlayerComponent::OnOwnerExploded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded");

	UStreamingRadioPlayerComponent_OnOwnerExploded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL
// (Final, Native, Protected)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UStreamingRadioPlayerComponent::OnFailedURL(const struct FString& URL)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL");

	UStreamingRadioPlayerComponent_OnFailedURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AFortPawn*               PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::NativeOnPawnExitVehicle(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle");

	UStreamingRadioPlayerComponent_NativeOnPawnExitVehicle_Params params;
	params.Vehicle = Vehicle;
	params.PlayerPawn = PlayerPawn;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AFortPawn*               PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::NativeOnPawnExitSeat(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat");

	UStreamingRadioPlayerComponent_NativeOnPawnExitSeat_Params params;
	params.Vehicle = Vehicle;
	params.PlayerPawn = PlayerPawn;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AFortPawn*               PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::NativeOnPawnEnterVehicle(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle");

	UStreamingRadioPlayerComponent_NativeOnPawnEnterVehicle_Params params;
	params.Vehicle = Vehicle;
	params.PlayerPawn = PlayerPawn;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TScriptInterface<class UFortVehicleInterface> Vehicle                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AFortPawn*               PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::NativeOnPawnEnterSeat(const TScriptInterface<class UFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int SeatIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat");

	UStreamingRadioPlayerComponent_NativeOnPawnEnterSeat_Params params;
	params.Vehicle = Vehicle;
	params.PlayerPawn = PlayerPawn;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaReady
// (Final, Native, Protected)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)

void UStreamingRadioPlayerComponent::MediaReady(const struct FString& String)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.MediaReady");

	UStreamingRadioPlayerComponent_MediaReady_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaPlayed
// (Final, Native, Protected)

void UStreamingRadioPlayerComponent::MediaPlayed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.MediaPlayed");

	UStreamingRadioPlayerComponent_MediaPlayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaLoad
// (Final, Native, Protected)

void UStreamingRadioPlayerComponent::MediaLoad()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.MediaLoad");

	UStreamingRadioPlayerComponent_MediaLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFinishedOrClosed
// (Final, Native, Protected)

void UStreamingRadioPlayerComponent::MediaFinishedOrClosed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFinishedOrClosed");

	UStreamingRadioPlayerComponent_MediaFinishedOrClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen
// (Final, Native, Protected)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)

void UStreamingRadioPlayerComponent::MediaFailedToOpen(const struct FString& String)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen");

	UStreamingRadioPlayerComponent_MediaFailedToOpen_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose
// (Final, Native, Protected)
// Parameters:
// bool                           bReallyExplicit                (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::MediaExplicitClose(bool bReallyExplicit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose");

	UStreamingRadioPlayerComponent_MediaExplicitClose_Params params;
	params.bReallyExplicit = bReallyExplicit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStreamingRadioPlayerComponent::IsPlayingLiveFeed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed");

	UStreamingRadioPlayerComponent_IsPlayingLiveFeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SeatIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStreamingRadioPlayerComponent::IsExternalSeat(int SeatIdx)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat");

	UStreamingRadioPlayerComponent_IsExternalSeat_Params params;
	params.SeatIdx = SeatIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// class URadioContentSourceItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class URadioContentSourceItemDefinition* UStreamingRadioPlayerComponent::GetOptionAt(int idx)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt");

	UStreamingRadioPlayerComponent_GetOptionAt_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthStopRadio
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void UStreamingRadioPlayerComponent::AuthStopRadio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.AuthStopRadio");

	UStreamingRadioPlayerComponent_AuthStopRadio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveFadeOutTime
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// float                          FadeoutSeconds                 (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::AuthSaveFadeOutTime(float FadeoutSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveFadeOutTime");

	UStreamingRadioPlayerComponent_AuthSaveFadeOutTime_Params params;
	params.FadeoutSeconds = FadeoutSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSavedSource
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class URadioContentSourceItemDefinition* Source                         (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::AuthSavedSource(class URadioContentSourceItemDefinition* Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSavedSource");

	UStreamingRadioPlayerComponent_AuthSavedSource_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveAutoStart
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           bAutoStart                     (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::AuthSaveAutoStart(bool bAutoStart)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveAutoStart");

	UStreamingRadioPlayerComponent_AuthSaveAutoStart_Params params;
	params.bAutoStart = bAutoStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthPlayIndex
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UStreamingRadioPlayerComponent::AuthPlayIndex(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanch.StreamingRadioPlayerComponent.AuthPlayIndex");

	UStreamingRadioPlayerComponent_AuthPlayIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
