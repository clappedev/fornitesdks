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

// Enum HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8_t
{
	None                           = 0,
	Size2                          = 1,
	Size4                          = 2,
	Size8                          = 3,
	Size16                         = 4,
	Size32                         = 5,
	EGroomStrandsSize_MAX          = 6
};


// Enum HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8_t
{
	None                           = 0,
	CosseratRods                   = 1,
	AngularSprings                 = 2,
	CustomSolver                   = 3,
	EGroomNiagaraSolvers_MAX       = 4
};


// Enum HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8_t
{
	None                           = 0,
	RigidTransform                 = 1,
	OffsetTransform                = 2,
	SmoothTransform                = 3,
	EGroomInterpolationType_MAX    = 4
};


// Enum HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8_t
{
	Parametric                     = 0,
	Root                           = 1,
	Index                          = 2,
	Unknown                        = 3,
	EGroomInterpolationWeight_MAX  = 4
};


// Enum HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Unknown                        = 3,
	EGroomInterpolationQuality_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HairStrandsCore.GroomBuildSettings
// 0x000C
struct FGroomBuildSettings
{
	bool                                               bOverrideGuides;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HairToGuideDensity;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGroomInterpolationQuality                         InterpolationQuality;                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGroomInterpolationWeight                          InterpolationDistance;                                    // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeGuide;                                          // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUniqueGuide;                                          // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HairStrandsCore.HairGroupInfo
// 0x0020
struct FHairGroupInfo
{
	int                                                GroupId;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumCurves;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumGuides;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGroomBuildSettings                         ImportSettings;                                           // 0x000C(0x000C) (Edit, EditConst)
	class UMaterialInterface*                          Material;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HairStrandsCore.HairSolverSettings
// 0x0038
struct FHairSolverSettings
{
	bool                                               EnableSimulation;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGroomNiagaraSolvers                               NiagaraSolver;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0002(0x0028) UNKNOWN PROPERTY: SoftObjectProperty HairStrandsCore.HairSolverSettings.CustomSystem
	int                                                SubSteps;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                IterationCount;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HairStrandsCore.HairExternalForces
// 0x001C
struct FHairExternalForces
{
	struct FVector                                     GravityVector;                                            // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirDrag;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AirVelocity;                                              // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HairStrandsCore.HairBendConstraint
// 0x0098
struct FHairBendConstraint
{
	bool                                               SolveBend;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectBend;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              BendDamping;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BendStiffness;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          BendScale;                                                // 0x0010(0x0088) (Edit)
};

// ScriptStruct HairStrandsCore.HairStretchConstraint
// 0x0098
struct FHairStretchConstraint
{
	bool                                               SolveStretch;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectStretch;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              StretchDamping;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StretchStiffness;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          StretchScale;                                             // 0x0010(0x0088) (Edit)
};

// ScriptStruct HairStrandsCore.HairCollisionConstraint
// 0x00A8
struct FHairCollisionConstraint
{
	bool                                               SolveCollision;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectCollision;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              StaticFriction;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KineticFriction;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrandsViscosity;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  GridDimension;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          RadiusScale;                                              // 0x0020(0x0088) (Edit)
};

// ScriptStruct HairStrandsCore.HairMaterialConstraints
// 0x01D8
struct FHairMaterialConstraints
{
	struct FHairBendConstraint                         BendConstraint;                                           // 0x0000(0x0098) (Edit)
	struct FHairStretchConstraint                      StretchConstraint;                                        // 0x0098(0x0098) (Edit)
	struct FHairCollisionConstraint                    CollisionConstraint;                                      // 0x0130(0x00A8) (Edit)
};

// ScriptStruct HairStrandsCore.HairStrandsParameters
// 0x0098
struct FHairStrandsParameters
{
	EGroomStrandsSize                                  StrandsSize;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StrandsDensity;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrandsSmoothing;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrandsThickness;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          ThicknessScale;                                           // 0x0010(0x0088) (Edit)
};

// ScriptStruct HairStrandsCore.HairGroupsPhysics
// 0x02C8
struct FHairGroupsPhysics
{
	struct FHairSolverSettings                         SolverSettings;                                           // 0x0000(0x0038) (Edit)
	struct FHairExternalForces                         ExternalForces;                                           // 0x0038(0x001C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FHairMaterialConstraints                    MaterialConstraints;                                      // 0x0058(0x01D8) (Edit)
	struct FHairStrandsParameters                      StrandsParameters;                                        // 0x0230(0x0098) (Edit)
};

// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
// 0x0010
struct FGoomBindingGroupInfo
{
	int                                                RenRootCount;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                RenLODCount;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SimRootCount;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SimLODCount;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct HairStrandsCore.HairGroupDesc
// 0x0030
struct FHairGroupDesc
{
	int                                                HairCount;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                GuideCount;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HairLength;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HairWidth;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HairRootScale;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HairTipScale;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HairClipLength;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HairShadowDensity;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HairRaytracingRadiusScale;                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LodAverageVertexPerPixel;                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LodBias;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStableRasterization;                                  // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bScatterSceneLighting;                                    // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct HairStrandsCore.GroomConversionSettings
// 0x0018
struct FGroomConversionSettings
{
	struct FVector                                     Rotation;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HairStrandsCore.GroomHairGroupPreview
// 0x000C
struct FGroomHairGroupPreview
{
	int                                                GroupId;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                CurveCount;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                GuideCount;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
