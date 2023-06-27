// Fortnite (8.51) SDK
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

// Function BP_SolarisPrototype.BP_SolarisPrototype_C.CheckEndConditions
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSolarisResponse        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSolarisResponse UBP_SolarisPrototype_C::CheckEndConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SolarisPrototype.BP_SolarisPrototype_C.CheckEndConditions");

	UBP_SolarisPrototype_C_CheckEndConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
