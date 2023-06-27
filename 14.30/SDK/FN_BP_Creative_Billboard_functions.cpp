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

// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCreativeActorOrigin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::GetCreativeActorOrigin(bool* Override, struct FVector* Center)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCreativeActorOrigin");

	ABP_Creative_Billboard_C_GetCreativeActorOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Override != nullptr)
		*Override = params.Override;
	if (Center != nullptr)
		*Center = params.Center;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCreativeActorBounds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override_Bounds                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Bounds                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::GetCreativeActorBounds(bool* Override_Bounds, struct FVector* Bounds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCreativeActorBounds");

	ABP_Creative_Billboard_C_GetCreativeActorBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Override_Bounds != nullptr)
		*Override_Bounds = params.Override_Bounds;
	if (Bounds != nullptr)
		*Bounds = params.Bounds;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCollisionStaticMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* ABP_Creative_Billboard_C::GetCollisionStaticMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCollisionStaticMesh");

	ABP_Creative_Billboard_C_GetCollisionStaticMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetMeshComponents
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UMeshComponent*>  ReturnValue                    (Parm, OutParm, ReturnParm)

TArray<class UMeshComponent*> ABP_Creative_Billboard_C::GetMeshComponents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetMeshComponents");

	ABP_Creative_Billboard_C_GetMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Update Last Game State Enable Changed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::Update_Last_Game_State_Enable_Changed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.Update Last Game State Enable Changed");

	ABP_Creative_Billboard_C_Update_Last_Game_State_Enable_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Text Visibility On Game State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortMinigameState             New_State                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::Text_Visibility_On_Game_State(EFortMinigameState New_State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.Text Visibility On Game State");

	ABP_Creative_Billboard_C_Text_Visibility_On_Game_State_Params params;
	params.New_State = New_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Create Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::Create_Widget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.Create Widget");

	ABP_Creative_Billboard_C_Create_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetShadow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::SetShadow()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetShadow");

	ABP_Creative_Billboard_C_SetShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextFont
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::SetTextFont()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextFont");

	ABP_Creative_Billboard_C_SetTextFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetViewDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::SetViewDistance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetViewDistance");

	ABP_Creative_Billboard_C_SetViewDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::SetTextColor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextColor");

	ABP_Creative_Billboard_C_SetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.UpdateProperties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::UpdateProperties()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.UpdateProperties");

	ABP_Creative_Billboard_C_UpdateProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetDisplayText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::SetDisplayText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetDisplayText");

	ABP_Creative_Billboard_C_SetDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextAlignment
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::SetTextAlignment()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextAlignment");

	ABP_Creative_Billboard_C_SetTextAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextSize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::SetTextSize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextSize");

	ABP_Creative_Billboard_C_SetTextSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::SetBackgroundColor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetBackgroundColor");

	ABP_Creative_Billboard_C_SetBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.PostUpdateProperties
// (BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::PostUpdateProperties()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.PostUpdateProperties");

	ABP_Creative_Billboard_C_PostUpdateProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_Creative_Billboard_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature");

	ABP_Creative_Billboard_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_Creative_Billboard_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature");

	ABP_Creative_Billboard_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AController*             TriggerInstigator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature");

	ABP_Creative_Billboard_C_BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature_Params params;
	params.TriggerInstigator = TriggerInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AController*             TriggerInstigator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature");

	ABP_Creative_Billboard_C_BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature_Params params;
	params.TriggerInstigator = TriggerInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature");

	ABP_Creative_Billboard_C_BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature_Params params;
	params.Minigame = Minigame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Play Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInPlayMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::Play_Mode_Changed(class AFortMinigame* Minigame, bool bIsInPlayMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.Play Mode Changed");

	ABP_Creative_Billboard_C_Play_Mode_Changed_Params params;
	params.Minigame = Minigame;
	params.bIsInPlayMode = bIsInPlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Update Static Mesh Component Visibility Options
// (BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::Update_Static_Mesh_Component_Visibility_Options()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.Update Static Mesh Component Visibility Options");

	ABP_Creative_Billboard_C_Update_Static_Mesh_Component_Visibility_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On Visibility Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On_Visibility_Changed__DelegateSignature(bool Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On Visibility Changed__DelegateSignature");

	ABP_Creative_Billboard_C_BndEvt__VisibleInGameComponent_K2Node_ComponentBoundEvent_6_On_Visibility_Changed__DelegateSignature_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ABP_Creative_Billboard_C::OnWorldReady()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.OnWorldReady");

	ABP_Creative_Billboard_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Initialize Device
// (BlueprintCallable, BlueprintEvent)

void ABP_Creative_Billboard_C::Initialize_Device()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.Initialize Device");

	ABP_Creative_Billboard_C_Initialize_Device_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On Enabled State Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On_Enabled_State_Changed__DelegateSignature(bool Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On Enabled State Changed__DelegateSignature");

	ABP_Creative_Billboard_C_BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On_Enabled_State_Changed__DelegateSignature_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Creative_Billboard_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.ReceiveBeginPlay");

	ABP_Creative_Billboard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortMinigameState             NewMinigameState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature");

	ABP_Creative_Billboard_C_BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature_Params params;
	params.Minigame = Minigame;
	params.NewMinigameState = NewMinigameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.Initialize Minigame Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::Initialize_Minigame_Options(class AFortMinigame* Minigame)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.Initialize Minigame Options");

	ABP_Creative_Billboard_C_Initialize_Minigame_Options_Params params;
	params.Minigame = Minigame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.ExecuteUbergraph_BP_Creative_Billboard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Creative_Billboard_C::ExecuteUbergraph_BP_Creative_Billboard(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Creative_Billboard.BP_Creative_Billboard_C.ExecuteUbergraph_BP_Creative_Billboard");

	ABP_Creative_Billboard_C_ExecuteUbergraph_BP_Creative_Billboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
