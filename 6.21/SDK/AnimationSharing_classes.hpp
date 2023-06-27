#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0x390 - 0x370)
// Class AnimationSharing.AnimSharingStateInstance
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	//class UAnimSequence*                       AnimationToPlay;                                   // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PermutationTimeOffset;                             // 0x370(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayRate;                                          // 0x374(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStateBool;                                        // 0x378(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C2B[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSharingStateInstance");
		return Clss;
	}

	void GetInstancedActors(TArray<class AActor*>* Actors);
};

// 0x10 (0x380 - 0x370)
// Class AnimationSharing.AnimSharingTransitionInstance
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	//TWeakObjectPtr<class USkeletalMeshComponent> FromComponent;                                     // 0x368(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class USkeletalMeshComponent> ToComponent;                                       // 0x370(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlendTime;                                         // 0x378(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBlendBool;                                        // 0x37C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C2C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSharingTransitionInstance");
		return Clss;
	}

};

// 0x10 (0x380 - 0x370)
// Class AnimationSharing.AnimSharingAdditiveInstance
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	//TWeakObjectPtr<class USkeletalMeshComponent> BaseComponent;                                     // 0x368(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAnimSequence>          AdditiveAnimation;                                 // 0x370(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Alpha;                                             // 0x378(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStateBool;                                        // 0x37C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C2D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSharingAdditiveInstance");
		return Clss;
	}

};

// 0x110 (0x138 - 0x28)
// Class AnimationSharing.AnimSharingInstance
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                        RegisteredActors;                                  // 0x28(0x10)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2E[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationSharingStateProcessor*       StateProcessor;                                    // 0xA8(0x8)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2F[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimSequence*>                 UsedAnimationSequences;                            // 0xE8(0x10)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_C30[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 StateEnum;                                         // 0x108(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SharingActor;                                      // 0x110(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C31[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSharingInstance");
		return Clss;
	}

};

// 0x88 (0xB0 - 0x28)
// Class AnimationSharing.AnimationSharingManager
class UAnimationSharingManager : public UObject
{
public:
	uint8                                        Pad_C32[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimSharingInstance*>          PerSkeletonData;                                   // 0x38(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C33[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimationSharingManager");
		return Clss;
	}

	bool AnimSharingEnabled();
};

// 0x20 (0x48 - 0x28)
// Class AnimationSharing.AnimationSharingSetup
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups;                                    // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FAnimationSharingScalability          ScalabilitySettings;                               // 0x38(0x10)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimationSharingSetup");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class AnimationSharing.AnimationSharingStateProcessor
class UAnimationSharingStateProcessor : public UObject
{
public:
	TSoftObjectPtr<class UEnum>                  AnimationStateEnum;                                // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimationSharingStateProcessor");
		return Clss;
	}

	void ProcessActorState(int32* OutState, class AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool* bShouldProcess);
	class UEnum* GetAnimationStateEnum();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
