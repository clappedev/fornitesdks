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

// BlueprintGeneratedClass Announce_TutorialConversation.Announce_TutorialConversation_C
// 0x0018 (0x0590 - 0x0578)
class AAnnounce_TutorialConversation_C : public AFortClientAnnouncement_TutorialConversation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0578(0x0008) (Transient, DuplicateTransient)
	TArray<struct FTutorialHighlightData>              SentencedIndexedTutorialData;                             // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_TutorialConversation.Announce_TutorialConversation_C");
		return ptr;
	}


	void HandleSentenceStop_UI(int SentenceIdx);
	void HandleSentenceStart_UI(int SentenceIdx);
	void InitAnnouncement();
	void UserConstructionScript();
	void OnClientAnnouncementStart();
	void OnSentenceStarted(struct FFortConversationSentence* Sentence, int* SentenceIndex);
	void OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex);
	void OnSentenceFinished(struct FFortConversationSentence* Sentence, int* SentenceIndex);
	void OnClientAnnouncementStop();
	void ExecuteUbergraph_Announce_TutorialConversation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
