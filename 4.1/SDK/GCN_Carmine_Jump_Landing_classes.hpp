#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass GCN_Carmine_Jump_Landing.GCN_Carmine_Jump_Landing_C
class UGCN_Carmine_Jump_Landing_C : public UFortGameplayCueNotify_Simple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Carmine_Jump_Landing_C");
		return Clss;
	}

	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
