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

// BlueprintGeneratedClass WeakSpot.WeakSpot_C
// 0x0098 (0x0300 - 0x0268)
class AWeakSpot_C : public ABuildingWeakSpot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ConnectTheDotsComponent;                                  // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComponent;                                        // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E;// 0x0288(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E;// 0x028C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleDownParticleTL;                                      // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SpawnSound;                                               // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Particle_Location;                                        // 0x02A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	TArray<class USoundBase*>                          Crack_sounds;                                             // 0x02B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ConnectTheDotsWidth;                                      // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsDuration;                                   // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsTimeoutFromPreviousHit;                     // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsDurationScale;                              // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsMaxDuration;                                // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsTileScale;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsMinLength;                                  // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConnectTheDotsMaxLength;                                  // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DamageTemplate;                                           // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             IdleTemplate;                                             // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ConnectMID;                                               // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HideMeshTimer;                                            // 0x02F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeakSpot.WeakSpot_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void ScaleDownParticleTL__FinishedFunc();
	void ScaleDownParticleTL__UpdateFunc();
	void OnHit();
	void HideMesh();
	void OnFadeOut();
	void OnStartDirectionEffect();
	void ExecuteUbergraph_WeakSpot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
