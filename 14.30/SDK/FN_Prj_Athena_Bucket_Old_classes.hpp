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

// BlueprintGeneratedClass Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C
// 0x003C (0x0950 - 0x0914)
class APrj_Athena_Bucket_Old_C : public AB_Prj_ThrownConsumable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0914(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0918(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortWorldItemDefinition*                    ItemToSpawn;                                              // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnOffFX;                                                // 0x0928(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0929(0x0007) MISSED OFFSET
	class USoundBase*                                  HitMarkerSound;                                           // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ThrowIndicator_SoundRef;                                  // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldSpawnItem;                                          // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	class USoundBase*                                  Splash_Sound_1;                                           // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C");
		
		return ptr;
	}


	void OnRep_TurnOffFX();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void PlayHitSound();
	void ReceiveBeginPlay();
	void Held_Water_Impact();
	void ExecuteUbergraph_Prj_Athena_Bucket_Old(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
