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

// Function GameplayStateMachine.GameplayState.UpdateState
struct UGameplayState_UpdateState_Params
{
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayStateMachine.GameplayState.GetStateId
struct UGameplayState_GetStateId_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayStateMachine.GameplayState.EndState
struct UGameplayState_EndState_Params
{
	struct FGameplayTag                                NextStateId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayStateMachine.GameplayState.BeginState
struct UGameplayState_BeginState_Params
{
	struct FGameplayTag                                PrevStateId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayStateMachine.GameplayStateMachine.SetState
struct UGameplayStateMachine_SetState_Params
{
	struct FGameplayTag                                InStateId;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData
struct UGameplayStateMachine_OnRep_ActiveGameplayStateData_Params
{
};

// Function GameplayStateMachine.GameplayStateMachine.GetStateMachineId
struct UGameplayStateMachine_GetStateMachineId_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateObject
struct UGameplayStateMachine_GetActiveStateObject_Params
{
	class UGameplayState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayStateMachine.GameplayStateMachine.GetActiveStateId
struct UGameplayStateMachine_GetActiveStateId_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition
struct UGameplayStateMachine_EvaluateStateTransition_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
