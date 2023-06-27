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

// Function BPI_HuskDance.BPI_HuskDance_C.OnEndDance
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HuskDance_C::OnEndDance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPI_HuskDance.BPI_HuskDance_C.OnEndDance");

	UBPI_HuskDance_C_OnEndDance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HuskDance.BPI_HuskDance_C.OnBeginDance
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HuskDance_C::OnBeginDance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPI_HuskDance.BPI_HuskDance_C.OnBeginDance");

	UBPI_HuskDance_C_OnBeginDance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
