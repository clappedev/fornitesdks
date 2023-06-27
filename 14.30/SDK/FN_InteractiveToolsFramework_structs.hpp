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

// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t
{
	Begin                          = 0,
	Continue                       = 1,
	End                            = 2,
	Ignore                         = 3,
	EInputCaptureState_MAX         = 4
};


// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t
{
	Begin                          = 0,
	Ignore                         = 1,
	EInputCaptureRequestType_MAX   = 2
};


// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Both                           = 3,
	Any                            = 4,
	EInputCaptureSide_MAX          = 5
};


// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint8_t
{
	None                           = 0,
	Keyboard                       = 1,
	Mouse                          = 2,
	Gamepad                        = 3,
	OculusTouch                    = 4,
	HTCViveWands                   = 5,
	AnySpatialDevice               = 6,
	TabletFingers                  = 7,
	EInputDevices_MAX              = 8
};


// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint8_t
{
	None                           = 0,
	TranslateAxisX                 = 1,
	TranslateAxisY                 = 2,
	TranslateAxisZ                 = 3,
	TranslateAllAxes               = 4,
	TranslatePlaneXY               = 5,
	TranslatePlaneXZ               = 6,
	TranslatePlaneYZ               = 7,
	TranslateAllPlanes             = 8,
	RotateAxisX                    = 9,
	RotateAxisY                    = 10,
	RotateAxisZ                    = 11,
	RotateAllAxes                  = 12,
	ScaleAxisX                     = 13,
	ScaleAxisY                     = 14,
	ScaleAxisZ                     = 15,
	ScaleAllAxes                   = 16,
	ScalePlaneYZ                   = 17,
	ScalePlaneXZ                   = 18,
	ScalePlaneXY                   = 19,
	ScaleAllPlanes                 = 20,
	ScaleUniform                   = 21,
	StandardTranslateRotate        = 22,
	TranslateRotateUniformScale    = 23,
	FullTranslateRotateScale       = 24,
	ETransformGizmoSubElements_MAX = 25
};


// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t
{
	NoChangeTracking               = 0,
	UndoToExit                     = 1,
	FullUndoRedo                   = 2,
	EToolChangeTrackingMode_MAX    = 3
};


// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t
{
	Left                           = 0,
	Mouse                          = 1,
	Right                          = 2,
	EToolSide_MAX                  = 3
};


// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t
{
	Replace                        = 0,
	Add                            = 1,
	Remove                         = 2,
	Clear                          = 3,
	ESelectedObjectsModificationType_MAX = 4
};


// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t
{
	Internal                       = 0,
	UserMessage                    = 1,
	UserNotification               = 2,
	UserWarning                    = 3,
	UserError                      = 4,
	EToolMessageLevel_MAX          = 5
};


// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t
{
	World                          = 0,
	Local                          = 1,
	EToolContextCoordinateSystem_MAX = 2
};


// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t
{
	VertexColorMaterial            = 0,
	EStandardToolContextMaterials_MAX = 1
};


// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t
{
	None                           = 0,
	MeshVertex                     = 1,
	MeshEdge                       = 2,
	Grid                           = 3,
	All                            = 4,
	ESceneSnapQueryTargetType_MAX  = 5
};


// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t
{
	Position                       = 0,
	Rotation                       = 1,
	ESceneSnapQueryType_MAX        = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InteractiveToolsFramework.BrushStampData
// 0x00AC
struct FBrushStampData
{
	unsigned char                                      UnknownData00[0xAC];                                      // 0x0000(0x00AC) MISSED OFFSET
};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// 0x0020
struct FBehaviorInfo
{
	class UInputBehavior*                              Behavior;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// 0x0030
struct FActiveGizmo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// 0x0008
struct FGizmoFloatParameterChange
{
	float                                              InitialValue;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// 0x0010
struct FGizmoVec2ParameterChange
{
	struct FVector2D                                   InitialValue;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CurrentValue;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct InteractiveToolsFramework.InputRayHit
// 0x0028
struct FInputRayHit
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
