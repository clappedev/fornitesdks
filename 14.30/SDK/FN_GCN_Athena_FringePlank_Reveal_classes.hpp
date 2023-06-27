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

// BlueprintGeneratedClass GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C
// 0x0088 (0x04E8 - 0x0460)
class AGCN_Athena_FringePlank_Reveal_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SweepDuration;                                            // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FTimerHandle                                SweepDelayHandle;                                         // 0x0478(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SweepRadius;                                              // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerPawn_Athena_C*                        PlayerPawnAthena;                                         // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeSweep;                                         // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	struct FTimerHandle                                DelayBeforeSweepHandle;                                   // 0x04A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ParticleRelativeLocation;                                 // 0x04A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class USoundMix*                                   RevealSoundMix;                                           // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StencilSweepDuration;                                     // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	struct FScalableFloat                              StencilDuration;                                          // 0x04C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C");
		
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void EndSweepFX();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BeginSweepFX();
	void PlayWorldSweep();
	void ExecuteUbergraph_GCN_Athena_FringePlank_Reveal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
