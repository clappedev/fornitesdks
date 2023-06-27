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

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get DBNO Montage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UGAB_AthenaDBNO_C::Get_DBNO_Montage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get DBNO Montage");

	UGAB_AthenaDBNO_C_Get_DBNO_Montage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAB_AthenaDBNO_C::GetInitialHealAmount(float* Health)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount");

	UGAB_AthenaDBNO_C_GetInitialHealAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventHitData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AthenaDBNO_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection");

	UGAB_AthenaDBNO_C_InitializeDeathHitDirection_Params params;
	params.EventHitData = EventHitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnCancelled_F0F6785443BD2E74F5591884CB19F35F()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F");

	UGAB_AthenaDBNO_C_OnCancelled_F0F6785443BD2E74F5591884CB19F35F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnInterrupted_F0F6785443BD2E74F5591884CB19F35F()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F");

	UGAB_AthenaDBNO_C_OnInterrupted_F0F6785443BD2E74F5591884CB19F35F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnBlendOut_F0F6785443BD2E74F5591884CB19F35F()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F");

	UGAB_AthenaDBNO_C_OnBlendOut_F0F6785443BD2E74F5591884CB19F35F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnCompleted_F0F6785443BD2E74F5591884CB19F35F()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F");

	UGAB_AthenaDBNO_C_OnCompleted_F0F6785443BD2E74F5591884CB19F35F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6");

	UGAB_AthenaDBNO_C_OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6");

	UGAB_AthenaDBNO_C_OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnFinish_4C169D40441E45B462D83CBBA67F6E45
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnFinish_4C169D40441E45B462D83CBBA67F6E45()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnFinish_4C169D40441E45B462D83CBBA67F6E45");

	UGAB_AthenaDBNO_C_OnFinish_4C169D40441E45B462D83CBBA67F6E45_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_AthenaDBNO_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent");

	UGAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_AthenaDBNO_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility");

	UGAB_AthenaDBNO_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.DropHeldObjects
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::DropHeldObjects()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.DropHeldObjects");

	UGAB_AthenaDBNO_C_DropHeldObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_AthenaDBNO_C::ExecuteUbergraph_GAB_AthenaDBNO(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO");

	UGAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
