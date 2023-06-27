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

// WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C
// 0x0034 (0x0294 - 0x0260)
class UNPCStatusWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNPCStatusWidgetBar_C*                       Bar_Health;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNPCStatusWidgetBar_C*                       Bar_Shield;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                VisibiltyTimer;                                           // 0x0278(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged
	float                                              StatusWidgetVisibleDuration;                              // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C");
		
		return ptr;
	}


	void Construct();
	void EventUpdateStatus(float Health);
	void EventHideStatus();
	void ChangeWidgetVisibleDuration(float StatusWidgetVisibleDuration);
	void ExecuteUbergraph_NPCStatusWidget(int EntryPoint);
	void VisibilityChanged__DelegateSignature(bool bVisible);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
