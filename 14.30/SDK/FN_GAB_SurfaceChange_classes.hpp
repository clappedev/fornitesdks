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

// BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C
// 0x01C8 (0x0C70 - 0x0AA8)
class UGAB_SurfaceChange_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Debug;                                                    // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AB1(0x0007) MISSED OFFSET
	struct FScalableFloat                              RemovalDelay;                                             // 0x0AB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              IcySurfacesEnabled;                                       // 0x0AD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       HasIce;                                                   // 0x0AF8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_SurfaceChange_Ice;                                     // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_SurfaceChange_Snow;                                    // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_SurfaceChange_Lava;                                    // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       IceTags;                                                  // 0x0B38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       LavaTags;                                                 // 0x0B58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       SnowTags;                                                 // 0x0B78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LavaBounceMultiplier;                                     // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomAngleOffset;                                        // 0x0B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              RandomConeAngle;                                          // 0x0BA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              FacingAngleVelocityComponent;                             // 0x0BC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              BaseVerticalBounceVelocity;                               // 0x0BE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              BaseLateralBounceVelocity;                                // 0x0C00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MaxBounceMultiplier;                                      // 0x0C20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              BounceMultiplierStepAmount;                               // 0x0C40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                               RandomAngleStream;                                        // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTag                                LavaBounceCue;                                            // 0x0C68(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C");
		
		return ptr;
	}


	void OnRep_ReplicatedRandomAngle();
	void SurfaceCleanup(bool AddLingeringEffects, TEnumAsByte<EPhysicalSurface> SurfaceType);
	void LavaBounce();
	void HotfixableGEApplication(const struct FScalableFloat& Input, class UGameplayEffect* GameplayEffectAppliedOnTrue, class UGameplayEffect* GameplayEffectAppliedOnFalse);
	void SurfaceCleanupSpecial();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void MovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void ExecuteUbergraph_GAB_SurfaceChange(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
