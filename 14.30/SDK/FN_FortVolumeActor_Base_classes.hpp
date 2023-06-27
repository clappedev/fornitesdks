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

// BlueprintGeneratedClass FortVolumeActor_Base.FortVolumeActor_Base_C
// 0x0030 (0x0658 - 0x0628)
class AFortVolumeActor_Base_C : public AFortVolume
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0628(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UComplexPawnOverlapComponent*                BoundsMeshComponent;                                      // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TransitionTL_Fade_DD1C029E4A879F5D954A60A7D9770B8A;       // 0x0638(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TransitionTL__Direction_DD1C029E4A879F5D954A60A7D9770B8A; // 0x063C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TransitionTL;                                             // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BoundsMeshMID;                                            // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BoundsMeshSourceMaterial;                                 // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FortVolumeActor_Base.FortVolumeActor_Base_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void TransitionTL__FinishedFunc();
	void TransitionTL__UpdateFunc();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects_2(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_FortVolumeActor_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
