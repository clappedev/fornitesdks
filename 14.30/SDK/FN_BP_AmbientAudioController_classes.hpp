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

// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
// 0x0068 (0x0148 - 0x00E0)
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AmbientMixA;                                              // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientMixB;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CheckFrequency;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInsidePrevious;                                        // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInsideCurrent;                                         // 0x00FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00FE(0x0002) MISSED OFFSET
	class UAudioComponent*                             AmbientMixIndoor;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TargetLPFFreq;                                            // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLPFFreq;                                           // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InsideLPFFreq;                                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutsideLPFFreq;                                           // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMPCValueInterp;                                    // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAboveSnowAltitude;                                       // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	class UFortPOIAmbientAudioBank*                    WinterAudioBank;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSnowAltitudeEnabled;                                     // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	class UFortPOIAmbientAudioBank*                    StormAudioBank;                                           // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                AmbientAudioInsideTag;                                    // 0x0138(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAmbientAudioDataAsset*                      CurieAudioBank;                                           // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C");
		
		return ptr;
	}


	void UpdateSnowSetupBP();
	void SetTargetLPFFreq(float Target);
	bool Trace(const struct FVector& Start, const struct FVector& Direction);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnCheckIfSurrounded();
	void Evaluate_Inside_State();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AmbientAudioController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
