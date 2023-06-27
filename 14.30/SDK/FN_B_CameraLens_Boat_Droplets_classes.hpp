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

// BlueprintGeneratedClass B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C
// 0x0018 (0x02F8 - 0x02E0)
class AB_CameraLens_Boat_Droplets_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_0_Alpha_0C9ACFAF463718824428D0A86CC5D789;        // 0x02E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_0C9ACFAF463718824428D0A86CC5D789;   // 0x02EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C");
		
		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_CameraLens_Boat_Droplets(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
