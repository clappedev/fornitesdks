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

// Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Toggle Mesh Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Toggle_Mesh_Visibility(bool Visibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Toggle Mesh Visibility");

	AGC_Generic_AdrenalineRush_DirectHeal_Latent_C_Toggle_Mesh_Visibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Duplicate Meshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Duplicate_Meshes(class AFortPlayerPawn* Player_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Duplicate Meshes");

	AGC_Generic_AdrenalineRush_DirectHeal_Latent_C_Duplicate_Meshes_Params params;
	params.Player_Pawn = Player_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Set Adrenaline Rush Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerPawn*         Player_Pawn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::Set_Adrenaline_Rush_Visibility(bool Visible, class AFortPlayerPawn* Player_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Set Adrenaline Rush Visibility");

	AGC_Generic_AdrenalineRush_DirectHeal_Latent_C_Set_Adrenaline_Rush_Visibility_Params params;
	params.Visible = Visible;
	params.Player_Pawn = Player_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__FinishedFunc
// (BlueprintEvent)

void AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::HealthSweep__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__FinishedFunc");

	AGC_Generic_AdrenalineRush_DirectHeal_Latent_C_HealthSweep__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__UpdateFunc
// (BlueprintEvent)

void AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::HealthSweep__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__UpdateFunc");

	AGC_Generic_AdrenalineRush_DirectHeal_Latent_C_HealthSweep__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.K2_HandleGameplayCue");

	AGC_Generic_AdrenalineRush_DirectHeal_Latent_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_DirectHeal_Latent_C::ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent");

	AGC_Generic_AdrenalineRush_DirectHeal_Latent_C_ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
