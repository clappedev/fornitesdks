#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C
// 0x0008 (0x0430 - 0x0428)
class AAnnounce_Gen_Quest_Conversation_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
