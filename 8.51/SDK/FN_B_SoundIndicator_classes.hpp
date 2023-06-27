#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_SoundIndicator.B_SoundIndicator
// 0x03E0 (0x0740 - 0x0360)
class AB_SoundIndicator : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Chest;                                                    // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FootstepsOrGlider;                                        // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Gunshot;                                                  // 0x036A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Plane;                                                    // 0x036B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Generic;                                                  // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Long_Range;                               // 0x0370(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Chest_Falloff;                                            // 0x03F8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Footsteps_Falloff;                                        // 0x0480(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Mid_Range;                                // 0x0508(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Melee;                                    // 0x0590(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OppositeFacingGunshotStrength;                            // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentNear;                                // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardFacingGunshotStrength;                             // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentFar;                                 // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceDivisor;                                          // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Glider_Falloff;                                           // 0x0630(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Plane_Falloff;                                            // 0x06B8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_SoundIndicator.B_SoundIndicator");
		return ptr;
	}


	void CalculateFiringAngle(float* DotResult);
	struct FRuntimeFloatCurve GetWeaponCurve();
	void UpdateEmitterStates();
	void ReceiveBeginPlay();
	void OnEffectActivated();
	void ExecuteUbergraph_B_SoundIndicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
