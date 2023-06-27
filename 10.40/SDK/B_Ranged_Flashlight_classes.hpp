#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x4C (0xEF0 - 0xEA4)
// BlueprintGeneratedClass B_Ranged_Flashlight.B_Ranged_Flashlight_C
class AB_Ranged_Flashlight_C : public AB_Pistol_Generic_C
{
public:
	uint8                                        Pad_406B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Flashlight_Audio_Loop;                             // 0xEB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Switch_Audio;                                      // 0xEB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LightbeamCollision;                                // 0xEC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sm_CreativeMoveTool_Lightbeam;                     // 0xEC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0xED0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Equip_Sound;                                       // 0xED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    LightFunctionMaterial;                             // 0xEE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpotlightBaseIntensity;                            // 0xEE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpotlightLowQualityIntensityScale;                 // 0xEEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Ranged_Flashlight_C");
		return Clss;
	}

	void SetMobileShadowsOff(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void InitComponents(bool CallFunc_IsDedicatedServer_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void InitLightShadowQuality(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Ranged_Flashlight(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
