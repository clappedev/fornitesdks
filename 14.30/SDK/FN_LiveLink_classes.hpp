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

// Class LiveLink.LiveLinkRetargetAsset
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRetargetAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkRetargetAsset");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	bool                                               bInterpolatePropertyValues;                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0029(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkBasicFrameInterpolationProcessor");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// 0x0010 (0x0050 - 0x0040)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationRoleToTransform
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
public:
	struct FName                                       BoneName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationRoleToTransform");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationVirtualSubject
// 0x0008 (0x00E0 - 0x00D8)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x00D8(0x0001) MISSED OFFSET
	bool                                               bAppendSubjectNameToBones;                                // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00DA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationVirtualSubject");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	ELiveLinkAxis                                      OrientationAxisX;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ELiveLinkAxis                                      OrientationAxisY;                                         // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ELiveLinkAxis                                      OrientationAxisZ;                                         // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ELiveLinkAxis                                      TranslationAxisX;                                         // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ELiveLinkAxis                                      TranslationAxisY;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ELiveLinkAxis                                      TranslationAxisZ;                                         // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12];                                      // 0x002E(0x0012) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// 0x0000 (0x0040 - 0x0040)
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkBlueprintLibrary");
		
		return ptr;
	}


	void STATIC_TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames);
	void STATIC_TransformName(struct FLiveLinkTransform* LiveLinkTransform, struct FName* Name);
	void SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);
	bool STATIC_RemoveSource(struct FLiveLinkSourceHandle* SourceHandle);
	void STATIC_ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle);
	bool IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame);
	bool STATIC_IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle);
	bool IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
	bool STATIC_HasParent(struct FLiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByName(const struct FName& TransformName, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByIndex(int TransformIndex, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	class ULiveLinkRole* STATIC_GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey);
	struct FText STATIC_GetSourceType(struct FLiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle);
	void STATIC_GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	bool STATIC_GetPropertyValue(const struct FName& PropertyName, struct FLiveLinkBasicBlueprintData* BasicData, float* Value);
	void STATIC_GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent);
	void STATIC_GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	TArray<struct FLiveLinkSubjectKey> STATIC_GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeDisal);
	class ULiveLinkRole* STATIC_GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
	TArray<struct FLiveLinkSubjectName> STATIC_GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
	void STATIC_GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves);
	void STATIC_GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	void STATIC_GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class ULiveLinkRole* Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class ULiveLinkRole* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class ULiveLinkRole* Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool STATIC_EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	void STATIC_ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_ChildCount(struct FLiveLinkTransform* LiveLinkTransform);
};


// Class LiveLink.LiveLinkComponent
// 0x0020 (0x00D0 - 0x00B0)
class ULiveLinkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty LiveLink.LiveLinkComponent.OnLiveLinkUpdated
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkComponent");
		
		return ptr;
	}


	void GetSubjectDataAtWorldTime(const struct FName& SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(const struct FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectData(const struct FName& SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetAvailableSubjectNames(TArray<struct FName>* SubjectNames);
};


// Class LiveLink.LiveLinkDrivenComponent
// 0x0018 (0x00C8 - 0x00B0)
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x00B0(0x0008) (Edit)
	struct FName                                       ActorTransformBone;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bModifyActorTransform;                                    // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetRelativeLocation;                                     // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00C2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkDrivenComponent");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkInstance
// 0x0000 (0x02C0 - 0x02C0)
class ULiveLinkInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkInstance");
		
		return ptr;
	}


	void SetSubject(const struct FLiveLinkSubjectName& SubjectName);
	void SetRetargetAsset(class ULiveLinkRetargetAsset* RetargetAsset);
};


// Class LiveLink.LiveLinkMessageBusFinder
// 0x0058 (0x0080 - 0x0028)
class ULiveLinkMessageBusFinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusFinder");
		
		return ptr;
	}


	void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
	class ULiveLinkMessageBusFinder* STATIC_ConstructMessageBusFinder();
	void STATIC_ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle);
};


// Class LiveLink.LiveLinkMessageBusSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusSourceFactory");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkMessageBusSourceSettings
// 0x0000 (0x0098 - 0x0098)
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusSourceSettings");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkPreset
// 0x0020 (0x0048 - 0x0028)
class ULiveLinkPreset : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>               Sources;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FLiveLinkSubjectPreset>              Subjects;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkPreset");
		
		return ptr;
	}


	void BuildFromClient();
	bool ApplyToClient();
	bool AddToClient(bool bRecreatePresets);
};


// Class LiveLink.LiveLinkRemapAsset
// 0x00A0 (0x00C8 - 0x0028)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkRemapAsset");
		
		return ptr;
	}


	void RemapCurveElements(TMap<struct FName, float>* CurveItems);
	struct FName GetRemappedCurveName(const struct FName& CurveName);
	struct FName GetRemappedBoneName(const struct FName& BoneName);
};


// Class LiveLink.LiveLinkSettings
// 0x00A8 (0x00D0 - 0x0028)
class ULiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>         DefaultRoleSettings;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class ULiveLinkFrameInterpolationProcessor*        FrameInterpolationProcessor;                              // 0x0038(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LiveLink.LiveLinkSettings.DefaultLiveLinkPreset
	struct FDirectoryPath                              PresetSaveDir;                                            // 0x0068(0x0010) (Edit, Config)
	float                                              ClockOffsetCorrectionStep;                                // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ELiveLinkSourceMode                                DefaultMessageBusSourceMode;                              // 0x007C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	double                                             MessageBusPingRequestFrequency;                           // 0x0080(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             MessageBusHeartbeatFrequency;                             // 0x0088(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             MessageBusHeartbeatTimeout;                               // 0x0090(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             MessageBusTimeBeforeRemovingInactiveSource;               // 0x0098(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	double                                             TimeWithoutFrameToBeConsiderAsInvalid;                    // 0x00A0(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                ValidColor;                                               // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                InvalidColor;                                             // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      TextSizeSource;                                           // 0x00C8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      TextSizeSubject;                                          // 0x00C9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkSettings");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkTimecodeProvider
// 0x0090 (0x00C0 - 0x0030)
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
public:
	struct FLiveLinkSubjectKey                         SubjectKey;                                               // 0x0030(0x0018) (Edit)
	ELiveLinkTimecodeProviderEvaluationType            Evaluation;                                               // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0048(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bOverrideFrameRate;                                       // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FFrameRate                                  OverrideFrameRate;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x64];                                      // 0x005C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkTimecodeProvider");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkTimeSynchronizationSource
// 0x0050 (0x0080 - 0x0030)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x0030(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkTimeSynchronizationSource");
		
		return ptr;
	}

};


// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// 0x0008 (0x00A0 - 0x0098)
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
public:
	struct FName                                       SourceName;                                               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkVirtualSubjectSourceSettings");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
