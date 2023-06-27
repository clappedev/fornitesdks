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

// BlueprintGeneratedClass AnimNotifyState_StopMontagePlayInPlace.AnimNotifyState_StopMontagePlayInPlace_C
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_StopMontagePlayInPlace_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyState_StopMontagePlayInPlace.AnimNotifyState_StopMontagePlayInPlace_C");
		
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
