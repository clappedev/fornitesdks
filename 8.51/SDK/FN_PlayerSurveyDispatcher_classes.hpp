#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerSurveyDispatcher.PlayerSurveyDispatcher_C
// 0x0011 (0x0071 - 0x0060)
class UPlayerSurveyDispatcher_C : public UFortPlayerSurveyDispatcher
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0060(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPanelWidget*                                PanelParent;                                              // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DoIntroOnActivate;                                        // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerSurveyDispatcher.PlayerSurveyDispatcher_C");
		return ptr;
	}


	void DoStartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget);
	void DisplaySurveyWidget(class UFortPlayerSurveyPanelBase* Widget);
	void RemoveSurveyWidget(class UFortPlayerSurveyPanelBase* Widget);
	void StartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget);
	void HandleFirstActivation(class UCommonActivatablePanel* Panel);
	void ExecuteUbergraph_PlayerSurveyDispatcher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
