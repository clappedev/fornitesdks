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

// BlueprintGeneratedClass GCN_Athena_LowGravity.GCN_Athena_LowGravity_C
// 0x004C (0x0364 - 0x0318)
class AGCN_Athena_LowGravity_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      MyTargetCached;                                           // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpDelta;                                              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDelta;                                              // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    LowGravityPSComponent;                                    // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                ExpireTellDelayTimer;                                     // 0x0340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Duration;                                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationTellDuration;                                   // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTime;                                                // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationSoundPeriod;                                    // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ExpirationSoundTimer;                                     // 0x0358(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxDrawDistance;                                          // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_LowGravity.GCN_Athena_LowGravity_C");
		
		return ptr;
	}


	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void Activated(class AActor* PlayerPawn);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void ExpireTell();
	void ClearExpireTell();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void PlayExpirationSound();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCN_Athena_LowGravity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
