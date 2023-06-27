// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_GM_OnLowHealth_Enrage_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnRemove");

	AGCNL_GM_OnLowHealth_Enrage_C_OnRemove_Params params;
	params.MyTarget = MyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;

	return params.ReturnValue;
}


// Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnActive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCNL_GM_OnLowHealth_Enrage_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnActive");

	AGCNL_GM_OnLowHealth_Enrage_C_OnActive_Params params;
	params.MyTarget = MyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;

	return params.ReturnValue;
}


// Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_GM_OnLowHealth_Enrage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.UserConstructionScript");

	AGCNL_GM_OnLowHealth_Enrage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
