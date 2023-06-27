#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C
// 0x0168 (0x04D8 - 0x0370)
class AB_AthenaMapMarkerBase_C : public AFortPlayerMarkerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        PingMarkerProto;                                          // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Target;                                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OnProtoMarkerPlaced_RampPow;                              // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnProtoMarkerPlaced_Pinch;                                // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnProtoMarkerPlaced_Glow;                                 // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OnProtoMarkerPlaced__Direction;                           // 0x0394(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OnProtoMarkerPlaced;                                      // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SpawnMarkerAnim_SpawnVerticalScale_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnMarkerAnim_SpawnScale_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnMarkerAnim_Opacity_D00BAF4B4CCD528A4D4E94BA8CAE97A2; // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpawnMarkerAnim__Direction_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x03AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SpawnMarkerAnim;                                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Main;                                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Target;                                               // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseProtoMarker;                                          // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIDProtoMarker;                                           // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortWorldMarkerData                        MarkerData;                                               // 0x03D8(0x0100) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void SpawnMarkerAnim__FinishedFunc();
	void SpawnMarkerAnim__UpdateFunc();
	void OnProtoMarkerPlaced__FinishedFunc();
	void OnProtoMarkerPlaced__UpdateFunc();
	void OnMarkerPlaced();
	void OnSetupMarker(struct FFortWorldMarkerData MarkerData);
	void OnMarkerColorChanged(struct FLinearColor InColor);
	void ExecuteUbergraph_B_AthenaMapMarkerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
