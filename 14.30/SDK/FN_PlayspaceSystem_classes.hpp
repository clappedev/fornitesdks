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

// Class PlayspaceSystem.PlayspacePlayerController
// 0x0028 (0x0598 - 0x0570)
class APlayspacePlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0570(0x0018) MISSED OFFSET
	bool                                               bUsePlayerSpawningComponent;                              // 0x0588(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	class UPlayspaceControllerComponent_PlayerSpawning* ControllerSpawningComponent;                              // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspacePlayerController");
		
		return ptr;
	}

};


// Class PlayspaceSystem.GameplayVolume
// 0x0080 (0x02A0 - 0x0220)
class AGameplayVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0220(0x0028) UNKNOWN PROPERTY: SoftClassProperty PlayspaceSystem.GameplayVolume.PlayspaceClassTemplate
	class APlayspace*                                  PlayspaceClass;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayspace*                                  Playspace;                                                // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameplayTagContainer                       VolumeTags;                                               // 0x0258(0x0020) (Edit)
	class UOverlapComponent*                           BoundsComponent;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0280(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.GameplayVolume");
		
		return ptr;
	}


	void UpdateSize(const struct FVector& NewScale);
};


// Class PlayspaceSystem.OverlapComponent
// 0x0020 (0x04F0 - 0x04D0)
class UOverlapComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.OverlapComponent");
		
		return ptr;
	}


	void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class PlayspaceSystem.Playspace
// 0x0268 (0x0488 - 0x0220)
class APlayspace : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayspaceSystem.Playspace.NotifyPlayspaceUserAdded
	unsigned char                                      UnknownData01[0x18];                                      // 0x0230(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0230(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayspaceSystem.Playspace.NotifyPlayspaceUserRemoved
	unsigned char                                      UnknownData03[0x18];                                      // 0x0258(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x0258(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayspaceSystem.Playspace.NotifyPlayspaceInitialized
	unsigned char                                      UnknownData05[0x18];                                      // 0x0280(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData06[0x10];                                      // 0x0280(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayspaceSystem.Playspace.NotifyStartMatch
	unsigned char                                      UnknownData07[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData08[0x10];                                      // 0x02A8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayspaceSystem.Playspace.NotifyEndMatch
	unsigned char                                      UnknownData09[0x18];                                      // 0x02D0(0x0018) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x02E8(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTag                                RequestedPlayspaceParentTag;                              // 0x0308(0x0008) (Edit, DisableEditOnInstance)
	TArray<class APlayspace*>                          ChildPlayspaceClasses;                                    // 0x0310(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FPlayspaceUserList                          PlayspaceUsers;                                           // 0x0320(0x0128) (Net, Transient)
	TArray<class APlayspace*>                          ChildPlayspaces;                                          // 0x0448(0x0010) (ZeroConstructor, Transient)
	TArray<struct FUniqueNetIdRepl>                    PendingUsers;                                             // 0x0458(0x0010) (ZeroConstructor, Transient)
	bool                                               bAutoStartMatchOnServerStart;                             // 0x0468(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class UPlayspaceManagerComponent*                  PlayspaceManagerCached;                                   // 0x0470(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bIsInitialized;                                           // 0x0478(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0479(0x0001) MISSED OFFSET
	bool                                               bMatchHasEnded;                                           // 0x047A(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x047B(0x0001) MISSED OFFSET
	float                                              MatchStartTime;                                           // 0x047C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x8];                                       // 0x0480(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.Playspace");
		
		return ptr;
	}


	void OnRep_PlayspaceUsers();
	void OnRep_MatchStartTime();
	void OnRep_bMatchHasEnded();
	void OnRep_bIsInitialized();
};


// Class PlayspaceSystem.PlayspaceComponent
// 0x0000 (0x00B0 - 0x00B0)
class UPlayspaceComponent : public UGameFrameworkComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspaceComponent");
		
		return ptr;
	}

};


// Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning
// 0x0010 (0x00C0 - 0x00B0)
class UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent
{
public:
	bool                                               bQueueUserForSpawnWhenAdded;                              // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              SpawnDelayMin;                                            // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDelayMax;                                            // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning");
		
		return ptr;
	}

};


// Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
// 0x0048 (0x00F8 - 0x00B0)
class UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnPlayerQueuedToSpawn
	class ACameraActor*                                SpawnCameraActor;                                         // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bClientReadyForSpawning;                                  // 0x00C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	struct FReplicatedSpawnInfo                        ReplicatedSpawnInfo;                                      // 0x00CC(0x002C) (Net, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning");
		
		return ptr;
	}


	void ServerMarkReadyForSpawning();
	void OnRep_ReplicatedSpawnInfo();
	struct FReplicatedSpawnInfo GetSpawnInfo();
};


// Class PlayspaceSystem.PlayspaceGameMode
// 0x0018 (0x0320 - 0x0308)
class APlayspaceGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0308(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspaceGameMode");
		
		return ptr;
	}

};


// Class PlayspaceSystem.PlayspaceGameState
// 0x0020 (0x02B0 - 0x0290)
class APlayspaceGameState : public AGameState
{
public:
	class APlayspace*                                  RootPlayspaceClass;                                       // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePlayspaceSystem;                                      // 0x0298(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePlayerSpawningComponent;                              // 0x0299(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x029A(0x0006) MISSED OFFSET
	class UPlayspaceManagerComponent*                  PlayspaceManagerComponentCached;                          // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPlayspaceGameStateComponent_PlayerSpawningManager* PlayerSpawningManagerCached;                              // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspaceGameState");
		
		return ptr;
	}

};


// Class PlayspaceSystem.PlayspaceGameStateComponent
// 0x0000 (0x00B0 - 0x00B0)
class UPlayspaceGameStateComponent : public UGameStateComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspaceGameStateComponent");
		
		return ptr;
	}

};


// Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
// 0x0040 (0x00F0 - 0x00B0)
class UPlayspaceGameStateComponent_PlayerSpawningManager : public UPlayspaceGameStateComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B0(0x0030) MISSED OFFSET
	TArray<struct FPlayspaceSpawningInfo>              SpawningUsersArray;                                       // 0x00E0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager");
		
		return ptr;
	}

};


// Class PlayspaceSystem.PlayspaceLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayspaceLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspaceLibrary");
		
		return ptr;
	}

};


// Class PlayspaceSystem.PlayspaceManagerComponent
// 0x0030 (0x00E0 - 0x00B0)
class UPlayspaceManagerComponent : public UGameStateComponent
{
public:
	class APlayspace*                                  RootPlayspace;                                            // 0x00B0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	TArray<struct FActorOverlapEvent>                  UnhandledEnterEvents;                                     // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FActorOverlapEvent>                  UnhandledExitEvents;                                      // 0x00D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspaceManagerComponent");
		
		return ptr;
	}


	bool ProcessOverlapEvents(float DeltaTime);
	void OnPlayerEndOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);
	void OnPlayerBeginOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);
};


// Class PlayspaceSystem.PlayspacePlayerManagerComponent
// 0x00C0 (0x0170 - 0x00B0)
class UPlayspacePlayerManagerComponent : public UPlayspaceComponent
{
public:
	TArray<class UControllerComponent*>                ControllerComponents;                                     // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPlayerStateComponent*>               PlayerStateComponents;                                    // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PlayspaceSystem.PlayspacePlayerManagerComponent");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
