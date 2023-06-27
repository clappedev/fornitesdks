#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NPC_VoiceComponent.NPC_VoiceComponent_C.SetSoundBank
struct UNPC_VoiceComponent_C_SetSoundBank_Params
{
	class UFortTaggedSoundBank*                        SoundBank;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine
struct UNPC_VoiceComponent_C_PlayVoiceLine_Params
{
	struct FGameplayTag                                Gameplay_Tag;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UAudioComponent*                             AudioComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
