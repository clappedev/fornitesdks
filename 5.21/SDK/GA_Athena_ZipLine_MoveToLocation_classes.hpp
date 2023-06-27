#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x38 (0x908 - 0x8D0)
// BlueprintGeneratedClass GA_Athena_ZipLine_MoveToLocation.GA_Athena_ZipLine_MoveToLocation_C
class UGA_Athena_ZipLine_MoveToLocation_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D0(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          EventTriggerTagA;                                  // 0x8D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventTriggerTagB;                                  // 0x8E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTraveling;                                      // 0x8E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4249[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_ApplyRootMotionMoveToForce* PlayerMovement;                                    // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          LineTraceCheck;                                    // 0x8F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AB_Prj_Athena_ZipLine_Primary_C*       ZipLinePrimary;                                    // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_ZipLine_MoveToLocation_C");
		return Clss;
	}

	void OnTimedOutAndDestinationReached_33FEF4B74C81B887F8E6D3B55B38FC7D();
	void OnTimedOut_33FEF4B74C81B887F8E6D3B55B38FC7D();
	void OnTimedOutAndDestinationReached_33FEF4B74C81B887F8E6D3B518EBF39F();
	void OnTimedOut_33FEF4B74C81B887F8E6D3B518EBF39F();
	void EventReceived_20C2E1834971499489C165A2B10EBE34(const struct FGameplayEventData& Payload);
	void EventReceived_F91E99724E7B1544B779CFAC235CE860(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void TraceForObjectsInPath();
	void ExecuteUbergraph_GA_Athena_ZipLine_MoveToLocation(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, const struct FGameplayEventData& K2Node_CustomEvent_Payload1, const struct FGameplayEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGameplayEventData& K2Node_CustomEvent_Payload, float CallFunc_Multiply_FloatFloat_ReturnValue, class AB_Prj_Athena_ZipLine_Primary_C* K2Node_DynamicCast_AsB_Prj_Athena_Zip_Line_Primary, bool K2Node_DynamicCast_bSuccess, class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& Temp_struct_Variable1, TArray<class AActor*>& Temp_object_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue1, class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class AB_Prj_Athena_ZipLine_Primary_C* K2Node_DynamicCast_AsB_Prj_Athena_Zip_Line_Primary1, bool K2Node_DynamicCast_bSuccess1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_K2_CommitAbility_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue2, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsValid_ReturnValue3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_CapsuleTraceSingle_OutHit, bool CallFunc_CapsuleTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_DistanceBetweenTwoVectors_Distance, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
