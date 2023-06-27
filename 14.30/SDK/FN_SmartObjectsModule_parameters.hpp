#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SmartObjectsModule.AITask_UseSmartObject.UseSmartObject
struct UAITask_UseSmartObject_UseSmartObject_Params
{
	class AAIController*                               Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SmartObjectActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USmartObjectComponent*                       SmartObjectComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLockAILogic;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAITask_UseSmartObject*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_UseSmartObject
struct USmartObjectBlueprintFunctionLibrary_K2_UseSmartObject_Params
{
	class AActor*                                      Avatar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled
struct USmartObjectBlueprintFunctionLibrary_K2_SetSmartObjectEnabled_Params
{
	class AActor*                                      SmartObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_RemoveLooseGameplayTags
struct USmartObjectBlueprintFunctionLibrary_K2_RemoveLooseGameplayTags_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_AddLooseGameplayTags
struct USmartObjectBlueprintFunctionLibrary_K2_AddLooseGameplayTags_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
