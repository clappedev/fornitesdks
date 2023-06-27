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

// BlueprintGeneratedClass BP_Curie_ElectricNova.BP_Curie_ElectricNova_C
// 0x0028 (0x07F0 - 0x07C8)
class ABP_Curie_ElectricNova_C : public AFortCurieBGA
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SphereMesh;                                               // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionSphere;                                          // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleTimeline_ScaleTrack_C9C511AD493AB90E4BB0A8861498D9AE;// 0x07E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleTimeline__Direction_C9C511AD493AB90E4BB0A8861498D9AE;// 0x07E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleTimeline;                                            // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Curie_ElectricNova.BP_Curie_ElectricNova_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void ScaleTimeline__FinishedFunc();
	void ScaleTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_BP_Curie_ElectricNova(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
