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

// WidgetBlueprintGeneratedClass ItemPreviewViewport.ItemPreviewViewport_C
// 0x0038 (0x0298 - 0x0260)
class UItemPreviewViewport_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ItemPreviewViewport.ItemPreviewViewport_C.NewVar_1
	class ULevelStreamingDynamic*                      NewVar_2;                                                 // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemPreviewViewport.ItemPreviewViewport_C");
		
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_ItemPreviewViewport(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
