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

// Function Athena_PlayerController.Athena_PlayerController_C.FadeAudioComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         NewMusicComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAudioComponent*         PreviousMusicComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USoundBase*              Music                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::FadeAudioComponents(class UAudioComponent* NewMusicComponent, class UAudioComponent* PreviousMusicComponent, class USoundBase* Music, float StartTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.FadeAudioComponents");

	AAthena_PlayerController_C_FadeAudioComponents_Params params;
	params.NewMusicComponent = NewMusicComponent;
	params.PreviousMusicComponent = PreviousMusicComponent;
	params.Music = Music;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.Is Creative Mode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthena_PlayerController_C::Is_Creative_Mode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.Is Creative Mode");

	AAthena_PlayerController_C_Is_Creative_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::SetupPermissionRecheckTimer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer");

	AAthena_PlayerController_C_SetupPermissionRecheckTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLeftVolumes                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::LeftAllVolumes(bool* bLeftVolumes)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes");

	AAthena_PlayerController_C_LeftAllVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLeftVolumes != nullptr)
		*bLeftVolumes = params.bLeftVolumes;
}


// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript");

	AAthena_PlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D");

	AAthena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.OnReady_B4409EAB4038578B1EBA9DB1586489B9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortPlaylist*           Playlist                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAthena_PlayerController_C::OnReady_B4409EAB4038578B1EBA9DB1586489B9(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.OnReady_B4409EAB4038578B1EBA9DB1586489B9");

	AAthena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9_Params params;
	params.GameState = GameState;
	params.Playlist = Playlist;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay");

	AAthena_PlayerController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music
// (BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::Start_Victory_Royale_Music()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music");

	AAthena_PlayerController_C_Start_Victory_Royale_Music_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition* NewMusicPack                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTimeOffset                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded");

	AAthena_PlayerController_C_OnMusicPackLoaded_Params params;
	params.NewMusicPack = NewMusicPack;
	params.StartTimeOffset = StartTimeOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.GrantItem
// (BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::GrantItem()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.GrantItem");

	AAthena_PlayerController_C_GrantItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem
// (BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::RevokeItem()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem");

	AAthena_PlayerController_C_RevokeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  ReceivingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::OnLocalInteraction(class AActor* ReceivingActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction");

	AAthena_PlayerController_C_OnLocalInteraction_Params params;
	params.ReceivingActor = ReceivingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::RemoveItem()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem");

	AAthena_PlayerController_C_RemoveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   FinisherPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWeaponItemDefinition* FinishingWeapon                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDeathCause                    DeathCause                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAudioOnly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause, bool bAudioOnly)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects");

	AAthena_PlayerController_C_PlayWinEffects_Params params;
	params.FinisherPawn = FinisherPawn;
	params.FinishingWeapon = FinishingWeapon;
	params.DeathCause = DeathCause;
	params.bAudioOnly = bAudioOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_PlayerController_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay");

	AAthena_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::ReactToPawnPossession(class APawn* PossessedPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession");

	AAthena_PlayerController_C_ReactToPawnPossession_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ReplicateRotationScaleReset
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void AAthena_PlayerController_C::ReplicateRotationScaleReset()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ReplicateRotationScaleReset");

	AAthena_PlayerController_C_ReplicateRotationScaleReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.K2_OnLeaveVolume
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortVolume*             Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::K2_OnLeaveVolume(class AFortVolume* Volume)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.K2_OnLeaveVolume");

	AAthena_PlayerController_C_K2_OnLeaveVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.K2_OnEnterVolume
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortVolume*             Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::K2_OnEnterVolume(class AFortVolume* Volume)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.K2_OnEnterVolume");

	AAthena_PlayerController_C_K2_OnEnterVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.Handle Victory Royale Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Audio_Only                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::Handle_Victory_Royale_Audio(bool Audio_Only)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.Handle Victory Royale Audio");

	AAthena_PlayerController_C_Handle_Victory_Royale_Audio_Params params;
	params.Audio_Only = Audio_Only;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.Change Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              New_Music                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::Change_Music(class USoundBase* New_Music, float StartTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.Change Music");

	AAthena_PlayerController_C_Change_Music_Params params;
	params.New_Music = New_Music;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::ExecuteUbergraph_Athena_PlayerController(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController");

	AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_PlayerController_C::PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature");

	AAthena_PlayerController_C_PawnPossessedDispatcher__DelegateSignature_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
