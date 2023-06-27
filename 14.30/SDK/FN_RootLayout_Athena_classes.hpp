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

// WidgetBlueprintGeneratedClass RootLayout_Athena.RootLayout_Athena_C
// 0x0050 (0x03E8 - 0x0398)
class URootLayout_Athena_C : public UFortRootViewportLayout_Athena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UConfirmationWindow_C*                       ConfirmationWindow;                                       // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UProgressModalWidget_C*                      ControllerDisconnectedModal;                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bClosingErrorDialog;                                      // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	struct FText                                       QuitTitle;                                                // 0x03B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       QuitMessage;                                              // 0x03D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RootLayout_Athena.RootLayout_Athena_C");
		
		return ptr;
	}


	bool IsConsole();
	void DialogResult_0099D78247C40A9775C753A2024EA419(EFortDialogResult Result, const struct FName& ResultName);
	void Construct();
	void OnGameWindowCloseButtonClicked();
	void OnModalQueueEmptied_2();
	void ExecuteUbergraph_RootLayout_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
