#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0x258 - 0x238)
// WidgetBlueprintGeneratedClass AthenaSquadList.AthenaSquadList_C
class UAthenaSquadList_C : public UAthenaSquadListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UFortDynamicEntryBox*                  SquadList;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                            Sound_SquadMemberDisconnected;                     // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_LastSquadMemberDisconnected;                 // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSquadList_C");
		return Clss;
	}

	void HandleSquadMemberDisconnected(class AFortPlayerStateAthena* Player, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSquadConnectedCount_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class USoundBase* K2Node_Select_Default);
	void ClearSquadMembers();
	void RebuildSquadMembersList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void AppendSquadMember(class AFortPlayerStateAthena* PlayerState, bool CallFunc_IsMobileGame_ReturnValue, class UUserWidget* CallFunc_BP_CreateEntryOfClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaTeamMemberInfo_C* K2Node_DynamicCast_AsAthena_Team_Member_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Construct();
	void ExecuteUbergraph_AthenaSquadList(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
