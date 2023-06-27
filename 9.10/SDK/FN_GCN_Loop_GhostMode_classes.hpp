#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCN_Loop_GhostMode.GCN_Loop_GhostMode_C
// 0x0051 (0x07E1 - 0x0790)
class AGCN_Loop_GhostMode_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E;    // 0x0798(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E;// 0x079C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x079D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeMaterialsTL;                                          // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  PawnMaterials;                                            // 0x07A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                HitGlowColor;                                             // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HotGlowOuterColor;                                        // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitGlowFresnelBrightness;                                 // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitGlowFresnelExponent;                                   // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Phased;                                                // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_GhostMode.GCN_Loop_GhostMode_C");
		return ptr;
	}


	void GetCharacterPartTypeMaterials(class AFortPlayerPawn* Fort_Player_Pawn, TEnumAsByte<EFortCustomPartType> PartType);
	void FadeMaterialsTL__FinishedFunc();
	void FadeMaterialsTL__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void FadeMaterialsIn();
	void FadeMaterialsOut();
	void ExecuteUbergraph_GCN_Loop_GhostMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
