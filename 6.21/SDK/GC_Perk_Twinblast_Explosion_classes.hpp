#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x1A8 - 0x1A8)
// BlueprintGeneratedClass GC_Perk_Twinblast_Explosion.GC_Perk_Twinblast_Explosion_C
class UGC_Perk_Twinblast_Explosion_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Perk_Twinblast_Explosion_C");
		return Clss;
	}

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
