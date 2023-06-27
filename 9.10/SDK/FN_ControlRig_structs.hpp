#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
	Runtime                        = 0,
	Editing                        = 1,
	Max                            = 2
};


// Enum ControlRig.EControlRigOpCode
enum class EControlRigOpCode : uint8_t
{
	Done                           = 0,
	Copy                           = 1,
	Exec                           = 2,
	Invalid                        = 3,
	EControlRigOpCode_MAX          = 4
};


// Enum ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8_t
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	Max                            = 2
};


// Enum ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
	Initial                        = 0,
	Current                        = 1,
	Max                            = 2
};


// Enum ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	BaseSpace                      = 2,
	BaseJoint                      = 3,
	Max                            = 4
};


// Enum ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
	Axes                           = 0,
	Max                            = 1
};


// Enum ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8_t
{
	Linear                         = 0,
	QuadraticEaseIn                = 1,
	QuadraticEaseOut               = 2,
	QuadraticEaseInOut             = 3,
	CubicEaseIn                    = 4,
	CubicEaseOut                   = 5,
	CubicEaseInOut                 = 6,
	QuarticEaseIn                  = 7,
	QuarticEaseOut                 = 8,
	QuarticEaseInOut               = 9,
	QuinticEaseIn                  = 10,
	QuinticEaseOut                 = 11,
	QuinticEaseInOut               = 12,
	SineEaseIn                     = 13,
	SineEaseOut                    = 14,
	SineEaseInOut                  = 15,
	CircularEaseIn                 = 16,
	CircularEaseOut                = 17,
	CircularEaseInOut              = 18,
	ExponentialEaseIn              = 19,
	ExponentialEaseOut             = 20,
	ExponentialEaseInOut           = 21,
	ElasticEaseIn                  = 22,
	ElasticEaseOut                 = 23,
	ElasticEaseInOut               = 24,
	BackEaseIn                     = 25,
	BackEaseOut                    = 26,
	BackEaseInOut                  = 27,
	BounceEaseIn                   = 28,
	BounceEaseOut                  = 29,
	BounceEaseInOut                = 30,
	EControlRigAnimEasingType_MAX  = 31
};


// Enum ControlRig.EControlRigRotationOrder
enum class EControlRigRotationOrder : uint8_t
{
	XYZ                            = 0,
	XZY                            = 1,
	YXZ                            = 2,
	YZX                            = 3,
	ZXY                            = 4,
	ZYX                            = 5,
	EControlRigRotationOrder_MAX   = 6
};


// Enum ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8_t
{
	Verlet                         = 0,
	SemiExplicitEuler              = 1,
	ECRSimPointIntegrateType_MAX   = 2
};


// Enum ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
	Distance                       = 0,
	DistanceFromA                  = 1,
	DistanceFromB                  = 2,
	Plane                          = 3,
	ECRSimConstraintType_MAX       = 4
};


// Enum ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
	Direction                      = 0,
	ECRSimPointForceType_MAX       = 1
};


// Enum ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
	Plane                          = 0,
	Sphere                         = 1,
	Cone                           = 2,
	ECRSimSoftCollisionType_MAX    = 3
};


// Enum ControlRig.EUnitExecutionType
enum class EUnitExecutionType : uint8_t
{
	Always                         = 0,
	InEditingTime                  = 1,
	Disable                        = 2,
	Initialize                     = 3,
	Max                            = 4
};


// Enum ControlRig.EAimMode
enum class EAimMode : uint8_t
{
	AimAtTarget                    = 0,
	OrientToTarget                 = 1,
	MAX                            = 2
};


// Enum ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	Max                            = 2
};


// Enum ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
	Point                          = 0,
	Vector                         = 1,
	Max                            = 2
};


// Enum ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
	Point                          = 0,
	Axes                           = 1,
	Box                            = 2,
	Max                            = 3
};


// Enum ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
	Front                          = 0,
	Stretched                      = 1,
	EControlRigCurveAlignment_MAX  = 2
};


// Enum ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
	Direction                      = 0,
	Location                       = 1,
	EControlRigVectorKind_MAX      = 2
};


