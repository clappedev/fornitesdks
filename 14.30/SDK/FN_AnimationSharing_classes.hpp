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

// Class AnimationSharing.AnimSharingStateInstance
// 0x0020 (0x02E0 - 0x02C0)
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	float                                              PermutationTimeOffset;                                    // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateBool;                                               // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class UAnimSharingInstance*                        Instance;                                                 // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimSharingStateInstance");
		
		return ptr;
	}


	void GetInstancedActors(TArray<class AActor*>* Actors);
};


// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0010 (0x02D0 - 0x02C0)
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       ToComponent;                                              // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BlendTime;                                                // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlendBool;                                               // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		
		return ptr;
	}

};


// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0010 (0x02D0 - 0x02C0)
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class UAnimSequence>                AdditiveAnimation;                                        // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha;                                                    // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateBool;                                               // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		
		return ptr;
	}

};


// Class AnimationSharing.AnimSharingInstance
// 0x0110 (0x0138 - 0x0028)
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                              RegisteredActors;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET
	class UAnimationSharingStateProcessor*             StateProcessor;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                   // 0x00E8(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
	class UEnum*                                       StateEnum;                                                // 0x0108(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class AActor*                                      SharingActor;                                             // 0x0110(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		
		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingManager
// 0x0060 (0x0088 - 0x0028)
class UAnimationSharingManager : public UObject
{
public:
	TArray<class USkeleton*>                           Skeletons;                                                // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		
		return ptr;
	}


	void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);
	class UAnimationSharingManager* STATIC_GetAnimationSharingManager(class UObject* WorldContextObject);
	bool STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);
	bool STATIC_AnimationSharingEnabled();
};


// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (0x0048 - 0x0028)
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup>   SkeletonSetups;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FAnimationSharingScalability                ScalabilitySettings;                                      // 0x0038(0x0010) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		
		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0028 (0x0050 - 0x0028)
class UAnimationSharingStateProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.AnimationSharingStateProcessor.AnimationStateEnum

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		
		return ptr;
	}


	void ProcessActorState(class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, int* OutState, bool* bShouldProcess);
	class UEnum* GetAnimationStateEnum();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
