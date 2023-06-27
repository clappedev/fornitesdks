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

// WidgetBlueprintGeneratedClass VoiceChannelHeader.VoiceChannelHeader_C
// 0x0010 (0x0330 - 0x0320)
class UVoiceChannelHeader_C : public UFortVoiceChannelHeaderEntry
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                VBox_ActiveChannelExtras;                                 // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VoiceChannelHeader.VoiceChannelHeader_C");
		
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_VoiceChannelHeader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
