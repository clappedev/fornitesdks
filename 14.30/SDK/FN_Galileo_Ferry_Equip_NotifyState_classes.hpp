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

// BlueprintGeneratedClass Galileo_Ferry_Equip_NotifyState.Galileo_Ferry_Equip_NotifyState_C
// 0x0000 (0x0030 - 0x0030)
class UGalileo_Ferry_Equip_NotifyState_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Galileo_Ferry_Equip_NotifyState.Galileo_Ferry_Equip_NotifyState_C");
		
		return ptr;
	}


	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
