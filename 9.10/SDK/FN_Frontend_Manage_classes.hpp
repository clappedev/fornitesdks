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

// BlueprintGeneratedClass Frontend_Manage.Frontend_Manage_C
// 0x0080 (0x02D8 - 0x0258)
class AFrontend_Manage_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CameraReturnTimeline_Time;                                // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraReturnTimeline__Direction;                          // 0x0264(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0265(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraReturnTimeline;                                     // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CameraLerpTimeline_Time;                                  // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraLerpTimeline__Direction;                            // 0x0274(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0275(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraLerpTimeline;                                       // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFrontend_Manage_Camera_C*                   Camera;                                                   // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0288(0x0008) MISSED OFFSET
	struct FTransform                                  CameraStartingTransform;                                  // 0x0290(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CameraReturnTimer;                                        // 0x02C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      CAMERA_Sensei_ExecuteUbergraph_Frontend_Manage_RefProperty;// 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CAMERA_Director_ExecuteUbergraph_Frontend_Manage_RefProperty;// 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_Manage.Frontend_Manage_C");
		return ptr;
	}


	void CameraReturnTimeline__FinishedFunc();
	void CameraReturnTimeline__UpdateFunc();
	void CameraLerpTimeline__FinishedFunc();
	void CameraLerpTimeline__UpdateFunc();
	void ManageCameraSelected(bool IsSensei);
	void CameraReturn();
	void LerpCamera(bool IsSensei);
	void CameraDeselected();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Manage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
