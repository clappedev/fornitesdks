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

// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OnUnlockingInfoSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bShowProgression               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockedStyleNotification_C::OnUnlockingInfoSet(bool bShowProgression)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OnUnlockingInfoSet");

	UAthenaLockedStyleNotification_C_OnUnlockingInfoSet_Params params;
	params.bShowProgression = bShowProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestUpdateAnim
// (Event, Protected, BlueprintEvent)

void UAthenaLockedStyleNotification_C::RequestUpdateAnim()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestUpdateAnim");

	UAthenaLockedStyleNotification_C_RequestUpdateAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestIntroAnim
// (Event, Protected, BlueprintEvent)

void UAthenaLockedStyleNotification_C::RequestIntroAnim()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestIntroAnim");

	UAthenaLockedStyleNotification_C_RequestIntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestOutroAnim
// (Event, Protected, BlueprintEvent)

void UAthenaLockedStyleNotification_C::RequestOutroAnim()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestOutroAnim");

	UAthenaLockedStyleNotification_C_RequestOutroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OutroFinished
// (BlueprintCallable, BlueprintEvent)

void UAthenaLockedStyleNotification_C::OutroFinished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OutroFinished");

	UAthenaLockedStyleNotification_C_OutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLockedStyleNotification_C::ExecuteUbergraph_AthenaLockedStyleNotification(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification");

	UAthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
