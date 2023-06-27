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

// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Can Respawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_FlopperSpawn_Parent_C::Can_Respawn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Can Respawn");

	ABGA_Athena_FlopperSpawn_Parent_C_Can_Respawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetRespawnDelay
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_Parent_C::SetRespawnDelay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetRespawnDelay");

	ABGA_Athena_FlopperSpawn_Parent_C_SetRespawnDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.GetLootTier
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsExplosion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsProFishingRod                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_Parent_C::GetLootTier(bool IsExplosion, bool IsProFishingRod, struct FName* Output_Get)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.GetLootTier");

	ABGA_Athena_FlopperSpawn_Parent_C_GetLootTier_Params params;
	params.IsExplosion = IsExplosion;
	params.IsProFishingRod = IsProFishingRod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ShouldKill
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_Parent_C::ShouldKill()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ShouldKill");

	ABGA_Athena_FlopperSpawn_Parent_C_ShouldKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HandleUseTracking
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_Parent_C::HandleUseTracking()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HandleUseTracking");

	ABGA_Athena_FlopperSpawn_Parent_C_HandleUseTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetBalanceValues
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_Parent_C::SetBalanceValues()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetBalanceValues");

	ABGA_Athena_FlopperSpawn_Parent_C_SetBalanceValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_FlopperSpawn_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BlueprintCanInteract");

	ABGA_Athena_FlopperSpawn_Parent_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_Parent_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UserConstructionScript");

	ABGA_Athena_FlopperSpawn_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.OnReady_5804F209455A50B3EE64E3AED087DE64
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortPlaylist*           Playlist                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_Athena_FlopperSpawn_Parent_C::OnReady_5804F209455A50B3EE64E3AED087DE64(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.OnReady_5804F209455A50B3EE64E3AED087DE64");

	ABGA_Athena_FlopperSpawn_Parent_C_OnReady_5804F209455A50B3EE64E3AED087DE64_Params params;
	params.GameState = GameState;
	params.Playlist = Playlist;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_Parent_C::BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABGA_Athena_FlopperSpawn_Parent_C_BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.PlaySpawnItemHightier
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_Parent_C::PlaySpawnItemHightier(const struct FVector& Location)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.PlaySpawnItemHightier");

	ABGA_Athena_FlopperSpawn_Parent_C_PlaySpawnItemHightier_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.FishingComplete
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_Parent_C::FishingComplete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.FishingComplete");

	ABGA_Athena_FlopperSpawn_Parent_C_FishingComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndKill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_Parent_C::HideAndKill()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndKill");

	ABGA_Athena_FlopperSpawn_Parent_C_HideAndKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ReceiveBeginPlay");

	ABGA_Athena_FlopperSpawn_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SpawnItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hooked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         HookComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 SpawnLoc                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ItemSpawnDelay                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CaughtWithFishingRod           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CaughtWithHappyGhost           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ItemUsedToFish                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APrj_Athena_FloppingRabbit_C* Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   Required_Tags                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Athena_FlopperSpawn_Parent_C::SpawnItem(class AActor* Target, bool Hooked, class USceneComponent* HookComponent, const struct FVector& SpawnLoc, class AActor* Player, float ItemSpawnDelay, bool CaughtWithFishingRod, bool CaughtWithHappyGhost, class AActor* ItemUsedToFish, class APrj_Athena_FloppingRabbit_C* Projectile, const struct FGameplayTagContainer& Required_Tags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SpawnItem");

	ABGA_Athena_FlopperSpawn_Parent_C_SpawnItem_Params params;
	params.Target = Target;
	params.Hooked = Hooked;
	params.HookComponent = HookComponent;
	params.SpawnLoc = SpawnLoc;
	params.Player = Player;
	params.ItemSpawnDelay = ItemSpawnDelay;
	params.CaughtWithFishingRod = CaughtWithFishingRod;
	params.CaughtWithHappyGhost = CaughtWithHappyGhost;
	params.ItemUsedToFish = ItemUsedToFish;
	params.Projectile = Projectile;
	params.Required_Tags = Required_Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UpdateCollectionsComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCaughtFish                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPickup*             Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_Parent_C::UpdateCollectionsComponent(bool bCaughtFish, class AActor* Player, class UFortItemDefinition* ItemDefinition, class AFortPickup* Pickup, float Length)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UpdateCollectionsComponent");

	ABGA_Athena_FlopperSpawn_Parent_C_UpdateCollectionsComponent_Params params;
	params.bCaughtFish = bCaughtFish;
	params.Player = Player;
	params.ItemDefinition = ItemDefinition;
	params.Pickup = Pickup;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Clear Saved Collection Data
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_Parent_C::Clear_Saved_Collection_Data()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Clear Saved Collection Data");

	ABGA_Athena_FlopperSpawn_Parent_C_Clear_Saved_Collection_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndDelayForRespawn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeToDelay                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_Parent_C::HideAndDelayForRespawn(float TimeToDelay)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndDelayForRespawn");

	ABGA_Athena_FlopperSpawn_Parent_C_HideAndDelayForRespawn_Params params;
	params.TimeToDelay = TimeToDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_Parent_C::ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent");

	ABGA_Athena_FlopperSpawn_Parent_C_ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
