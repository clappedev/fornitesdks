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

// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequestFadeIn
// (Event, Protected, BlueprintEvent)

void UBuiltInEmotePopUP_C::RequestFadeIn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequestFadeIn");

	UBuiltInEmotePopUP_C_RequestFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequuestFadeOut
// (Event, Protected, BlueprintEvent)

void UBuiltInEmotePopUP_C::RequuestFadeOut()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequuestFadeOut");

	UBuiltInEmotePopUP_C_RequuestFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.ExecuteUbergraph_BuiltInEmotePopUP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuiltInEmotePopUP_C::ExecuteUbergraph_BuiltInEmotePopUP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.ExecuteUbergraph_BuiltInEmotePopUP");

	UBuiltInEmotePopUP_C_ExecuteUbergraph_BuiltInEmotePopUP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
