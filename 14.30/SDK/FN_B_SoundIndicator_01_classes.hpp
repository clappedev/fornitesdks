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

// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
// 0x03E4 (0x0774 - 0x0390)
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Long_Range;                               // 0x0398(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Chest_Falloff;                                            // 0x0420(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Footsteps_Falloff;                                        // 0x04A8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Mid_Range;                                // 0x0530(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Melee;                                    // 0x05B8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OppositeFacingGunshotStrength;                            // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentNear;                                // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardFacingGunshotStrength;                             // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentFar;                                 // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceDivisor;                                          // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Glider_Falloff;                                           // 0x0658(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Plane_Falloff;                                            // 0x06E0(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     DefaultIconLocation;                                      // 0x0768(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C");
		
		return ptr;
	}


	struct FRuntimeFloatCurve GetStrengthCurveForActiveType();
	struct FLinearColor GetDefaultTint();
	class UTexture* GetDefaultIcon();
	struct FRuntimeFloatCurve GetWeaponCurve();
	void ExecuteUbergraph_B_SoundIndicator_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
