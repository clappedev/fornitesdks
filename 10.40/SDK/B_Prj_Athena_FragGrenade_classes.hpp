#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x2C (0x838 - 0x80C)
// BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C
class AB_Prj_Athena_FragGrenade_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	uint8                                        Pad_481B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x810(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SurfaceTypeSoundComponent_C*       BP_SurfaceTypeSoundComponent;                      // 0x818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        PreExploWarning_PreExplo_E5859FFE443F57359EC2C0AB73DFA4CD; // 0x820(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PreExploWarning__Direction_E5859FFE443F57359EC2C0AB73DFA4CD; // 0x824(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_481C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PreExploWarning;                                   // 0x828(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FeedbackCue;                                       // 0x830(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_FragGrenade_C");
		return Clss;
	}

	void PreExploWarning__FinishedFunc();
	void PreExploWarning__UpdateFunc();
	void FuseEnded();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void OnBounce(struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void Pre_Explo_Audio_Tell();
	void ExecuteUbergraph_B_Prj_Athena_FragGrenade(int32 EntryPoint, class AController* CallFunc_GetInstigatorController_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
