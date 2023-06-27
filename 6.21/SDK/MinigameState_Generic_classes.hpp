#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x14 (0x504 - 0x4F0)
// BlueprintGeneratedClass MinigameState_Generic.MinigameState_Generic_C
class AMinigameState_Generic_C : public AFortMinigameState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       Music_Loop;                                        // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TimeLimit;                                         // 0x500(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameState_Generic_C");
		return Clss;
	}

	void UserConstructionScript();
	void On_Player_Added(class APlayerState* PlayerState);
	void On_Player_Removed(class APlayerState* PlayerState);
	void ReceiveBeginPlay();
	void HandleMinigameStateChanged();
	void ExecuteUbergraph_MinigameState_Generic(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable, class APlayerState* K2Node_CustomEvent_PlayerState1, class APlayerState* K2Node_CustomEvent_PlayerState, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue1, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue1, TArray<class AFortPlayerState*>& CallFunc_GetPlayerStatesInMinigame_PlayerStates, bool CallFunc_GetPlayerStatesInMinigame_ReturnValue, bool CallFunc_IsMinigameInProgress_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsMinigameInProgress_ReturnValue1, int32 Temp_int_Array_Index_Variable1, class AFortPlayerState* CallFunc_Array_Get_Item, TArray<class AFortPlayerState*>& CallFunc_GetPlayerStatesInMinigame_PlayerStates1, bool CallFunc_GetPlayerStatesInMinigame_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue1, class AFortPlayerState* CallFunc_Array_Get_Item1, bool CallFunc_Less_IntInt_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
