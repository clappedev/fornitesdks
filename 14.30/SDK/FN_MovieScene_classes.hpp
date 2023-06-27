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

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0028 (0x0078 - 0x0050)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x0050(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0054(0x0001) MISSED OFFSET
	bool                                               bIsEvalDisabled;                                          // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	struct FGuid                                       EvaluationFieldGuid;                                      // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneTrackEvaluationField             EvaluationField;                                          // 0x0068(0x0010)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0078 - 0x0078)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0098 (0x00E8 - 0x0050)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x0050(0x0002) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FMovieSceneEasingSettings                   Easing;                                                   // 0x0058(0x0038) (Edit)
	struct FMovieSceneFrameRange                       SectionRange;                                             // 0x0090(0x0010) (Edit)
	struct FFrameNumber                                PreRollFrames;                                            // 0x00A0(0x0004) (Edit)
	struct FFrameNumber                                PostRollFrames;                                           // 0x00A4(0x0004) (Edit)
	int                                                RowIndex;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x00B0(0x0001) (Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x00B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndTime;                                                  // 0x00B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x00BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bIsInfinite : 1;                                          // 0x00C4(0x0001) (Deprecated)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	bool                                               bSupportsInfiniteRange;                                   // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FOptionalMovieSceneBlendType                BlendType;                                                // 0x00C9(0x0002)
	unsigned char                                      UnknownData03[0x1D];                                      // 0x00CB(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		
		return ptr;
	}


	void SetRowIndex(int NewRowIndex);
	void SetPreRollFrames(int InPreRollFrames);
	void SetPostRollFrames(int InPostRollFrames);
	void SetOverlapPriority(int NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
	void SetBlendType(EMovieSceneBlendType InBlendType);
	bool IsLocked();
	bool IsActive();
	int GetRowIndex();
	int GetPreRollFrames();
	int GetPostRollFrames();
	int GetOverlapPriority();
	EMovieSceneCompletionMode GetCompletionMode();
	struct FOptionalMovieSceneBlendType GetBlendType();
};


// Class MovieScene.MovieSceneSequence
// 0x0010 (0x0060 - 0x0050)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	class UMovieSceneCompiledData*                     CompiledData;                                             // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EMovieSceneCompletionMode                          DefaultCompletionMode;                                    // 0x0058(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bParentContextsAreSignificant;                            // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayableDirectly;                                        // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	EMovieSceneSequenceFlags                           SequenceFlags;                                            // 0x005B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		
		return ptr;
	}


	TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(const struct FName& InBindingName);
	struct FMovieSceneObjectBindingID FindBindingByTag(const struct FName& InBindingName);
};


// Class MovieScene.MovieSceneSubSection
// 0x0078 (0x0160 - 0x00E8)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                               // 0x00E8(0x0024) (Edit, BlueprintVisible)
	float                                              StartOffset;                                              // 0x010C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UMovieSceneSequence*                         SubSequence;                                              // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                            // 0x0120(0x001C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FString                                     TargetSequenceName;                                       // 0x0140(0x0010) (Edit, ZeroConstructor)
	struct FDirectoryPath                              TargetPathToRecordTo;                                     // 0x0150(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		
		return ptr;
	}


	void SetSequence(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* GetSequence();
};


// Class MovieScene.MovieSceneSubTrack
// 0x0010 (0x0088 - 0x0078)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0078(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneCustomClockSource
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCustomClockSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneCustomClockSource");
		
		return ptr;
	}


	void OnTick(float DeltaSeconds, float InPlayRate);
	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);
	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);
	struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
};


// Class MovieScene.MovieSceneEntityProvider
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneEntityProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneEntityProvider");
		
		return ptr;
	}

};


// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (0x0028 - 0x0028)
class UMovieScenePlaybackClient : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackTemplateProducer
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTrackTemplateProducer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackTemplateProducer");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneNodeGroup
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneNodeGroup : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneNodeGroup");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneNodeGroupCollection
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneNodeGroupCollection : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneNodeGroupCollection");
		
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x00F8 (0x0148 - 0x0050)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x0070(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                            // 0x0080(0x0050)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x00D0(0x0010) (ExportObject, ZeroConstructor)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMovieSceneFrameRange                       SelectionRange;                                           // 0x00E8(0x0010)
	struct FMovieSceneFrameRange                       PlaybackRange;                                            // 0x00F8(0x0010)
	struct FFrameRate                                  TickResolution;                                           // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  DisplayRate;                                              // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	EMovieSceneEvaluationType                          EvaluationType;                                           // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	EUpdateClockSource                                 ClockSource;                                              // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	struct FSoftObjectPath                             CustomClockSourcePath;                                    // 0x0120(0x0018) (ZeroConstructor)
	TArray<struct FMovieSceneMarkedFrame>              MarkedFrames;                                             // 0x0138(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieScene");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0068 (0x0090 - 0x0028)
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneEntitySystem
// 0x0018 (0x0040 - 0x0028)
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneEntitySystem");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneBlenderSystem
// 0x0020 (0x0060 - 0x0040)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneBlenderSystem");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneBoolSection
// 0x0098 (0x0180 - 0x00E8)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                               DefaultValue;                                             // 0x00E8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FMovieSceneBoolChannel                      BoolCurve;                                                // 0x00F0(0x0090)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneBoolSection");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneEntityInstantiatorSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneEntityInstantiatorSystem");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneGenericBoundObjectInstantiator");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneBoundSceneComponentInstantiator");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneCompiledData
// 0x03D0 (0x03F8 - 0x0028)
class UMovieSceneCompiledData : public UObject
{
public:
	struct FMovieSceneEvaluationTemplate               EvaluationTemplate;                                       // 0x0028(0x0160)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                // 0x0188(0x0118)
	struct FMovieSceneEntityComponentField             EntityComponentField;                                     // 0x02A0(0x00F0)
	struct FMovieSceneEvaluationField                  TrackTemplateField;                                       // 0x0390(0x0030)
	TArray<struct FFrameTime>                          DeterminismFences;                                        // 0x03C0(0x0010) (ZeroConstructor)
	struct FGuid                                       CompiledSignature;                                        // 0x03D0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompilerVersion;                                          // 0x03E0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequenceCompilerMaskStruct       AccumulatedMask;                                          // 0x03F0(0x0001)
	struct FMovieSceneSequenceCompilerMaskStruct       AllocatedMask;                                            // 0x03F1(0x0001)
	EMovieSceneSequenceFlags                           AccumulatedFlags;                                         // 0x03F2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03F3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneCompiledData");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneCompiledDataManager
// 0x0208 (0x0230 - 0x0028)
class UMovieSceneCompiledDataManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET
	TMap<int, struct FMovieSceneSequenceHierarchy>     Hierarchies;                                              // 0x00D8(0x0050)
	TMap<int, struct FMovieSceneEvaluationTemplate>    TrackTemplates;                                           // 0x0128(0x0050)
	TMap<int, struct FMovieSceneEvaluationField>       TrackTemplateFields;                                      // 0x0178(0x0050)
	TMap<int, struct FMovieSceneEntityComponentField>  EntityComponentFields;                                    // 0x01C8(0x0050)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0218(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneCompiledDataManager");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneFloatDecomposer
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneFloatDecomposer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneFloatDecomposer");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EMovieSceneBuiltInEasing                           Type;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		
		return ptr;
	}


	float OnEvaluate(float Interp);
};


// Class MovieScene.MovieSceneEntitySystemLinker
// 0x0430 (0x0458 - 0x0028)
class UMovieSceneEntitySystemLinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0028(0x0210) MISSED OFFSET
	struct FMovieSceneEntitySystemGraph                SystemGraph;                                              // 0x0238(0x0138)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x0370(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneEntitySystemLinker");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneEvalTimeSystem
