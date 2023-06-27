#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C
// 0x002C (0x0C6C - 0x0C40)
class ABP_DeimosRift_Dynamic_C : public ABP_DeimosRift_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              LifeTime;                                                 // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C4C(0x0004) MISSED OFFSET
	struct FTimerHandle                                LifeTimeTimerHandle;                                      // 0x0C50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TimeLastSetLifeTimeTimer;                                 // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleTime;                                             // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_LifeTimeLapsed;                                        // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerSpawnTime;                                          // 0x0C68(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C");
		return ptr;
	}


	void OnRep_ServerSpawnTime();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void SetLifeTimeTimer();
	void LifeTimeExpired();
	void BP_Cosmetic_Intro();
	void BP_Cosmetic_Idle();
	void BP_Cosmetic_RampUp();
	void BP_Cosmetic_ShouldDie();
	void ExecuteUbergraph_BP_DeimosRift_Dynamic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
