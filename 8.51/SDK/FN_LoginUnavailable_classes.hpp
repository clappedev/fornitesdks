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

// WidgetBlueprintGeneratedClass LoginUnavailable.LoginUnavailable_C
// 0x0010 (0x02C0 - 0x02B0)
class ULoginUnavailable_C : public UFortLoginUnavailable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                           Button_Status;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginUnavailable.LoginUnavailable_C");
		return ptr;
	}


	void BndEvt__Button_Status_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void OnMessageSet(bool bDisableMessage);
	void ExecuteUbergraph_LoginUnavailable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
