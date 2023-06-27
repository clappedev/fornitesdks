#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPC_VoiceComponent.NPC_VoiceComponent_C
// 0x0020 (0x00D0 - 0x00B0)
class UNPC_VoiceComponent_C : public UActorComponent
{
public:
	class UFortTaggedSoundBank*                        SoundBank;                                                // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachComponent;                                          // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TriggerTimeThreshold;                                     // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTriggerTime;                                          // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPC_VoiceComponent.NPC_VoiceComponent_C");
		
		return ptr;
	}


	void SetSoundBank(class UFortTaggedSoundBank* SoundBank);
	void PlayVoiceLine(const struct FGameplayTag& Gameplay_Tag, class UAudioComponent* AudioComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
