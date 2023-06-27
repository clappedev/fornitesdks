// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GCNS_GM_OnDmgLifeLeech.GCNS_GM_OnDmgLifeLeech_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent** SpawnedParticleSysComponent    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGCNS_GM_OnDmgLifeLeech_C::OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNS_GM_OnDmgLifeLeech.GCNS_GM_OnDmgLifeLeech_C.OnStartParticleSystemSpawned");

	UGCNS_GM_OnDmgLifeLeech_C_OnStartParticleSystemSpawned_Params params;
	params.SpawnedParticleSysComponent = SpawnedParticleSysComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
