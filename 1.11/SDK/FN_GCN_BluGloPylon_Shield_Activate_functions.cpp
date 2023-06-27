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

// Function GCN_BluGloPylon_Shield_Activate.GCN_BluGloPylon_Shield_Activate_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent** SpawnedParticleSysComponent    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCN_BluGloPylon_Shield_Activate_C::OnStartParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_BluGloPylon_Shield_Activate.GCN_BluGloPylon_Shield_Activate_C.OnStartParticleSystemSpawned");

	AGCN_BluGloPylon_Shield_Activate_C_OnStartParticleSystemSpawned_Params params;
	params.SpawnedParticleSysComponent = SpawnedParticleSysComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function GCN_BluGloPylon_Shield_Activate.GCN_BluGloPylon_Shield_Activate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_BluGloPylon_Shield_Activate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_BluGloPylon_Shield_Activate.GCN_BluGloPylon_Shield_Activate_C.UserConstructionScript");

	AGCN_BluGloPylon_Shield_Activate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
