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

// Function UI_Background_Strings.UI_Background_Strings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Background_Strings_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UI_Background_Strings.UI_Background_Strings_C.PreConstruct");

	UUI_Background_Strings_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Background_Strings.UI_Background_Strings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Background_Strings_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UI_Background_Strings.UI_Background_Strings_C.Construct");

	UUI_Background_Strings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Background_Strings.UI_Background_Strings_C.ExecuteUbergraph_UI_Background_Strings
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Background_Strings_C::ExecuteUbergraph_UI_Background_Strings(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UI_Background_Strings.UI_Background_Strings_C.ExecuteUbergraph_UI_Background_Strings");

	UUI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
