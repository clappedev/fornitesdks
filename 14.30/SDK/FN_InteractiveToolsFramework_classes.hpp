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

// Class InteractiveToolsFramework.InputBehavior
// 0x0008 (0x0030 - 0x0028)
class UInputBehavior : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehavior");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.AnyButtonInputBehavior
// 0x0050 (0x0080 - 0x0030)
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UInteractiveGizmoBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmo
// 0x0010 (0x0038 - 0x0028)
class UInteractiveGizmo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmo");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmo
// 0x00B8 (0x00F0 - 0x0038)
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoFloatParameterSource> AngleSource;                                              // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInteraction;                                           // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     RotationOrigin;                                           // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationPlaneX;                                           // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationPlaneY;                                           // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionStartAngle;                                    // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionCurAngle;                                      // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x00DC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmo");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmo
// 0x00A0 (0x00D8 - 0x0038)
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoFloatParameterSource> ParameterSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSignedAxis;                                        // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInteraction;                                           // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxis;                                          // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionStartParameter;                                // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionCurParameter;                                  // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ParameterSign;                                            // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmo");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoConstantAxisSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoConstantAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// 0x0038 (0x0060 - 0x0028)
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TangentX;                                                 // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TangentY;                                                 // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantFrameAxisSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoWorldAxisSource
// 0x0018 (0x0040 - 0x0028)
class UGizmoWorldAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentAxisSource
// 0x0018 (0x0040 - 0x0028)
class UGizmoComponentAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USceneComponent*                             Component;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bLocalAxes;                                               // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolPropertySet
// 0x0038 (0x0060 - 0x0028)
class UInteractiveToolPropertySet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UInteractiveToolPropertySet*                 CachedProperties;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPropertySetEnabled;                                    // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0041(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.BrushBaseProperties
// 0x0018 (0x0078 - 0x0060)
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                              BrushSize;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecifyRadius;                                           // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              BrushRadius;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrushStrength;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrushFalloffAmount;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowStrength;                                            // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowFalloff;                                             // 0x0075(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0076(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushBaseProperties");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveTool
// 0x0058 (0x0080 - 0x0028)
class UInteractiveTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ToolPropertyObjects;                                      // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveTool");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleSelectionTool
// 0x0008 (0x0088 - 0x0080)
class USingleSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleSelectionTool");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointTool
// 0x0038 (0x00C0 - 0x0088)
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0088(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointTool");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.BaseBrushTool
// 0x00F8 (0x01B8 - 0x00C0)
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                        BrushProperties;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bInBrushStroke;                                           // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	struct FBrushStampData                             LastBrushStamp;                                           // 0x00CC(0x00AC)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0178(0x0028) UNKNOWN PROPERTY: SoftClassProperty InteractiveToolsFramework.BaseBrushTool.PropertyClass
	class UBrushStampIndicator*                        BrushStampIndicator;                                      // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BaseBrushTool");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// 0x0000 (0x0028 - 0x0028)
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicatorBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.BrushStampIndicator
// 0x0078 (0x00B0 - 0x0038)
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	float                                              BrushRadius;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrushFalloff;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BrushPosition;                                            // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BrushNormal;                                              // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawIndicatorLines;                                      // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawRadiusCircle;                                        // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawFalloffCircle;                                       // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005B(0x0001) MISSED OFFSET
	int                                                SampleStepCount;                                          // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDepthTested;                                             // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSecondaryLines;                                      // 0x0075(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	float                                              SecondaryLineThickness;                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryLineColor;                                       // 0x007C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         AttachedComponent;                                        // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicator");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragInputBehavior
// 0x00C0 (0x0140 - 0x0080)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0080(0x00A0) MISSED OFFSET
	bool                                               bUpdateModifiersDuringDrag;                               // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0121(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragInputBehavior");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// 0x0140 (0x0280 - 0x0140)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0140(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.LocalClickDragInputBehavior");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UInteractiveToolBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragToolBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragTool
// 0x0008 (0x0088 - 0x0080)
class UClickDragTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragTool");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InternalToolFrameworkActor
// 0x0000 (0x0220 - 0x0220)
class AInternalToolFrameworkActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoActor
// 0x0000 (0x0220 - 0x0220)
class AGizmoActor : public AInternalToolFrameworkActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoActor");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseComponent
// 0x0020 (0x0460 - 0x0440)
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                                Color;                                                    // 0x0440(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoverSizeMultiplier;                                      // 0x0450(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PixelHitDistanceThreshold;                                // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseComponent");
		
		return ptr;
	}


	void UpdateWorldLocalState(bool bWorldIn);
	void UpdateHoverState(bool bHoveringIn);
};


