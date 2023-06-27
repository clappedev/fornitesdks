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

// BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C
// 0x0190 (0x0AD0 - 0x0940)
class AB_Prj_Athena_Grenade_MolotovCocktail_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                           Niagara_Projectile_Particles;                             // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Hit_Location;                                             // 0x0950(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	class USoundBase*                                  Bottle_Smash_Audio_Cue;                                   // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Ignite_Audio_Cue;                                         // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Hit_Normal;                                               // 0x0970(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             ProjectileSpawnVectors;                                   // 0x0980(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SpawnedProjectileMinSpeed;                                // 0x0990(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SpawnedProjectileMaxSpeed;                                // 0x09B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ConeHalfAngleInDegrees;                                   // 0x09D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              FireBallsToSPawn;                                         // 0x09F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CurieActivated;                                           // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	struct FScalableFloat                              DoWeUseHomingProjectile;                                  // 0x0A18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ReflectionVector;                                         // 0x0A38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireflyProjectileAngleExtreme;                            // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FireflyProjectileDirection;                               // 0x0A48(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireflyProjectileRadius_Min;                              // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireflyProjectileRadius_Max;                              // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FireflyProjectileEndPoint;                                // 0x0A5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumProjectileSpawned;                                     // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumProjectilesToSpawn;                                    // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewTemp;                                                  // 0x0A70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnteredWater;                                             // 0x0A7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Hit;                                                      // 0x0A7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0A7E(0x0002) MISSED OFFSET
	class UFXSystemAsset*                              Sound_EnterWater;                                         // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemToSpawn_Molotov;                                      // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanInteractWithWater;                                     // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0A91(0x000F) MISSED OFFSET
	struct FTransform                                  SpawnBGATransform;                                        // 0x0AA0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C");
		
		return ptr;
	}


	void FireflyProjectileLogic();
	void Drunk_Projectiles();
	void OnCurieActive_7575DCC3440AA42836D7988BCA6485E5();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void HasEnteredWater();
	void Defer_BGA_Spawn();
	void ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
