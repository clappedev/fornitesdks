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

// BlueprintGeneratedClass GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C
// 0x0044 (0x0EA8 - 0x0E64)
class UGA_Athena_SuperTowerGrenadeWithTrajectory_C : public UGA_Athena_UtilityGrenade_WithTrajectory_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E64(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ProjectileTrajectory_C*                  ProjectileTrajectoryRed;                                  // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TrajectoryIndicatorRedClass;                              // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestItemUsePortafort;                                    // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       T_TargetTags;                                             // 0x0E88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C");
		
		return ptr;
	}


	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	void SetupDummyProjectileRed();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void UpdateTrajectorySpline();
	void CleanupTrajectoryDisplay();
	void ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
