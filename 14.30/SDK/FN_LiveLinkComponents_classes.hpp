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

// Class LiveLinkComponents.LiveLinkControllerBase
// 0x0008 (0x0030 - 0x0028)
class ULiveLinkControllerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkControllerBase");
		
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkCameraController
// 0x0000 (0x0030 - 0x0030)
class ULiveLinkCameraController : public ULiveLinkControllerBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkCameraController");
		
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkComponentController
// 0x00A8 (0x0158 - 0x00B0)
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation              SubjectRepresentation;                                    // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<class ULiveLinkRole*, class ULiveLinkControllerBase*> ControllerMap;                                            // 0x00C0(0x0050) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoClear)
	bool                                               bUpdateInEditor;                                          // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0111(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty LiveLinkComponents.LiveLinkComponentController.OnLiveLinkUpdated
	struct FComponentReference                         ComponentToControl;                                       // 0x0128(0x0028) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentController");
		
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkComponentSettings
// 0x0050 (0x0078 - 0x0028)
class ULiveLinkComponentSettings : public UObject
{
public:
	TMap<class ULiveLinkRole*, class ULiveLinkControllerBase*> DefaultControllerForRole;                                 // 0x0028(0x0050) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentSettings");
		
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkLightController
// 0x0000 (0x0030 - 0x0030)
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkLightController");
		
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkTransformController
// 0x0008 (0x0038 - 0x0030)
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData            TransformData;                                            // 0x0030(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkTransformController");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
