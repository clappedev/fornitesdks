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

// Class ControlRig.ControlRig
// 0x0338 (0x0360 - 0x0028)
class UControlRig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0028(0x004C) MISSED OFFSET
	ERigExecutionType                                  ExecutionType;                                            // 0x0074(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	class URigVM*                                      VM;                                                       // 0x0078(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRigHierarchyContainer                      Hierarchy;                                                // 0x0080(0x01B0) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0230(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ControlRig.ControlRig.GizmoLibrary
	unsigned char                                      UnknownData03[0x10];                                      // 0x0258(0x0010) MISSED OFFSET
	TMap<struct FName, struct FCachedPropertyPath>     InputProperties;                                          // 0x0268(0x0050) (Deprecated)
	TMap<struct FName, struct FCachedPropertyPath>     OutputProperties;                                         // 0x02B8(0x0050) (Deprecated)
	struct FControlRigDrawContainer                    DrawContainer;                                            // 0x0308(0x0010)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class UAnimationDataSourceRegistry*                DataSourceRegistry;                                       // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x38];                                      // 0x0328(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRig");
		
		return ptr;
	}

};


// Class ControlRig.AdditiveControlRig
// 0x0010 (0x0370 - 0x0360)
class UAdditiveControlRig : public UControlRig
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.AdditiveControlRig");
		
		return ptr;
	}

};


// Class ControlRig.ControlRigBlueprintGeneratedClass
// 0x0000 (0x0328 - 0x0328)
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigBlueprintGeneratedClass");
		
		return ptr;
	}

};


// Class ControlRig.ControlRigComponent
// 0x0048 (0x00F8 - 0x00B0)
class UControlRigComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ControlRig.ControlRigComponent.OnPreInitializeDelegate
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ControlRig.ControlRigComponent.OnPostInitializeDelegate
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ControlRig.ControlRigComponent.OnPreEvaluateDelegate
	unsigned char                                      UnknownData03[0x10];                                      // 0x00E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ControlRig.ControlRigComponent.OnPostEvaluateDelegate
	class UControlRig*                                 ControlRig;                                               // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigComponent");
		
		return ptr;
	}


	void OnPreInitialize();
	void OnPreEvaluate();
	void OnPostInitialize();
	void OnPostEvaluate();
	class UControlRig* BP_GetControlRig();
};


// Class ControlRig.ControlRigGizmoLibrary
// 0x00B8 (0x00E0 - 0x0028)
class UControlRigGizmoLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FControlRigGizmoDefinition                  DefaultGizmo;                                             // 0x0030(0x0060) (Edit)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ControlRig.ControlRigGizmoLibrary.DefaultMaterial
	struct FName                                       MaterialColorParameter;                                   // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FControlRigGizmoDefinition>          Gizmos;                                                   // 0x00C0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigGizmoLibrary");
		
		return ptr;
	}

};


// Class ControlRig.ControlRigLayerInstance
// 0x0000 (0x02C0 - 0x02C0)
class UControlRigLayerInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigLayerInstance");
		
		return ptr;
	}

};


// Class ControlRig.ControlRigObjectHolder
// 0x0010 (0x0038 - 0x0028)
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                             Objects;                                                  // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigObjectHolder");
		
		return ptr;
	}

};


// Class ControlRig.ControlRigSequence
// 0x0058 (0x0208 - 0x01B0)
class UControlRigSequence : public ULevelSequence
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ControlRig.ControlRigSequence.LastExportedToAnimationSequence
	unsigned char                                      UnknownData01[0x28];                                      // 0x01D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ControlRig.ControlRigSequence.LastExportedUsingSkeletalMesh
	float                                              LastExportedFrameRate;                                    // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0204(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigSequence");
		
		return ptr;
	}

};


// Class ControlRig.ControlRigSequencerAnimInstance
// 0x0010 (0x02D0 - 0x02C0)
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigSequencerAnimInstance");
		
		return ptr;
	}

};


// Class ControlRig.ControlRigSettings
// 0x0000 (0x0038 - 0x0038)
class UControlRigSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigSettings");
		
		return ptr;
	}

};


// Class ControlRig.ControlRigManipulatable
// 0x0000 (0x0028 - 0x0028)
class UControlRigManipulatable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigManipulatable");
		
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigParameterSection
// 0x0138 (0x0280 - 0x0148)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	class UControlRig*                                 ControlRig;                                               // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       ControlsMask;                                             // 0x0150(0x0010) (ZeroConstructor)
	struct FMovieSceneTransformMask                    TransformMask;                                            // 0x0160(0x0004)
	bool                                               bAdditive;                                                // 0x0164(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyBoneFilter;                                         // 0x0165(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0166(0x0002) MISSED OFFSET
	struct FInputBlendPose                             BoneFilter;                                               // 0x0168(0x0010) (Edit)
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0178(0x00A0)
	TMap<struct FName, struct FChannelMapInfo>         ControlChannelMap;                                        // 0x0218(0x0050)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0268(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigParameterSection");
		
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigParameterTrack
// 0x0030 (0x00A8 - 0x0078)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	class UControlRig*                                 ControlRig;                                               // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMovieSceneSection*                          SectionToKey;                                             // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0090(0x0010) (ExportObject, ZeroConstructor)
	struct FName                                       TrackName;                                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigParameterTrack");
		
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigSection
// 0x00B8 (0x0218 - 0x0160)
class UMovieSceneControlRigSection : public UMovieSceneSubSection
{
public:
	bool                                               bAdditive;                                                // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyBoneFilter;                                         // 0x0161(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0162(0x0006) MISSED OFFSET
	struct FInputBlendPose                             BoneFilter;                                               // 0x0168(0x0010) (Edit)
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0178(0x00A0)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigSection");
		
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneControlRigTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigTrack");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
