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

// Class GameplayBehaviorsModule.BTTask_StopGameplayBehavior
// 0x0008 (0x0078 - 0x0070)
class UBTTask_StopGameplayBehavior : public UBTTaskNode
{
public:
	class UGameplayBehavior*                           BehaviorToStop;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayBehaviorsModule.BTTask_StopGameplayBehavior");
		
		return ptr;
	}

};


// Class GameplayBehaviorsModule.GameplayBehavior
// 0x0060 (0x0088 - 0x0028)
class UGameplayBehavior : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0028(0x0014) MISSED OFFSET
	struct FGameplayTag                                ActionTag;                                                // 0x003C(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0044(0x001C) MISSED OFFSET
	TArray<class AActor*>                              RelevantActors;                                           // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UGameplayTask*>                       ActiveTasks;                                              // 0x0070(0x0010) (ZeroConstructor)
	class AActor*                                      TransientAvatar;                                          // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayBehaviorsModule.GameplayBehavior");
		
		return ptr;
	}


	void K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config);
	void K2_OnTriggeredPawn(class APawn* Avatar, class UGameplayBehaviorConfig* Config);
	void K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config);
	void K2_OnTriggered(class AActor* Avatar, class UGameplayBehaviorConfig* Config);
	void K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted);
	void K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted);
	void K2_OnFinished(class AActor* Avatar, bool bWasInterrupted);
	int K2_GetNextActorIndexInSequence(int CurrentIndex);
	void K2_EndBehavior(class AActor* Avatar);
	void K2_AbortBehavior(class AActor* Avatar);
};


// Class GameplayBehaviorsModule.GameplayBehavior_AnimationBased
// 0x0010 (0x0098 - 0x0088)
class UGameplayBehavior_AnimationBased : public UGameplayBehavior
{
public:
	TArray<struct FMontagePlaybackData>                ActivePlayback;                                           // 0x0088(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayBehaviorsModule.GameplayBehavior_AnimationBased");
		
		return ptr;
	}


	void OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar);
};


// Class GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
// 0x0010 (0x0098 - 0x0088)
class UGameplayBehavior_BehaviorTree : public UGameplayBehavior
{
public:
	class UBehaviorTree*                               PreviousBT;                                               // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayBehaviorsModule.GameplayBehavior_BehaviorTree");
		
		return ptr;
	}

};


// Class GameplayBehaviorsModule.GameplayBehaviorConfig
// 0x0008 (0x0030 - 0x0028)
class UGameplayBehaviorConfig : public UObject
{
public:
	class UGameplayBehavior*                           BehaviorClass;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayBehaviorsModule.GameplayBehaviorConfig");
		
		return ptr;
	}

};


// Class GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
// 0x0038 (0x0068 - 0x0030)
class UGameplayBehaviorConfig_Animation : public UGameplayBehaviorConfig
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GameplayBehaviorsModule.GameplayBehaviorConfig_Animation.AnimMontage
	float                                              PlayRate;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // 0x005C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoop : 1;                                                // 0x0064(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayBehaviorsModule.GameplayBehaviorConfig_Animation");
		
		return ptr;
	}

};


// Class GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
// 0x0030 (0x0060 - 0x0030)
class UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree.BehaviorTree
	unsigned char                                      bRevertToPreviousBTOnFinish : 1;                          // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree");
		
		return ptr;
	}

};


// Class GameplayBehaviorsModule.GameplayBehaviorManager
// 0x0058 (0x0090 - 0x0038)
class UGameplayBehaviorManager : public UAISubsystem
{
public:
	TMap<class AActor*, struct FAgentGameplayBehaviors> AgentGameplayBehaviors;                                   // 0x0038(0x0050)
	unsigned char                                      bCreateIfMissing : 1;                                     // 0x0088(0x0001) (Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayBehaviorsModule.GameplayBehaviorManager");
		
		return ptr;
	}

};


// Class GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