// 0x0010 (0x0050 - 0x0040)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneEvalTimeSystem");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0030(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0040(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneKeyProxy : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneMasterInstantiatorSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneMasterInstantiatorSystem");
		
		return ptr;
	}

};


// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieScenePreAnimatedStateSystemInterface");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneCachePreAnimatedStateSystem");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneRestorePreAnimatedStateSystem");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x0650 (0x0678 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3E8];                                     // 0x0028(0x03E8) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MovieScene.MovieSceneSequencePlayer.OnPlay
	unsigned char                                      UnknownData02[0x10];                                      // 0x0420(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MovieScene.MovieSceneSequencePlayer.OnPlayReverse
	unsigned char                                      UnknownData03[0x10];                                      // 0x0430(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MovieScene.MovieSceneSequencePlayer.OnStop
	unsigned char                                      UnknownData04[0x10];                                      // 0x0440(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MovieScene.MovieSceneSequencePlayer.OnPause
	unsigned char                                      UnknownData05[0x10];                                      // 0x0450(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MovieScene.MovieSceneSequencePlayer.OnFinished
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                   // 0x0460(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	unsigned char                                      bReversePlayback : 1;                                     // 0x0464(0x0001) (Net)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FFrameNumber                                StartTime;                                                // 0x0470(0x0004) (Net)
	int                                                DurationFrames;                                           // 0x0474(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x0478(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x047C(0x0014) (Net)
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                     // 0x0490(0x00E8) (Transient)
	unsigned char                                      UnknownData08[0x68];                                      // 0x0578(0x0068) MISSED OFFSET
	struct FMovieSceneSequenceReplProperties           NetSyncProps;                                             // 0x05E0(0x0010) (Net)
	TScriptInterface<class UMovieScenePlaybackClient>  PlaybackClient;                                           // 0x05F0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	class UMovieSceneSequenceTickManager*              TickManager;                                              // 0x0600(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x70];                                      // 0x0608(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		
		return ptr;
	}


	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int StartFrame, int Duration);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(const struct FString& InLabel);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(const struct FString& InLabel);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	bool JumpToMarkedFrame(const struct FString& InLabel);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	struct FFrameRate GetFrameRate();
	int GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};


// Class MovieScene.MovieSceneSequenceTickManager
// 0x00A0 (0x00C8 - 0x0028)
class UMovieSceneSequenceTickManager : public UObject
{
public:
	TArray<class AActor*>                              SequenceActors;                                           // 0x0028(0x0010) (ZeroConstructor, Transient)
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0040(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSequenceTickManager");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneSpawnablesSystem
// 0x0000 (0x0040 - 0x0040)
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnablesSystem");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneSpawnSection
// 0x0008 (0x0188 - 0x0180)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0180(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnSection");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneSpawnTrack
// 0x0020 (0x0098 - 0x0078)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0078(0x0010) (ExportObject, ZeroConstructor)
	struct FGuid                                       ObjectGuid;                                               // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneSpawnTrack");
		
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneTrack
// 0x0020 (0x0098 - 0x0078)
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	bool                                               bHighPassFilter;                                          // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x0088(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSection
// 0x0000 (0x00E8 - 0x00E8)
class UTestMovieSceneSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSequence
// 0x0008 (0x0068 - 0x0060)
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSubTrack
// 0x0010 (0x0098 - 0x0088)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x0088(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubTrack");
		
		return ptr;
	}

};


// Class MovieScene.TestMovieSceneSubSection
// 0x0000 (0x0160 - 0x0160)
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSubSection");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackInstance
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneTrackInstance : public UObject
{
public:
	class UObject*                                     AnimatedObject;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsMasterTrackInstance;                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMovieSceneTrackInstanceInput>       Inputs;                                                   // 0x0040(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstance");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackInstanceInstantiator
// 0x00B0 (0x00F0 - 0x0040)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0040(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstanceInstantiator");
		
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrackInstanceSystem
// 0x0008 (0x0048 - 0x0040)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*        Instantiator;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MovieScene.MovieSceneTrackInstanceSystem");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
