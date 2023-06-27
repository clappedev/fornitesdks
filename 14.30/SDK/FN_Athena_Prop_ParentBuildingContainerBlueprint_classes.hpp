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

// BlueprintGeneratedClass Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C
// 0x00E0 (0x0CB8 - 0x0BD8)
class AAthena_Prop_ParentBuildingContainerBlueprint_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               DebugWind;                                                // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0BE1(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  IntenseWindMaterialsForPreview;                           // 0x0BE8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0C00(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugWindYaw;                                             // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Debug_Wind_Intensity;                                     // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Max_Actor_Scale;                                      // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C21(0x0003) MISSED OFFSET
	float                                              Max_Scale;                                                // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Disable_TOD_Lights_and_Material_Emissive_Values;          // 0x0C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active;// 0x0C29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_;       // 0x0C2A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0C2B(0x0005) MISSED OFFSET
	class UStaticMesh*                                 AlternateShadowStaticMesh;                                // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Animate_Emissive_and_Lights_Over_Time;                    // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0C39(0x0007) MISSED OFFSET
	TArray<struct FLinearColor>                        CodeControlled_EmissiveColor;                             // 0x0C40(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      CodeControlled_LightConeOpacity;                          // 0x0C50(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDayPhaseFloats                             Light_Intensity_Over_Time_of_Day_;                        // 0x0C60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Day_Phase_Transition_Length;                              // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDayPhaseFloats                             Emissive_Intensity_Over_Time_of_Day;                      // 0x0C74(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volumetric_Light_Scattering_Intensity;                    // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Cast_Volumetric_Shadows;                                  // 0x0C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls;// 0x0C89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls;// 0x0C8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0C8B(0x0005) MISSED OFFSET
	class UCurveFloat*                                 LightAnimationCurve;                                      // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CodeControlled_Animation_Curve_Animation_Length;          // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CodeControlled_NumberOfMaterials;                         // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      NewVar_1;                                                 // 0x0CA0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Random_Time_Scale_Percent;                                // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CodeControlled_CurrentPlayLength;                         // 0x0CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C");
		
		return ptr;
	}


	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDayPhaseChanged(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation);
	void Loop_Animation_Curve();
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void OnSetSearched();
	void ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
