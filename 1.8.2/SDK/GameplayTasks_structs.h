#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{

};


// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{

};


// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTasks.GameplayResourceSet
// 0x0002
struct FGameplayResourceSet
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
