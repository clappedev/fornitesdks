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

// WidgetBlueprintGeneratedClass HealthWarningScreen.HealthWarningScreen_C
// 0x0040 (0x04B8 - 0x0478)
class UHealthWarningScreen_C : public UHealthWarningScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FinishingAnim;                                            // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1;                                               // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted
	struct FTimerHandle                                ShowTimer;                                                // 0x04A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMargin                                     IconPadding;                                              // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HealthWarningScreen.HealthWarningScreen_C");
		
		return ptr;
	}


	void HandleShowTimerComplete();
	void ExecuteUbergraph_HealthWarningScreen(int EntryPoint);
	void HealthWarningCompleted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
