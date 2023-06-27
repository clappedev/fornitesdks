#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x28 (0x260 - 0x238)
// WidgetBlueprintGeneratedClass FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C
class UFrontEndRewards_Conversation_VO_C : public UFortRewardConversationWidget
{
public:
	struct FDataTableRowHandle                   ReplayAction;                                      // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortConversation*                     Conversation;                                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        QuestItemRef;                                      // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* ConversationActor;                                 // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEndRewards_Conversation_VO_C");
		return Clss;
	}

	void CreateConversationActor(class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C** NewAnnoucement, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* CallFunc_FinishSpawningActor_ReturnValue);
	void PlayConversation(class UFortQuestItem* QuestItem, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidConversation_ReturnValue, class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* CallFunc_CreateConversationActor_NewAnnoucement);
	void HandleConversationFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HandleNewSentence(const struct FFortConversationSentence& Sentence, class FText CallFunc_GetDataFromSentence_Text, class UTexture2D* CallFunc_GetDataFromSentence_TalkingHeadTexture);
	void StopConversation();
	void HandleReplayAction(bool* Committed, bool CallFunc_IsValid_ReturnValue);
	void PopulateFromConversation(class UFortConversation* Conversation, bool CallFunc_IsValidConversation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
