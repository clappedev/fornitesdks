#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x220 - 0x210)
// WidgetBlueprintGeneratedClass AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C
class UAthenaBroadcastScoreboardListView_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UCommonListView*                       List;                                              // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaBroadcastScoreboardListView_C");
		return Clss;
	}

	void ResetFocus(class UAthenaSpectatorScoreboardRowData* RowToSelect, class UCommonInputContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetIndexForItem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_SelectInt_ReturnValue);
	void BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void ExecuteUbergraph_AthenaBroadcastScoreboardListView(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
