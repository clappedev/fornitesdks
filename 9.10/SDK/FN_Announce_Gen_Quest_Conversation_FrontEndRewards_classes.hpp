#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C
// 0x0028 (0x0348 - 0x0320)
class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnNewSentence
	unsigned char                                      UnknownData01[0x10];                                      // 0x0338(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnCurrentConversationFinished

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C");
		return ptr;
	}


	void StopCurrentConversation();
	void PlayCurrentConversation();
	void OnConversationFinished(struct FFortConversationSentence FinishingSentence, int FinishingSentenceSentenceIndex);
	void OnSentenceStarted(struct FFortConversationSentence Sentence, int SentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int EntryPoint);
	void OnCurrentConversationFinished__DelegateSignature();
	void OnNewSentence__DelegateSignature(struct FFortConversationSentence Sentence);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
