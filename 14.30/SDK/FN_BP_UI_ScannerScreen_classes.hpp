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

// BlueprintGeneratedClass BP_UI_ScannerScreen.BP_UI_ScannerScreen_C
// 0x0038 (0x07F8 - 0x07C0)
class ABP_UI_ScannerScreen_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            ScreenWidget;                                             // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ErrorTimeline_Switch_EBBEA5504EC9CD2C274D38AA3BFC1EEF;    // 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ErrorTimeline__Direction_EBBEA5504EC9CD2C274D38AA3BFC1EEF;// 0x07DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ErrorTimeline;                                            // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_ScannerScreen_C*                         Widget_Screen;                                            // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                TimeoutHandle;                                            // 0x07F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_ScannerScreen.BP_UI_ScannerScreen_C");
		
		return ptr;
	}


	void ErrorTimeline__FinishedFunc();
	void ErrorTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ScreenEventError(bool Reverse);
	void ScreenEventSuccess(const struct FText& SuccessText);
	void ScreenEventFailure(const struct FText& FailureText);
	void ScreenEventScan();
	void ScreenEventDismiss();
	void ScreenEventTargetLost(const struct FText& LostText);
	void ExecuteUbergraph_BP_UI_ScannerScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
