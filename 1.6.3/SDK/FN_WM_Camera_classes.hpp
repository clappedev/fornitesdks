#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WM_Camera.WM_Camera_C
// 0x00B0 (0x0970 - 0x08C0)
class AWM_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	float                                              TL_CameraDeactivateAnim_OutCurve_73E7DC7546C4C2FD98109BAD51037AF1;// 0x08C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CameraDeactivateAnim__Direction_73E7DC7546C4C2FD98109BAD51037AF1;// 0x08CC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CameraDeactivateAnim;                                  // 0x08D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TL_CameraActivateAnim_NewTrack_4_ED6153E9442CF8BBFC62D28E1B56763B;// 0x08D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CameraActivateAnim__Direction_ED6153E9442CF8BBFC62D28E1B56763B;// 0x08DC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CameraActivateAnim;                                    // 0x08E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraNoise_Noise3_CAC0C7484A50FFB26B3B348FCDF148B0;      // 0x08E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraNoise_Noise2_CAC0C7484A50FFB26B3B348FCDF148B0;      // 0x08EC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraNoise_Noise1_CAC0C7484A50FFB26B3B348FCDF148B0;      // 0x08F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraNoise__Direction_CAC0C7484A50FFB26B3B348FCDF148B0;  // 0x08F4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraNoise;                                              // 0x08F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  InitialPosition;                                          // 0x0900(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  ZoomPosition;                                             // 0x0930(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AWorldMapPin*>                        AllPinsArray;                                             // 0x0960(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WM_Camera.WM_Camera_C");
		return ptr;
	}


	void UserConstructionScript();
	void TL_CameraActivateAnim__FinishedFunc();
	void TL_CameraActivateAnim__UpdateFunc();
	void TL_CameraDeactivateAnim__FinishedFunc();
	void TL_CameraDeactivateAnim__UpdateFunc();
	void CameraNoise__FinishedFunc();
	void CameraNoise__UpdateFunc();
	void CameraActivateAnim();
	void StopWiggle();
	void CameraDeactivateAnim();
	void CameraWiggle();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_WM_Camera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
