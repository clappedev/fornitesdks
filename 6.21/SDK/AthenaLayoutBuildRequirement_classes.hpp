#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0xCB0 - 0xC90)
// BlueprintGeneratedClass AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C
class AAthenaLayoutBuildRequirement_C : public ABuildingLayoutRequirement
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC90(0x8)(Transient, DuplicateTransient)
	class UFortMinigameProgressComponent*        FortMinigameProgress;                              // 0xC98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bLayoutSatisfied;                                  // 0xCA0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bInitiallyActive;                                  // 0xCA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingSMActor*                      OccupyingBuildingActor;                            // 0xCA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLayoutBuildRequirement_C");
		return Clss;
	}

	void KillOccupyingBuilding(bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void Event_OnLayoutSatisfied(class ABuildingLayoutRequirement* LayoutRequirement, class ABuildingSMActor* SatisfyingBuildingSMActor);
	void Event_OnLayoutUnSatisfied(class ABuildingLayoutRequirement* LayoutRequirement, class ABuildingSMActor* SatisfyingBuildingSMActor);
	void ReceiveBeginPlay();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_3_SimpleDynamicMulticastDelegate__DelegateSignature();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_OnResetMinigameComponent__DelegateSignature(class UFortMinigameLogicComponent* MinigameComponent);
	void ExecuteUbergraph_AthenaLayoutBuildRequirement(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_HasAuthority_ReturnValue, class ABuildingLayoutRequirement* K2Node_CustomEvent_LayoutRequirement1, class ABuildingSMActor* K2Node_CustomEvent_SatisfyingBuildingSMActor1, class ABuildingLayoutRequirement* K2Node_CustomEvent_LayoutRequirement, class ABuildingSMActor* K2Node_CustomEvent_SatisfyingBuildingSMActor, bool CallFunc_HasAuthority_ReturnValue1, class AFortPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UFortMinigameLogicComponent* K2Node_ComponentBoundEvent_MinigameComponent, bool CallFunc_HasAuthority_ReturnValue2, class AFortPlayerState* CallFunc_GetOwningPlayerState_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
