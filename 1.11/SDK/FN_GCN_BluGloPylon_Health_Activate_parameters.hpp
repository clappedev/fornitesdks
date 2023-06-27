#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.OnStartParticleSystemSpawned
struct AGCN_BluGloPylon_Health_Activate_C_OnStartParticleSystemSpawned_Params
{
	class UParticleSystemComponent**                   SpawnedParticleSysComponent;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.UserConstructionScript
struct AGCN_BluGloPylon_Health_Activate_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
