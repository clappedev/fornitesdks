#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x68 (0x2E0 - 0x278)
// WidgetBlueprintGeneratedClass VoteResultNotificationWidget.VoteResultNotificationWidget_C
class UVoteResultNotificationWidget_C : public UFortMissionVoteHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      HideWidget;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowWidget;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageVoteResult;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ParentBorder;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VoteResultImage;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VoteResultText;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VoteTypeImage;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsVoteActive;                                      // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortVoteType                     ActiveVoteType;                                    // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50CC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            VoteSucceededSound;                                // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VoteFailedSound;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture*>                      DifficultyImageList;                               // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoteResultNotificationWidget_C");
		return Clss;
	}

	void IsSinglePlayerVote(enum class EFortVoteType VoteType, bool* Success, bool CallFunc_IsMultiplayerVote_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Initialize(enum class EFortVoteType VoteType, enum class EFortVoteArbitratorType ArbitratorType, bool VoteSucceeded, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, bool Temp_bool_Variable2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, enum class EFortVoteType Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable2, class UMaterialInterface* Temp_object_Variable3, class UMaterialInterface* Temp_object_Variable4, class UMaterialInterface* Temp_object_Variable5, bool Temp_bool_Variable3, class UTexture2D* Temp_object_Variable6, class UTexture2D* Temp_object_Variable7, bool Temp_bool_Variable4, class FText Temp_text_Variable4, class FText Temp_text_Variable5, enum class EFortVoteType Temp_byte_Variable1, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, bool CallFunc_IsSinglePlayerVote_Success, class UMaterialInterface* K2Node_Select_Default, class FText K2Node_Select1_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FLinearColor& K2Node_Select2_Default, class UTexture2D* K2Node_Select3_Default, enum class EFortVoteType Temp_byte_Variable2, class FText K2Node_Select4_Default, class UMaterialInterface* K2Node_Select5_Default, class FText K2Node_Select6_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select7_Default);
	void Construct();
	void HandleShowWidgetAnimFinished();
	void OnVoteStarted(enum class EFortVoteType VoteType, enum class EFortVoteArbitratorType ArbitratorType, int32 YesVoteCount, int32 NoVoteCount);
	void OnVoteEnded(enum class EFortVoteType VoteType, enum class EFortVoteArbitratorType ArbitratorType, bool VoteSucceeded);
	void ExecuteUbergraph_VoteResultNotificationWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class EFortVoteType K2Node_Event_VoteType1, enum class EFortVoteArbitratorType K2Node_Event_ArbitratorType1, int32 K2Node_Event_YesVoteCount, int32 K2Node_Event_NoVoteCount, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, enum class EFortVoteType K2Node_Event_VoteType, enum class EFortVoteArbitratorType K2Node_Event_ArbitratorType, bool K2Node_Event_VoteSucceeded, int32 CallFunc_GetNumAllowedDifficultyIncreases_ReturnValue, class USoundBase* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetDifficultyIncreaseRewardsTier_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UTexture* CallFunc_Array_Get_Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
