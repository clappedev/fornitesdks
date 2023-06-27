#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x3C (0xBEC - 0xBB0)
// BlueprintGeneratedClass AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C
class AAbilityDecoTool_Athena_MissileBattery_Homing_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(Transient, DuplicateTransient)
	class UClass*                                NewVar_0;                                          // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                       Helper;                                            // 0xBC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HideTimerHandle;                                   // 0xBC8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             FortPawn;                                          // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_PlacementPreview_MissleBattery_Homing_C* PPMissileBatteryHoming;                            // 0xBD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AimLocation;                                       // 0xBE0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityDecoTool_Athena_MissileBattery_Homing_C");
		return Clss;
	}

	void GetAimLocFromDeco(struct FVector* AimLocation, class AB_PlacementPreview_MissleBattery_Homing_C* K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetAimLocFromPlacementPreview_AimLocation, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void HideMeshAndPlacement(bool bInHide, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
	void UserConstructionScript();
	void HideFor(float InTime);
	void BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper);
	void Show();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing(int32 EntryPoint, float K2Node_CustomEvent_InTime, class AFortDecoHelper* K2Node_Event_FortDecoHelper, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AB_PlacementPreview_MissleBattery_Homing_C* K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
