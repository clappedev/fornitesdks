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

// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
// 0x0008 (0x0C18 - 0x0C10)
class UAthenaVariantTileButton_C : public UFortVariantTileButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C");
		
		return ptr;
	}


	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_AthenaVariantTileButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
