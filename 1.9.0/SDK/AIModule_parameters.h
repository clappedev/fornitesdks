#pragma once

#include "../SDK.h"

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
struct UAIBlueprintHelperLibrary_SpawnAIFromClass_Params
{
};

// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
struct UAIBlueprintHelperLibrary_SendAIMessage_Params
{
};

// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
struct UAIBlueprintHelperLibrary_IsValidAIRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
struct UAIBlueprintHelperLibrary_IsValidAILocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
struct UAIBlueprintHelperLibrary_IsValidAIDirection_Params
{
};

// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
struct UAIBlueprintHelperLibrary_GetBlackboard_Params
{
};

// Function AIModule.AIBlueprintHelperLibrary.GetAIController
struct UAIBlueprintHelperLibrary_GetAIController_Params
{
};

// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
struct UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
{
};

// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
struct UBTFunctionLibrary_StopUsingExternalEvent_Params
{
};

// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
struct UBTFunctionLibrary_StartUsingExternalEvent_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
struct UBTFunctionLibrary_SetBlackboardValueAsVector_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
struct UBTFunctionLibrary_SetBlackboardValueAsString_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
struct UBTFunctionLibrary_SetBlackboardValueAsRotator_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
struct UBTFunctionLibrary_SetBlackboardValueAsObject_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
struct UBTFunctionLibrary_SetBlackboardValueAsName_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
struct UBTFunctionLibrary_SetBlackboardValueAsInt_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
struct UBTFunctionLibrary_SetBlackboardValueAsFloat_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
struct UBTFunctionLibrary_SetBlackboardValueAsEnum_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
struct UBTFunctionLibrary_SetBlackboardValueAsClass_Params
{
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
struct UBTFunctionLibrary_SetBlackboardValueAsBool_Params
{
};

// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
struct UBTFunctionLibrary_GetOwnersBlackboard_Params
{
};

// Function AIModule.BTFunctionLibrary.GetOwnerComponent
struct UBTFunctionLibrary_GetOwnerComponent_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
struct UBTFunctionLibrary_GetBlackboardValueAsVector_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct UBTFunctionLibrary_GetBlackboardValueAsString_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
struct UBTFunctionLibrary_GetBlackboardValueAsRotator_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
struct UBTFunctionLibrary_GetBlackboardValueAsObject_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct UBTFunctionLibrary_GetBlackboardValueAsName_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
struct UBTFunctionLibrary_GetBlackboardValueAsInt_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
struct UBTFunctionLibrary_GetBlackboardValueAsFloat_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
struct UBTFunctionLibrary_GetBlackboardValueAsEnum_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
struct UBTFunctionLibrary_GetBlackboardValueAsClass_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
struct UBTFunctionLibrary_GetBlackboardValueAsBool_Params
{
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
struct UBTFunctionLibrary_GetBlackboardValueAsActor_Params
{
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
struct UBTFunctionLibrary_ClearBlackboardValueAsVector_Params
{
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
struct UBTFunctionLibrary_ClearBlackboardValue_Params
{
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
struct UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
{
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
struct UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params
{
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
struct UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
{
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
struct UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params
{
};

// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
struct UNavLocalGridManager_SetLocalNavigationGridDensity_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CellSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
struct UNavLocalGridManager_RemoveLocalNavigationGrid_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
struct UNavLocalGridManager_FindLocalNavigationGridPath_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
struct UNavLocalGridManager_AddLocalNavigationGridForPoint_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
struct UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
struct UNavLocalGridManager_AddLocalNavigationGridForBox_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AIModule.PawnAction_BlueprintBase.ActionTick
struct UPawnAction_BlueprintBase_ActionTick_Params
{
};

// Function AIModule.PawnAction_BlueprintBase.ActionStart
struct UPawnAction_BlueprintBase_ActionStart_Params
{
};

// Function AIModule.PawnAction_BlueprintBase.ActionResume
struct UPawnAction_BlueprintBase_ActionResume_Params
{
};

// Function AIModule.PawnAction_BlueprintBase.ActionPause
struct UPawnAction_BlueprintBase_ActionPause_Params
{
};

// Function AIModule.PawnAction_BlueprintBase.ActionFinished
struct UPawnAction_BlueprintBase_ActionFinished_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
