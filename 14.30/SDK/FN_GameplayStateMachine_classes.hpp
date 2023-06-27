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

// Class GameplayStateMachine.GameplayState
// 0x0010 (0x0038 - 0x0028)
class UGameplayState : public UObject
{
public:
	struct FGameplayTag                                StateId;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bReplicates;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayStateMachine.GameplayState");
		
		return ptr;
	}


	void UpdateState(float DeltaTime);
	struct FGameplayTag GetStateId();
	void EndState(const struct FGameplayTag& NextStateId);
	void BeginState(const struct FGameplayTag& PrevStateId);
};


// Class GameplayStateMachine.GameplayStateMachine
// 0x0048 (0x0080 - 0x0038)
class UGameplayStateMachine : public UGameplayState
{
public:
	struct FGameplayTag                                StateMachineId;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bPubliclyBroadcast;                                       // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPersistDelegatesOnUnregistration;                        // 0x0041(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FActiveGameplayStateData                    ActiveGameplayStateData;                                  // 0x0048(0x0010) (Net, Transient)
	TArray<struct FGameplayStateSettings>              GameplayStateSettings;                                    // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTag                                InitialGameplayStateId;                                   // 0x0068(0x0008) (Edit, DisableEditOnInstance)
	class UGameplayStateMachineManager*                StateMachineManager;                                      // 0x0070(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGameplayStateMachineSubsystem*              StateMachineSubSystem;                                    // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayStateMachine.GameplayStateMachine");
		
		return ptr;
	}


	void SetState(const struct FGameplayTag& InStateId);
	void OnRep_ActiveGameplayStateData();
	struct FGameplayTag GetStateMachineId();
	class UGameplayState* GetActiveStateObject();
	struct FGameplayTag GetActiveStateId();
	void EvaluateStateTransition();
};


// Class GameplayStateMachine.GameplayStateMachineManager
// 0x0120 (0x01D0 - 0x00B0)
class UGameplayStateMachineManager : public UActorComponent
{
public:
	struct FGameplayStateMachineArray                  StateMachineList;                                         // 0x00B0(0x0120) (Net, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayStateMachine.GameplayStateMachineManager");
		
		return ptr;
	}

};


// Class GameplayStateMachine.GameplayStateMachineSubsystem
// 0x0050 (0x0080 - 0x0030)
class UGameplayStateMachineSubsystem : public UGameInstanceSubsystem
{
public:
	TMap<struct FGameplayTag, struct FGameplayStateMachineData> StateMachineMap;                                          // 0x0030(0x0050) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayStateMachine.GameplayStateMachineSubsystem");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
