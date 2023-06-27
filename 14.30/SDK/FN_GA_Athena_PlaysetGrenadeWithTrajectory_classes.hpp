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

// BlueprintGeneratedClass GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C
// 0x0026 (0x0E8A - 0x0E64)
class UGA_Athena_PlaysetGrenadeWithTrajectory_C : public UGA_Athena_UtilityGrenade_WithTrajectory_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E64(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ProjectileTrajectory_C*                  ProjectileTrajectoryRed;                                  // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      RedIndicatorClass;                                        // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortPlaysetItemDefinition*                  DefaultPlayset;                                           // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldNotThrow;                                          // 0x0E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanConsume;                                               // 0x0E89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C");
		
		return ptr;
	}


	void DestroyProjectileTrajectory();
	void CalculateRotation(class UFortPlaysetItemDefinition* Playset, const struct FRotator& Rotation, struct FRotator* NewRotation);
	void SetActivePlaysetOnPlayer();
	void SetPlaysetData(class AFortProjectileBase* Projectile_Reference);
	void GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData);
	void SetupDummyProjectileRed();
	void UpdateTrajectorySpline();
	void K2_ActivateAbility();
	void CleanupTrajectoryDisplay();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void InitTrajectoryVariables();
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void OnAbilityInputReleased();
	void ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
