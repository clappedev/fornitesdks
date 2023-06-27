#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x48 (0x9C8 - 0x980)
// BlueprintGeneratedClass B_SneakySnowman_Athena.B_SneakySnowman_Athena_C
class AB_SneakySnowman_Athena_C : public AB_UtilityItem_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x980(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWorldItemDefinition*              SnowmanItemDef;                                    // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ShouldSnowmanInTurret;                             // 0x998(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFortItem*>                     SnowmanItemInstances;                              // 0x9B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_SneakySnowman_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
	void K2_OnUnEquip();
	void ExecuteUbergraph_B_SneakySnowman_Athena(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, class AFerretVehicle_C* K2Node_DynamicCast_AsFerret_Vehicle, bool K2Node_DynamicCast_bSuccess2, class AMountedTurret_C* K2Node_DynamicCast_AsMounted_Turret, bool K2Node_DynamicCast_bSuccess3, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_K2_RemoveFortItemFromPlayer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
