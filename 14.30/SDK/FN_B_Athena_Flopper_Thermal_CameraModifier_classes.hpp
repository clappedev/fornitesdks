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

// BlueprintGeneratedClass B_Athena_Flopper_Thermal_CameraModifier.B_Athena_Flopper_Thermal_CameraModifier_C
// 0x0010 (0x0058 - 0x0048)
class UB_Athena_Flopper_Thermal_CameraModifier_C : public UCameraModifier
{
public:
	TArray<struct FWeightedBlendable>                  PPMaterial;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Athena_Flopper_Thermal_CameraModifier.B_Athena_Flopper_Thermal_CameraModifier_C");
		
		return ptr;
	}


	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
