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

// Function NPC_VoiceComponent.NPC_VoiceComponent_C.SetSoundBank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTaggedSoundBank*    SoundBank                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNPC_VoiceComponent_C::SetSoundBank(class UFortTaggedSoundBank* SoundBank)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_VoiceComponent.NPC_VoiceComponent_C.SetSoundBank");

	UNPC_VoiceComponent_C_SetSoundBank_Params params;
	params.SoundBank = SoundBank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Gameplay_Tag                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UAudioComponent*         AudioComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNPC_VoiceComponent_C::PlayVoiceLine(const struct FGameplayTag& Gameplay_Tag, class UAudioComponent* AudioComponent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine");

	UNPC_VoiceComponent_C_PlayVoiceLine_Params params;
	params.Gameplay_Tag = Gameplay_Tag;
	params.AudioComponent = AudioComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
