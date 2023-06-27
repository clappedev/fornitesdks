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

// BlueprintGeneratedClass GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C
// 0x0054 (0x0AFC - 0x0AA8)
class UGA_Athena_ZipLine_Smash_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateIntervalForSmashVolume;                             // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ABC(0x0004) MISSED OFFSET
	class UGameplayEffect*                             StructureDamageGE;                                        // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_ZipLine_Athena_Harness_C*                ZiplineHarness;                                           // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Athena_Environmental_ZipLine_C*          Zipline;                                                  // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortCustomMovement>                   DrivingCustomMovementMode;                                // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AD9(0x0003) MISSED OFFSET
	struct FActiveGameplayEffectHandle                 FallImmunityGEFX;                                         // 0x0ADC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                AttachVFXCue;                                             // 0x0AE4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                SmashCue;                                                 // 0x0AEC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Swimming;                                               // 0x0AF4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C");
		
		return ptr;
	}


	void CheckForQuestProgress();
	void CheckMotor();
	void SpawnMotor(class AActor* PlayerPawn);
	void BreakNearbyStructures(class AFortPlayerPawn* PlayerPawn);
	void Added_98DA090E476D590C00C74EAC10378F60();
	void Added_57667DA14EF15649A9E09AA4184D83F2();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnPawnLanded_Bind(const struct FHitResult& Hit);
	void HandleZiplineStateChanged(bool bIsZiplining);
	void RemoveFallDamageImmunity();
	void SurroundingsCheck();
	void OnEnterVehicle_Bind();
	void ZipliningComplete();
	void OnPawnDied_Bind(class AActor* NewParam, float NewParam2, class AController* NewParam3, class AActor* NewParam4, const struct FVector& NewParam5, class UPrimitiveComponent* NewParam6, const struct FName& NewParam7, const struct FVector& NewParam8);
	void OnEnteredAircraft_Bind();
	void OnBeginSkydiving_Bind();
	void DelaySpawnMotor();
	void BindEvent();
	void SwimmingStarted();
	void EnterWaterExit(class AFortPlayerPawn* FortPlayerPawn);
	void ExecuteUbergraph_GA_Athena_ZipLine_Smash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
