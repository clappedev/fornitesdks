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

// Function StatusWidget.StatusWidget_C.SetContinueButtonText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   ContinueText                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStatusWidget_C::SetContinueButtonText(const struct FText& ContinueText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.SetContinueButtonText");

	UStatusWidget_C_SetContinueButtonText_Params params;
	params.ContinueText = ContinueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::ExecuteUbergraph_StatusWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget");

	UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
