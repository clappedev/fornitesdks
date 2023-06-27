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

// BlueprintGeneratedClass GCL_Rift_Teleport.GCL_Rift_Teleport_C
// 0x0000 (0x0318 - 0x0318)
class AGCL_Rift_Teleport_C : public AFortGameplayCueNotify_Looping
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Rift_Teleport.GCL_Rift_Teleport_C");
		
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, const struct FGameplayCueParameters& Parameters);
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
