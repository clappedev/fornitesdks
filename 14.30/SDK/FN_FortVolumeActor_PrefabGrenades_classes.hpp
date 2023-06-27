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

// BlueprintGeneratedClass FortVolumeActor_PrefabGrenades.FortVolumeActor_PrefabGrenades_C
// 0x0008 (0x0660 - 0x0658)
class AFortVolumeActor_PrefabGrenades_C : public AFortVolumeActor_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FortVolumeActor_PrefabGrenades.FortVolumeActor_PrefabGrenades_C");
		
		return ptr;
	}


	void OnDeathPlayEffects_3(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_FortVolumeActor_PrefabGrenades(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