// Class InteractiveToolsFramework.GizmoArrowComponent
// 0x0020 (0x0480 - 0x0460)
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Direction;                                                // 0x0460(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gap;                                                      // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0474(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoArrowComponent");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBoxComponent
// 0x0040 (0x04A0 - 0x0460)
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Origin;                                                   // 0x0460(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0470(0x0010) (Edit, IsPlainOldData)
	struct FVector                                     Dimensions;                                               // 0x0480(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x048C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveHiddenLines;                                       // 0x0490(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAxisFlip;                                          // 0x0491(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0492(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBoxComponent");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoCircleComponent
// 0x0020 (0x0480 - 0x0460)
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Normal;                                                   // 0x0460(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x0474(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bViewAligned;                                             // 0x0478(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyAllowFrontFacingHits;                                // 0x0479(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x047A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoCircleComponent");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoTransformSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformSource");
		
		return ptr;
	}


	void SetTransform(const struct FTransform& NewTransform);
	struct FTransform GetTransform();
};


// Class InteractiveToolsFramework.GizmoAxisSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoAxisSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisSource");
		
		return ptr;
	}


	bool HasTangentVectors();
	void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut);
	struct FVector GetOrigin();
	struct FVector GetDirection();
};


// Class InteractiveToolsFramework.GizmoClickTarget
// 0x0000 (0x0028 - 0x0028)
class UGizmoClickTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoClickTarget");
		
		return ptr;
	}


	void UpdateHoverState(bool bHovering);
};


// Class InteractiveToolsFramework.GizmoStateTarget
// 0x0000 (0x0028 - 0x0028)
class UGizmoStateTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoStateTarget");
		
		return ptr;
	}


	void EndUpdate();
	void BeginUpdate();
};


// Class InteractiveToolsFramework.GizmoFloatParameterSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoFloatParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		
		return ptr;
	}


	void SetParameter(float NewValue);
	float GetParameter();
	void EndModify();
	void BeginModify();
};


// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoVec2ParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		
		return ptr;
	}


	void SetParameter(const struct FVector2D& NewValue);
	struct FVector2D GetParameter();
	void EndModify();
	void BeginModify();
};


