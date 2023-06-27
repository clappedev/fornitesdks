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

// BlueprintGeneratedClass ItemPreviewPedestal.ItemPreviewPedestal_C
// 0x0009 (0x03E9 - 0x03E0)
class AItemPreviewPedestal_C : public AFortCameraTargetPedestal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Floor_Enabled;                                            // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ItemPreviewPedestal.ItemPreviewPedestal_C");
		
		return ptr;
	}


	void Remove_Floor(class AFortItemPreviewActor* Preview);
	void OnItemDisplayed(EFortItemType ItemType);
	void ExecuteUbergraph_ItemPreviewPedestal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
