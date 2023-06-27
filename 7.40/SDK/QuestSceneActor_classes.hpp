#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x21 (0x351 - 0x330)
// BlueprintGeneratedClass QuestSceneActor.QuestSceneActor_C
class AQuestSceneActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              Quest_to_Show;                                     // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowOnQuestComplete;                               // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestSceneActor_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera);
	void ExecuteUbergraph_QuestSceneActor(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
