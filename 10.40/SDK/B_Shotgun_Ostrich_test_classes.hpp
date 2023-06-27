#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x40 (0xEE0 - 0xEA0)
// BlueprintGeneratedClass B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C
class AB_Shotgun_Ostrich_test_C : public AFortWeaponRanged_Ostrich
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                            Sound_Equip;                                       // 0xEA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_LoadMissile;                                 // 0xEB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_UnEquip;                                     // 0xEB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_RocketFire;                                  // 0xEC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  RocketFireForceFeedback;                           // 0xEC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  RocketLoadForceFeedback;                           // 0xED0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ShotgunFireForceFeedback;                          // 0xED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Shotgun_Ostrich_test_C");
		return Clss;
	}

	void OnLoadedRockets(int32 NumRocketsLoaded);
	void OnRocketFired(class USceneComponent* AttachToMesh, class FName AttachToSocket);
	void OnRocketLauncherSettle(class USceneComponent* AttachToMesh, class FName AttachToSocket);
	void OnRocketFiringStarted(class USceneComponent* AttachToMesh, class FName AttachToSocket);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ExecuteUbergraph_B_Shotgun_Ostrich_test(int32 EntryPoint, int32 K2Node_Event_NumRocketsLoaded, class USceneComponent* K2Node_Event_AttachToMesh_2, class FName K2Node_Event_AttachToSocket_2, float CallFunc_Conv_IntToFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class USceneComponent* K2Node_Event_AttachToMesh_1, class FName K2Node_Event_AttachToSocket_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class USceneComponent* K2Node_Event_AttachToMesh, class FName K2Node_Event_AttachToSocket, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeUnclamped_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
