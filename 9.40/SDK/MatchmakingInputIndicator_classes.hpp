#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x280 - 0x268)
// WidgetBlueprintGeneratedClass MatchmakingInputIndicator.MatchmakingInputIndicator_C
class UMatchmakingInputIndicator_C : public UMatchmakingInputIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                InputIcon;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGameData*                       AthenaGameData;                                    // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MatchmakingInputIndicator_C");
		return Clss;
	}

	void OnInputSourceTypeChanged(enum class ECommonInputType InputType);
	void ExecuteUbergraph_MatchmakingInputIndicator(int32 EntryPoint, enum class ECommonInputType K2Node_Event_InputType, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
