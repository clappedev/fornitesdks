#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x128 (0x150 - 0x28)
// Class ControlRig.ControlRig
class UControlRig : public UObject
{
public:
	uint8                                        Pad_FF7[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERigExecutionType                 ExecutionType;                                     // 0x3C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigHierarchyContainer                Hierarchy;                                         // 0x40(0xC0)(Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FControlRigOperator>           Operators;                                         // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FF9[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRig");
		return Clss;
	}

	void SetGlobalTransform(class FName JointName, struct FTransform& InTransform);
	struct FTransform GetGlobalTransform(class FName JointName);
	float GetDeltaTime();
};

// 0x0 (0x78 - 0x78)
// Class ControlRig.ControlRigBindingTrack
class UControlRigBindingTrack : public UMovieSceneSpawnTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigBindingTrack");
		return Clss;
	}

};

// 0x0 (0x2E0 - 0x2E0)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigBlueprintGeneratedClass");
		return Clss;
	}

};

// 0x48 (0x140 - 0xF8)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnPreInitializeDelegate;                           // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPostInitializeDelegate;                          // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPreEvaluateDelegate;                             // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPostEvaluateDelegate;                            // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UControlRig*                           ControlRig;                                        // 0x138(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigComponent");
		return Clss;
	}

	void OnPreInitialize();
	void OnPreEvaluate();
	void OnPostInitialize();
	void OnPostEvaluate();
	class UControlRig* BP_GetControlRig();
};

// 0x50 (0x380 - 0x330)
// Class ControlRig.ControlRigControl
class AControlRigControl : public AActor
{
public:
	class FString                                PropertyPath;                                      // 0x330(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x340(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask : 0x1 0x370(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSelected : 1;                                     // Mask : 0x2 0x370(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHovered : 1;                                      // Mask : 0x4 0x370(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bManipulating : 1;                                 // Mask : 0x8 0x370(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFA[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigControl");
		return Clss;
	}

	void OnTransformChanged(struct FTransform& NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigLibrary
class UControlRigLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigLibrary");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigObjectHolder");
		return Clss;
	}

};

// 0x58 (0x4F0 - 0x498)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x498(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x4C0(0x28)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastExportedFrameRate;                             // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigSequence");
		return Clss;
	}

};

// 0x0 (0x270 - 0x270)
// Class ControlRig.ControlRigSequencerAnimInstance
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigSequencerAnimInstance");
		return Clss;
	}

};

// 0x10 (0x390 - 0x380)
// Class ControlRig.ControlRigStaticMeshControl
class AControlRigStaticMeshControl : public AControlRigControl
{
public:
	//class USceneComponent*                     Scene;                                             // 0x378(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  Mesh;                                              // 0x380(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FFC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigStaticMeshControl");
		return Clss;
	}

};

// 0xB8 (0x208 - 0x150)
// Class ControlRig.MovieSceneControlRigSection
class UMovieSceneControlRigSection : public UMovieSceneSubSection
{
public:
	bool                                         bAdditive;                                         // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyBoneFilter;                                  // 0x151(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputBlendPose                       BoneFilter;                                        // 0x158(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x168(0xA0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneControlRigSection");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class ControlRig.MovieSceneControlRigTrack
class UMovieSceneControlRigTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneControlRigTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
