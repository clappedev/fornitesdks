#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCNL_GM_Fury.GCNL_GM_Fury_C
// 0x00B0 (0x0540 - 0x0490)
class AGCNL_GM_Fury_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    FuryPS;                                                   // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FLinearColor>            VectorParameters;                                         // 0x04A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, float>                          ScalarParameters;                                         // 0x04F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_GM_Fury.GCNL_GM_Fury_C");
		return ptr;
	}


	void DisableFuryPS();
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void BindOnDied(class AEnemyPawn_Parent_C* EnemyPawnParentReference);
	void OnEnemyDeath(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser);
	void ExecuteUbergraph_GCNL_GM_Fury(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
