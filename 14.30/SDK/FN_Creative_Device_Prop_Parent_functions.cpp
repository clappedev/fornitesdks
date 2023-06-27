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

// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponentsWithCollisionOverrides
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class USceneComponent*, TEnumAsByte<ECollisionEnabled>> VisibilityComponents           (Parm, OutParm)

void ACreative_Device_Prop_Parent_C::GetVisibilityComponentsWithCollisionOverrides(TMap<class USceneComponent*, TEnumAsByte<ECollisionEnabled>>* VisibilityComponents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponentsWithCollisionOverrides");

	ACreative_Device_Prop_Parent_C_GetVisibilityComponentsWithCollisionOverrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VisibilityComponents != nullptr)
		*VisibilityComponents = params.VisibilityComponents;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponents
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*> VisibilityComponents           (Parm, OutParm)

void ACreative_Device_Prop_Parent_C::GetVisibilityComponents(TArray<class USceneComponent*>* VisibilityComponents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponents");

	ACreative_Device_Prop_Parent_C_GetVisibilityComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VisibilityComponents != nullptr)
		*VisibilityComponents = params.VisibilityComponents;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Update Visibility In Game
// (Protected, BlueprintCallable, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::Update_Visibility_In_Game()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Update Visibility In Game");

	ACreative_Device_Prop_Parent_C_Update_Visibility_In_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Is Visible In Game
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::Is_Visible_In_Game(bool* Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Is Visible In Game");

	ACreative_Device_Prop_Parent_C_Is_Visible_In_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.IsInPlayMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsInPlayMode                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::IsInPlayMode(bool* bIsInPlayMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.IsInPlayMode");

	ACreative_Device_Prop_Parent_C_IsInPlayMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInPlayMode != nullptr)
		*bIsInPlayMode = params.bIsInPlayMode;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintModifyIncomingDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   InTags                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandle EffectContext                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACreative_Device_Prop_Parent_C::BlueprintModifyIncomingDamage(float Damage, const struct FGameplayTagContainer& InTags, const struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintModifyIncomingDamage");

	ACreative_Device_Prop_Parent_C_BlueprintModifyIncomingDamage_Params params;
	params.Damage = Damage;
	params.InTags = InTags;
	params.EffectContext = EffectContext;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device Failed
// (Public, BlueprintCallable, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::Activate_Device_Failed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device Failed");

	ACreative_Device_Prop_Parent_C_Activate_Device_Failed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Attempt Activate Device
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Instigating_Controller         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Additional_Requirements        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::Attempt_Activate_Device(class AController* Instigating_Controller, bool Additional_Requirements)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Attempt Activate Device");

	ACreative_Device_Prop_Parent_C_Attempt_Activate_Device_Params params;
	params.Instigating_Controller = Instigating_Controller;
	params.Additional_Requirements = Additional_Requirements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Initialize Device
// (Public, BlueprintCallable, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::Initialize_Device()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Initialize Device");

	ACreative_Device_Prop_Parent_C_Initialize_Device_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreative_Device_Prop_Parent_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintOnLocalInteract");

	ACreative_Device_Prop_Parent_C_BlueprintOnLocalInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreative_Device_Prop_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintCanInteract");

	ACreative_Device_Prop_Parent_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device
// (Public, BlueprintCallable, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::Activate_Device()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device");

	ACreative_Device_Prop_Parent_C_Activate_Device_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate on Phase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortMinigameState             State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::Activate_on_Phase(EFortMinigameState State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate on Phase");

	ACreative_Device_Prop_Parent_C_Activate_on_Phase_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.PlayModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInPlayMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::PlayModeChanged(class AFortMinigame* Minigame, bool bIsInPlayMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.PlayModeChanged");

	ACreative_Device_Prop_Parent_C_PlayModeChanged_Params params;
	params.Minigame = Minigame;
	params.bIsInPlayMode = bIsInPlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ACreative_Device_Prop_Parent_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature");

	ACreative_Device_Prop_Parent_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ACreative_Device_Prop_Parent_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature");

	ACreative_Device_Prop_Parent_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature");

	ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature_Params params;
	params.Minigame = Minigame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature");

	ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature_Params params;
	params.Minigame = Minigame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Mingame State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortMinigameState             MinigameState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::On_Mingame_State_Changed(class AFortMinigame* Minigame, EFortMinigameState MinigameState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Mingame State Changed");

	ACreative_Device_Prop_Parent_C_On_Mingame_State_Changed_Params params;
	params.Minigame = Minigame;
	params.MinigameState = MinigameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ReceiveBeginPlay");

	ACreative_Device_Prop_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::OnWorldReady()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnWorldReady");

	ACreative_Device_Prop_Parent_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature
// (BlueprintEvent)

void ACreative_Device_Prop_Parent_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature");

	ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature
// (BlueprintEvent)

void ACreative_Device_Prop_Parent_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature");

	ACreative_Device_Prop_Parent_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameStarted
// (BlueprintCallable, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::OnMinigameStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameStarted");

	ACreative_Device_Prop_Parent_C_OnMinigameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameEnded
// (BlueprintCallable, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::OnMinigameEnded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameEnded");

	ACreative_Device_Prop_Parent_C_OnMinigameEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ExecuteUbergraph_Creative_Device_Prop_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::ExecuteUbergraph_Creative_Device_Prop_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ExecuteUbergraph_Creative_Device_Prop_Parent");

	ACreative_Device_Prop_Parent_C_ExecuteUbergraph_Creative_Device_Prop_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Play Mode Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           New_Play_Mode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACreative_Device_Prop_Parent_C::On_Play_Mode_Changed__DelegateSignature(bool New_Play_Mode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Play Mode Changed__DelegateSignature");

	ACreative_Device_Prop_Parent_C_On_Play_Mode_Changed__DelegateSignature_Params params;
	params.New_Play_Mode = New_Play_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Initialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::On_Device_Initialized__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Initialized__DelegateSignature");

	ACreative_Device_Prop_Parent_C_On_Device_Initialized__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Activated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACreative_Device_Prop_Parent_C::On_Device_Activated__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Activated__DelegateSignature");

	ACreative_Device_Prop_Parent_C_On_Device_Activated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
