#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8_t
{
	PointImplicit                  = 0,
	DelaunayTriangulation          = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None                           = 4,
	EClusterUnionMethod_MAX        = 5
};


// Enum Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask            = 0,
	Field_RadialFalloff            = 1,
	Field_UniformVector            = 2,
	Field_RadialVector             = 3,
	Field_RadialVectorFalloff      = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5,
	Field_MAX                      = 6
};


// Enum Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
	Field_None                     = 0,
	Field_DynamicState             = 1,
	Field_LinearForce              = 2,
	Field_ExternalClusterStrain    = 3,
	Field_Kill                     = 4,
	Field_LinearVelocity           = 5,
	Field_AngularVelociy           = 6,
	Field_AngularTorque            = 7,
	Field_InternalClusterStrain    = 8,
	Field_DisableThreshold         = 9,
	Field_SleepingThreshold        = 10,
	Field_PositionStatic           = 11,
	Field_PositionAnimated         = 12,
	Field_PositionTarget           = 13,
	Field_DynamicConstraint        = 14,
	Field_CollisionGroup           = 15,
	Field_ActivateDisabled         = 16,
	Field_PhysicsType_Max          = 17
};


// Enum Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
	Field_FallOff_None             = 0,
	Field_Falloff_Linear           = 1,
	Field_Falloff_Inverse          = 2,
	Field_Falloff_Squared          = 3,
	Field_Falloff_Logarithmic      = 4,
	Field_Falloff_Max              = 5
};


// Enum Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal       = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum       = 2,
	Field_Resolution_Max           = 3
};


// Enum Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside           = 0,
	Field_Culling_Outside          = 1,
	Field_Culling_Operation_Max    = 2,
	Field_Culling_MAX              = 3
};


// Enum Chaos.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
	Field_Multiply                 = 0,
	Field_Divide                   = 1,
	Field_Add                      = 2,
	Field_Substract                = 3,
	Field_Operation_Max            = 4
};


// Enum Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always               = 0,
	Field_Set_IFF_NOT_Interior     = 1,
	Field_Set_IFF_NOT_Exterior     = 2,
	Field_MaskCondition_Max        = 3
};


// Enum Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max                      = 2
};


// Enum Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None    = 1,
	Chaos_Max                      = 2
};


// Enum Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	Chaos_AngularVelocity          = 0,
	Chaos_DynamicState             = 1,
	Chaos_LinearVelocity           = 2,
	Chaos_InitialAngularVelocity   = 3,
	Chaos_InitialLinearVelocity    = 4,
	Chaos_CollisionGroup           = 5,
	Chaos_LinearForce              = 6,
	Chaos_AngularTorque            = 7,
	Chaos_Max                      = 8
};


// Enum Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
	Chaos_NONE                     = 0,
	Chaos_Object_Sleeping          = 1,
	Chaos_Object_Kinematic         = 2,
	Chaos_Object_Static            = 3,
	Chaos_Object_Dynamic           = 4,
	Chaos_Object_UserDefined       = 5,
	Chaos_Max                      = 6
};


// Enum Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
	Chaos_Implicit_Box             = 0,
	Chaos_Implicit_Sphere          = 1,
	Chaos_Implicit_Capsule         = 2,
	Chaos_Implicit_LevelSet        = 3,
	Chaos_Implicit_None            = 4,
	Chaos_Max                      = 5
};


// Enum Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	Chaos_Volumetric               = 0,
	Chaos_Surface_Volumetric       = 1,
	Chaos_Max                      = 2
};


// Enum Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	Double                         = 0,
	Triple                         = 1,
	Num                            = 2,
	Invalid                        = 3,
	EChaosBufferMode_MAX           = 4
};


// Enum Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	DedicatedThread                = 0,
	TaskGraph                      = 1,
	SingleThread                   = 2,
	Num                            = 3,
	Invalid                        = 4,
	EChaosThreadingMode_MAX        = 5
};


// Enum Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	Fixed                          = 0,
	Variable                       = 1,
	VariableCapped                 = 2,
	VariableCappedWithTarget       = 3,
	EChaosSolverTickMode_MAX       = 4
};


// Enum Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
	None                           = 0,
	Record                         = 1,
	Play                           = 2,
	RecordAndPlay                  = 3,
	EGeometryCollectionCacheType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Chaos.SolverCollisionFilterSettings
// 0x0010
struct FSolverCollisionFilterSettings
{
	bool                                               FilterEnabled;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinImpulse;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Chaos.SolverBreakingFilterSettings
// 0x0010
struct FSolverBreakingFilterSettings
{
	bool                                               FilterEnabled;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinVolume;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Chaos.SolverTrailingFilterSettings
// 0x0010
struct FSolverTrailingFilterSettings
{
	bool                                               FilterEnabled;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinVolume;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Chaos.ChaosSolverConfiguration
// 0x0050
struct FChaosSolverConfiguration
{
	int                                                CollisionIterations;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PushOutIterations;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PushOutPairIterations;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClusterConnectionFactor;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EClusterUnionMethod                                ClusterUnionConnectionType;                               // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateCollisionData;                                   // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                  // 0x0014(0x0010) (Edit)
	bool                                               bGenerateBreakData;                                       // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                   // 0x0028(0x0010) (Edit)
	bool                                               bGenerateTrailingData;                                    // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                   // 0x003C(0x0010) (Edit)
	bool                                               bGenerateContactGraph;                                    // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct Chaos.SolverCollisionData
// 0x006C
struct FSolverCollisionData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedImpulse;                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity1;                                                // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity2;                                                // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity1;                                         // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity2;                                         // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mass1;                                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Mass2;                                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LevelsetIndex;                                            // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndexMesh;                                        // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LevelsetIndexMesh;                                        // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Chaos.SolverBreakingData
// 0x0030
struct FSolverBreakingData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndexMesh;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Chaos.RecordedFrame
// 0x00B8
struct FRecordedFrame
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        TransformIndices;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        PreviousTransformIndices;                                 // 0x0020(0x0010) (ZeroConstructor)
	TArray<bool>                                       DisabledFlags;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FSolverCollisionData>                CollisionS;                                               // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FSolverBreakingData>                 Breakings;                                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0060(0x0050) UNKNOWN PROPERTY: SetProperty Chaos.RecordedFrame.Trailings
	float                                              Timestamp;                                                // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct Chaos.RecordedTransformTrack
// 0x0010
struct FRecordedTransformTrack
{
	TArray<struct FRecordedFrame>                      Records;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Chaos.SolverTrailingData
// 0x0030
struct FSolverTrailingData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndexMesh;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
