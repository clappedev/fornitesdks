#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ArgonUI.ArgonWidgetBase
// 0x0008 (0x0320 - 0x0318)
class UArgonWidgetBase : public ULTMWidgetBase
{
public:
	class AFortAthenaMutator_Argon*                    ArgonMutator;                                             // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonUI.ArgonWidgetBase");
		
		return ptr;
	}


	void UnbindFromMutator_BP();
	void SetPlayerPortrait(class AFortPlayerStateAthena* Player, class UFortLazyImage* PortraitImage);
	TArray<class AFortPlayerStateAthena*> GetTeamPlayerStates(unsigned char Team);
	void BindToMutator_BP();
};


// Class ArgonUI.ArgonHUDAlertWidget
// 0x0020 (0x0340 - 0x0320)
class UArgonHUDAlertWidget : public UArgonWidgetBase
{
public:
	float                                              DisplayPlayerFinishedMessageTime;                         // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	TArray<struct FArgonFinishedPlayerInfo>            PlayerFinishedMessageQueue;                               // 0x0328(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonUI.ArgonHUDAlertWidget");
		
		return ptr;
	}


	void OnPlayerFinished(const struct FArgonFinishedPlayerInfo& FinishedPlayerInfo);
	void ForceHidePlayerFinishedMessage();
	void DisplayPlayerFinishedMessage(const struct FArgonFinishedPlayerInfo& FinishedInfo);
};


// Class ArgonUI.ArgonLeaderboardWidget
// 0x0010 (0x0330 - 0x0320)
class UArgonLeaderboardWidget : public UArgonWidgetBase
{
public:
	TArray<struct FArgonLeaderboardData>               LeaderboardEntries;                                       // 0x0320(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonUI.ArgonLeaderboardWidget");
		
		return ptr;
	}


	void UpdateLeaderboardUI();
	void OnRacingPlayersByPlaceChanged();
	void OnAnyTeamTicketCountChanged();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
