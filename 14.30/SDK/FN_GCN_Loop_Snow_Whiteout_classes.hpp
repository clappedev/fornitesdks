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

// BlueprintGeneratedClass GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C
// 0x0038 (0x07F8 - 0x07C0)
class AGCN_Loop_Snow_Whiteout_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeinOut_Post_BDCA5FC943E3CD00D42B59A9A0D1C530;          // 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeinOut_Fade_BDCA5FC943E3CD00D42B59A9A0D1C530;          // 0x07D4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeinOut__Direction_BDCA5FC943E3CD00D42B59A9A0D1C530;    // 0x07D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FadeinOut;                                                // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SoundOnFadeIn;                                            // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnFadeOut;                                           // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C");
		
		return ptr;
	}


	void FadeinOut__FinishedFunc();
	void FadeinOut__UpdateFunc();
	void ReceiveDestroyed();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void ExecuteUbergraph_GCN_Loop_Snow_Whiteout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
