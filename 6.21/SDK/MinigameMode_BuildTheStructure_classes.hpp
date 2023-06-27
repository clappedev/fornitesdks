#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xC (0x434 - 0x428)
// BlueprintGeneratedClass MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C
class AMinigameMode_BuildTheStructure_C : public AFortMinigameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(Transient, DuplicateTransient)
	int32                                        AmmountOfWood;                                     // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameMode_BuildTheStructure_C");
		return Clss;
	}

	void GiveWood(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayspaceManager* CallFunc_GetPlayspaceManager_OutPlayspaceManager, enum class EValidityResult CallFunc_GetPlayspaceManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AController*>& CallFunc_GetAllPlayersInPlayspace_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue);
	void UserConstructionScript();
	void K2_PreGameTransitionEvent();
	void ExecuteUbergraph_MinigameMode_BuildTheStructure(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
