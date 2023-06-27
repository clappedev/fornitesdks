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

// BlueprintGeneratedClass CameraAnimationTransition.CameraAnimationTransition_C
// 0x00B8 (0x02D8 - 0x0220)
class ACameraAnimationTransition_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_2750533A46B9AEF2BE294F8153FE4FD4;   // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_2750533A46B9AEF2BE294F8153FE4FD4;   // 0x0234(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortnitePartyBackdrop_Camera_C*             CameraBR;                                                 // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0248(0x0008) MISSED OFFSET
	struct FTransform                                  CameraLocationBR;                                         // 0x0250(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AFortnitePartyBackdrop_Camera_C*             CameraBR16Player;                                         // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AFortnitePartyBackdrop_Camera_C*             CameraCreative;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AFortnitePartyBackdrop_Camera_C*             CameraCreative16Player;                                   // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0298(0x0008) MISSED OFFSET
	struct FTransform                                  CameraLocationCreative;                                   // 0x02A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVPostion1;                                              // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVPostion2;                                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraAnimationTransition.CameraAnimationTransition_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void MoveCameraUp();
	void MoveCameraDown();
	void ExecuteUbergraph_CameraAnimationTransition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
