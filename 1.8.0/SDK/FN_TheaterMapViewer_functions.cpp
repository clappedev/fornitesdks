// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TheaterMapViewer.TheaterMapViewer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATheaterMapViewer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterMapViewer.TheaterMapViewer_C.UserConstructionScript");

	ATheaterMapViewer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
