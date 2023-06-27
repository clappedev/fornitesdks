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

// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
// 0x0010 (0x04D8 - 0x04C8)
class UJoinServer_C : public UFortUIStateWidget_JoinServer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBuildWatermark_C*                           BuildWatermark;                                           // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JoinServer.JoinServer_C");
		
		return ptr;
	}


	void OnEnterState(EFortUIState PreviousUIState);
	void OnShowTutorialDialog();
	void ExecuteUbergraph_JoinServer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
