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

// BlueprintGeneratedClass GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C
// 0x0054 (0x0B3C - 0x0AE8)
class UGA_Creative_OnKillSiphon_C : public UGAT_Creative_TriggeredAbility_Pawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AAthena_GameState_C*                         GameState;                                                // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCreativeOrPlayground;                                   // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
	class UGameplayEffect*                             GE_HealPlayer;                                            // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldConvertExcessHealthToShields;                      // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	class UGameplayEffect*                             ShieldGE;                                                 // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                ConsumedCue;                                              // 0x0B18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bDebugBypasLocalMapEnable;                                // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttemptHealthRestore;                                    // 0x0B21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttemptMatsRestore;                                      // 0x0B22(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0B23(0x0001) MISSED OFFSET
	struct FName                                       NameGrantWood;                                            // 0x0B24(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NameGrantStone;                                           // 0x0B2C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NameGrantMetal;                                           // 0x0B34(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C");
		
		return ptr;
	}


	void GiveResourcesToPlayer(bool bShouldGrant, int GiveAmount, TEnumAsByte<EFortResourceType> GiveType, bool* Success);
	void CalculateResources(TEnumAsByte<EFortResourceType> ResourceGrantType, bool* bSuccess, int* ResourceToGive, TEnumAsByte<EFortResourceType>* ResourceType);
	void AttemptMats();
	void AttemptHeal();
	void SetupRestoreModes(bool* ShouldContinue);
	void DetermineHealthDelta(float HealingAmount, float* MaxHealth, float* CurrentHealth, float* HealthDelta, float* ExcessHealh);
	void AddShields(bool bShouldConvertExcessHealthToShields, float ShieldToAdd, bool* bAddedShields, float* ShieldAdded);
	void RestoreHealth(bool* Success, float* InitialHealAmount, float* ActualAppliedHeal, float* ExcessHealing);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Creative_OnKillSiphon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
