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

// BlueprintGeneratedClass B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C
// 0x0201 (0x0A79 - 0x0878)
class AB_Prj_Ranged_Rocket_Athena_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SurfaceTypeSoundComponent_C*             BP_SurfaceTypeSoundComponent;                             // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Rocket_AudioComponent;                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PP_Explode;                                               // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PPFader_PPFade_6840155342A20C80B8C71EB25DE77BD9;          // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PPFader__Direction_6840155342A20C80B8C71EB25DE77BD9;      // 0x08AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PPFader;                                                  // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Ribbon_Trail_PSC;                                         // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Water_Explosion_PSC;                                      // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Ribbon_Trail_PS;                                          // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Water_Explosion_PS;                                       // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_Generic_PSC;                                    // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Rocket_Projectile_Explosion_Sound;                        // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StopLocation;                                             // 0x08E8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectsToTraceAgainst;                                    // 0x08F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             Explosion_Flesh_Damage_PS;                                // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StopRotZ;                                                 // 0x0910(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailLifetime;                                            // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_Flesh_Damage_PSC;                               // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Rocket_Projectile_Explosion_Water_Sound;                  // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Rocket_Projectile_InAir_Sound;                            // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RocketTrailPS;                                            // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Tick_Delta;                                               // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RocketSpinRate;                                           // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Explosion_Impact_Offset;                                  // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RocketSpin;                                               // 0x094C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RocketScale;                                              // 0x0958(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimerMaxReached_;                                         // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	class UMaterialInterface*                          Ground_Decal;                                             // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Ground_Decal_MID;                                         // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Decal_Size_Max;                                           // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Decal_Size_Min;                                           // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DecalLocation;                                            // 0x0980(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x098C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x098D(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    Explosion_PS;                                             // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                FeedbackCue;                                              // 0x0998(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              WaterInteractionDelay;                                    // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	class UNiagaraComponent*                           RocketTrailPS_Niagara;                                    // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFXSystemComponent*                          Grenade_Explosion_FX_System;                              // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FFortPortableSoftParticles                  Grenade_Explosion_Asset;                                  // 0x09B8(0x0058) (Edit, BlueprintVisible)
	class UFXSystemAsset*                              Explosion_Asset;                                          // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortPortableSoftParticles                  Rocket_Trail_Asset;                                       // 0x0A18(0x0058) (Edit, BlueprintVisible)
	class UFXSystemAsset*                              Rocket_Trial_Asset;                                       // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNiagaraEnabled;                                         // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void PPFader__FinishedFunc();
	void PPFader__UpdateFunc();
	void OnBounce(const struct FHitResult& Hit);
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void FuseTimerMax();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void RocketWaterDelay();
	void ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
