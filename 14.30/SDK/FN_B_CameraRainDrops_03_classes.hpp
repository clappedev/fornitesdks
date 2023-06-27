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

// BlueprintGeneratedClass B_CameraRainDrops_03.B_CameraRainDrops_03_C
// 0x0020 (0x0300 - 0x02E0)
class AB_CameraRainDrops_03_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Alpha_Alpha_510BB77E4E686B10F0392B81CE9926AC;             // 0x02E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Alpha__Direction_510BB77E4E686B10F0392B81CE9926AC;        // 0x02EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Alpha;                                                    // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AB_HeavyRainPost_C*                          PostActor;                                                // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraRainDrops_03.B_CameraRainDrops_03_C");
		
		return ptr;
	}


	void Alpha__FinishedFunc();
	void Alpha__UpdateFunc();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraRainDrops_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
