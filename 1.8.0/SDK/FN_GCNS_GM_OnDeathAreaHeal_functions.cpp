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

// Function GCNS_GM_OnDeathAreaHeal.GCNS_GM_OnDeathAreaHeal_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent** SpawnedParticleSysComponent    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGCNS_GM_OnDeathAreaHeal_C::OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNS_GM_OnDeathAreaHeal.GCNS_GM_OnDeathAreaHeal_C.OnStartParticleSystemSpawned");

	UGCNS_GM_OnDeathAreaHeal_C_OnStartParticleSystemSpawned_Params params;
	params.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