// Class InteractiveToolsFramework.GizmoLineHandleComponent
// 0x0030 (0x0490 - 0x0460)
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Normal;                                                   // 0x0460(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HandleSize;                                               // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0474(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bImageScale;                                              // 0x0484(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0485(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLineHandleComponent");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoRectangleComponent
// 0x0030 (0x0490 - 0x0460)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     DirectionX;                                               // 0x0460(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DirectionY;                                               // 0x046C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetX;                                                  // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LengthX;                                                  // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LengthY;                                                  // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0488(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SegmentFlags;                                             // 0x048C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x048D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRectangleComponent");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// 0x0088 (0x00B0 - 0x0028)
class UGizmoLambdaHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentHitTarget
// 0x0058 (0x0080 - 0x0028)
class UGizmoComponentHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         Component;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSet
// 0x0010 (0x0038 - 0x0028)
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                       Behaviors;                                                // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSet");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSource
// 0x0000 (0x0028 - 0x0028)
class UInputBehaviorSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputRouter
// 0x0088 (0x00B0 - 0x0028)
class UInputRouter : public UObject
{
public:
	bool                                               bAutoInvalidateOnHover;                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoInvalidateOnCapture;                                 // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x002A(0x000E) MISSED OFFSET
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputRouter");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractionMechanic
// 0x0008 (0x0030 - 0x0028)
class UInteractionMechanic : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractionMechanic");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmoManager
// 0x0090 (0x00B8 - 0x0028)
class UInteractiveGizmoManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FActiveGizmo>                        ActiveGizmos;                                             // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	TMap<struct FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                            // 0x0058(0x0050)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoManager");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolContextTransactionProvider
// 0x0000 (0x0028 - 0x0028)
class UToolContextTransactionProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolManager
// 0x0110 (0x0138 - 0x0028)
class UInteractiveToolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInteractiveTool*                            ActiveLeftTool;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveTool*                            ActiveRightTool;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	TMap<struct FString, class UInteractiveToolBuilder*> ToolBuilders;                                             // 0x0090(0x0050)
	unsigned char                                      UnknownData02[0x58];                                      // 0x00E0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolManager");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolFrameworkComponent
// 0x0000 (0x0028 - 0x0028)
class UToolFrameworkComponent : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolFrameworkComponent");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolsContext
// 0x0070 (0x0098 - 0x0028)
class UInteractiveToolsContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	class UInputRouter*                                InputRouter;                                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveToolManager*                     ToolManager;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveGizmoManager*                    GizmoManager;                                             // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: SoftClassProperty InteractiveToolsFramework.InteractiveToolsContext.ToolManagerClass

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolsContext");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.IntervalGizmoActor
// 0x0018 (0x0238 - 0x0220)
class AIntervalGizmoActor : public AGizmoActor
{
public:
	class UGizmoLineHandleComponent*                   UpIntervalComponent;                                      // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGizmoLineHandleComponent*                   DownIntervalComponent;                                    // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGizmoLineHandleComponent*                   ForwardIntervalComponent;                                 // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoActor");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.IntervalGizmoBuilder
// 0x0098 (0x00C0 - 0x0028)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.IntervalGizmo
// 0x00F8 (0x0130 - 0x0038)
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*            StateTarget;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	class UTransformProxy*                             TransformProxy;                                           // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                         // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                             // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
	class UGizmoComponentAxisSource*                   AxisYSource;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisZSource;                                              // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x90];                                      // 0x00A0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmo");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// 0x0018 (0x0060 - 0x0048)
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoFloatParameterSource> FloatParameterSource;                                     // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              MinParameter;                                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxParameter;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// 0x00E0 (0x0110 - 0x0030)
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0030(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.MouseHoverBehavior
// 0x0068 (0x0098 - 0x0030)
class UMouseHoverBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MouseHoverBehavior");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// 0x00B0 (0x0130 - 0x0080)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0080(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiSelectionTool
// 0x0010 (0x0090 - 0x0080)
class UMultiSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiSelectionTool");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// 0x0010 (0x0058 - 0x0048)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                              Value;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x004C(0x0008)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// 0x0018 (0x0060 - 0x0048)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                                   Value;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0050(0x0010)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// 0x00C8 (0x0110 - 0x0048)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Parameter;                                                // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x00B4(0x0008)
	struct FVector                                     CurTranslationAxis;                                       // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationOrigin;                                     // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x00E0(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// 0x00E8 (0x0130 - 0x0048)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Parameter;                                                // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x00B8(0x0010)
	struct FVector                                     CurTranslationOrigin;                                     // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationNormal;                                     // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationAxisX;                                      // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationAxisY;                                      // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0100(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// 0x00C8 (0x0110 - 0x0048)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x00B4(0x0008)
	struct FVector                                     CurRotationAxis;                                          // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurRotationOrigin;                                        // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x00E0(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// 0x00A8 (0x00F0 - 0x0048)
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Parameter;                                                // 0x006C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0074(0x0010)
	struct FVector                                     CurScaleOrigin;                                           // 0x0084(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleNormal;                                           // 0x0090(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleAxisX;                                            // 0x009C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleAxisY;                                            // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x00C0(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoUniformScaleParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// 0x0078 (0x00C0 - 0x0048)
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Parameter;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x0070(0x0008)
	struct FVector                                     CurScaleAxis;                                             // 0x0078(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleOrigin;                                           // 0x0084(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialTransform;                                         // 0x0090(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisScaleParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// 0x00E8 (0x0130 - 0x0048)
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Parameter;                                                // 0x00B4(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x00BC(0x0010)
	struct FVector                                     CurScaleOrigin;                                           // 0x00CC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleNormal;                                           // 0x00D8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleAxisX;                                            // 0x00E4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurScaleAxisY;                                            // 0x00F0(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0100(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmo
// 0x00C8 (0x0100 - 0x0038)
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoVec2ParameterSource>  ParameterSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSignedAxis;                                        // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFlipX;                                                   // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFlipY;                                                   // 0x008A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInteraction;                                           // 0x008B(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionNormal;                                        // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxisX;                                         // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxisY;                                         // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionStartParameter;                                // 0x00D4(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionCurParameter;                                  // 0x00DC(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ParameterSigns;                                           // 0x00E4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00EC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmo");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.SelectionSet
// 0x0018 (0x0040 - 0x0028)
class USelectionSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SelectionSet");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSelectionSet
// 0x0040 (0x0080 - 0x0040)
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int>                                        Vertices;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<int>                                        Edges;                                                    // 0x0050(0x0010) (ZeroConstructor)
	TArray<int>                                        Faces;                                                    // 0x0060(0x0010) (ZeroConstructor)
	TArray<int>                                        Groups;                                                   // 0x0070(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSelectionSet");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickInputBehavior
// 0x00B0 (0x0130 - 0x0080)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0080(0x0040) MISSED OFFSET
	bool                                               HitTestOnRelease;                                         // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6F];                                      // 0x00C1(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickInputBehavior");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickToolBuilder
// 0x0000 (0x0028 - 0x0028)
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickToolBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickTool
// 0x0008 (0x0088 - 0x0080)
class USingleClickTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickTool");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoNilStateTarget
// 0x0008 (0x0030 - 0x0028)
class UGizmoNilStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoNilStateTarget");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// 0x0088 (0x00B0 - 0x0028)
class UGizmoLambdaStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// 0x0030 (0x0058 - 0x0028)
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// 0x00B8 (0x00E0 - 0x0028)
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TScriptInterface<class UToolContextTransactionProvider> TransactionManager;                                       // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoActor
// 0x0080 (0x02A0 - 0x0220)
class ATransformGizmoActor : public AGizmoActor
{
public:
	class UPrimitiveComponent*                         TranslateX;                                               // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateY;                                               // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateZ;                                               // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateYZ;                                              // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateXZ;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateXY;                                              // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateX;                                                  // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateY;                                                  // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateZ;                                                  // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         UniformScale;                                             // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         AxisScaleX;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         AxisScaleY;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         AxisScaleZ;                                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PlaneScaleYZ;                                             // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PlaneScaleXZ;                                             // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PlaneScaleXY;                                             // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoActor");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoBuilder
// 0x0098 (0x00C0 - 0x0028)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoBuilder");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmo
// 0x0168 (0x01A0 - 0x0038)
class UTransformGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class UTransformProxy*                             ActiveTarget;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToWorldGrid;                                         // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bGridSizeIsExplicit;                                      // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	struct FVector                                     ExplicitGridSize;                                         // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bRotationGridSizeIsExplicit;                              // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FRotator                                    ExplicitRotationGridSize;                                 // 0x005C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToWorldRotGrid;                                      // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseContextCoordinateSystem;                              // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	EToolContextCoordinateSystem                       CurrentCoordinateSystem;                                  // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x006A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData05[0x90];                                      // 0x0070(0x0090) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                         // 0x0100(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UPrimitiveComponent*>                 NonuniformScaleComponents;                                // 0x0110(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                             // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
	class UGizmoConstantFrameAxisSource*               CameraAxisSource;                                         // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisXSource;                                              // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisYSource;                                              // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisZSource;                                              // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   UnitAxisXSource;                                          // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   UnitAxisYSource;                                          // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   UnitAxisZSource;                                          // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                              // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoScaledTransformSource*                 ScaledTransformSource;                                    // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0188(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmo");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformProxy
// 0x00C8 (0x00F0 - 0x0028)
class UTransformProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	bool                                               bRotatePerObject;                                         // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSetPivotMode;                                            // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x0072(0x001E) MISSED OFFSET
	struct FTransform                                  SharedTransform;                                          // 0x0090(0x0030) (IsPlainOldData)
	struct FTransform                                  InitialSharedTransform;                                   // 0x00C0(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformProxy");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseTransformSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseTransformSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// 0x0010 (0x0058 - 0x0048)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                             Component;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bModifyComponentOnTransform;                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoScaledTransformSource
// 0x0098 (0x00E0 - 0x0048)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class UGizmoTransformSource>      ChildTransformSource;                                     // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0058(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoScaledTransformSource");
		
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// 0x0008 (0x0050 - 0x0048)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                             Proxy;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
