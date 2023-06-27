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

// BlueprintGeneratedClass GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C
// 0x0050 (0x0AF8 - 0x0AA8)
class UGA_WaffleTruck_TrackingPistol_Indicator_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                              HitActors;                                                // 0x0AB0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystem*                             IndicatorParticleSystem;                                  // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       IndicatorActorParamName;                                  // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       IndicatorVectorParamName;                                 // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     IndicatorGroupID;                                         // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              IndicatorDuration;                                        // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class USoundBase*                                  IndicatorSound;                                           // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C");
		
		return ptr;
	}


	TArray<class AActor*> GetHitActorsFromEventData(const struct FGameplayEventData& GameplayEventData);
	class AFortPlayerController* GetAvatarAsFortPlayerController();
	void GetAvatarAsFortPawn(class AFortPawn** AsFort_Pawn);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
