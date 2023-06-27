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

// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	SetSystemInactive              = 0,
	Deactivate                     = 1,
	None                           = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};


// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ActivateIfInactive             = 0,
	None                           = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};


// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	Activate                       = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4
};


// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	FromCentre                     = 0,
	FromFirst                      = 1,
	FromSecond                     = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3
};


// Enum Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	Particles                      = 0,
	Emitter                        = 1,
	ENiagaraRendererSourceDataMode_MAX = 2
};


// Enum Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource             = 0,
	ExplicitParticles              = 1,
	ExplicitEmitter                = 2,
	ExplicitSystem                 = 3,
	ExplicitUser                   = 4,
	MaxBindingSource               = 5,
	ENiagaraBindingSource_MAX      = 6
};


// Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
	Particles                      = 0,
	DataInterface                  = 1,
	ENiagaraIterationSource_MAX    = 2
};


// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	Particle                       = 0,
	Emitter                        = 1,
	System                         = 2,
	Max                            = 3
};


// Enum Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	System                         = 0,
	Emitter                        = 1,
	Particle                       = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3
};


// Enum Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	Spawn                          = 0,
	Update                         = 1,
	Event                          = 2,
	SimulationStage                = 3,
	Default                        = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function                       = 0,
	Module                         = 1,
	DynamicInput                   = 2,
	ParticleSpawnScript            = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript           = 5,
	ParticleEventScript            = 6,
	ParticleSimulationStageScript  = 7,
	ParticleGPUComputeScript       = 8,
	EmitterSpawnScript             = 9,
	EmitterUpdateScript            = 10,
	SystemSpawnScript              = 11,
	SystemUpdateScript             = 12,
	ENiagaraScriptUsage_MAX        = 13
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX                        = 7
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	TranslatorConstant             = 4,
	RapidIterationParameter        = 5,
	ENiagaraInputNodeUsage_MAX     = 6
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3
};


// Enum Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8_t
{
	Average                        = 0,
	Maximum                        = 1,
	ENiagaraStatEvaluationType_MAX = 2
};


// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	TickDeltaTime                  = 0,
	DesiredAge                     = 1,
	DesiredAgeNoSeek               = 2,
	ENiagaraAgeUpdateMode_MAX      = 3
};


// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	CPUSim                         = 0,
	GPUComputeSim                  = 1,
	ENiagaraSimTarget_MAX          = 2
};


// Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
	Value                          = 0,
	Binding                        = 1,
	Custom                         = 2,
	ENiagaraDefaultMode_MAX        = 3
};


// Enum Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8_t
{
	Float                          = 0,
	HalfFloat                      = 1,
	UnsignedNormalizedByte         = 2,
	Max                            = 3
};


// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
	UsePrereqs                     = 0,
	UseComponentTickGroup          = 1,
	ForceTickFirst                 = 2,
	ForceTickLast                  = 3,
	ENiagaraTickBehavior_MAX       = 4
};


// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	ENCPoolMethod_MAX              = 5
};


// Enum Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8_t
{
	Independent                    = 0,
	MaxAxis                        = 1,
	CellSize                       = 2,
	ESetResolutionMethod_MAX       = 3
};


// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	Invalid                        = 0,
	None                           = 1,
	SkinOnTheFly                   = 2,
	PreSkin                        = 3,
	ENDISkeletalMesh_MAX           = 4
};


// Enum Niagara.ENDISkeletalMesh_SourceMode
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	ENDISkeletalMesh_MAX           = 3
};


// Enum Niagara.ENDIStaticMesh_SourceMode
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	DefaultMeshOnly                = 3,
	ENDIStaticMesh_MAX             = 4
};


// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
	SpawnOnly                      = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Continuous                     = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5
};


// Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
	Deactivate                     = 0,
	DeactivateImmediate            = 1,
	DeactivateResume               = 2,
	DeactivateImmediateResume      = 3,
	ENiagaraCullReaction_MAX       = 4
};


// Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
	AutomaticEstimate              = 0,
	ManualEstimate                 = 1,
	EParticleAllocationMode_MAX    = 2
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	None                           = 0,
	ViewDepth                      = 1,
	ViewDistance                   = 2,
	CustomAscending                = 3,
	CustomDecending                = 4,
	ENiagaraSortMode_MAX           = 5
};


// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3
};


// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	Default                        = 0,
	Velocity                       = 1,
	CameraPosition                 = 2,
	CameraPlane                    = 3,
	ENiagaraMeshFacingMode_MAX     = 4
};


// Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	Active                         = 2,
	Unknown                        = 3,
	ENiagaraPlatformSetState_MAX   = 4
};


// Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
	Default                        = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	ENiagaraPlatformSelectionState_MAX = 3
};


// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	Never                          = 0,
	Individual                     = 1,
	All                            = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
	ScaledUniformly                = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength          = 2,
	ENiagaraRibbonUVDistributionMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
	SmoothTransition               = 0,
	Locked                         = 1,
	ENiagaraRibbonUVEdgeMode_MAX   = 2
};


// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	Automatic                      = 0,
	Custom                         = 1,
	Disabled                       = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	FrontToBack                    = 0,
	BackToFront                    = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};


// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	Scale                          = 0,
	Clip                           = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};


// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	Screen                         = 0,
	Custom                         = 1,
	CustomSideVector               = 2,
	ENiagaraRibbonFacingMode_MAX   = 3
};


// Enum Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	Invalid                        = 0,
	Unexposed                      = 1,
	Library                        = 2,
	Hidden                         = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4
};


// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	SameScript                     = 0,
	AllScripts                     = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};


// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	PreDependency                  = 0,
	PostDependency                 = 1,
	ENiagaraModuleDependencyType_MAX = 2
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	FaceCameraPosition             = 3,
	FaceCameraDistanceBlend        = 4,
	ENiagaraSpriteFacingMode_MAX   = 5
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	ENiagaraSpriteAlignment_MAX    = 3
};


// Enum Niagara.ENiagaraParameterPanelCategory
enum class ENiagaraParameterPanelCategory : uint8_t
{
	Input                          = 0,
	Attributes                     = 1,
	Output                         = 2,
	Local                          = 3,
	User                           = 4,
	Engine                         = 5,
	Owner                          = 6,
	System                         = 7,
	Emitter                        = 8,
	Particles                      = 9,
	ScriptTransient                = 10,
	StaticSwitch                   = 11,
	None                           = 12,
	Num                            = 13,
	ENiagaraParameterPanelCategory_MAX = 14
};


// Enum Niagara.ENiagaraScriptParameterUsage
enum class ENiagaraScriptParameterUsage : uint8_t
{
	Input                          = 0,
	Output                         = 1,
	Local                          = 2,
	InputOutput                    = 3,
	InitialValueInput              = 4,
	None                           = 5,
	Num                            = 6,
	ENiagaraScriptParameterUsage_MAX = 7
};


// Enum Niagara.ENiagaraParameterScope
enum class ENiagaraParameterScope : uint8_t
{
	Input                          = 0,
	User                           = 1,
	Engine                         = 2,
	Owner                          = 3,
	System                         = 4,
	Emitter                        = 5,
	Particles                      = 6,
	ScriptPersistent               = 7,
	ScriptTransient                = 8,
	Local                          = 9,
	Custom                         = 10,
	DISPLAY_ONLY_StaticSwitch      = 11,
	Output                         = 12,
	None                           = 13,
	Num                            = 14,
	ENiagaraParameterScope_MAX     = 15
};


// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	Active                         = 0,
	Inactive                       = 1,
	InactiveClear                  = 2,
	Complete                       = 3,
	Disabled                       = 4,
	Num                            = 5,
	ENiagaraExecutionState_MAX     = 6
};


// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	Scalability                    = 0,
	Internal                       = 1,
	Owner                          = 2,
	InternalCompletion             = 3,
	ENiagaraExecutionStateSource_MAX = 4
};


// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
	None                           = 0,
	Object                         = 1,
	DataInterface                  = 2,
	Bytes                          = 3,
	ENiagaraVariantMode_MAX        = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraTypeDefinitionHandle
// 0x0004
struct FNiagaraTypeDefinitionHandle
{
	int                                                RegisteredTypeIndex;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariableBase
// 0x000C
struct FNiagaraVariableBase
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeDefinitionHandle                TypeDefHandle;                                            // 0x0008(0x0004) (Edit)
};

// ScriptStruct Niagara.NiagaraVariable
// 0x0014 (0x0020 - 0x000C)
struct FNiagaraVariable : public FNiagaraVariableBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<unsigned char>                              VarData;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraVariableWithOffset
// 0x0004 (0x0010 - 0x000C)
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
	int                                                Offset;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterStore
