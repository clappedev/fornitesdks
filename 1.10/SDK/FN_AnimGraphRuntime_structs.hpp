#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	EModifyCurveApplyMode_MAX      = 3
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3
};


// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EComponentType
enum class EComponentType : uint8_t
{
	None                           = 0,
	TranslationX                   = 1,
	TranslationY                   = 2,
	TranslationZ                   = 3,
	RotationX                      = 4,
	RotationY                      = 5,
	RotationZ                      = 6,
	Scale                          = 7,
	ScaleX                         = 8,
	ScaleY                         = 9,
	ScaleZ                         = 10,
	EComponentType_MAX             = 11
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
	EInterpolationBlend_MAX        = 8
};


// Enum AnimGraphRuntime.EAxisOption
enum class EAxisOption : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	EAxisOption_MAX                = 6
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Alpha;                                                    // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x004C(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x005C(0x0014) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00C8 (0x0120 - 0x0058)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Z;                                                        // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              StartPosition;                                            // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlendFilter                                BlendFilter;                                              // 0x0078(0x0090)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                     // 0x0108(0x0010) (CPF_ZeroConstructor)
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x0040 (0x0160 - 0x0120)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x0120(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsLODEnabled;                                            // 0x013C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	struct FVector                                     LookAtLocation;                                           // 0x0140(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FName                                       SourceSocketName;                                         // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Alpha;                                                    // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Alpha;                                                    // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0064(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0098 (0x00C8 - 0x0030)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<float>                                      BlendTime;                                                // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	EAlphaBlendOption                                  BlendType;                                                // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAlphaBlend>                         Blends;                                                   // 0x0068(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0078(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      RemainingBlendTimes;                                      // 0x0088(0x0010) (CPF_ZeroConstructor)
	int                                                LastActiveChildIndex;                                     // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FBlendSampleData>                    PerBoneSampleData;                                        // 0x00A0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	bool                                               bResetChildOnActivation;                                  // 0x00C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00D0 - 0x00C8)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                             // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00E0 - 0x00C8)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          // 0x00C8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                          // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00D0 - 0x00C8)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0128 - 0x0120)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0068 (0x0098 - 0x0030)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	class USkeletalMeshComponent*                      SourceMeshComponent;                                      // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bUseAttachedParent;                                       // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5F];                                      // 0x0039(0x005F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       SourceBinding;                                            // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Alpha;                                                    // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TScriptInterface<class UCurveSourceInterface>      CurveSource;                                              // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x0080 (0x00B0 - 0x0030)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x0078(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x0079(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bBlendRootMotionBasedOnRootBone;                          // 0x007A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHasRelevantPoses;                                        // 0x007B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x007C(0x0034) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize)
	EModifyCurveApplyMode                              ApplyMode;                                                // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<float>                                      CurveValues;                                              // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FName>                               CurveNames;                                               // 0x0060(0x0010) (CPF_ZeroConstructor)
	float                                              Alpha;                                                    // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                    // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<float>                                      DesiredAlphas;                                            // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bAdditiveNode;                                            // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNormalizeAlpha;                                          // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0054(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x14];                                      // 0x005C(0x0014) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0028 (0x00C8 - 0x00A0)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize)
	EAlphaBlendOption                                  BlendOption;                                              // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x00C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0010 (0x00B0 - 0x00A0)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                 // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoseWeight;                                               // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x0080 (0x0120 - 0x00A0)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize)
	struct FBoneReference                              SourceBone;                                               // 0x00B8(0x0010) (CPF_Edit)
	float                                              RadialScaling;                                            // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIncludeRefPoseAsNeutralPose;                             // 0x00CC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPoseDriverType                                    Type;                                                     // 0x00CD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                // 0x00CE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x51];                                      // 0x00CF(0x0051) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0080 (0x00B0 - 0x0030)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	ESnapshotSourceMode                                Mode;                                                     // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FName                                       SnapshotName;                                             // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPoseSnapshot                               Snapshot;                                                 // 0x0040(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0078(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0058
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinLoopCount;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0020(0x0038) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	bool                                               bShuffleMode;                                             // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                              // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Root
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                   // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Pitch;                                                    // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Yaw;                                                      // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    MeshToComponent;                                          // 0x0050(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x0030 (0x0150 - 0x0120)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x0120(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsLODEnabled;                                            // 0x013C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0144(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ActualAlpha;                                              // 0x014C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShouldLoopWhenInSyncGroup;                               // 0x0064(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTeleportToExplicitTime;                                  // 0x0065(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	float                                              StartPosition;                                            // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 // 0x006C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReinitialized;                                           // 0x006D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Alpha;                                                    // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0064(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	float                                              InternalBlendAlpha;                                       // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bAIsRelevant;                                             // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bBIsRelevant;                                             // 0x0071(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bResetChildOnActivation;                                  // 0x0072(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0073(0x0005) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x01B0 (0x0610 - 0x0460)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0460(0x01B0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x005C
struct FAnimPhysConstraintSetup
{
	EAnimPhysLinearConstraintType                      LinearXLimitType;                                         // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAnimPhysLinearConstraintType                      LinearYLimitType;                                         // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAnimPhysLinearConstraintType                      LinearZLimitType;                                         // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     LinearAxesMin;                                            // 0x0004(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     LinearAxesMax;                                            // 0x0010(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	EAnimPhysAngularConstraintType                     AngularConstraintType;                                    // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAnimPhysTwistAxis                                 TwistAxis;                                                // 0x001D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              ConeAngle;                                                // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularXAngle;                                            // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              AngularYAngle;                                            // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              AngularZAngle;                                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     AngularLimitsMin;                                         // 0x0030(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     AngularLimitsMax;                                         // 0x003C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	EAnimPhysTwistAxis                                 AngularTargetAxis;                                        // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector                                     AngularTarget;                                            // 0x004C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	bool                                               bLinearFullyLocked;                                       // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0040
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (CPF_Edit)
	struct FTransform                                  PlaneTransform;                                           // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0028
struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (CPF_Edit)
	struct FVector                                     SphereLocalOffset;                                        // 0x0010(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              LimitRadius;                                              // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESphericalLimitType                                LimitType;                                                // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x01F8 (0x0268 - 0x0070)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	EAnimPhysSimSpaceType                              SimulationSpace;                                          // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FBoneReference                              RelativeSpaceBone;                                        // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bChain;                                                   // 0x0088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FBoneReference                              BoundBone;                                                // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              ChainEnd;                                                 // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     BoxExtents;                                               // 0x00B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     LocalJointOffset;                                         // 0x00BC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              GravityScale;                                             // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLinearSpring;                                            // 0x00CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAngularSpring;                                           // 0x00CD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	float                                              LinearSpringConstant;                                     // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularSpringConstant;                                    // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableWind;                                              // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWindWasEnabled;                                          // 0x00D9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	float                                              WindScale;                                                // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideLinearDamping;                                   // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              LinearDampingOverride;                                    // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideAngularDamping;                                  // 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              AngularDampingOverride;                                   // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideAngularBias;                                     // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              AngularBiasOverride;                                      // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDoUpdate;                                                // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDoEval;                                                  // 0x00F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	int                                                NumSolverIterationsPreUpdate;                             // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSolverIterationsPostUpdate;                            // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                          // 0x0104(0x005C) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bUsePlanarLimit;                                          // 0x0160(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x0168(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bUseSphericalLimits;                                      // 0x0178(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                          // 0x0180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	EAnimPhysCollisionType                             CollisionType;                                            // 0x0190(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              SphereCollisionRadius;                                    // 0x0194(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0198(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0xC4];                                      // 0x01A4(0x00C4) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0068 (0x00D8 - 0x0070)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0070(0x0010) (CPF_Edit)
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	class UCurveFloat*                                 DrivingCurve;                                             // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Multiplier;                                               // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0094(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              RangeMin;                                                 // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RangeMax;                                                 // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMin;                                              // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMax;                                              // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDrivenDestinationMode                             DestinationMode;                                          // 0x00A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FName                                       ParameterName;                                            // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x00B8(0x0010) (CPF_Edit)
	TEnumAsByte<EComponentType>                        TargetComponent;                                          // 0x00C8(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x00CC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x00CC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x00CC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x00CC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x00CC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x00CC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x00CC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x00CC(0x0001) (CPF_Edit)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x00CD(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	EDrivenBoneModificationMode                        ModificationMode;                                         // 0x00D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0028 (0x0098 - 0x0070)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bCopyTranslation;                                         // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x0091(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x0092(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                             // 0x0093(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0030 (0x00A0 - 0x0070)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bCopyTranslation;                                         // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x0091(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x0092(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECopyBoneDeltaMode                                 CopyMode;                                                 // 0x0093(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TranslationMultiplier;                                    // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationMultiplier;                                       // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0080 (0x00F0 - 0x0070)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	struct FTransform                                  EffectorTransform;                                        // 0x0070(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FBoneReference                              EffectorTransformBone;                                    // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x00B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FBoneReference                              TipBone;                                                  // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              RootBone;                                                 // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Precision;                                                // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxIterations;                                            // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableDebugDraw;                                         // 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0058 (0x00C8 - 0x0070)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              LeftHandFK;                                               // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              RightHandIK;                                              // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              LeftHandIK;                                               // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x0030
struct FAnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (CPF_Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (CPF_Edit)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                      // 0x0024(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableRotationLimit;                                     // 0x0025(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              MinRotationAngle;                                         // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableKneeTwistCorrection;                               // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x0070
struct FAnimLegIKData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0028 (0x0098 - 0x0070)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                           // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAnimLegIKDefinition>                LegsDefinition;                                           // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FAnimLegIKData>                      LegsData;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0030
struct FIKChain
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x001C
struct FIKChainLink
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x00E0 (0x0150 - 0x0070)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              LookAtBone;                                               // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       LookAtSocket;                                             // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x0098(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x00A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseLookUpAxis;                                           // 0x00A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               // 0x00A6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	float                                              LookAtClamp;                                              // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x00AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              InterpolationTime;                                        // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x00B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x97];                                      // 0x00B9(0x0097) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0040 (0x00B0 - 0x0070)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     Translation;                                              // 0x0080(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x008C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0098(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x00A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x00A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x00A6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x00A7(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x00A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0038 (0x00A8 - 0x0070)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            // 0x0070(0x0010) (CPF_Edit)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRelativeToRefPose;                                       // 0x0081(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	struct FVector                                     Translation;                                              // 0x0084(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0090(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x009C(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0028 (0x0098 - 0x0070)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              SourceBone;                                               // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Multiplier;                                               // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x0094(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x0095(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0030
struct FSplineIKCachedBoneData
{
	struct FQuat                                       OffsetFromBoneRotation;                                   // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FBoneReference                              Bone;                                                     // 0x0010(0x0010)
	int                                                RefSkeletonIndex;                                         // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoneLength;                                               // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x0170 (0x01E0 - 0x0070)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FBoneReference                              EndBone;                                                  // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EAxis>                                 BoneAxis;                                                 // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAutoCalculateSpline;                                     // 0x0091(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	int                                                PointCount;                                               // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTransform>                          ControlPoints;                                            // 0x0098(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
	float                                              Roll;                                                     // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TwistStart;                                               // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TwistEnd;                                                 // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FAlphaBlend                                 TwistBlend;                                               // 0x00B8(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Stretch;                                                  // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Offset;                                                   // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x70];                                      // 0x00F8(0x0070) MISSED OFFSET
	struct FSplineCurves                               BoneSpline;                                               // 0x0168(0x0060)
	float                                              OriginalSplineLength;                                     // 0x01C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	TArray<struct FSplineIKCachedBoneData>             CachedBoneReferences;                                     // 0x01D0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0058 (0x00C8 - 0x0070)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bLimitDisplacement;                                       // 0x0080(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              MaxDisplacement;                                          // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringDamping;                                            // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNoZSpring;                                               // 0x0094(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bTranslateX;                                              // 0x0095(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTranslateY;                                              // 0x0096(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTranslateZ;                                              // 0x0097(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRotateX;                                                 // 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRotateY;                                                 // 0x0099(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRotateZ;                                                 // 0x009A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D];                                      // 0x009B(0x002D) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0130 (0x01A0 - 0x0070)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TrailBone;                                                // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	int                                                ChainLength;                                              // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x0084(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInvertChainBoneAxis;                                     // 0x0085(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
	float                                              TrailRelaxation;                                          // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                     // 0x0090(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bLimitStretch;                                            // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              StretchLimit;                                             // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     FakeVelocity;                                             // 0x0110(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               bActorSpaceFakeVel;                                       // 0x011C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FBoneReference                              BaseJoint;                                                // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData04[0x70];                                      // 0x0130(0x0070) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.Axis
// 0x0010
struct FAxis
{
	struct FVector                                     Axis;                                                     // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	bool                                               bInLocalSpace;                                            // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0020
struct FReferenceBoneFrame
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0010) (CPF_Edit)
	struct FAxis                                       Axis;                                                     // 0x0010(0x0010) (CPF_Edit)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0078 (0x00E8 - 0x0070)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                // 0x0070(0x0020) (CPF_Edit)
	struct FReferenceBoneFrame                         TwistFrame;                                               // 0x0090(0x0020) (CPF_Edit)
	struct FAxis                                       TwistPlaneNormalAxis;                                     // 0x00B0(0x0010) (CPF_Edit)
	float                                              RangeMax;                                                 // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMin;                                              // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemappedMax;                                              // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FAnimCurveParam                             Curve;                                                    // 0x00D0(0x0010) (CPF_Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0050 (0x00C0 - 0x0070)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     EffectorLocation;                                         // 0x0080(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     JointTargetLocation;                                      // 0x008C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FName                                       EffectorSpaceBoneName;                                    // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAllowStretching : 1;                                     // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FVector2D                                   StretchLimits;                                            // 0x00A4(0x0008) (CPF_Deprecated, CPF_IsPlainOldData)
	float                                              StartStretchRatio;                                        // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxStretchScale;                                          // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x00B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x00B5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	struct FName                                       JointTargetSpaceBoneName;                                 // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
