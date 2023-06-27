// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockVehicles
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::KnockVehicles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockVehicles");

	ABGA_Athena_SCMachine_C_KnockVehicles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.GiveWeaponsAndResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   FortPC                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::GiveWeaponsAndResources(class AFortPlayerController* FortPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.GiveWeaponsAndResources");

	ABGA_Athena_SCMachine_C_GiveWeaponsAndResources_Params params;
	params.FortPC = FortPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_SCMachine_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ShouldDie");

	ABGA_Athena_SCMachine_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CheckQuestCredit
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::CheckQuestCredit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CheckQuestCredit");

	ABGA_Athena_SCMachine_C_CheckQuestCredit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABGA_Athena_SCMachine_C::BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetFailedInteractionString");

	ABGA_Athena_SCMachine_C_BlueprintGetFailedInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnRep_RepServerInteract
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::OnRep_RepServerInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnRep_RepServerInteract");

	ABGA_Athena_SCMachine_C_OnRep_RepServerInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UpdateScreen
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::UpdateScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UpdateScreen");

	ABGA_Athena_SCMachine_C_UpdateScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockPlayerPawns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  IgnoreKnock                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::KnockPlayerPawns(class AActor* IgnoreKnock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockPlayerPawns");

	ABGA_Athena_SCMachine_C_KnockPlayerPawns_Params params;
	params.IgnoreKnock = IgnoreKnock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABGA_Athena_SCMachine_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetInteractionString");

	ABGA_Athena_SCMachine_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_SCMachine_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintCanInteract");

	ABGA_Athena_SCMachine_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UserConstructionScript");

	ABGA_Athena_SCMachine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_SCMachine_C::WarpVan__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__FinishedFunc");

	ABGA_Athena_SCMachine_C_WarpVan__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_SCMachine_C::WarpVan__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__UpdateFunc");

	ABGA_Athena_SCMachine_C_WarpVan__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_SCMachine_C::LightFlash__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__FinishedFunc");

	ABGA_Athena_SCMachine_C_LightFlash__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_SCMachine_C::LightFlash__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__UpdateFunc");

	ABGA_Athena_SCMachine_C_LightFlash__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnPlayerPawnResurrected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::OnPlayerPawnResurrected(class AFortPlayerPawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnPlayerPawnResurrected");

	ABGA_Athena_SCMachine_C_OnPlayerPawnResurrected_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionStarted
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_C::OnResurrectionStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionStarted");

	ABGA_Athena_SCMachine_C_OnResurrectionStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionCompleted
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_C::OnResurrectionCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionCompleted");

	ABGA_Athena_SCMachine_C_OnResurrectionCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ReceiveBeginPlay");

	ABGA_Athena_SCMachine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.HandleAmbientSound
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::HandleAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.HandleAmbientSound");

	ABGA_Athena_SCMachine_C_HandleAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BndEvt__BlockingVolume_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_Athena_SCMachine_C::BndEvt__BlockingVolume_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BndEvt__BlockingVolume_K2Node_ComponentBoundEvent");

	ABGA_Athena_SCMachine_C_BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_Params params;
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


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.TriggerRespawnFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PhaseInPawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::TriggerRespawnFX(class AFortPawn* PhaseInPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.TriggerRespawnFX");

	ABGA_Athena_SCMachine_C_TriggerRespawnFX_Params params;
	params.PhaseInPawn = PhaseInPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnBeginLongUse
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena* AthenaPC                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::OnBeginLongUse(class AFortPlayerControllerAthena* AthenaPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnBeginLongUse");

	ABGA_Athena_SCMachine_C_OnBeginLongUse_Params params;
	params.AthenaPC = AthenaPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnInterruptLongUse
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena* AthenaPC                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::OnInterruptLongUse(class AFortPlayerControllerAthena* AthenaPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnInterruptLongUse");

	ABGA_Athena_SCMachine_C_OnInterruptLongUse_Params params;
	params.AthenaPC = AthenaPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnSpawnMachineStateChanged
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_C::OnSpawnMachineStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnSpawnMachineStateChanged");

	ABGA_Athena_SCMachine_C_OnSpawnMachineStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ToggleHologram
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::ToggleHologram(bool TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ToggleHologram");

	ABGA_Athena_SCMachine_C_ToggleHologram_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CooldownTimer
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::CooldownTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CooldownTimer");

	ABGA_Athena_SCMachine_C_CooldownTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.StartCooldown
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::StartCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.StartCooldown");

	ABGA_Athena_SCMachine_C_StartCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Play Horn Sound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::Play_Horn_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Play Horn Sound");

	ABGA_Athena_SCMachine_C_Play_Horn_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Update Cooldown Sound
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_C::Update_Cooldown_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Update Cooldown Sound");

	ABGA_Athena_SCMachine_C_Update_Cooldown_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.SkydiveIfAirborne
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::SkydiveIfAirborne(class AFortPlayerPawn* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.SkydiveIfAirborne");

	ABGA_Athena_SCMachine_C_SkydiveIfAirborne_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.InteactComplete
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::InteactComplete(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.InteactComplete");

	ABGA_Athena_SCMachine_C_InteactComplete_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ExecuteUbergraph_BGA_Athena_SCMachine
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_C::ExecuteUbergraph_BGA_Athena_SCMachine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ExecuteUbergraph_BGA_Athena_SCMachine");

	ABGA_Athena_SCMachine_C_ExecuteUbergraph_BGA_Athena_SCMachine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
