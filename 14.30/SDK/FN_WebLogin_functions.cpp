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

// Function WebLogin.WebLogin_C.DisplayWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 WebWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWebLogin_C::DisplayWidget(class UWidget* WebWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.DisplayWidget");

	UWebLogin_C_DisplayWidget_Params params;
	params.WebWidget = WebWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebLogin.WebLogin_C.DismissWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWebLogin_C::DismissWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.DismissWidget");

	UWebLogin_C_DismissWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWebLogin_C::ExecuteUbergraph_WebLogin(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin");

	UWebLogin_C_ExecuteUbergraph_WebLogin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
