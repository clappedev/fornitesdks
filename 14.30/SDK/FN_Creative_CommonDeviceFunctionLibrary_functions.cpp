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

// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMinigameSettingsMachineForMinigame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMinigameSettingsMachine_C* MinigameSettingsMachine        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_GetMinigameSettingsMachineForMinigame(class AFortMinigame* Minigame, class UObject* __WorldContext, class AMinigameSettingsMachine_C** MinigameSettingsMachine)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMinigameSettingsMachineForMinigame");

	UCreative_CommonDeviceFunctionLibrary_C_GetMinigameSettingsMachineForMinigame_Params params;
	params.Minigame = Minigame;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinigameSettingsMachine != nullptr)
		*MinigameSettingsMachine = params.MinigameSettingsMachine;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Reattach or Create MID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* Target_MID                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            MatId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_Reattach_or_Create_MID(class UPrimitiveComponent* Mesh, int MatId, class UObject* __WorldContext, class UMaterialInstanceDynamic** Target_MID)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Reattach or Create MID");

	UCreative_CommonDeviceFunctionLibrary_C_Reattach_or_Create_MID_Params params;
	params.Mesh = Mesh;
	params.MatId = MatId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target_MID != nullptr)
		*Target_MID = params.Target_MID;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Wrapping Modulo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_Wrapping_Modulo(int A, int B, class UObject* __WorldContext, int* Out)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Wrapping Modulo");

	UCreative_CommonDeviceFunctionLibrary_C_Wrapping_Modulo_Params params;
	params.A = A;
	params.B = B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Animate Float Curve
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UCurveFloat*             fCurve                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Animation_Time                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Invert_Time                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsComplete                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_Animate_Float_Curve(float Delta_Time, class UCurveFloat* fCurve, float Animation_Time, bool Invert_Time, class UObject* __WorldContext, float* Current_Time, float* Value, bool* bIsComplete)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Animate Float Curve");

	UCreative_CommonDeviceFunctionLibrary_C_Animate_Float_Curve_Params params;
	params.Delta_Time = Delta_Time;
	params.fCurve = fCurve;
	params.Animation_Time = Animation_Time;
	params.Invert_Time = Invert_Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Time != nullptr)
		*Current_Time = params.Current_Time;
	if (Value != nullptr)
		*Value = params.Value;
	if (bIsComplete != nullptr)
		*bIsComplete = params.bIsComplete;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.TeamToIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_TeamToIndex(unsigned char Team, class UObject* __WorldContext, int* Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.TeamToIndex");

	UCreative_CommonDeviceFunctionLibrary_C_TeamToIndex_Params params;
	params.Team = Team;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IndexToTeam
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Team                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_IndexToTeam(int Index, class UObject* __WorldContext, unsigned char* Team)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IndexToTeam");

	UCreative_CommonDeviceFunctionLibrary_C_IndexToTeam_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team != nullptr)
		*Team = params.Team;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLogicInPlayMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortMinigameLogicComponent* Logic                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Play_Mode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_IsLogicInPlayMode(class UFortMinigameLogicComponent* Logic, class UObject* __WorldContext, bool* Play_Mode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLogicInPlayMode");

	UCreative_CommonDeviceFunctionLibrary_C_IsLogicInPlayMode_Params params;
	params.Logic = Logic;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Play_Mode != nullptr)
		*Play_Mode = params.Play_Mode;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Dynamic Team Color
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECreativeColorSetType> Color_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_Get_Dynamic_Team_Color(class AActor* Actor, class AFortMinigame* Minigame, TEnumAsByte<ECreativeColorSetType> Color_Type, class UObject* __WorldContext, int* Array_Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Dynamic Team Color");

	UCreative_CommonDeviceFunctionLibrary_C_Get_Dynamic_Team_Color_Params params;
	params.Actor = Actor;
	params.Minigame = Minigame;
	params.Color_Type = Color_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index from Tag
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor_with_Tag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Array_Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECreativeColorSetType> Color_Type_Out                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_Get_Team_Color_Index_from_Tag(class AActor* Actor_with_Tag, class AFortMinigame* Minigame, class UObject* __WorldContext, int* Array_Index, TEnumAsByte<ECreativeColorSetType>* Color_Type_Out)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index from Tag");

	UCreative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_from_Tag_Params params;
	params.Actor_with_Tag = Actor_with_Tag;
	params.Minigame = Minigame;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array_Index != nullptr)
		*Array_Index = params.Array_Index;
	if (Color_Type_Out != nullptr)
		*Color_Type_Out = params.Color_Type_Out;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index or Team Index
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortMinigameLogicComponent* Minigame_Logic                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Team_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreative_CommonDeviceFunctionLibrary_C::STATIC_Get_Team_Color_Index_or_Team_Index(class UFortMinigameLogicComponent* Minigame_Logic, int Team_Index, class UObject* __WorldContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Team Color Index or Team Index");

	UCreative_CommonDeviceFunctionLibrary_C_Get_Team_Color_Index_or_Team_Index_Params params;
	params.Minigame_Logic = Minigame_Logic;
	params.Team_Index = Team_Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLocalPawn
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLocalPawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_IsLocalPawn(class AActor* Actor, class UObject* __WorldContext, bool* IsLocalPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsLocalPawn");

	UCreative_CommonDeviceFunctionLibrary_C_IsLocalPawn_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocalPawn != nullptr)
		*IsLocalPawn = params.IsLocalPawn;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsInPlayMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Play_Mode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_IsInPlayMode(class AActor* Actor, class UObject* __WorldContext, bool* Play_Mode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsInPlayMode");

	UCreative_CommonDeviceFunctionLibrary_C_IsInPlayMode_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Play_Mode != nullptr)
		*Play_Mode = params.Play_Mode;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Driver or Pawn Controller
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor_To_Check                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid_Controller               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_Get_Driver_or_Pawn_Controller(class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid_Controller, class AController** Controller)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Get Driver or Pawn Controller");

	UCreative_CommonDeviceFunctionLibrary_C_Get_Driver_or_Pawn_Controller_Params params;
	params.Actor_To_Check = Actor_To_Check;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid_Controller != nullptr)
		*Valid_Controller = params.Valid_Controller;
	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID_FromMaterial
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      SourceMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Mid                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_GetMID_FromMaterial(class UPrimitiveComponent* Target, int Index, class UMaterialInterface* SourceMaterial, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID_FromMaterial");

	UCreative_CommonDeviceFunctionLibrary_C_GetMID_FromMaterial_Params params;
	params.Target = Target;
	params.Index = Index;
	params.SourceMaterial = SourceMaterial;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mid != nullptr)
		*Mid = params.Mid;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Refresh Team Change Binding
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMinigameLogicComponent* Minigame_Logic                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Unbind                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_Refresh_Team_Change_Binding(class UFortMinigameLogicComponent* Minigame_Logic, bool Unbind, const struct FScriptDelegate& Event, class UObject* __WorldContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Refresh Team Change Binding");

	UCreative_CommonDeviceFunctionLibrary_C_Refresh_Team_Change_Binding_Params params;
	params.Minigame_Logic = Minigame_Logic;
	params.Unbind = Unbind;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Update Team Color
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMinigameLogicComponent* Minigame_Logic                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_Update_Team_Color(class UFortMinigameLogicComponent* Minigame_Logic, class UPrimitiveComponent* Mesh, int Team, class UObject* __WorldContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.Update Team Color");

	UCreative_CommonDeviceFunctionLibrary_C_Update_Team_Color_Params params;
	params.Minigame_Logic = Minigame_Logic;
	params.Mesh = Mesh;
	params.Team = Team;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Mid                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_GetMID(class UPrimitiveComponent* Target, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.GetMID");

	UCreative_CommonDeviceFunctionLibrary_C_GetMID_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mid != nullptr)
		*Mid = params.Mid;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.ActorCanTrigger
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor_To_Check                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Overlap_Component              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanTrigger                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_ActorCanTrigger(class AActor* Actor_To_Check, class UPrimitiveComponent* Overlap_Component, class UObject* __WorldContext, bool* CanTrigger, class AController** Controller)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.ActorCanTrigger");

	UCreative_CommonDeviceFunctionLibrary_C_ActorCanTrigger_Params params;
	params.Actor_To_Check = Actor_To_Check;
	params.Overlap_Component = Overlap_Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanTrigger != nullptr)
		*CanTrigger = params.CanTrigger;
	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsActivatedOnPhase
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortMinigameState             State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PhaseIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_IsActivatedOnPhase(EFortMinigameState State, int PhaseIndex, class AActor* Actor, class UObject* __WorldContext, bool* Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsActivatedOnPhase");

	UCreative_CommonDeviceFunctionLibrary_C_IsActivatedOnPhase_Params params;
	params.State = State;
	params.PhaseIndex = PhaseIndex;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsEnabledPhaseMatch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortMinigameState             State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PhaseIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_IsEnabledPhaseMatch(EFortMinigameState State, int PhaseIndex, class AActor* Actor, class UObject* __WorldContext, bool* Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsEnabledPhaseMatch");

	UCreative_CommonDeviceFunctionLibrary_C_IsEnabledPhaseMatch_Params params;
	params.State = State;
	params.PhaseIndex = PhaseIndex;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsValidTeam
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Team_to_Check                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor_To_Check                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_IsValidTeam(int Team_to_Check, class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsValidTeam");

	UCreative_CommonDeviceFunctionLibrary_C_IsValidTeam_Params params;
	params.Team_to_Check = Team_to_Check;
	params.Actor_To_Check = Actor_To_Check;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.AwardScore
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAwardScoreType>   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortMinigameLogicComponent* Minigame_Logic                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   TargetTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_AwardScore(class AActor* Actor, int Score, TEnumAsByte<EAwardScoreType> Type, class AController* Controller, class UFortMinigameLogicComponent* Minigame_Logic, const struct FGameplayTagContainer& TargetTags, class UObject* __WorldContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.AwardScore");

	UCreative_CommonDeviceFunctionLibrary_C_AwardScore_Params params;
	params.Actor = Actor;
	params.Score = Score;
	params.Type = Type;
	params.Controller = Controller;
	params.Minigame_Logic = Minigame_Logic;
	params.TargetTags = TargetTags;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsOnUnpublishedIsland
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Edit_Mode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_CommonDeviceFunctionLibrary_C::STATIC_IsOnUnpublishedIsland(class AActor* Actor, class UObject* __WorldContext, bool* Edit_Mode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C.IsOnUnpublishedIsland");

	UCreative_CommonDeviceFunctionLibrary_C_IsOnUnpublishedIsland_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Edit_Mode != nullptr)
		*Edit_Mode = params.Edit_Mode;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
