#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GameplayTasks.GameplayTasksComponent
// 0x0068 (0x0158 - 0x00F0)
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00F0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask
// 0x0040 (0x0068 - 0x0028)
class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (0x0068 - 0x0068)
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return ptr;
	}


	void STATIC_ClaimResources();
	void STATIC_ClaimResource();
};


// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (0x00A8 - 0x0068)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (0x0080 - 0x0068)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTaskResource
// 0x0010 (0x0038 - 0x0028)
class UGameplayTaskResource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
