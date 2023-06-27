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

// BlueprintGeneratedClass GCN_Loop_GhostMode.GCN_Loop_GhostMode_C
// 0x0050 (0x0810 - 0x07C0)
class AGCN_Loop_GhostMode_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E;    // 0x07C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E;// 0x07CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeMaterialsTL;                                          // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                HitGlowColor;                                             // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HotGlowOuterColor;                                        // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitGlowFresnelBrightness;                                 // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitGlowFresnelExponent;                                   // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerPawn_Athena_C*                        Target_Player;                                            // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Glow__;                                                   // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Glow_Priority;                                            // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_GhostMode.GCN_Loop_GhostMode_C");
		
		return ptr;
	}


	void Highlight_Lerp(float Alpha, struct FPawnHighlight* Highlight);
	void FadeMaterialsTL__FinishedFunc();
	void FadeMaterialsTL__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void FadeMaterialsIn();
	void FadeMaterialsOut();
	void ExecuteUbergraph_GCN_Loop_GhostMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
