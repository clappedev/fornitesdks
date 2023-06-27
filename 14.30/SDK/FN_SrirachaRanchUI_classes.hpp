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

// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
// 0x0010 (0x00C0 - 0x00B0)
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{
public:
	class UPaperSprite*                                ToggleRadioOffSprite;                                     // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio");
		
		return ptr;
	}


	void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
};


// Class SrirachaRanchUI.RadioPlayerWidgetBase
// 0x0050 (0x0318 - 0x02C8)
class URadioPlayerWidgetBase : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02C8(0x0040) MISSED OFFSET
	struct FFortPrioritizedWidgetData                  PriorityData;                                             // 0x0308(0x0002) (Edit)
	unsigned char                                      UnknownData01[0x6];                                       // 0x030A(0x0006) MISSED OFFSET
	class UStreamingRadioPlayerComponent*              LastValidComp;                                            // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SrirachaRanchUI.RadioPlayerWidgetBase");
		
		return ptr;
	}


	void SetControllable(bool bCanControl);
	void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnShouldShowDueToEntrance();
	void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* LastSource);
	void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnDisconnectFromComp();
	void NativeExitedVehicle();
	void NativeEnteredVehicle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
