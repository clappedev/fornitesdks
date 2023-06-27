#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C
// 0x0124 (0x08E4 - 0x07C0)
class AGCNL_CurieState_ElementAttached_Electricity_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        PropagationSpline;                                        // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ActorStaticMeshComponent;                                 // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      OwningActor;                                              // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        CurieStaticMeshComponent;                                 // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                PropagationParentStaticMeshComponents;                    // 0x07E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABuildingSMActor*                            PropagationParentSMActor;                                 // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABuildingSMActor*                            OwningSMActor;                                            // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              PropagationArcLength;                                     // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLengthToDrawPropagationArc;                            // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcLifetime;                                   // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcTilingDivisorMin;                           // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcTilingDivisorMax;                           // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcJumpDuration;                               // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeActivatingMaterialTransition;                  // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcFadeoutTime;                                // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcWorldScaleMin;                              // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcWorldScaleMax;                              // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcNoiseScaleMin;                              // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcNoiseScaleMax;                              // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcZScaleMin;                                  // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcZScaleMax;                                  // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RetriggerPropagationSplineTimer;                          // 0x0840(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DelayBeforeRetriggeringPropagationSpline;                 // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CurieColor;                                               // 0x084C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                OwningActorStaticMeshComponents;                          // 0x0860(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     OwningActorOrientation;                                   // 0x0870(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RelativeRotationAmount;                                   // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Clamped;                                                  // 0x0880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0881(0x0003) MISSED OFFSET
	struct FVector                                     PropagationParentSMActorCentroid;                         // 0x0884(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OwningSMActorCentroid;                                    // 0x0890(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CentroidRandomBias;                                       // 0x089C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProgagationParentFound;                                   // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08A9(0x0007) MISSED OFFSET
	TArray<class UStaticMesh*>                         ArcMeshes;                                                // 0x08B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PropagationArcYScaleMin;                                  // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcYScaleMax;                                  // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFirstLoop;                                              // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08C9(0x0003) MISSED OFFSET
	float                                              PropagationArcSplineWidthFirstLoop;                       // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcSplineWidth;                                // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropagationArcColorScale;                                 // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VectorFromOwningActorToParent;                            // 0x08D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C");
		
		return ptr;
	}


	void GetRandomPropagationArcSpline(class UStaticMesh** Output);
	void GetNiagaraFlippedAxes(const struct FVector& VectorIn, struct FVector* VectorOut);
	void GetSplineRelativeRotationXOffset(float* X);
	void GetActorPlaneOrientation();
	void SetPropagationSplineCustomPrimitiveData();
	void SetPropagationSplineHiddenInGame(bool NewHidden);
	void FindPropagationParent(bool* Found);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void DrawPropagationSpline();
	void HideSplineMesh();
	void RetriggerPropagationSpline();
	void ExecuteUbergraph_GCNL_CurieState_ElementAttached_Electricity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
