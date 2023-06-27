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

// BlueprintGeneratedClass GA_Athena_Tethered.GA_Athena_Tethered_C
// 0x0078 (0x0B20 - 0x0AA8)
class UGA_Athena_Tethered_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle                 GE_TetheredHandle;                                        // 0x0AB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             OwningFortPlayerPawn;                                     // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              maxSpeedToPlayGCN;                                        // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GCTagPlayerLand;                                          // 0x0AC4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ACC(0x0004) MISSED OFFSET
	class UGameplayEffect*                             StructureDamageGE;                                        // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                SmashGC;                                                  // 0x0AD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              BreakStructuresOnTetherEnabled;                           // 0x0AE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              BreakStructuresOnTetherRange;                             // 0x0B00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Tethered.GA_Athena_Tethered_C");
		
		return ptr;
	}


	void BreakNearbyStructures(const struct FVector& ForwardVector, float OffsetForward);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void MovementModeChangedDelegate_Event_1(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void BreakBuildingsAtPlayerInDirectionOfTether();
	void ExecuteUbergraph_GA_Athena_Tethered(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
