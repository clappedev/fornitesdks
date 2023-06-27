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

// BlueprintGeneratedClass AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C
// 0x000C (0x003C - 0x0030)
class UAnimNotifyState_StopMontageGroup_C : public UAnimNotifyState
{
public:
	struct FName                                       GroupNameToStop;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C");
		
		return ptr;
	}


	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
