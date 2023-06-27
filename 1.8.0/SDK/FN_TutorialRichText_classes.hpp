#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TutorialRichText.TutorialRichText_C
// 0x0028 (0x0260 - 0x0238)
class UTutorialRichText_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UFortRichTextBlock*                          FortRichTextBlock_1;                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Text;                                                     // 0x0248(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialRichText.TutorialRichText_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_TutorialRichText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
