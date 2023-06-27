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

// Class SmartObjectsModule.AITask_UseSmartObject
// 0x0040 (0x00B0 - 0x0070)
class UAITask_UseSmartObject : public UAITask
{
public:
	class USmartObjectComponent*                       SOComponent;                                              // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty SmartObjectsModule.AITask_UseSmartObject.OnFinished
	class UAITask_MoveTo*                              MoveToTask;                                               // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.AITask_UseSmartObject");
		
		return ptr;
	}


	class UAITask_UseSmartObject* STATIC_UseSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic);
};


// Class SmartObjectsModule.BTTask_FindAndUseSmartObject
// 0x0050 (0x00C0 - 0x0070)
class UBTTask_FindAndUseSmartObject : public UBTTaskNode
{
public:
	struct FGameplayTagQuery                           ActivityRequirements;                                     // 0x0070(0x0048) (Edit)
	float                                              Radius;                                                   // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.BTTask_FindAndUseSmartObject");
		
		return ptr;
	}

};


// Class SmartObjectsModule.BTTask_UseSmartObject
// 0x0000 (0x0098 - 0x0098)
class UBTTask_UseSmartObject : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.BTTask_UseSmartObject");
		
		return ptr;
	}

};


// Class SmartObjectsModule.GenericSmartObject
// 0x0020 (0x0240 - 0x0220)
class AGenericSmartObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class USmartObjectComponent*                       SOComponent;                                              // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
	TArray<class AActor*>                              ReferenceActors;                                          // 0x0230(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.GenericSmartObject");
		
		return ptr;
	}

};


// Class SmartObjectsModule.RichSmartObjectInterface
// 0x0000 (0x0028 - 0x0028)
class URichSmartObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.RichSmartObjectInterface");
		
		return ptr;
	}

};


// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary");
		
		return ptr;
	}


	bool STATIC_K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject);
	bool STATIC_K2_SetSmartObjectEnabled(class AActor* SmartObject, bool bEnabled);
	bool STATIC_K2_RemoveLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags);
	bool STATIC_K2_AddLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags);
};


// Class SmartObjectsModule.SmartObjectComponent
// 0x0058 (0x0108 - 0x00B0)
class USmartObjectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty SmartObjectsModule.SmartObjectComponent.Config
	struct FSmartObjectID                              RegisteredID;                                             // 0x00E0(0x0004)
	uint32_t                                           ExecutionPriorityOverride;                                // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGameplayTagAssetInterface> GameplayTagAssetInterfaceImplementation;                  // 0x00E8(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bRichSmartObjectOwner : 1;                                // 0x00F8(0x0001) (Edit, EditConst)
	unsigned char                                      bRichSmartObjectComponent : 1;                            // 0x00F8(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00F9(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.SmartObjectComponent");
		
		return ptr;
	}

};


// Class SmartObjectsModule.SmartObjectConfig
// 0x0038 (0x0068 - 0x0030)
class USmartObjectConfig : public UDataAsset
{
public:
	TArray<struct FSmartObjectUseConfig>               Uses;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       DescriptionTags;                                          // 0x0040(0x0020)
	uint32_t                                           MaxConcurrentUsers;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.SmartObjectConfig");
		
		return ptr;
	}

};


// Class SmartObjectsModule.SmartObjectManager
// 0x0108 (0x0130 - 0x0028)
class USmartObjectManager : public UObject
{
public:
	TMap<struct FSmartObjectID, struct FSmartObjectRuntime> RuntimeSmartObjects;                                      // 0x0028(0x0050)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0078(0x00A8) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x0120(0x0001)
	unsigned char                                      bCreateIfMissing : 1;                                     // 0x0120(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              DefaultUnusedSmartObjectLifespan;                         // 0x0124(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.SmartObjectManager");
		
		return ptr;
	}

};


// Class SmartObjectsModule.SmartObjectRenderingComponent
// 0x0010 (0x0450 - 0x0440)
class USmartObjectRenderingComponent : public UPrimitiveComponent
{
public:
	ESOReferenceDrawingMode                            ReferenceDrawingMode;                                     // 0x0440(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0441(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SmartObjectsModule.SmartObjectRenderingComponent");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
