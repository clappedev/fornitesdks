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

// BlueprintGeneratedClass B_ShootingTarget_Master.B_ShootingTarget_Master_C
// 0x03F4 (0x0FCC - 0x0BD8)
class AB_ShootingTarget_Master_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        AimAssistPawn;                                            // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_TargetImpact_Falldown;                                  // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            RoundShortWeakPoint;                                      // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            RoundWeakPoint;                                           // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           HuskyWeakPoint1;                                          // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            PumpkinHeadTargetWeakPoint;                               // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            LlamaTargetWeakPoint;                                     // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            TomatoHeadTargetWeakPoint;                                // 0x0C18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            HandsOnHipsWeakPoint;                                     // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            PandaHeadWeakPoint;                                       // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            TeddyBearWeakPoint;                                       // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CrouchingTargetWeakPoint;                                 // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            HuskTargetWeakPoint;                                      // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DancingTargetWeakPoint;                                   // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            LoserTargetWeakPoint;                                     // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           StandingTargetWeakPoint;                                  // 0x0C58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TargetMesh;                                               // 0x0C60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HeightExtender;                                           // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystem;                                            // 0x0C70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ProximityTrigger;                                         // 0x0C78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMinigameProgressComponent*              FortMinigameProgress;                                     // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UToyOptionsComponent_C*                      ToyOptionsComponent;                                      // 0x0C88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Target_StandShort;                                     // 0x0C90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Target_Base;                                           // 0x0C98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              KnockDownTimeline_Rotation_8B965F244DB51315A670CE8BD54F045D;// 0x0CA0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    KnockDownTimeline__Direction_8B965F244DB51315A670CE8BD54F045D;// 0x0CA4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CA5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          KnockDownTimeline;                                        // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_Height_50A7E1DD45D0851E9ECD309DBAE220D5;       // 0x0CB0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_50A7E1DD45D0851E9ECD309DBAE220D5;   // 0x0CB4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CB5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PopUpTimeline_Rotation_EC7265FB4A8A31A05B401FB83B908B21;  // 0x0CC0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PopUpTimeline__Direction_EC7265FB4A8A31A05B401FB83B908B21;// 0x0CC4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0CC5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PopUpTimeline;                                            // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Rotated_Piece;                                            // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              StartingHealthSetting;                                    // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResetDelaySetting;                                        // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpTimeSetting;                                          // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBeforeHidingSetting;                                  // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMaxHealthMultiplier;                               // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HingeLocationSetting;                                     // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartingPositionSetting;                                  // 0x0CF0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPopUpsSetting;                                         // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreValueSetting;                                        // 0x0CF8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeakPointMultiplierSetting;                               // 0x0CFC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProximityDistanceSetting;                                 // 0x0D00(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamAssignmentSetting;                                    // 0x0D04(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AddGameTimeSetting;                                       // 0x0D08(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TargetMeshSetting;                                        // 0x0D0C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                NumResets;                                                // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PopUpOnJumpSetting;                                       // 0x0D14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeakPointKnockdownSetting;                                // 0x0D15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetIsUp;                                               // 0x0D16(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0D17(0x0001) MISSED OFFSET
	class UStaticMeshComponent*                        CurrentlyDisplayedMesh;                                   // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InJumpUpPosition;                                         // 0x0D20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeakPointHit;                                             // 0x0D21(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0D22(0x0006) MISSED OFFSET
	class UGameplayEffect*                             ModifyMaxHealth;                                          // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0D30(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetKnockedDownDispatcher
	unsigned char                                      UnknownData06[0x10];                                      // 0x0D40(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetPopUpDispatcher
	unsigned char                                      UnknownData07[0x28];                                      // 0x0D50(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.StandingTargetRef
	unsigned char                                      UnknownData08[0x28];                                      // 0x0D78(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.LoserTargetRef
	unsigned char                                      UnknownData09[0x28];                                      // 0x0DA0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.DancingTargetRef
	unsigned char                                      UnknownData10[0x28];                                      // 0x0DC8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.HuskTargetRef
	unsigned char                                      UnknownData11[0x28];                                      // 0x0DF0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.CrouchingTargetRef
	unsigned char                                      UnknownData12[0x28];                                      // 0x0E18(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.TeddyBearTargetRef
	unsigned char                                      UnknownData13[0x28];                                      // 0x0E40(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.PandaHeadTargetRef
	unsigned char                                      UnknownData14[0x28];                                      // 0x0E68(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.HandsOnHipsTargetRef
	unsigned char                                      UnknownData15[0x28];                                      // 0x0E90(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.TomatoHeadTargetRef
	unsigned char                                      UnknownData16[0x28];                                      // 0x0EB8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.LlamaTargetRef
	unsigned char                                      UnknownData17[0x28];                                      // 0x0EE0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.PumpkinHeadTargetRef
	unsigned char                                      UnknownData18[0x28];                                      // 0x0F08(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.HuskyTargetRef
	unsigned char                                      UnknownData19[0x28];                                      // 0x0F30(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.RoundTargetRef
	unsigned char                                      UnknownData20[0x28];                                      // 0x0F58(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.RoundTargetShortRef
	struct FTimerHandle                                PopUpDelayTimer;                                          // 0x0F80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                HideTargetTimer;                                          // 0x0F88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                HopTimer;                                                 // 0x0F90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData21[0x10];                                      // 0x0F98(0x0010) UNKNOWN PROPERTY: ArrayProperty B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetMeshesArray
	TArray<class UPrimitiveComponent*>                 WeakPointArray;                                           // 0x0FA8(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               UserSuppressHealthBar;                                    // 0x0FB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0FB9(0x0003) MISSED OFFSET
	struct FGameplayTag                                SetMaxHealthDataTag;                                      // 0x0FBC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle                 MaxHealthEffectHandler;                                   // 0x0FC4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_ShootingTarget_Master.B_ShootingTarget_Master_C");
		
		return ptr;
	}


	TArray<class UMeshComponent*> GetMeshComponents();
	class UStaticMesh* GetCollisionStaticMesh();
	void OnRep_TargetMeshSetting();
	void RestoreToMaxHealth();
	void WeakPointArrayContainsItems(bool* ArrayContainsItems);
	void GetWeaponDataFromDamageCauser(class UObject* DamageCauser, class UFortWeaponItemDefinition** OutWeaponData);
	void CalculateDamageFromWeaponData(class UFortWeaponItemDefinition* WeaponData, float InDamage, float* OutDamage);
	bool IsWithinWeakpointBounds(const struct FVector& Impact_Location, class USceneComponent* Component);
	void UpdateHealthBarVisibility(bool ShouldShowBar);
	float BlueprintModifyIncomingDamage(float Damage, const struct FGameplayTagContainer& InTags, const struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser);
	void SetAimAssistEnabled(bool NewType);
	void CreateWeakPointArray();
	void CheckIfShouldHop();
	void SetBunnyHopTimer();
	void ClearBunnyHopTimer();
	void InitializeHideTargetTimer();
	void HideTarget();
	void SetMaxHealth(float NewMaxHealth);
	bool TargetShouldFall();
	void SetStartingPosition();
	void MinigameIsRunning(bool* MinigameIsRunning);
	void ShouldTriggerTarget(class UObject* Overlapping_Actor, class UPrimitiveComponent* Overlapping_Component, bool* Result);
	void AwardScore(class AFortPlayerController* FortPlayerController, int* ScoreAwarded, int* TeamAwardedPoints);
	void CalculateScore(int* ScoreToAward);
	void PrepareChosenTarget(class UStaticMeshComponent* StaticMeshComponent, class UPrimitiveComponent* WeakPointComponent_1, class UPrimitiveComponent* WeakPointComponent2);
	bool WeakPointWasHit(const struct FHitResult& Hit_Result, class UPrimitiveComponent** HitComponent);
	void ResetWeakPoints();
	void CanPopUp(bool MinigameJustStartedOrStopped, bool* CanPopUp);
	void PopUpTimeline__FinishedFunc();
	void PopUpTimeline__UpdateFunc();
	void KnockDownTimeline__FinishedFunc();
	void KnockDownTimeline__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnReady_A57ED5A14BEB6A98DB20D88D1582D58A();
	void OnLoaded_068F5161459B8B1AEAD4A0B19781287D(class UObject* Loaded);
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void PopUpTarget(bool MinigameJustStartedOrStopped);
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void KnockdownTarget();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature();
	void PickMeshFromSettings();
	void InitializeSettings();
	void ResetFromSettings();
	void HideTargetTimerEvent();
	void SetHideTargetTimer(float TimerDuration);
	void Hop(bool InJumpUpPosition);
	void HopTimerEvent();
	void SetHopTimer();
	void Knock_Down_Audio(bool Knocked_Down_);
	void Impact_Audio(int Check_for_Positive_Score, class AController* Instigator);
	void SpawnWeakpointFX(const struct FTransform& ImpactTransform);
	void Target_Movement_Audio(bool Jump_Up_);
	void PopUpTargetTimerEvent();
	void PostFinishSpawning();
	void ExecuteUbergraph_B_ShootingTarget_Master(int EntryPoint);
	void TargetPopUpDispatcher__DelegateSignature();
	void TargetKnockedDownDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
