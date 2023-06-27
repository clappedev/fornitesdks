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

// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
// 0x0020 (0x0280 - 0x0260)
class UWB_AudioAnalysis_UI_C : public UFortAudioAnalysisDebugWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                GraphBox;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UWB_AudioAnalysis_FloatGraph_C*>      Widgets;                                                  // 0x0270(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C");
		
		return ptr;
	}


	void AddMPCParameter(const struct FName& ParamName, class UMaterialParameterCollection* Collection, int Vec4Index);
	void ExecuteUbergraph_WB_AudioAnalysis_UI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
