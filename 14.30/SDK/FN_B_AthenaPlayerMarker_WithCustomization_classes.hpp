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

// BlueprintGeneratedClass B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C
// 0x0048 (0x0500 - 0x04B8)
class AB_AthenaPlayerMarker_WithCustomization_C : public AB_AthenaMapMarkerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortMapMarkerTopperActor*                   TopperClass;                                              // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortMapMarkerTopperActor*                   TopperInstance;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  TopperTransform;                                          // 0x04D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C");
		
		return ptr;
	}


	void OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37(class UObject* Loaded);
	void OnSetupMarker(const struct FFortWorldMarkerData& MarkerData);
	void OnMarkerHidden();
	void UpdateTopper();
	void OnMarkerPlaced();
	void ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
