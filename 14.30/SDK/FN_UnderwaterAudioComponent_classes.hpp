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

// BlueprintGeneratedClass UnderwaterAudioComponent.UnderwaterAudioComponent_C
// 0x0030 (0x00E0 - 0x00B0)
class UUnderwaterAudioComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundMix*                                   CamUnderwaterSoundMix;                                    // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CamUnderwaterStartSound;                                  // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CamUnderwaterAudio;                                       // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  CamUnderwaterLoopSound;                                   // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CamUnderwaterStopSound;                                   // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UnderwaterAudioComponent.UnderwaterAudioComponent_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void On_Camera_Underwater_State_Changed(bool bIsUnderWater, float DepthUnderwater);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_UnderwaterAudioComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
