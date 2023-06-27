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

// Function BPI_Building_Actor_Destroyed.BPI_Building_Actor_Destroyed_C.Event_Building_Actor_Destroyed
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Building_Actor_Destroyed_C::Event_Building_Actor_Destroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPI_Building_Actor_Destroyed.BPI_Building_Actor_Destroyed_C.Event_Building_Actor_Destroyed");

	UBPI_Building_Actor_Destroyed_C_Event_Building_Actor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
