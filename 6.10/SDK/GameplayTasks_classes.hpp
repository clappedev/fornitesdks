#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x70 (0x160 - 0xF0)
// Class GameplayTasks.GameplayTasksComponent
class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                        Pad_13E7[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        : 1;                                               // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bIsNetDirty : 1;                                   // Mask : 0x2 0xFC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayTask*>                 SimulatedTasks;                                    // 0x100(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                 TaskPriorityQueue;                                 // 0x110(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13E9[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayTask*>                 TickingTasks;                                      // 0x130(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                 KnownTasks;                                        // 0x140(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnClaimedResourcesChange;                          // 0x150(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTasksComponent");
		return Clss;
	}

	void OnRep_SimulatedTasks();
	enum class EGameplayTaskRunResult K2_RunGameplayTask(UInterfaceProperty_ TaskOwner, class UGameplayTask* Task, uint8 Priority, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalRequiredResources, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalClaimedResources);
};

// 0x40 (0x68 - 0x28)
// Class GameplayTasks.GameplayTask
class UGameplayTask : public UObject
{
public:
	uint8                                        Pad_13EA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InstanceName;                                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13EB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETaskResourceOverlapPolicy        ResourceOverlapPolicy;                             // 0x3A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13EC[0x25];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTask*                         ChildTask;                                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask");
		return Clss;
	}

	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// 0x0 (0x68 - 0x68)
// Class GameplayTasks.GameplayTask_ClaimResource
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_ClaimResource");
		return Clss;
	}

	class UGameplayTask_ClaimResource* ClaimResources(UInterfaceProperty_ InTaskOwner, const TArray<TSubclassOf<class UGameplayTaskResource>>& ResourceClasses, uint8 Priority, class FName TaskInstanceName);
	class UGameplayTask_ClaimResource* ClaimResource(UInterfaceProperty_ InTaskOwner, TSubclassOf<class UGameplayTaskResource> ResourceClass, uint8 Priority, class FName TaskInstanceName);
};

// 0x40 (0xA8 - 0x68)
// Class GameplayTasks.GameplayTask_SpawnActor
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	UMulticastDelegateProperty_                  Success;                                           // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  DidNotSpawn;                                       // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F1[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    ClassToSpawn;                                      // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_SpawnActor");
		return Clss;
	}

	class UGameplayTask_SpawnActor* SpawnActor(UInterfaceProperty_ TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, TSubclassOf<class AActor> Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};

// 0x30 (0x98 - 0x68)
// Class GameplayTasks.GameplayTask_TimeLimitedExecution
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	UMulticastDelegateProperty_                  OnFinished;                                        // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTimeExpired;                                     // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_TimeLimitedExecution");
		return Clss;
	}

};

// 0x18 (0x80 - 0x68)
// Class GameplayTasks.GameplayTask_WaitDelay
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	UMulticastDelegateProperty_                  OnFinish;                                          // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_WaitDelay");
		return Clss;
	}

	class UGameplayTask_WaitDelay* TaskWaitDelay(UInterfaceProperty_ TaskOwner, float Time, uint8 Priority);
	void TaskDelayDelegate__DelegateSignature();
};

// 0x0 (0x28 - 0x28)
// Class GameplayTasks.GameplayTaskOwnerInterface
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTaskOwnerInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayTasks.GameplayTaskResource
class UGameplayTaskResource : public UObject
{
public:
	int32                                        ManualResourceID;                                  // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8                                         AutoResourceID;                                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bManuallySetID : 1;                                // Mask : 0x1 0x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTaskResource");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
