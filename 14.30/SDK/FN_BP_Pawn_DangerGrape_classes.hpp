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

// BlueprintGeneratedClass BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C
// 0x0010 (0x4130 - 0x4120)
class ABP_Pawn_DangerGrape_C : public ABP_PlayerPawn_Athena_Phoebe_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x4120(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect_Hologram;                                          // 0x4128(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void PlayResOut_2();
	void ExecuteUbergraph_BP_Pawn_DangerGrape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
