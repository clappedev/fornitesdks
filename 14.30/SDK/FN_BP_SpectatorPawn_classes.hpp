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

// BlueprintGeneratedClass BP_SpectatorPawn.BP_SpectatorPawn_C
// 0x0028 (0x0360 - 0x0338)
class ABP_SpectatorPawn_C : public AFortReplaySpectatorPawnBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bIsTargetSkydiving;                                       // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargetParachuting;                                     // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSkydivingAudioEnabled;                                 // 0x0342(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0343(0x0005) MISSED OFFSET
	class USoundBase*                                  CurrentSkydivingSound;                                    // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             SkydivingAudioLoop;                                       // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AFortPlayerPawnAthena*                       Current_Player_Pawn;                                      // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpectatorPawn.BP_SpectatorPawn_C");
		
		return ptr;
	}


	void SetSkydivingAudioEnabled(bool Enabled);
	class USoundBase* GetSkydivingSound();
	void ReceiveBeginPlay();
	void Handle_Parachute_Audio_State();
	void ExecuteUbergraph_BP_SpectatorPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
