#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkBlueprintLibrary
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkBlueprintLibrary");
		return Clss;
	}

	void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, TArray<class FName>* TransformNames);
	void TransformName(struct FLiveLinkTransform& LiveLinkTransform, class FName* Name);
	bool RequestShutdown(struct FLiveLinkSourceHandle& SourceHandle);
	void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	int32 NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle);
	bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle);
	bool HasParent(struct FLiveLinkTransform& LiveLinkTransform);
	void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, class FName TransformName, struct FLiveLinkTransform* LiveLinkTransform);
	void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
	class FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle);
	class FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle);
	class FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle);
	void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform* Parent);
	void GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float>* Curves);
	void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	int32 ChildCount(struct FLiveLinkTransform& LiveLinkTransform);
};

// 0x20 (0x118 - 0xF8)
// Class LiveLink.LiveLinkComponent
class ULiveLinkComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnLiveLinkUpdated;                                 // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2881[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkComponent");
		return Clss;
	}

	void GetSubjectDataAtWorldTime(class FName SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(class FName SubjectName, struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectData(class FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
};

// 0x20 (0x118 - 0xF8)
// Class LiveLink.LiveLinkDrivenComponent
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0xF8(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  ActorTransformBone;                                // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyActorTransform;                             // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetRelativeLocation;                              // 0x109(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2882[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkDrivenComponent");
		return Clss;
	}

};

// 0x0 (0x270 - 0x270)
// Class LiveLink.LiveLinkInstance
class ULiveLinkInstance : public UAnimInstance
{
public:
	//class ULiveLinkRetargetAsset*              CurrentRetargetAsset;                              // 0x268(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkInstance");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class LiveLink.LiveLinkMessageBusFinder
class ULiveLinkMessageBusFinder : public UObject
{
public:
	uint8                                        Pad_2884[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkMessageBusFinder");
		return Clss;
	}

	void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
	class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();
	void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle* SourceHandle);
};

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkRetargetAsset
class ULiveLinkRetargetAsset : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkRetargetAsset");
		return Clss;
	}

};

// 0xA8 (0xD0 - 0x28)
// Class LiveLink.LiveLinkRemapAsset
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	uint8                                        Pad_2885[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkRemapAsset");
		return Clss;
	}

	void RemapCurveElements(TMap<class FName, float>& CurveItems);
	class FName GetRemappedCurveName(class FName CurveName);
	class FName GetRemappedBoneName(class FName BoneName);
};

// 0x60 (0x90 - 0x30)
// Class LiveLink.LiveLinkTimeSynchronizationSource
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	class FName                                  SubjectName;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2886[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkTimeSynchronizationSource");
		return Clss;
	}

};

// 0xC8 (0x1A8 - 0xE0)
// Class LiveLink.MovieSceneLiveLinkSection
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	class FName                                  SubjectName;                                       // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                    TemplateToPush;                                    // 0xE8(0x90)(NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x178(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>       PropertyFloatChannels;                             // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSection");
		return Clss;
	}

};

// 0x0 (0x80 - 0x80)
// Class LiveLink.MovieSceneLiveLinkTrack
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
