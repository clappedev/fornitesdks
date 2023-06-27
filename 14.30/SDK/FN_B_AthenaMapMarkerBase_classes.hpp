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

// BlueprintGeneratedClass B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C
// 0x0168 (0x04B8 - 0x0350)
class AB_AthenaMapMarkerBase_C : public AFortPlayerMarkerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        PingMarkerProto;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Target;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OnProtoMarkerPlaced_RampPow_83EEC58A4783B077FB03728C433B4B7E;// 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnProtoMarkerPlaced_Pinch_83EEC58A4783B077FB03728C433B4B7E;// 0x036C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnProtoMarkerPlaced_Glow_83EEC58A4783B077FB03728C433B4B7E;// 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OnProtoMarkerPlaced__Direction_83EEC58A4783B077FB03728C433B4B7E;// 0x0374(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OnProtoMarkerPlaced;                                      // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SpawnMarkerAnim_SpawnVerticalScale_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnMarkerAnim_SpawnScale_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x0384(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnMarkerAnim_Opacity_D00BAF4B4CCD528A4D4E94BA8CAE97A2; // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpawnMarkerAnim__Direction_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x038C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SpawnMarkerAnim;                                          // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Main;                                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Target;                                               // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseProtoMarker;                                          // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIDProtoMarker;                                           // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortWorldMarkerData                        MarkerData;                                               // 0x03B8(0x0100) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void SpawnMarkerAnim__FinishedFunc();
	void SpawnMarkerAnim__UpdateFunc();
	void OnProtoMarkerPlaced__FinishedFunc();
	void OnProtoMarkerPlaced__UpdateFunc();
	void OnMarkerPlaced();
	void OnSetupMarker(const struct FFortWorldMarkerData& MarkerData);
	void OnMarkerColorChanged(const struct FLinearColor& InColor);
	void ExecuteUbergraph_B_AthenaMapMarkerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
