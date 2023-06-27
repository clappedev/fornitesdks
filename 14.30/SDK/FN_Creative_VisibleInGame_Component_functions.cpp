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

// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Foliage
// (Public, BlueprintCallable, BlueprintEvent)

void UCreative_VisibleInGame_Component_C::Update_Foliage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Foliage");

	UCreative_VisibleInGame_Component_C_Update_Foliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnRep_ForcedVisibilityDuringGame
// (BlueprintCallable, BlueprintEvent)

void UCreative_VisibleInGame_Component_C::OnRep_ForcedVisibilityDuringGame()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnRep_ForcedVisibilityDuringGame");

	UCreative_VisibleInGame_Component_C_OnRep_ForcedVisibilityDuringGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.SetForcedVisibilityDuringGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_ForcedValueDuringGame> NewForcedVisibilityDuringGame  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::SetForcedVisibilityDuringGame(TEnumAsByte<Enum_ForcedValueDuringGame> NewForcedVisibilityDuringGame)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.SetForcedVisibilityDuringGame");

	UCreative_VisibleInGame_Component_C_SetForcedVisibilityDuringGame_Params params;
	params.NewForcedVisibilityDuringGame = NewForcedVisibilityDuringGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Array Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCreative_VisibleInGame_Component_C::Update_Array_Visibility(TArray<class USceneComponent*>* Array)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Array Visibility");

	UCreative_VisibleInGame_Component_C_Update_Array_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visibility Components with Collision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class USceneComponent*, TEnumAsByte<ECollisionEnabled>> Collision_Overrides            (BlueprintVisible, BlueprintReadOnly, Parm)

void UCreative_VisibleInGame_Component_C::Set_Visibility_Components_with_Collision(TMap<class USceneComponent*, TEnumAsByte<ECollisionEnabled>> Collision_Overrides)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visibility Components with Collision");

	UCreative_VisibleInGame_Component_C_Set_Visibility_Components_with_Collision_Params params;
	params.Collision_Overrides = Collision_Overrides;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Should Be Visible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::Should_Be_Visible(bool* Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Should Be Visible");

	UCreative_VisibleInGame_Component_C_Should_Be_Visible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnRep_VisibleDuringPhase
// (BlueprintCallable, BlueprintEvent)

void UCreative_VisibleInGame_Component_C::OnRep_VisibleDuringPhase()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnRep_VisibleDuringPhase");

	UCreative_VisibleInGame_Component_C_OnRep_VisibleDuringPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visibility Components
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*> Scene_Components               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCreative_VisibleInGame_Component_C::Set_Visibility_Components(TArray<class USceneComponent*>* Scene_Components)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visibility Components");

	UCreative_VisibleInGame_Component_C_Set_Visibility_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scene_Components != nullptr)
		*Scene_Components = params.Scene_Components;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Is In Play Mode
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreative_VisibleInGame_Component_C::Is_In_Play_Mode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Is In Play Mode");

	UCreative_VisibleInGame_Component_C_Is_In_Play_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Particle Component
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Particle_Component             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::Update_Particle_Component(class UParticleSystemComponent* Particle_Component, bool Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Particle Component");

	UCreative_VisibleInGame_Component_C_Update_Particle_Component_Params params;
	params.Particle_Component = Particle_Component;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Audio Component
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         Audio_Component                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::Update_Audio_Component(class UAudioComponent* Audio_Component, bool Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Audio Component");

	UCreative_VisibleInGame_Component_C_Update_Audio_Component_Params params;
	params.Audio_Component = Audio_Component;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Primitive Component Collision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Primitive_Component            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::Update_Primitive_Component_Collision(class UPrimitiveComponent* Primitive_Component, bool Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Primitive Component Collision");

	UCreative_VisibleInGame_Component_C_Update_Primitive_Component_Collision_Params params;
	params.Primitive_Component = Primitive_Component;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Component Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::Update_Component_Visibility(class USceneComponent* Component, bool Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Component Visibility");

	UCreative_VisibleInGame_Component_C_Update_Component_Visibility_Params params;
	params.Component = Component;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visiblity During Phase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVisibleInGameState> New_Visible_During_Phase       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::Set_Visiblity_During_Phase(TEnumAsByte<EVisibleInGameState> New_Visible_During_Phase)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visiblity During Phase");

	UCreative_VisibleInGame_Component_C_Set_Visiblity_During_Phase_Params params;
	params.New_Visible_During_Phase = New_Visible_During_Phase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Visibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCreative_VisibleInGame_Component_C::Update_Visibility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Visibility");

	UCreative_VisibleInGame_Component_C_Update_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Get Visibility Components
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USceneComponent*> Components                     (Parm, OutParm)

void UCreative_VisibleInGame_Component_C::Get_Visibility_Components(TArray<class USceneComponent*>* Components)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Get Visibility Components");

	UCreative_VisibleInGame_Component_C_Get_Visibility_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Components != nullptr)
		*Components = params.Components;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UCreative_VisibleInGame_Component_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.ReceiveBeginPlay");

	UCreative_VisibleInGame_Component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnPlayModeChangedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInPlayMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::OnPlayModeChangedDelegate(class AFortMinigame* Minigame, bool bIsInPlayMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnPlayModeChangedDelegate");

	UCreative_VisibleInGame_Component_C_OnPlayModeChangedDelegate_Params params;
	params.Minigame = Minigame;
	params.bIsInPlayMode = bIsInPlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Bind Minigame Events
// (BlueprintCallable, BlueprintEvent)

void UCreative_VisibleInGame_Component_C::Bind_Minigame_Events()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Bind Minigame Events");

	UCreative_VisibleInGame_Component_C_Bind_Minigame_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnMinigameStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortMinigameState             MinigameState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnMinigameStateChanged");

	UCreative_VisibleInGame_Component_C_OnMinigameStateChanged_Params params;
	params.Minigame = Minigame;
	params.MinigameState = MinigameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.ExecuteUbergraph_Creative_VisibleInGame_Component
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::ExecuteUbergraph_Creative_VisibleInGame_Component(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.ExecuteUbergraph_Creative_VisibleInGame_Component");

	UCreative_VisibleInGame_Component_C_ExecuteUbergraph_Creative_VisibleInGame_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.On Visibility Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_VisibleInGame_Component_C::On_Visibility_Changed__DelegateSignature(bool Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.On Visibility Changed__DelegateSignature");

	UCreative_VisibleInGame_Component_C_On_Visibility_Changed__DelegateSignature_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
