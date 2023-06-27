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

// Class EventModeUI.FocusButton
// 0x0010 (0x05C8 - 0x05B8)
class UFocusButton : public UBacchusActionButton
{
public:
	class UPaperSprite*                                StartFocusingSprite;                                      // 0x05B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPaperSprite*                                StopFocusingSprite;                                       // 0x05C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EventModeUI.FocusButton");
		
		return ptr;
	}


	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
};


// Class EventModeUI.FortEventModeEmotesWidget
// 0x00B0 (0x0378 - 0x02C8)
class UFortEventModeEmotesWidget : public UFortHUDElementWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EventModeUI.FortEventModeEmotesWidget.Emote1
	unsigned char                                      UnknownData01[0x28];                                      // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EventModeUI.FortEventModeEmotesWidget.Emote2
	unsigned char                                      UnknownData02[0x28];                                      // 0x0318(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EventModeUI.FortEventModeEmotesWidget.Emote3
	unsigned char                                      UnknownData03[0x10];                                      // 0x0340(0x0010) UNKNOWN PROPERTY: ArrayProperty EventModeUI.FortEventModeEmotesWidget.RandomEmotes
	unsigned char                                      UnknownData04[0x8];                                       // 0x0350(0x0008) MISSED OFFSET
	class URichTextBlock*                              Text_Emote1;                                              // 0x0358(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              Text_Emote2;                                              // 0x0360(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              Text_Emote3;                                              // 0x0368(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URichTextBlock*                              Text_EmoteRandom;                                         // 0x0370(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EventModeUI.FortEventModeEmotesWidget");
		
		return ptr;
	}


	void OnFocusStateChanged(bool bIsFocusing);
	void OnFocusAvailableChanged(bool bIsFocusAvailable);
};


// Class EventModeUI.FortMobileActionButtonBehavior_Focus
// 0x0008 (0x00B8 - 0x00B0)
class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior
{
public:
	class UPaperSprite*                                StopFocusingSprite;                                       // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class EventModeUI.FortMobileActionButtonBehavior_Focus");
		
		return ptr;
	}


	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