// Enum ControlRig.EControlRigState
enum class EControlRigState : uint8_t
{
	Init                           = 0,
	Update                         = 1,
	Invalid                        = 2,
	EControlRigState_MAX           = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ControlRig.RigBone
// 0x00C0
struct FRigBone
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0020(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  GlobalTransform;                                          // 0x0050(0x0030) (Edit, Transient, EditConst, IsPlainOldData)
	struct FTransform                                  LocalTransform;                                           // 0x0080(0x0030) (Edit, Transient, EditConst, IsPlainOldData)
	TArray<int>                                        Dependents;                                               // 0x00B0(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct ControlRig.RigHierarchy
// 0x0060
struct FRigHierarchy
{
	TArray<struct FRigBone>                            Bones;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, int>                            NameToIndexMapping;                                       // 0x0010(0x0050) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigHierarchyContainer
// 0x00C0
struct FRigHierarchyContainer
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	struct FRigHierarchy                               BaseHierarchy;                                            // 0x0060(0x0060)
};

// ScriptStruct ControlRig.ControlRigOperator
// 0x0078
struct FControlRigOperator
{
	EControlRigOpCode                                  OpCode;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     PropertyPath1;                                            // 0x0008(0x0010) (ZeroConstructor, Deprecated)
	struct FString                                     PropertyPath2;                                            // 0x0018(0x0010) (ZeroConstructor, Deprecated)
	struct FCachedPropertyPath                         CachedPropertyPath1;                                      // 0x0028(0x0028) (Edit, EditConst)
	struct FCachedPropertyPath                         CachedPropertyPath2;                                      // 0x0050(0x0028) (Edit, EditConst)
};

// ScriptStruct ControlRig.ConstraintNodeData
// 0x00B0
struct FConstraintNodeData
{
	struct FTransform                                  RelativeParent;                                           // 0x0000(0x0030) (IsPlainOldData)
	struct FConstraintOffset                           ConstraintOffset;                                         // 0x0030(0x0060)
	struct FName                                       LinkedNode;                                               // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransformConstraint>                Constraints;                                              // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.AnimationHierarchy
// 0x0010 (0x0088 - 0x0078)
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
	TArray<struct FConstraintNodeData>                 UserData;                                                 // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.AnimNode_ControlRigBase
// 0x0018 (0x0028 - 0x0010)
struct FAnimNode_ControlRigBase : public FAnimNode_Base
{
	TArray<struct FName>                               RigHierarchyItemNameMapping;                              // 0x0010(0x0010) (ZeroConstructor, Transient)
	TWeakObjectPtr<class UNodeMappingContainer>        NodeMappingContainer;                                     // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ControlRig.AnimNode_ControlRig
// 0x0020 (0x0048 - 0x0028)
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
	struct FPoseLink                                   Source;                                                   // 0x0028(0x0010) (Edit)
	class UClass*                                      ControlRigClass;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UControlRig*                                 ControlRig;                                               // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// 0x0008 (0x0030 - 0x0028)
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
	TWeakObjectPtr<class UControlRig>                  ControlRig;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigBindingTemplate
// 0x0000 (0x00B0 - 0x00B0)
struct FControlRigBindingTemplate : public FMovieSceneSpawnSectionTemplate
{

};

// ScriptStruct ControlRig.ControlRigComponentInstanceData
// 0x0008 (0x0060 - 0x0058)
struct FControlRigComponentInstanceData : public FActorComponentInstanceData
{
	class UControlRig*                                 AnimControlRig;                                           // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigExecuteContext
// 0x0018
struct FControlRigExecuteContext
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ControlRig.CRFourPointBezier
// 0x0030
struct FCRFourPointBezier
{
	struct FVector                                     A;                                                        // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     C;                                                        // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     D;                                                        // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReference
// 0x0008
struct FControlRigSequenceObjectReference
{
	class UClass*                                      ControlRigClass;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// 0x0010
struct FControlRigSequenceObjectReferences
{
	TArray<struct FControlRigSequenceObjectReference>  Array;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// 0x0020
struct FControlRigSequenceObjectReferenceMap
{
	TArray<struct FGuid>                               BindingIds;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FControlRigSequenceObjectReferences> References;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
// 0x0170 (0x09C0 - 0x0850)
struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{
	unsigned char                                      UnknownData00[0x170];                                     // 0x0850(0x0170) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimContainer
// 0x0018
struct FCRSimContainer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              TimeStep;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedTime;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLeftForStep;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimLinearSpring
// 0x0010
struct FCRSimLinearSpring
{
	int                                                SubjectA;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubjectB;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Coefficient;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Equilibrium;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.CRSimPoint
// 0x0028
struct FCRSimPoint
{
	float                                              Mass;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinearDamping;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InheritMotion;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.CRSimPointConstraint
// 0x0024
struct FCRSimPointConstraint
{
	ECRSimConstraintType                               Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SubjectA;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubjectB;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DataA;                                                    // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DataB;                                                    // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.CRSimPointForce
// 0x0018
struct FCRSimPointForce
{
	ECRSimPointForceType                               ForceType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Vector;                                                   // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Coefficient;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bNormalize;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimSoftCollision
// 0x0050
struct FCRSimSoftCollision
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	ECRSimSoftCollisionType                            ShapeType;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MinimumDistance;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumDistance;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	EControlRigAnimEasingType                          FalloffType;                                              // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              Coefficient;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInverted;                                                // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0045(0x000B) MISSED OFFSET
};

// ScriptStruct ControlRig.CRSimPointContainer
// 0x0060 (0x0078 - 0x0018)
struct FCRSimPointContainer : public FCRSimContainer
{
	TArray<struct FCRSimPoint>                         Points;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FCRSimLinearSpring>                  Springs;                                                  // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FCRSimPointForce>                    Forces;                                                   // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FCRSimSoftCollision>                 CollisionVolumes;                                         // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FCRSimPointConstraint>               Constraints;                                              // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FCRSimPoint>                         PreviousStep;                                             // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigHierarchyRef
// 0x0018
struct FRigHierarchyRef
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	bool                                               bUseBaseHierarchy;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// 0x00D0 (0x00D8 - 0x0008)
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
	bool                                               bAdditive;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bApplyBoneFilter;                                         // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FInputBlendPose                             BoneFilter;                                               // 0x0010(0x0010)
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0020(0x00A0)
	struct FMovieSceneEvaluationOperand                Operand;                                                  // 0x00C0(0x0014)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit
// 0x0020
struct FRigUnit
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       RigUnitName;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FName                                       RigUnitStructName;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	EUnitExecutionType                                 ExecutionType;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnitMutable
// 0x0018 (0x0038 - 0x0020)
struct FRigUnitMutable : public FRigUnit
{
	struct FControlRigExecuteContext                   ExecuteContext;                                           // 0x0020(0x0018) (Transient)
};

// ScriptStruct ControlRig.RigUnit_SimBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_SimBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
// 0x0040 (0x0060 - 0x0020)
struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Minimum;                                                  // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Maximum;                                                  // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedMinimum;                                       // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedMaximum;                                       // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedMinimum;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedMaximum;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
// 0x00D0 (0x00F0 - 0x0020)
struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase
{
	struct FTransform                                  TargetValue;                                              // 0x0020(0x0030) (IsPlainOldData)
	struct FTransform                                  InitialValue;                                             // 0x0050(0x0030) (IsPlainOldData)
	float                                              Blend;                                                    // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0085(0x000B) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0090(0x0030) (IsPlainOldData)
	struct FTransform                                  AccumulatedValue;                                         // 0x00C0(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase
{
	struct FQuat                                       TargetValue;                                              // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       InitialValue;                                             // 0x0030(0x0010) (IsPlainOldData)
	float                                              Blend;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0045(0x000B) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0050(0x0010) (IsPlainOldData)
	struct FQuat                                       AccumulatedValue;                                         // 0x0060(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
// 0x0038 (0x0058 - 0x0020)
struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase
{
	struct FVector                                     TargetValue;                                              // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialValue;                                             // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Blend;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedValue;                                         // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase
{
	float                                              TargetValue;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InitialValue;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Blend;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedValue;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
// 0x00D0 (0x00F0 - 0x0020)
struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase
{
	struct FTransform                                  Multiplier;                                               // 0x0020(0x0030) (IsPlainOldData)
	struct FTransform                                  InitialValue;                                             // 0x0050(0x0030) (IsPlainOldData)
	bool                                               bFlipOrder;                                               // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0081(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0082(0x000E) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0090(0x0030) (IsPlainOldData)
	struct FTransform                                  AccumulatedValue;                                         // 0x00C0(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase
{
	struct FQuat                                       Multiplier;                                               // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       InitialValue;                                             // 0x0030(0x0010) (IsPlainOldData)
	bool                                               bFlipOrder;                                               // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0042(0x000E) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0050(0x0010) (IsPlainOldData)
	struct FQuat                                       AccumulatedValue;                                         // 0x0060(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
// 0x0038 (0x0058 - 0x0020)
struct FRigUnit_AccumulateVectorMul : public FRigUnit_SimBase
{
	struct FVector                                     Multiplier;                                               // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialValue;                                             // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedValue;                                         // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase
{
	float                                              Multiplier;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InitialValue;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedValue;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
// 0x0038 (0x0058 - 0x0020)
struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase
{
	struct FVector                                     Increment;                                                // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialValue;                                             // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedValue;                                         // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase
{
	float                                              Increment;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InitialValue;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIntegrateDeltaTime;                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedValue;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AddBoneTransform
// 0x0048 (0x0080 - 0x0038)
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (IsPlainOldData)
	bool                                               bPostMultiply;                                            // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_AimBone_Target
// 0x0028
struct FRigUnit_AimBone_Target
{
	float                                              Weight;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Axis;                                                     // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	EControlRigVectorKind                              Kind;                                                     // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FName                                       Space;                                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
// 0x0040
struct FRigUnit_AimBone_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_AimBone
// 0x00C8 (0x0100 - 0x0038)
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       Bone;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_AimBone_Target                     Primary;                                                  // 0x0040(0x0028)
	struct FRigUnit_AimBone_Target                     Secondary;                                                // 0x0068(0x0028)
	bool                                               bPropagateToChildren;                                     // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0091(0x000F) MISSED OFFSET
	struct FRigUnit_AimBone_DebugSettings              DebugSettings;                                            // 0x00A0(0x0040)
	int                                                BoneIndex;                                                // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PrimaryCachedSpaceName;                                   // 0x00E4(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PrimaryCachedSpaceIndex;                                  // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondaryCachedSpaceName;                                 // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SecondaryCachedSpaceIndex;                                // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.AimTarget
// 0x0050
struct FAimTarget
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FVector                                     AlignVector;                                              // 0x0040(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AimConstraint
// 0x0058 (0x0090 - 0x0038)
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EAimMode                                           AimMode;                                                  // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAimMode                                           UpMode;                                                   // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	struct FVector                                     AimVector;                                                // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FAimTarget>                          AimTargets;                                               // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<struct FAimTarget>                          UpTargets;                                                // 0x0070(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_AnimBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_AnimEasing
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	EControlRigAnimEasingType                          Type;                                                     // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              SourceMinimum;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimEasingType
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{
	EControlRigAnimEasingType                          Type;                                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
// 0x00A8 (0x00C8 - 0x0020)
struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0028(0x0088)
	float                                              SourceMinimum;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_AnimRichCurve
// 0x0088 (0x00A8 - 0x0020)
struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0020(0x0088)
};

// ScriptStruct ControlRig.RigUnit_ApplyFK
// 0x0088 (0x00C0 - 0x0038)
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (IsPlainOldData)
	struct FTransformFilter                            Filter;                                                   // 0x0070(0x0009) (Edit)
	EApplyTransformMode                                ApplyTransformMode;                                       // 0x0079(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETransformSpaceMode                                ApplyTransformSpace;                                      // 0x007A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x0080(0x0030) (Edit, IsPlainOldData)
	struct FName                                       BaseJoint;                                                // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BeginExecution
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_BeginExecution : public FRigUnit
{
	struct FControlRigExecuteContext                   ExecuteContext;                                           // 0x0020(0x0018) (Edit, Transient)
};

// ScriptStruct ControlRig.BlendTarget
// 0x0040
struct FBlendTarget
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	float                                              Weight;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BlendTransform
// 0x0070 (0x0090 - 0x0020)
struct FRigUnit_BlendTransform : public FRigUnit
{
	struct FTransform                                  Source;                                                   // 0x0020(0x0030) (IsPlainOldData)
	TArray<struct FBlendTarget>                        Targets;                                                  // 0x0050(0x0010) (ZeroConstructor)
	struct FTransform                                  Result;                                                   // 0x0060(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
// 0x000C
struct FRigUnit_BoneHarmonics_BoneTarget
{
	struct FName                                       Bone;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_BoneHarmonics
// 0x0080 (0x00B8 - 0x0038)
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
	TArray<struct FRigUnit_BoneHarmonics_BoneTarget>   Bones;                                                    // 0x0038(0x0010) (ZeroConstructor)
	struct FVector                                     WaveSpeed;                                                // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveFrequency;                                            // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveAmplitude;                                            // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveOffset;                                               // 0x006C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveNoise;                                                // 0x0078(0x000C) (ZeroConstructor, IsPlainOldData)
	EControlRigAnimEasingType                          WaveEase;                                                 // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              WaveMinimum;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaveMaximum;                                              // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	EControlRigRotationOrder                           RotationOrder;                                            // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	TArray<int>                                        BoneIndices;                                              // 0x0098(0x0010) (ZeroConstructor)
	struct FVector                                     WaveTime;                                                 // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BoneName
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_BoneName : public FRigUnit
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
// 0x0028
struct FRigUnit_ChainHarmonics_Reach
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     ReachTarget;                                              // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReachAxis;                                                // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ReachMinimum;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReachMaximum;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	EControlRigAnimEasingType                          ReachEase;                                                // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
// 0x0040
struct FRigUnit_ChainHarmonics_Wave
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     WaveFrequency;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveAmplitude;                                            // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveOffset;                                               // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaveNoise;                                                // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              WaveMinimum;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaveMaximum;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	EControlRigAnimEasingType                          WaveEase;                                                 // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
// 0x003C
struct FRigUnit_ChainHarmonics_Pendulum
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              PendulumStiffness;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PendulumGravity;                                          // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              PendulumBlend;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PendulumDrag;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PendulumMinimum;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PendulumMaximum;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	EControlRigAnimEasingType                          PendulumEase;                                             // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     UnwindAxis;                                               // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              UnwindMinimum;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnwindMaximum;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ChainHarmonics
// 0x0208 (0x0240 - 0x0038)
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       ChainRoot;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Speed;                                                    // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRigUnit_ChainHarmonics_Reach               Reach;                                                    // 0x004C(0x0028)
	struct FRigUnit_ChainHarmonics_Wave                Wave;                                                     // 0x0074(0x0040)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          WaveCurve;                                                // 0x00B8(0x0088)
	struct FRigUnit_ChainHarmonics_Pendulum            Pendulum;                                                 // 0x0140(0x003C)
	bool                                               bDrawDebug;                                               // 0x017C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	struct FTransform                                  DrawWorldOffset;                                          // 0x0180(0x0030) (IsPlainOldData)
	struct FVector                                     Time;                                                     // 0x01B0(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	TArray<int>                                        Bones;                                                    // 0x01C0(0x0010) (ZeroConstructor)
	TArray<float>                                      Ratio;                                                    // 0x01D0(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             LocalTip;                                                 // 0x01E0(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             PendulumTip;                                              // 0x01F0(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             PendulumPosition;                                         // 0x0200(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             PendulumVelocity;                                         // 0x0210(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             HierarchyLine;                                            // 0x0220(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             VelocityLines;                                            // 0x0230(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.RigUnit_Control
// 0x00D0 (0x00F0 - 0x0020)
struct FRigUnit_Control : public FRigUnit
{
	struct FEulerTransform                             Transform;                                                // 0x0020(0x0024) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FTransform                                  Base;                                                     // 0x0050(0x0030) (IsPlainOldData)
	struct FTransform                                  InitTransform;                                            // 0x0080(0x0030) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x00B0(0x0030) (IsPlainOldData)
	struct FTransformFilter                            Filter;                                                   // 0x00E0(0x0009)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// 0x0000 (0x00F0 - 0x00F0)
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{

};

// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// 0x0040 (0x0060 - 0x0020)
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
	struct FQuat                                       Input;                                                    // 0x0020(0x0010) (IsPlainOldData)
	struct FVector                                     TwistAxis;                                                // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FQuat                                       Swing;                                                    // 0x0040(0x0010) (IsPlainOldData)
	struct FQuat                                       Twist;                                                    // 0x0050(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
	struct FQuat                                       Input;                                                    // 0x0020(0x0010) (IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
	struct FRotator                                    Input;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
	struct FVector                                     Input;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
	struct FVector                                     Input;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Result;                                                   // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
	struct FQuat                                       Input;                                                    // 0x0020(0x0010) (IsPlainOldData)
	struct FRotator                                    Result;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_ConvertRotation
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_ConvertRotation : public FRigUnit
{
	struct FRotator                                    Input;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// 0x0000 (0x0040 - 0x0040)
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{

};

// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// 0x0060 (0x0080 - 0x0020)
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
	struct FEulerTransform                             Input;                                                    // 0x0020(0x0024)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0050(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_ConvertTransform
// 0x0060 (0x0080 - 0x0020)
struct FRigUnit_ConvertTransform : public FRigUnit
{
	struct FTransform                                  Input;                                                    // 0x0020(0x0030) (IsPlainOldData)
	struct FEulerTransform                             Result;                                                   // 0x0050(0x0024)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_CreateHierarchy
// 0x0038 (0x0058 - 0x0020)
struct FRigUnit_CreateHierarchy : public FRigUnit
{
	struct FRigHierarchyRef                            NewHierarchy;                                             // 0x0020(0x0018)
	struct FRigHierarchyRef                            SourceHierarchy;                                          // 0x0038(0x0018)
	struct FName                                       Root;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_DebugBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_DebugBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_DebugBezier
// 0x0098 (0x00D0 - 0x0038)
struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0038(0x0030)
	float                                              MinimumU;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumU;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // 0x0090(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugHierarchy
// 0x0068 (0x00A0 - 0x0038)
struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
	TEnumAsByte<EControlRigDrawHierarchyMode>          Mode;                                                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0060(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0091(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugLine
// 0x0078 (0x00B0 - 0x0038)
struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
	struct FVector                                     A;                                                        // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0064(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0070(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugLineStrip
// 0x0078 (0x00B0 - 0x0038)
struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
	TArray<struct FVector>                             Points;                                                   // 0x0038(0x0010) (ZeroConstructor)
	struct FLinearColor                                Color;                                                    // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x005C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0070(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugPointMutable
// 0x0078 (0x00B0 - 0x0038)
struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
	struct FVector                                     Vector;                                                   // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	ERigUnitDebugPointMode                             Mode;                                                     // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0070(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugPoint
// 0x0070 (0x0090 - 0x0020)
struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
	struct FVector                                     Vector;                                                   // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	ERigUnitDebugPointMode                             Mode;                                                     // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // 0x0050(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0081(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugArc
// 0x00A8 (0x00E0 - 0x0038)
struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinimumDegrees;                                           // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumDegrees;                                           // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Detail;                                                   // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0094(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x00A0(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00D1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugRectangle
// 0x0098 (0x00D0 - 0x0038)
struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // 0x0090(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00C1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// 0x0088 (0x00C0 - 0x0038)
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0038(0x0010) (ZeroConstructor)
	ERigUnitDebugTransformMode                         Mode;                                                     // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0064(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0070(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TArray<struct FTransform>                          DrawTransforms;                                           // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// 0x00A8 (0x00E0 - 0x0038)
struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (IsPlainOldData)
	ERigUnitDebugTransformMode                         Mode;                                                     // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0074(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x008C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x00A0(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00D1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DebugTransform
// 0x00A0 (0x00C0 - 0x0020)
struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (IsPlainOldData)
	ERigUnitDebugTransformMode                         Mode;                                                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0054(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x006C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0080(0x0030) (IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00B1(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
// 0x00C0 (0x00E0 - 0x0020)
struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
	struct FTransform                                  Value;                                                    // 0x0020(0x0030) (IsPlainOldData)
	struct FTransform                                  Delta;                                                    // 0x0050(0x0030) (IsPlainOldData)
	struct FTransform                                  PreviousValue;                                            // 0x0080(0x0030) (IsPlainOldData)
	struct FTransform                                  Cache;                                                    // 0x00B0(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
// 0x0040 (0x0060 - 0x0020)
struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
	struct FQuat                                       Value;                                                    // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       Delta;                                                    // 0x0030(0x0010) (IsPlainOldData)
	struct FQuat                                       PreviousValue;                                            // 0x0040(0x0010) (IsPlainOldData)
	struct FQuat                                       Cache;                                                    // 0x0050(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Delta;                                                    // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PreviousValue;                                            // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Cache;                                                    // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousValue;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Cache;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
// 0x0020
struct FRigUnit_DistributeRotation_Rotation
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (IsPlainOldData)
	float                                              Ratio;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_DistributeRotation
// 0x0078 (0x00B0 - 0x0038)
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                                // 0x0048(0x0010) (ZeroConstructor)
	EControlRigAnimEasingType                          RotationEaseType;                                         // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	TArray<int>                                        BoneIndices;                                              // 0x0060(0x0010) (ZeroConstructor)
	TArray<int>                                        BoneRotationA;                                            // 0x0070(0x0010) (ZeroConstructor)
	TArray<int>                                        BoneRotationB;                                            // 0x0080(0x0010) (ZeroConstructor)
	TArray<float>                                      BoneRotationT;                                            // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          BoneLocalTransforms;                                      // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct ControlRig.StructReference
// 0x0008
struct FStructReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnitReference_Example
// 0x0000 (0x0008 - 0x0008)
struct FRigUnitReference_Example : public FStructReference
{

};

// ScriptStruct ControlRig.RigUnit_Example
// 0x0098 (0x00D0 - 0x0038)
struct FRigUnit_Example : public FRigUnitMutable
{
	struct FString                                     TestInputString;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FEulerTransform                             TestInOutTransform;                                       // 0x0048(0x0024) (Edit, EditConst)
	struct FVector                                     TestInputVector;                                          // 0x006C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TestInputInteger;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class UObject*                                     TestInputObject;                                          // 0x0080(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     TestOutputVector;                                         // 0x0088(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TestInputFloat;                                           // 0x0094(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<float>                                      TestInputFloatArray;                                      // 0x0098(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FTransform>                          TestInputTransformArray;                                  // 0x00A8(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              TestOutputFloat;                                          // 0x00B8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FRigUnitReference_Example                   TestUnitReferenceInput;                                   // 0x00C0(0x0008)
	struct FRigUnitReference_Example                   TestUnitReferenceOutput;                                  // 0x00C8(0x0008)
};

// ScriptStruct ControlRig.RigUnit_FABRIK
// 0x0078 (0x00B0 - 0x0038)
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectorBone;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  EffectorTransform;                                        // 0x0050(0x0030) (IsPlainOldData)
	float                                              Precision;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0088(0x0028) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
// 0x0020
struct FRigUnit_FitChainToCurve_Rotation
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (IsPlainOldData)
	float                                              Ratio;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
// 0x0060
struct FRigUnit_FitChainToCurve_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CurveColor;                                               // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SegmentsColor;                                            // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0030(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_FitChainToCurve
// 0x0198 (0x01D0 - 0x0038)
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0048(0x0030)
	EControlRigCurveAlignment                          Alignment;                                                // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              Minimum;                                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SamplingPrecision;                                        // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0088(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x0094(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVectorPosition;                                       // 0x00A0(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_FitChainToCurve_Rotation>   Rotations;                                                // 0x00B0(0x0010) (ZeroConstructor)
	EControlRigAnimEasingType                          RotationEaseType;                                         // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x00C2(0x000E) MISSED OFFSET
	struct FRigUnit_FitChainToCurve_DebugSettings      DebugSettings;                                            // 0x00D0(0x0060)
	float                                              ChainLength;                                              // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	TArray<struct FVector>                             BonePositions;                                            // 0x0138(0x0010) (ZeroConstructor)
	TArray<float>                                      BoneSegments;                                             // 0x0148(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             CurvePositions;                                           // 0x0158(0x0010) (ZeroConstructor)
	TArray<float>                                      CurveSegments;                                            // 0x0168(0x0010) (ZeroConstructor)
	TArray<int>                                        BoneIndices;                                              // 0x0178(0x0010) (ZeroConstructor)
	TArray<int>                                        BoneRotationA;                                            // 0x0188(0x0010) (ZeroConstructor)
	TArray<int>                                        BoneRotationB;                                            // 0x0198(0x0010) (ZeroConstructor)
	TArray<float>                                      BoneRotationT;                                            // 0x01A8(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          BoneLocalTransforms;                                      // 0x01B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MapRange_Float
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_MapRange_Float : public FRigUnit
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinIn;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxIn;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinOut;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxOut;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_Clamp_Float
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_Clamp_Float : public FRigUnit
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
	float                                              Argument0;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Argument1;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{

};

// ScriptStruct ControlRig.RigUnit_GetBoneTransform
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_GetBoneTransform : public FRigUnit
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	EBoneGetterSetterMode                              Space;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (IsPlainOldData)
	int                                                CachedBoneIndex;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetDeltaTime
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
	float                                              Result;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	EBoneGetterSetterMode                              Space;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (IsPlainOldData)
	int                                                CachedBoneIndex;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_GetJointTransform
// 0x0088 (0x00C0 - 0x0038)
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	ETransformGetterType                               Type;                                                     // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	ETransformSpaceMode                                TransformSpace;                                           // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0042(0x000E) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x0050(0x0030) (IsPlainOldData)
	struct FName                                       BaseJoint;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	struct FTransform                                  Output;                                                   // 0x0090(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
	struct FName                                       Bone;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (IsPlainOldData)
	int                                                CachedBoneIndex;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedSpaceIndex;                                         // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_HighlevelBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_HighlevelBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_KalmanTransform
// 0x0090 (0x00B0 - 0x0020)
struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
	struct FTransform                                  Value;                                                    // 0x0020(0x0030) (IsPlainOldData)
	int                                                BufferSize;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0060(0x0030) (IsPlainOldData)
	TArray<struct FTransform>                          Buffer;                                                   // 0x0090(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00A4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_KalmanVector
// 0x0038 (0x0058 - 0x0020)
struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Buffer;                                                   // 0x0040(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_KalmanFloat
// 0x0028 (0x0048 - 0x0020)
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<float>                                      Buffer;                                                   // 0x0030(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathBase : public FRigUnit
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{
	bool                                               A;                                                        // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolEquals
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
	bool                                               A;                                                        // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{
	bool                                               A;                                                        // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolOr
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolNand
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolAnd
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
	bool                                               Value;                                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolNot
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolConstant
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{
	bool                                               Value;                                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              C;                                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AlphaAngle;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BetaAngle;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GammaAngle;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathFloatAtan
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAcos
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAsin
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatTan
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatCos
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSin
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatRad
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatDeg
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
	bool                                               Condition;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              IfTrue;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IfFalse;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatLess
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatGreater
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatEquals
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatRemap
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceMinimum;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SourceMaximum;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMinimum;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetMaximum;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bClamp;                                                   // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatLerp
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathFloatClamp
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathFloatSign
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatRound
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatCeil
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatFloor
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAbs
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatNegate
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSqrt
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{
	float                                              A;                                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatPow
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMax
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMin
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMod
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatDiv
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatMul
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatSub
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatAdd
// 0x0000 (0x0030 - 0x0030)
struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstant
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathFloatConstPi
// 0x0000 (0x0028 - 0x0028)
struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
// 0x0008 (0x0028 - 0x0020)
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
	EControlRigRotationOrder                           RotationOrder;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
// 0x0040 (0x0060 - 0x0020)
struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       Input;                                                    // 0x0020(0x0010) (IsPlainOldData)
	struct FVector                                     TwistAxis;                                                // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FQuat                                       Swing;                                                    // 0x0040(0x0010) (IsPlainOldData)
	struct FQuat                                       Twist;                                                    // 0x0050(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       Quaternion;                                               // 0x0020(0x0010) (IsPlainOldData)
	TEnumAsByte<EAxis>                                 Axis;                                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       Quaternion;                                               // 0x0020(0x0010) (IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       Value;                                                    // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
// 0x0000 (0x0040 - 0x0040)
struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionDot
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       A;                                                        // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0010) (IsPlainOldData)
	float                                              Result;                                                   // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
// 0x0040 (0x0060 - 0x0020)
struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
	bool                                               Condition;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FQuat                                       IfTrue;                                                   // 0x0030(0x0010) (IsPlainOldData)
	struct FQuat                                       IfFalse;                                                  // 0x0040(0x0010) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0050(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       A;                                                        // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0010) (IsPlainOldData)
	bool                                               Result;                                                   // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       A;                                                        // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0010) (IsPlainOldData)
	bool                                               Result;                                                   // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
// 0x0040 (0x0060 - 0x0020)
struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       A;                                                        // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0010) (IsPlainOldData)
	float                                              T;                                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0050(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
// 0x0000 (0x0040 - 0x0040)
struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       A;                                                        // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       B;                                                        // 0x0030(0x0010) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0040(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionMul
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       Value;                                                    // 0x0020(0x0010) (IsPlainOldData)
	struct FRotator                                    Result;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       Value;                                                    // 0x0020(0x0010) (IsPlainOldData)
	EControlRigRotationOrder                           RotationOrder;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
	struct FQuat                                       Value;                                                    // 0x0020(0x0010) (IsPlainOldData)
	struct FVector                                     Axis;                                                     // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0040(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
	struct FRotator                                    Rotator;                                                  // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
	struct FVector                                     Euler;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	EControlRigRotationOrder                           RotationOrder;                                            // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
	struct FVector                                     Axis;                                                     // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x005C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x005C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
// 0x00A0 (0x00C0 - 0x0020)
struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
	bool                                               Condition;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  IfTrue;                                                   // 0x0030(0x0030) (IsPlainOldData)
	struct FTransform                                  IfFalse;                                                  // 0x0060(0x0030) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0090(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformLerp
// 0x00A0 (0x00C0 - 0x0020)
struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
	struct FTransform                                  A;                                                        // 0x0020(0x0030) (IsPlainOldData)
	struct FTransform                                  B;                                                        // 0x0050(0x0030) (IsPlainOldData)
	float                                              T;                                                        // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0090(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
// 0x0060 (0x0080 - 0x0020)
struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
	struct FTransform                                  Value;                                                    // 0x0020(0x0030) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0050(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformInverse
// 0x0000 (0x0080 - 0x0080)
struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
// 0x0090 (0x00B0 - 0x0020)
struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
	struct FTransform                                  Global;                                                   // 0x0020(0x0030) (IsPlainOldData)
	struct FTransform                                  Parent;                                                   // 0x0050(0x0030) (IsPlainOldData)
	struct FTransform                                  Local;                                                    // 0x0080(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
// 0x0090 (0x00B0 - 0x0020)
struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
	struct FTransform                                  A;                                                        // 0x0020(0x0030) (IsPlainOldData)
	struct FTransform                                  B;                                                        // 0x0050(0x0030) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0080(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathTransformMul
// 0x0000 (0x00B0 - 0x00B0)
struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
// 0x0060 (0x0080 - 0x0020)
struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
	struct FTransform                                  Value;                                                    // 0x0020(0x0030) (IsPlainOldData)
	struct FEulerTransform                             Result;                                                   // 0x0050(0x0024)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
// 0x0060 (0x0080 - 0x0020)
struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
	struct FEulerTransform                             EulerTransform;                                           // 0x0020(0x0024)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0050(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBase
// 0x0000 (0x0020 - 0x0020)
struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0020(0x0030)
};

// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0020(0x0030)
	float                                              T;                                                        // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorParallel
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorAngle
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorMirror
// 0x0028 (0x0048 - 0x0020)
struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorUnit
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorDot
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
// 0x0028 (0x0048 - 0x0020)
struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorCross
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorDistance
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorLength
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorRad
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorDeg
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
// 0x0028 (0x0048 - 0x0020)
struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
	bool                                               Condition;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     IfTrue;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     IfFalse;                                                  // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
// 0x0018 (0x0038 - 0x0020)
struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Tolerance;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorEquals
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorRemap
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceMinimum;                                            // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceMaximum;                                            // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetMinimum;                                            // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetMaximum;                                            // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bClamp;                                                   // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FVector                                     Result;                                                   // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_MathVectorLerp
// 0x0028 (0x0048 - 0x0020)
struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
	struct FVector                                     A;                                                        // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     B;                                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorClamp
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Minimum;                                                  // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Maximum;                                                  // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MathVectorSign
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorRound
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorCeil
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorFloor
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorAbs
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorNegate
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMax
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMin
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMod
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorDiv
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorMul
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorSub
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorAdd
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
{

};

// ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MergeHierarchy
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_MergeHierarchy : public FRigUnit
{
	struct FRigHierarchyRef                            TargetHierarchy;                                          // 0x0020(0x0018)
	struct FRigHierarchyRef                            SourceHierarchy;                                          // 0x0038(0x0018)
};

// ScriptStruct ControlRig.RigUnit_NoiseVector
// 0x0048 (0x0068 - 0x0020)
struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
	struct FVector                                     Position;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Speed;                                                    // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Frequency;                                                // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Time;                                                     // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_NoiseFloat
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SimBaseMutable
// 0x0000 (0x0038 - 0x0038)
struct FRigUnit_SimBaseMutable : public FRigUnitMutable
{

};

// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
// 0x0014
struct FRigUnit_PointSimulation_BoneTarget
{
	struct FName                                       Bone;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TranslationPoint;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PrimaryAimPoint;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SecondaryAimPoint;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
// 0x0050
struct FRigUnit_PointSimulation_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawPointsAsSpheres;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // 0x0020(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_PointSimulation
// 0x0198 (0x01D0 - 0x0038)
struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
	TArray<struct FCRSimPoint>                         Points;                                                   // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FCRSimLinearSpring>                  Links;                                                    // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FCRSimPointForce>                    Forces;                                                   // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FCRSimSoftCollision>                 CollisionVolumes;                                         // 0x0068(0x0010) (ZeroConstructor)
	float                                              SimulatedStepsPerSecond;                                  // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	ECRSimPointIntegrateType                           IntegratorType;                                           // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              VerletBlend;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;                                              // 0x0088(0x0010) (ZeroConstructor)
	bool                                               bLimitLocalPosition;                                      // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	struct FVector                                     PrimaryAimAxis;                                           // 0x009C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAimAxis;                                         // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
	struct FRigUnit_PointSimulation_DebugSettings      DebugSettings;                                            // 0x00C0(0x0050)
	struct FCRFourPointBezier                          Bezier;                                                   // 0x0110(0x0030)
	struct FCRSimPointContainer                        Simulation;                                               // 0x0140(0x0078)
	TArray<int>                                        BoneIndices;                                              // 0x01B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
	struct FVector                                     Axis;                                                     // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FQuat                                       Argument;                                                 // 0x0030(0x0010) (IsPlainOldData)
	float                                              Angle;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
	struct FVector                                     Axis;                                                     // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
	struct FQuat                                       Argument;                                                 // 0x0020(0x0010) (IsPlainOldData)
	struct FVector                                     Axis;                                                     // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
	struct FQuat                                       Argument;                                                 // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_InverseQuaterion
// 0x0000 (0x0040 - 0x0040)
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{

};

// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
	struct FQuat                                       Argument0;                                                // 0x0020(0x0010) (IsPlainOldData)
	struct FQuat                                       Argument1;                                                // 0x0030(0x0010) (IsPlainOldData)
	struct FQuat                                       Result;                                                   // 0x0040(0x0010) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// 0x0000 (0x0050 - 0x0050)
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{

};

// ScriptStruct ControlRig.RigUnit_RandomVector
// 0x0030 (0x0050 - 0x0020)
struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
	int                                                Seed;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastResult;                                               // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                LastSeed;                                                 // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_RandomFloat
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
	int                                                Seed;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastResult;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastSeed;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SetBoneRotation
// 0x0028 (0x0060 - 0x0038)
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // 0x0040(0x0010) (IsPlainOldData)
	EBoneGetterSetterMode                              Space;                                                    // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetBoneTransform
// 0x0048 (0x0080 - 0x0038)
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (IsPlainOldData)
	EBoneGetterSetterMode                              Space;                                                    // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// 0x0020 (0x0058 - 0x0038)
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	EBoneGetterSetterMode                              Space;                                                    // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// 0x0058 (0x0090 - 0x0038)
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
	struct FName                                       Bone;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Space;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0050(0x0030) (IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                CachedBoneIndex;                                          // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedSpaceIndex;                                         // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
// 0x0050
struct FRigUnit_SpringIK_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0020(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_SpringIK
// 0x0158 (0x0190 - 0x0038)
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       StartBone;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              HierarchyStrength;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EffectorStrength;                                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RootStrength;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVector;                                               // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bFlipPolePlane;                                           // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	EControlRigVectorKind                              PoleVectorKind;                                           // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
	struct FName                                       PoleVectorSpace;                                          // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0070(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x007C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bLiveSimulation;                                          // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                Iterations;                                               // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bLimitLocalPosition;                                      // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x0092(0x000E) MISSED OFFSET
	struct FRigUnit_SpringIK_DebugSettings             DebugSettings;                                            // 0x00A0(0x0050)
	TArray<int>                                        BoneIndices;                                              // 0x00F0(0x0010) (ZeroConstructor)
	int                                                PoleVectorIndex;                                          // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          Transforms;                                               // 0x0108(0x0010) (ZeroConstructor)
	struct FCRSimPointContainer                        Simulation;                                               // 0x0118(0x0078)
};

// ScriptStruct ControlRig.RigUnit_Timeline
// 0x0010 (0x0030 - 0x0020)
struct FRigUnit_Timeline : public FRigUnit_SimBase
{
	float                                              Speed;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedValue;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
// 0x00A0 (0x00C0 - 0x0020)
struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
	struct FTransform                                  Value;                                                    // 0x0020(0x0030) (IsPlainOldData)
	float                                              SecondsAgo;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeRange;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FTransform                                  Result;                                                   // 0x0060(0x0030) (IsPlainOldData)
	TArray<struct FTransform>                          Buffer;                                                   // 0x0090(0x0010) (ZeroConstructor)
	TArray<float>                                      DeltaTimes;                                               // 0x00A0(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetVector
// 0x0050 (0x0070 - 0x0020)
struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
	struct FVector                                     Value;                                                    // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              SecondsAgo;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeRange;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Buffer;                                                   // 0x0048(0x0010) (ZeroConstructor)
	TArray<float>                                      DeltaTimes;                                               // 0x0058(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
// 0x0040 (0x0060 - 0x0020)
struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
	float                                              Value;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondsAgo;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BufferSize;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeRange;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<float>                                      Buffer;                                                   // 0x0038(0x0010) (ZeroConstructor)
	TArray<float>                                      DeltaTimes;                                               // 0x0048(0x0010) (ZeroConstructor)
	int                                                LastInsertIndex;                                          // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// 0x0090 (0x00B0 - 0x0020)
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
	struct FTransform                                  Argument0;                                                // 0x0020(0x0030) (IsPlainOldData)
	struct FTransform                                  Argument1;                                                // 0x0050(0x0030) (IsPlainOldData)
	struct FTransform                                  Result;                                                   // 0x0080(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// 0x0000 (0x00B0 - 0x00B0)
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{

};

// ScriptStruct ControlRig.RigUnit_MultiplyTransform
// 0x0000 (0x00B0 - 0x00B0)
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{

};

// ScriptStruct ControlRig.ConstraintTarget
// 0x0040
struct FConstraintTarget
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	float                                              Weight;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaintainOffset;                                          // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransformFilter                            Filter;                                                   // 0x0035(0x0009) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TransformConstraint
// 0x00C8 (0x0100 - 0x0038)
struct FRigUnit_TransformConstraint : public FRigUnitMutable
{
	struct FName                                       Joint;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ETransformSpaceMode                                BaseTransformSpace;                                       // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x0050(0x0030) (Edit, IsPlainOldData)
	struct FName                                       BaseJoint;                                                // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FConstraintTarget>                   Targets;                                                  // 0x0088(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0098(0x0068) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// 0x01B8 (0x01F0 - 0x0038)
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
	struct FName                                       StartJoint;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndJoint;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePoleTarget;                                           // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector                                     PoleTarget;                                               // 0x004C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Spin;                                                     // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FTransform                                  EndEffector;                                              // 0x0060(0x0030) (Edit, IsPlainOldData)
	float                                              IKBlend;                                                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
	struct FTransform                                  StartJointFKTransform;                                    // 0x00A0(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  MidJointFKTransform;                                      // 0x00D0(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  EndJointFKTransform;                                      // 0x0100(0x0030) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC0];                                      // 0x0130(0x00C0) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// 0x0040
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  WorldOffset;                                              // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// 0x00E8 (0x0120 - 0x0038)
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
	struct FName                                       BoneA;                                                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneB;                                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectorBone;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Effector;                                                 // 0x0050(0x0030) (IsPlainOldData)
	struct FVector                                     PrimaryAxis;                                              // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondaryAxis;                                            // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PoleVector;                                               // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	EControlRigVectorKind                              PoleVectorKind;                                           // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	struct FName                                       PoleVectorSpace;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStretch;                                           // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              StretchStartRatio;                                        // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StretchMaximumRatio;                                      // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoneALength;                                              // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoneBLength;                                              // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPropagateToChildren;                                     // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FRigUnit_TwoBoneIKSimple_DebugSettings      DebugSettings;                                            // 0x00D0(0x0040)
	int                                                BoneAIndex;                                               // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BoneBIndex;                                               // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EffectorBoneIndex;                                        // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PoleVectorSpaceIndex;                                     // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// 0x0020 (0x0040 - 0x0020)
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
	struct FVector                                     Argument0;                                                // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Argument1;                                                // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// 0x0028 (0x0048 - 0x0020)
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
	struct FVector                                     Argument0;                                                // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Argument1;                                                // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Result;                                                   // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Add_VectorVector
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// 0x0000 (0x0048 - 0x0048)
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{

};

// ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
// 0x0068 (0x0088 - 0x0020)
struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
	struct FVector                                     Target;                                                   // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damp;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Blend;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FCRSimPoint                                 Point;                                                    // 0x005C(0x0028)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
