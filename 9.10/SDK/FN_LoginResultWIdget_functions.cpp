// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoginResultWIdget.LoginResultWIdget_C.SetForceQuitButtons
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bForceQuit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginResultWIdget_C::SetForceQuitButtons(bool bForceQuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginResultWIdget.LoginResultWIdget_C.SetForceQuitButtons");

	ULoginResultWIdget_C_SetForceQuitButtons_Params params;
	params.bForceQuit = bForceQuit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginResultWIdget_C::ExecuteUbergraph_LoginResultWIdget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget");

	ULoginResultWIdget_C_ExecuteUbergraph_LoginResultWIdget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
