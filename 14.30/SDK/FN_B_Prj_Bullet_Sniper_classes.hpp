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

// BlueprintGeneratedClass B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C
// 0x0121 (0x0AC1 - 0x09A0)
class AB_Prj_Bullet_Sniper_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        TracerMesh;                                               // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Sniper_Bullet_Trail;                                    // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Sniper_Rifle_SurfaceImpactSound;                          // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sniper_Rifle_PlayerImpactSound;                           // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DecalSize;                                                // 0x09C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	struct FScalableFloat                              ProjectileGravityScale;                                   // 0x09D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             WaterImpactFX;                                            // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  WaterHit;                                                 // 0x0A00(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A8C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           WaterHitMat;                                              // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterDepthTrace;                                          // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WaterIndexTrace;                                          // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceImpactLocation;                                      // 0x0AA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceImpactNormal;                                        // 0x0AAC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sniper_Rifle_WaterImpactSound;                            // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPlayedWaterSound;                                     // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C");
		
		return ptr;
	}


	void PlayImpactSFX(bool IsPlayer, bool IsWater);
	void UserConstructionScript();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void OnSniperTraceWaterHit(const struct FHitResult& WaterHit, class AFortWaterBodyActor* WaterBody);
	void ExecuteUbergraph_B_Prj_Bullet_Sniper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
