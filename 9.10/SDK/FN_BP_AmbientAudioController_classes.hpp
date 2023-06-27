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

// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
// 0x0040 (0x01B8 - 0x0178)
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AmbientMixA;                                              // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientMixB;                                              // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Loop_Indoors;                                             // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheckFrequency;                                           // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInsidePrevious;                                        // 0x019C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInsideCurrent;                                         // 0x019D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x019E(0x0002) MISSED OFFSET
	class UAudioComponent*                             AmbientMixIndoor;                                         // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TargetLPFFreq;                                            // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLPFFreq;                                           // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InsideLPFFreq;                                            // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutsideLPFFreq;                                           // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C");
		return ptr;
	}


	void SetTargetLPFFreq(float Target);
	void SetIndoorMixEnabled(bool Enabled);
	bool Trace(struct FVector Start, struct FVector Direction);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnCheckIfSurrounded();
	void Evaluate_Inside_State();
	void ReceiveTick(float DeltaSeconds);
	void On_Game_Phase_Change(EAthenaGamePhase GamePhase);
	void On_Game_Phase_Step_Change(EAthenaGamePhaseStep GamePhaseStep);
	void Set_Storm_Amb_Layer_Enabled(bool Enabled);
	void ExecuteUbergraph_BP_AmbientAudioController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
