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

// BlueprintGeneratedClass Announce_EventCine.Announce_EventCine_C
// 0x0028 (0x0400 - 0x03D8)
class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                EventMediaSource;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowSkipping;                                            // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortUIState                                       StartingState;                                            // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03F2(0x0006) MISSED OFFSET
	class UFortMediaSubtitlesPlayer*                   EventSubtitlesPlayer;                                     // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_EventCine.Announce_EventCine_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStateEntered_2FC6E2894145586A1A4AF69426273130();
	void OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC();
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleAllowSkip();
	void ExecuteUbergraph_Announce_EventCine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
