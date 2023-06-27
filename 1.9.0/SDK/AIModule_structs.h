#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{

};


// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{

};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{

};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{

};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{

};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{

};


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{

};


// Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{

};


// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{

};


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{

};


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{

};


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{

};


// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{

};


// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{

};


// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{

};


// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{

};


// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{

};


// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{

};


// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{

};


// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{

};


// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{

};


// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{

};


// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{

};


// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{

};


// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{

};


// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{

};


// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{

};


// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{

};


// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{

};


// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{

};


// Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{

};


// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{

};


// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{

};


// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{

};


// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{

};


// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{

};


// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{

};


// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{

};


// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{

};


// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{

};


// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{

};


// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{

};


// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{

};


// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{

};


// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{

};


// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{

};


// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{

};


// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{

};


// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{

};


// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIModule.AISenseAffiliationFilter
// 0x0004
struct FAISenseAffiliationFilter
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.AIRequestID
// 0x0004
struct FAIRequestID
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.AIStimulus
// 0x0048
struct FAIStimulus
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AIModule.EnvNamedValue
// 0x0010
struct FEnvNamedValue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderValue
// 0x0020
struct FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// 0x0008 (0x0028 - 0x0020)
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AIMoveRequest
// 0x0040
struct FAIMoveRequest
{
	class AActor*                                      GoalActor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AIModule.GenericTeamId
// 0x0001
struct FGenericTeamId
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderIntValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderStructValue
// 0x0010 (0x0030 - 0x0020)
struct FAIDataProviderStructValue : public FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// 0x0020
struct FActorPerceptionBlueprintInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AIModule.AIDamageEvent
// 0x0030
struct FAIDamageEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AIModule.AINoiseEvent
// 0x0030
struct FAINoiseEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AIModule.AIPredictionEvent
// 0x0018
struct FAIPredictionEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AIModule.AISightEvent
// 0x0018
struct FAISightEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AIModule.AITeamStimulusEvent
// 0x0038
struct FAITeamStimulusEvent
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AIModule.AITouchEvent
// 0x0020
struct FAITouchEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AIModule.BlackboardKeySelector
// 0x0028
struct FBlackboardKeySelector
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AIModule.BTCompositeChild
// 0x0030
struct FBTCompositeChild
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AIModule.BTDecoratorLogic
// 0x0004
struct FBTDecoratorLogic
{
	TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           Number;                                                   // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.BlackboardEntry
// 0x0018
struct FBlackboardEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// 0x0018
struct FBehaviorTreeTemplateInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AIModule.AIDynamicParam
// 0x0038
struct FAIDynamicParam
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// 0x0048
struct FEQSParametrizedQueryExecutionRequest
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryResult
// 0x0040
struct FEnvQueryResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct AIModule.EnvOverlapData
// 0x0020
struct FEnvOverlapData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AIModule.EnvTraceData
// 0x0030
struct FEnvTraceData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AIModule.EnvDirection
// 0x0020
struct FEnvDirection
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// 0x0020
struct FCrowdAvoidanceSamplingPattern
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// 0x001C
struct FCrowdAvoidanceConfig
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// 0x01C0
struct FEnvQueryInstanceCache
{
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0000(0x01C0) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryRequest
// 0x0068
struct FEnvQueryRequest
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct AIModule.PawnActionStack
// 0x0008
struct FPawnActionStack
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.PawnActionEvent
// 0x0018
struct FPawnActionEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