// 0x0078
struct FNiagaraParameterStore
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FNiagaraVariableWithOffset>          SortedParameterOffsets;                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ParameterData;                                            // 0x0020(0x0010) (ZeroConstructor)
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                           // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             UObjects;                                                 // 0x0040(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0050(0x0028) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// 0x0050 (0x00C8 - 0x0078)
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                                   // 0x0078(0x0050)
};

// ScriptStruct Niagara.NiagaraMaterialOverride
// 0x0018
struct FNiagaraMaterialOverride
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaterialSubIndex;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UNiagaraRendererProperties*                  EmitterRendererProperty;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NCPoolElement
// 0x0010
struct FNCPoolElement
{
	class UNiagaraComponent*                           Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NCPool
// 0x0038
struct FNCPool
{
	TArray<struct FNCPoolElement>                      FreeElements;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<class UNiagaraComponent*>                   InUseComponents_Auto;                                     // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UNiagaraComponent*>                   InUseComponents_Manual;                                   // 0x0020(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// 0x0010
struct FNiagaraDeviceProfileStateEntry
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           QualityLevelMask;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SetQualityLevelMask;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraPlatformSet
// 0x0020
struct FNiagaraPlatformSet
{
	int                                                QualityLevelMask;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FNiagaraDeviceProfileStateEntry>     DeviceProfileStates;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// 0x0058
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariableBase                        ParamMapVariable;                                         // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraVariable                            DataSetVariable;                                          // 0x0010(0x0020)
	struct FNiagaraVariable                            RootVariable;                                             // 0x0030(0x0020)
	TEnumAsByte<ENiagaraBindingSource>                 BindingSourceMode;                                        // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	unsigned char                                      bBindingExistsOnSource : 1;                               // 0x0054(0x0001)
	unsigned char                                      bIsCachedParticleValue : 1;                               // 0x0054(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x0010
struct FNiagaraTypeDefinition
{
	class UObject*                                     ClassStructOrEnum;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           UnderlyingType;                                           // 0x0008(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraComponentPropertyBinding
// 0x00A0
struct FNiagaraComponentPropertyBinding
{
	struct FNiagaraVariableAttributeBinding            AttributeBinding;                                         // 0x0000(0x0058)
	struct FName                                       PropertyName;                                             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeDefinition                      PropertyType;                                             // 0x0060(0x0010)
	struct FName                                       MetadataSetterName;                                       // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariable                            WritableValue;                                            // 0x0078(0x0020) (Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.BasicParticleData
// 0x001C
struct FBasicParticleData
{
	struct FVector                                     position;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraUserParameterBinding
// 0x0020
struct FNiagaraUserParameterBinding
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0000(0x0020) (Edit)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// 0x0010
struct FNDIStaticMeshSectionFilter
{
	TArray<int>                                        AllowedMaterialSlots;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// 0x0038
struct FNiagaraSystemScalabilitySettings
{
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x0000(0x0020) (Edit)
	unsigned char                                      bCullByDistance : 1;                                      // 0x0020(0x0001) (Edit)
	unsigned char                                      bCullMaxInstanceCount : 1;                                // 0x0020(0x0001) (Edit)
	unsigned char                                      bCullPerSystemMaxInstanceCount : 1;                       // 0x0020(0x0001) (Edit)
	unsigned char                                      bCullByMaxTimeWithoutRender : 1;                          // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              MaxDistance;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxInstances;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSystemInstances;                                       // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeWithoutRender;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// 0x0010
struct FNiagaraSystemScalabilitySettingsArray
{
	TArray<struct FNiagaraSystemScalabilitySettings>   Settings;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// 0x0028
struct FNiagaraEmitterScalabilitySettings
{
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x0000(0x0020) (Edit)
	unsigned char                                      bScaleSpawnCount : 1;                                     // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              SpawnCountScale;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// 0x0010
struct FNiagaraEmitterScalabilitySettingsArray
{
	TArray<struct FNiagaraEmitterScalabilitySettings>  Settings;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0018
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventGenerator;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEmitter;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
// 0x0060
struct FNiagaraTypeLayoutInfo
{
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   HalfComponentByteOffsets;                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   HalfComponentRegisterOffsets;                             // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
// 0x0070
struct FNiagaraVariableLayoutInfo
{
	uint32_t                                           FloatComponentStart;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Int32ComponentStart;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HalfComponentStart;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraTypeLayoutInfo                      LayoutInfo;                                               // 0x0010(0x0060)
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x000C
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraDataSetType                                Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
// 0x0040
struct FNiagaraDataSetCompiledData
{
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariableLayoutInfo>          VariableLayouts;                                          // 0x0010(0x0010) (ZeroConstructor)
	struct FNiagaraDataSetID                           ID;                                                       // 0x0020(0x000C)
	uint32_t                                           TotalFloatComponents;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalInt32Components;                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalHalfComponents;                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	ENiagaraSimTarget                                  SimTarget;                                                // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0050
struct FNiagaraEventGeneratorProperties
{
	int                                                MaxEventsPerFrame;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                      // 0x0010(0x0040)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0028
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// 0x0014
struct FNiagaraDetailsLevelScaleOverrides
{
	float                                              Low;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Medium;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              High;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Epic;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Cine;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// 0x0008 (0x0030 - 0x0028)
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
	unsigned char                                      bOverrideSpawnCountScale : 1;                             // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// 0x0010
struct FNiagaraEmitterScalabilityOverrides
{
	TArray<struct FNiagaraEmitterScalabilityOverride>  Overrides;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0x0030 (0x0058 - 0x0028)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	EScriptExecutionMode                               ExecutionMode;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	uint32_t                                           SpawnNumber;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxEventsPerFrame;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SourceEmitterID;                                          // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventName;                                          // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomSpawnNumber;                                       // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	uint32_t                                           MinSpawnNumber;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
// 0x0028
struct FNiagaraMeshMaterialOverride
{
	class UMaterialInterface*                          ExplicitMat;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                UserParamBinding;                                         // 0x0008(0x0020) (Edit)
};

// ScriptStruct Niagara.NiagaraRibbonUVSettings
// 0x0024
struct FNiagaraRibbonUVSettings
{
	ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                         // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraRibbonUVDistributionMode                   DistributionMode;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0008(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              TilingLength;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePerParticleUOverride;                              // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePerParticleVRangeOverride;                         // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// 0x0008
struct FNiagaraScriptExecutionPaddingInfo
{
	uint16_t                                           SrcOffset;                                                // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DestOffset;                                               // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           SrcSize;                                                  // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DestSize;                                                 // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// 0x0020 (0x0098 - 0x0078)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
	int                                                ParameterSize;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PaddedParameterSize;                                      // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraScriptExecutionPaddingInfo>  PaddingInfo;                                              // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      bInitialized : 1;                                         // 0x0090(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraBoundParameter
// 0x0028
struct FNiagaraBoundParameter
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0000(0x0020)
	int                                                SrcOffset;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestOffset;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
// 0x0048
struct FNiagaraVMExecutableDataId
{
	struct FGuid                                       CompilerVersionID;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	ENiagaraScriptUsage                                ScriptUsageType;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       ScriptUsageTypeID;                                        // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsesRapidIterationParams : 1;                            // 0x0024(0x0001)
	unsigned char                                      bInterpolatedSpawn : 1;                                   // 0x0024(0x0001)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x0024(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FGuid                                       BaseScriptID;                                             // 0x0028(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FNiagaraCompileHash                         BaseScriptCompileHash;                                    // 0x0038(0x0010)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x0001
struct FNiagaraScriptDataUsageInfo
{
	bool                                               bReadsAttributeData;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// 0x0038
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UserPtrIdx;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraTypeDefinition                      Type;                                                     // 0x0010(0x0010)
	struct FName                                       RegisteredParameterMapRead;                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RegisteredParameterMapWrite;                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaceholder;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.VMFunctionSpecifier
// 0x0010
struct FVMFunctionSpecifier
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// 0x0038
struct FVMExternalFunctionBindingInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OwnerName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       InputParamLocations;                                      // 0x0010(0x0010) (ZeroConstructor)
	int                                                NumOutputs;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FVMFunctionSpecifier>                FunctionSpecifiers;                                       // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       // 0x0000(0x000C) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraStatScope
// 0x0010
struct FNiagaraStatScope
{
	struct FName                                       FullName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FriendlyName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVMExecutableData
// 0x00D8
struct FNiagaraVMExecutableData
{
	TArray<unsigned char>                              ByteCode;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              OptimizedByteCode;                                        // 0x0010(0x0010) (ZeroConstructor, Transient)
	int                                                NumTempRegisters;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumUserPtrs;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ScriptLiterals;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Attributes;                                               // 0x0038(0x0010) (ZeroConstructor)
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                // 0x0048(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                        // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FVMExternalFunctionBindingInfo>      CalledVMExternalFunctions;                                // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FNiagaraDataSetID>                   ReadDataSets;                                             // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           WriteDataSets;                                            // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraStatScope>                   StatScopes;                                               // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataInterfaceGPUParamInfo>   DIParamInfo;                                              // 0x00B0(0x0010) (ZeroConstructor)
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                        // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	TArray<struct FSimulationStageMetaData>            SimulationStageMetaData;                                  // 0x00C8(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x0038
struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UserPtrIdx;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FNiagaraTypeDefinition                      Type;                                                     // 0x0018(0x0010)
	struct FName                                       RegisteredParameterMapRead;                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RegisteredParameterMapWrite;                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// 0x0020
struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable                            BoundVariable;                                            // 0x0000(0x0020)
};

// ScriptStruct Niagara.NiagaraMaterialAttributeBinding
// 0x002C
struct FNiagaraMaterialAttributeBinding
{
	struct FName                                       MaterialParameterName;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableBase                        NiagaraVariable;                                          // 0x0008(0x000C) (Edit)
	struct FNiagaraVariableBase                        ResolvedNiagaraVariable;                                  // 0x0014(0x000C)
	struct FNiagaraVariableBase                        NiagaraChildVariable;                                     // 0x0020(0x000C) (Edit)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// 0x0008 (0x0040 - 0x0038)
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
	unsigned char                                      bOverrideDistanceSettings : 1;                            // 0x0038(0x0001) (Edit)
	unsigned char                                      bOverrideInstanceCountSettings : 1;                       // 0x0038(0x0001) (Edit)
	unsigned char                                      bOverridePerSystemInstanceCountSettings : 1;              // 0x0038(0x0001) (Edit)
	unsigned char                                      bOverrideTimeSinceRendererSettings : 1;                   // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// 0x0010
struct FNiagaraSystemScalabilityOverrides
{
	TArray<struct FNiagaraSystemScalabilityOverride>   Overrides;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x0030
struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       IdName;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UNiagaraEmitter*                             Instance;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBinding
// 0x0008
struct FNiagaraParameterDataSetBinding
{
	int                                                ParameterOffset;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DataSetComponentOffset;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// 0x0020
struct FNiagaraParameterDataSetBindingCollection
{
	TArray<struct FNiagaraParameterDataSetBinding>     FloatOffsets;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraParameterDataSetBinding>     Int32Offsets;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraSystemCompiledData
// 0x0218
struct FNiagaraSystemCompiledData
{
	struct FNiagaraParameterStore                      InstanceParamStore;                                       // 0x0000(0x0078)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                      // 0x0078(0x0040)
	struct FNiagaraDataSetCompiledData                 SpawnInstanceParamsDataSetCompiledData;                   // 0x00B8(0x0040)
	struct FNiagaraDataSetCompiledData                 UpdateInstanceParamsDataSetCompiledData;                  // 0x00F8(0x0040)
	struct FNiagaraParameterDataSetBindingCollection   SpawnInstanceGlobalBinding;                               // 0x0138(0x0020)
	struct FNiagaraParameterDataSetBindingCollection   SpawnInstanceSystemBinding;                               // 0x0158(0x0020)
	struct FNiagaraParameterDataSetBindingCollection   SpawnInstanceOwnerBinding;                                // 0x0178(0x0020)
	TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;                             // 0x0198(0x0010) (ZeroConstructor)
	struct FNiagaraParameterDataSetBindingCollection   UpdateInstanceGlobalBinding;                              // 0x01A8(0x0020)
	struct FNiagaraParameterDataSetBindingCollection   UpdateInstanceSystemBinding;                              // 0x01C8(0x0020)
	struct FNiagaraParameterDataSetBindingCollection   UpdateInstanceOwnerBinding;                               // 0x01E8(0x0020)
	TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;                            // 0x0208(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0020(0x0020)
};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// 0x0090 (0x00D0 - 0x0040)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneBoolChannel                      BoolChannel;                                              // 0x0040(0x0090)
};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// 0x0280 (0x02C0 - 0x0040)
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     RedChannel;                                               // 0x0040(0x00A0)
	struct FMovieSceneFloatChannel                     GreenChannel;                                             // 0x00E0(0x00A0)
	struct FMovieSceneFloatChannel                     BlueChannel;                                              // 0x0180(0x00A0)
	struct FMovieSceneFloatChannel                     AlphaChannel;                                             // 0x0220(0x00A0)
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// 0x00A0 (0x00E0 - 0x0040)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     FloatChannel;                                             // 0x0040(0x00A0)
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// 0x0090 (0x00D0 - 0x0040)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneIntegerChannel                   IntegerChannel;                                           // 0x0040(0x0090)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// 0x0018 (0x0028 - 0x0010)
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
	struct FFrameNumber                                SpawnSectionStartFrame;                                   // 0x0010(0x0004)
	struct FFrameNumber                                SpawnSectionEndFrame;                                     // 0x0014(0x0004)
	ENiagaraSystemSpawnSectionStartBehavior            SpawnSectionStartBehavior;                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0018(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraSystemSpawnSectionEvaluateBehavior         SpawnSectionEvaluateBehavior;                             // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraSystemSpawnSectionEndBehavior              SpawnSectionEndBehavior;                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0020(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                            // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// 0x0288 (0x02C8 - 0x0040)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     VectorChannels[0x4];                                      // 0x0040(0x00A0)
	int                                                ChannelsUsed;                                             // 0x02C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraRandInfo
// 0x000C
struct FNiagaraRandInfo
{
	int                                                Seed1;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Seed2;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Seed3;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraScriptVariableBinding
// 0x0008
struct FNiagaraScriptVariableBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x0040
struct FNiagaraVariableInfo
{
	struct FNiagaraVariable                            Variable;                                                 // 0x0000(0x0020)
	struct FText                                       Definition;                                               // 0x0020(0x0018)
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraSystemUpdateContext
// 0x0048
struct FNiagaraSystemUpdateContext
{
	TArray<class UNiagaraComponent*>                   ComponentsToReset;                                        // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                       // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UNiagaraComponent*>                   ComponentsToNotifySimDestroy;                             // 0x0020(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                      // 0x0030(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x0090
struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Inputs;                                                   // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Outputs;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FName                                       OwnerName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRequiresContext : 1;                                     // 0x0030(0x0001)
	unsigned char                                      bRequiresExecPin : 1;                                     // 0x0030(0x0001)
	unsigned char                                      bMemberFunction : 1;                                      // 0x0030(0x0001)
	unsigned char                                      bExperimental : 1;                                        // 0x0030(0x0001)
	unsigned char                                      bSupportsCPU : 1;                                         // 0x0030(0x0001)
	unsigned char                                      bSupportsGPU : 1;                                         // 0x0030(0x0001)
	unsigned char                                      bWriteFunction : 1;                                       // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                ModuleUsageBitmask;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ContextStageMinIndex;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ContextStageMaxIndex;                                     // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FName>                   FunctionSpecifiers;                                       // 0x0040(0x0050)
};

// ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
// 0x0018
struct FNiagaraEmitterNameSettingsRef
{
	struct FName                                       SystemName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     EmitterName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.MeshTriCoordinate
// 0x0010
struct FMeshTriCoordinate
{
	int                                                Tri;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaryCoord;                                                // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraGraphViewSettings
// 0x0010
struct FNiagaraGraphViewSettings
{
	struct FVector2D                                   Location;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Zoom;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x002C
struct FNiagaraCollisionEventPayload
{
	struct FVector                                     CollisionPos;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionNormal;                                          // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionVelocity;                                        // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PhysicalMaterialIndex;                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameters
// 0x0010
struct FNiagaraParameters
{
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// 0x000C
struct FNiagaraPlatformSetConflictEntry
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                QualityLevelMask;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// 0x0018
struct FNiagaraPlatformSetConflictInfo
{
	int                                                SetAIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SetBIndex;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraPlatformSetConflictEntry>    Conflicts;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScalabilityManager
// 0x0040
struct FNiagaraScalabilityManager
{
	class UNiagaraEffectType*                          EffectType;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                        // 0x0008(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraModuleDependency
// 0x0028
struct FNiagaraModuleDependency
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraModuleDependencyType                       Type;                                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0010(0x0018) (Edit)
};

// ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
// 0x0010 (0x0088 - 0x0078)
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptHighlight
// 0x0028
struct FNiagaraScriptHighlight
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit)
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
// 0x0080
struct FNiagaraSystemCompileRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UObject*>                             RootObjects;                                              // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0018(0x0068) MISSED OFFSET
};

// ScriptStruct Niagara.EmitterCompiledScriptPair
// 0x0078
struct FEmitterCompiledScriptPair
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
// 0x0130
struct FNiagaraEmitterCompiledData
{
	TArray<struct FName>                               SpawnAttributes;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FNiagaraVariable                            EmitterSpawnIntervalVar;                                  // 0x0010(0x0020)
	struct FNiagaraVariable                            EmitterInterpSpawnStartDTVar;                             // 0x0030(0x0020)
	struct FNiagaraVariable                            EmitterSpawnGroupVar;                                     // 0x0050(0x0020)
	struct FNiagaraVariable                            EmitterAgeVar;                                            // 0x0070(0x0020)
	struct FNiagaraVariable                            EmitterRandomSeedVar;                                     // 0x0090(0x0020)
	struct FNiagaraVariable                            EmitterInstanceSeedVar;                                   // 0x00B0(0x0020)
	struct FNiagaraVariable                            EmitterTotalSpawnedParticlesVar;                          // 0x00D0(0x0020)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                      // 0x00F0(0x0040)
};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
// 0x0018
struct FNiagaraInputConditionMetadata
{
	struct FName                                       InputName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             TargetValues;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraVariableMetaData
// 0x00E8
struct FNiagaraVariableMetaData
{
	struct FText                                       Description;                                              // 0x0000(0x0018) (Edit)
	struct FText                                       CategoryName;                                             // 0x0018(0x0018) (Edit)
	bool                                               bAdvancedDisplay;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                EditorSortPriority;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInlineEditConditionToggle;                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FNiagaraInputConditionMetadata              EditCondition;                                            // 0x0040(0x0018) (Edit)
	struct FNiagaraInputConditionMetadata              VisibleCondition;                                         // 0x0058(0x0018) (Edit)
	TMap<struct FName, struct FString>                 PropertyMetaData;                                         // 0x0070(0x0050) (Edit)
	struct FName                                       ScopeName;                                                // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	ENiagaraScriptParameterUsage                       Usage;                                                    // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bIsStaticSwitch;                                          // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	int                                                StaticSwitchDefaultValue;                                 // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAddedToNodeGraphDeepCopy;                                // 0x00D4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOutputIsPersistent;                                      // 0x00D5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00D6(0x0002) MISSED OFFSET
	struct FName                                       CachedNamespacelessVariableName;                          // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bCreatedInSystemEditor;                                   // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseLegacyNameString;                                     // 0x00E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameterScopeInfo
// 0x0018
struct FNiagaraParameterScopeInfo
{
	ENiagaraParameterScope                             Scope;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     NamespaceString;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// 0x0030
struct FNiagaraCompileHashVisitorDebugInfo
{
	struct FString                                     Object;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             PropertyKeys;                                             // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FString>                             PropertyValues;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraID
// 0x0008
struct FNiagaraID
{
	int                                                Index;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AcquireTag;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraSpawnInfo
// 0x0010
struct FNiagaraSpawnInfo
{
	int                                                Count;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpStartDt;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntervalDt;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpawnGroup;                                               // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraMatrix
// 0x0040
struct FNiagaraMatrix
{
	struct FVector4                                    Row0;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row1;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row2;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row3;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterMap
// 0x0001
struct FNiagaraParameterMap
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0001
struct FNiagaraNumeric
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraHalfVector4
// 0x0008
struct FNiagaraHalfVector4
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Z;                                                        // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           W;                                                        // 0x0006(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraHalfVector3
// 0x0006
struct FNiagaraHalfVector3
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Z;                                                        // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraHalfVector2
// 0x0004
struct FNiagaraHalfVector2
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraHalf
// 0x0002
struct FNiagaraHalf
{
	uint16_t                                           Value;                                                    // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraBool
// 0x0004
struct FNiagaraBool
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraInt32
// 0x0004
struct FNiagaraInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFloat
// 0x0004
struct FNiagaraFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariant
// 0x0028
struct FNiagaraVariant
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Bytes;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
	ENiagaraVariantMode                                CurrentMode;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0020(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
