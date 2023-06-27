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

// BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C
// 0x0070 (0x02F0 - 0x0280)
class ABP_VictoryDrone_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponentBudgeted*              SkeletalMeshComponentBudgeted;                            // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher
	float                                              AnimPlayRate;                                             // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    StaticMeshMID;                                            // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeleportIn;                                               // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAthena;                                                 // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x02BA(0x0006) MISSED OFFSET
	class AFortPawn*                                   TargetPlayer;                                             // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterAttached;                                        // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InLobby;                                                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isNPC;                                                    // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02D2(0x0002) MISSED OFFSET
	struct FName                                       AttachPoint;                                              // 0x02D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isDecoy;                                                  // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh_for_Attachment;                                      // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SoundOnNPCDeath;                                          // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C");
		
		return ptr;
	}


	void Added_Death_Audio(class USoundBase* Sound_to_Spawn);
	void Decoy_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters);
	void NPC_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters);
	void NotifyTeleportFinishedTriggered();
	void PlaySpawnAnim();
	void InitDrone();
	void ReceiveBeginPlay();
	void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_VictoryDrone(int EntryPoint);
	void SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
