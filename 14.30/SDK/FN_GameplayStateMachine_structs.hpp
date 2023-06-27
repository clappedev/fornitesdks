#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayStateMachine.ActiveGameplayStateData
// 0x0010
struct FActiveGameplayStateData
{
	class UGameplayState*                              GameplayState;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameplayTag                                PreviousStateId;                                          // 0x0008(0x0008) (Transient)
};

// ScriptStruct GameplayStateMachine.GameplayStateSettings
// 0x0010
struct FGameplayStateSettings
{
	class UGameplayState*                              StateClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                StateId;                                                  // 0x0008(0x0008) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayStateMachine.GameplayStateMachineItem
// 0x000C (0x0018 - 0x000C)
struct FGameplayStateMachineItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UGameplayStateMachine*                       StateMachine;                                             // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GameplayStateMachine.GameplayStateMachineArray
// 0x0018 (0x0120 - 0x0108)
struct FGameplayStateMachineArray : public FFastArraySerializer
{
	class UGameplayStateMachineManager*                StateMachineManager;                                      // 0x0108(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayStateMachineItem>           StateMachineItems;                                        // 0x0110(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct GameplayStateMachine.GameplayStateMachineData
// 0x00B8
struct FGameplayStateMachineData
{
	class UGameplayStateMachine*                       StateMachine;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0008(0x00B0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
