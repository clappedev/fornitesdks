#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xBC0 - 0xBB0)
// WidgetBlueprintGeneratedClass ComOption.ComOption_C
class UComOption_C : public UFortCommunityVotingOption
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Overlay_ComOptionButtonsContainer;                 // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComOption_C");
		return Clss;
	}

	void DisableButtons();
	void EnableButtons();
	void ExecuteUbergraph_ComOption(int32 EntryPoint, class UComOptionDetails_C* K2Node_DynamicCast_AsCom_Option_Details, bool K2Node_DynamicCast_bSuccess, class UComOptionDetails_C* K2Node_DynamicCast_AsCom_Option_Details_1, bool K2Node_DynamicCast_bSuccess_1, class UComOptionVote_C* K2Node_DynamicCast_AsCom_Option_Vote, bool K2Node_DynamicCast_bSuccess_2, class UFlameCounter_C* K2Node_DynamicCast_AsFlame_Counter, bool K2Node_DynamicCast_bSuccess_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UComOptionVote_C* K2Node_DynamicCast_AsCom_Option_Vote_1, bool K2Node_DynamicCast_bSuccess_4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
