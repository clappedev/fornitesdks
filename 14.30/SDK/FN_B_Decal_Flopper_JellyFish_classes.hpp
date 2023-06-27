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

// BlueprintGeneratedClass B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C
// 0x0020 (0x0248 - 0x0228)
class AB_Decal_Flopper_JellyFish_C : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FadeIn_NewTrack_0_2F2CC4164B50B3516AA9909D745FF7CB;       // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeIn__Direction_2F2CC4164B50B3516AA9909D745FF7CB;       // 0x0234(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeIn;                                                   // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Decal_MID;                                                // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Decal_Flopper_JellyFish(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
