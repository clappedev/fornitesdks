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

// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemDeactivate
struct AGCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemDeactivate_Params
{
	class UParticleSystemComponent**                   WhileActiveParticleSysComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemActivate
struct AGCN_RiftStaminaDrain_C_OnWhileActiveParticleSystemActivate_Params
{
	class UParticleSystemComponent**                   WhileActiveParticleSysComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.UserConstructionScript
struct AGCN_RiftStaminaDrain_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
