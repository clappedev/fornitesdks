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

// Enum SmartObjectsModule.ESmartObjectTagPolicy
enum class ESmartObjectTagPolicy : uint8_t
{
	Any                            = 0,
	All                            = 1,
	MAX                            = 2
};


// Enum SmartObjectsModule.ESOReferenceDrawingMode
enum class ESOReferenceDrawingMode : uint8_t
{
	Default                        = 0,
	Sequence                       = 1,
	MAX                            = 2
};


// Enum SmartObjectsModule.ESmartObjectRequiredTagsPolicy
enum class ESmartObjectRequiredTagsPolicy : uint8_t
{
	RequireAny                     = 0,
	RequireAnyExact                = 1,
	RequireAll                     = 2,
	RequireAllExact                = 3,
	RequireNone                    = 4,
	ESmartObjectRequiredTagsPolicy_MAX = 5
};


// Enum SmartObjectsModule.ESmartObjectSlotState
enum class ESmartObjectSlotState : uint8_t
{
	Free                           = 0,
	Claimed                        = 1,
	Occupied                       = 2,
	MAX                            = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SmartObjectsModule.SmartObjectID
// 0x0004
struct FSmartObjectID
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct SmartObjectsModule.SmartObjectSlot
// 0x0020
struct FSmartObjectSlot
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayBehaviorConfig*                     BehaviorConfig;                                           // 0x0018(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
};

// ScriptStruct SmartObjectsModule.SmartObjectUseConfig
// 0x00D0
struct FSmartObjectUseConfig
{
	struct FGameplayTagQuery                           AvatarTagFilter;                                          // 0x0000(0x0048) (Edit, DisableEditOnInstance)
	struct FGameplayTagQuery                           ObjectTagFilter;                                          // 0x0048(0x0048) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivityTags;                                             // 0x0090(0x0020) (Edit)
	TArray<struct FSmartObjectSlot>                    Slots;                                                    // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UGameplayBehaviorConfig*                     DefaultBehavior;                                          // 0x00C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	uint32_t                                           MaxConcurrentUsers;                                       // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           DefaultExecutionPriority;                                 // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct SmartObjectsModule.SmartObjectExecutionSlot
// 0x0020
struct FSmartObjectExecutionSlot
{
	ESmartObjectSlotState                              State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      UserAvatar;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameplayBehavior*                           AssignedBehavior;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct SmartObjectsModule.SmartObjectUse
// 0x0030
struct FSmartObjectUse
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FSmartObjectExecutionSlot                   Slot;                                                     // 0x0008(0x0020)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct SmartObjectsModule.SmartObjectRuntime
// 0x0028
struct FSmartObjectRuntime
{
	class USmartObjectComponent*                       SOComponent;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class URichSmartObjectInterface>  AsRichSO;                                                 // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSmartObjectUse>                     ActiveUses;                                               // 0x0018(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
