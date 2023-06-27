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

// BlueprintGeneratedClass GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C
// 0x000C (0x008C - 0x0080)
class UGCNS_GM_OnDisplayChatEmoji_C : public UFortGameplayCueNotify_Simple
{
public:
	struct FVector                                     ParticleRelativeOffset;                                   // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C");
		
		return ptr;
	}


	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
