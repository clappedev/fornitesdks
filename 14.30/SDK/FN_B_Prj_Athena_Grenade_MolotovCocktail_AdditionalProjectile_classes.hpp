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

// BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C
// 0x0039 (0x08B1 - 0x0878)
class AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C : public AFortProjectile_DrunkHoming
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             FireflyProjectileAudio;                                   // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           Fire_Trail_Niagara;                                       // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Fire_Plane_Spawn_Offset;                                  // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoesMeshAngleNeedAdjusted;                                // 0x0894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	class ABuildingGameplayActor*                      BGAToSpawn;                                               // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasHit;                                                   // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound_Explode;                                            // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHomingToGround;                                         // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C");
		
		return ptr;
	}


	struct FTransform Find_Mesh_Angle(const struct FVector& HitLoc, const struct FVector& HitNotmal);
	void Landed_In_Water();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void HasNotLandedFadeOut();
	void BeginDrunkenMovement();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void ReceiveBeginPlay();
	void PlayClientFX(const struct FVector& HitLocationData);
	void ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
