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

// Enum Curie.ECurieEntityType
enum class ECurieEntityType : uint8_t
{
	Invalid                        = 0,
	Material                       = 1,
	Element                        = 2,
	ECurieEntityType_MAX           = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Curie.CurieEffectContainer
// 0x0050
struct FCurieEffectContainer
{
	struct FGameplayTagQuery                           TargetFilter;                                             // 0x0000(0x0048) (Edit, DisableEditOnInstance)
	class UGameplayEffect*                             GameplayEffect;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Curie.CurieStateBehaviorContainer
// 0x0010
struct FCurieStateBehaviorContainer
{
	struct FGameplayTag                                Identifier;                                               // 0x0000(0x0008)
	class UCurieEntityStateBehavior*                   StateBehaviorClass;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Curie.CurieContainerHandle
// 0x0004
struct FCurieContainerHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Curie.CurieInteractParamsHandle
// 0x0010
struct FCurieInteractParamsHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Curie.CurieInteractHandle
// 0x0004
struct FCurieInteractHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Curie.CurieElementHandle
// 0x0004
struct FCurieElementHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Curie.CurieStateHandle
// 0x0004
struct FCurieStateHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Curie.CurieEntityStateDefinitionBase
// 0x0010 (0x0018 - 0x0008)
struct FCurieEntityStateDefinitionBase : public FTableRowBase
{
	class UCurieEntityStateBehavior*                   StateBehaviorClass;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsEnabled : 1;                                           // 0x0010(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Curie.CurieElementDefinitionBase
// 0x0030 (0x0038 - 0x0008)
struct FCurieElementDefinitionBase : public FTableRowBase
{
	class UCurieElementBehavior*                       BehaviorClass;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       ElementalImmunities;                                      // 0x0010(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsEnabled : 1;                                           // 0x0030(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Curie.CurieMaterialDefinitionBase
// 0x0060 (0x0068 - 0x0008)
struct FCurieMaterialDefinitionBase : public FTableRowBase
{
	struct FGameplayTagContainer                       ElementalImmunities;                                      // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ElementAttachmentImmunities;                              // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ElementsAllowedWhenCannotBeDamaged;                       // 0x0048(0x0020) (Edit, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
