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

// Function HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro.OnBeginSkydiveFromBus
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerZone* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_HighTowerAbilityIntro::OnBeginSkydiveFromBus(class AFortPlayerControllerZone* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro.OnBeginSkydiveFromBus");

	AFortAthenaMutator_HighTowerAbilityIntro_OnBeginSkydiveFromBus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
