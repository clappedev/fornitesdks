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

// BlueprintGeneratedClass B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C
// 0x0044 (0x0960 - 0x091C)
class AB_Prj_Athena_AppleSun_Attached_C : public AB_Prj_Athena_AppleSun__C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DistanceFromPlayer_RelativeZpos_7385E36642C7F3056E2198B8275ED834;// 0x0928(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DistanceFromPlayer__Direction_7385E36642C7F3056E2198B8275ED834;// 0x092C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DistanceFromPlayer;                                       // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BGA_Spawned;                                              // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0939(0x0007) MISSED OFFSET
	struct FScalableFloat                              LeadDistance;                                             // 0x0940(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C");
		
		return ptr;
	}


	void DistanceFromPlayer__FinishedFunc();
	void DistanceFromPlayer__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void ExecuteUbergraph_B_Prj_Athena_AppleSun_Attached(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
