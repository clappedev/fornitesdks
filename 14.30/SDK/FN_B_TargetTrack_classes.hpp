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

// BlueprintGeneratedClass B_TargetTrack.B_TargetTrack_C
// 0x011B (0x0CF3 - 0x0BD8)
class AB_TargetTrack_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            ProximityTrigger;                                         // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Target_Move_Loop_Cue;                                     // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Target_Move_Stop_Cue;                                     // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Target_Move_Start_Cue;                                    // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UToyOptionsComponent_C*                      ToyOptionsComponent;                                      // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TargetAttachPoint;                                        // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Target_Track;                                          // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TargetMovement_NewTrack_0_9F61BF394D22B10B7DAB4683CA4746AC;// 0x0C18(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TargetMovement__Direction_9F61BF394D22B10B7DAB4683CA4746AC;// 0x0C1C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C1D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TargetMovement;                                           // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0C28(0x0008) MISSED OFFSET
	struct FTransform                                  BaseTransformForTarget;                                   // 0x0C30(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LengthScaleSetting;                                       // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayAtEndSetting;                                        // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProximityTriggerSizeSetting;                              // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialMovementDelaySetting;                              // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrackSpeedSetting;                                        // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCurrentlyMoving;                                        // 0x0C74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AtStartPoint;                                             // 0x0C75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoopingSetting;                                           // 0x0C76(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0C77(0x0001) MISSED OFFSET
	int                                                RotationSetting;                                          // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0C7C(0x0004) MISSED OFFSET
	class AB_ShootingTarget_Master_C*                  AttachedTarget;                                           // 0x0C80(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x0C88(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_TargetTrack.B_TargetTrack_C.LeftRightTargetBaseMesh
	unsigned char                                      UnknownData05[0x28];                                      // 0x0CB0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty B_TargetTrack.B_TargetTrack_C.ForwardBackwardTargetBaseMesh
	TArray<class UPrimitiveComponent*>                 NewVar_1;                                                 // 0x0CD8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsTargetUp;                                               // 0x0CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CurrentMovementState;                                     // 0x0CE9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0CEA(0x0002) MISSED OFFSET
	int                                                Audio_Speed_Parameter;                                    // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      LeftToRightmovementState;                                 // 0x0CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      RightToLeftMovementState;                                 // 0x0CF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      StopMovementState;                                        // 0x0CF2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_TargetTrack.B_TargetTrack_C");
		
		return ptr;
	}


	TArray<class UMeshComponent*> GetMeshComponents();
	class UStaticMesh* GetCollisionStaticMesh();
	void Set_Audio_Speed_Sound(float Target_Speed);
	void OnRep_CurrentMovementState();
	void SetMovementState(unsigned char State);
	void UpdateLerpedPosition(float Alpha);
	void OnRep_CurrentLerpValue();
	void UpdateForRepNotify();
	void OnRep_IsCurrentlyMoving();
	void OnRep_CurrentDirection();
	void OnRep_IsTargetUp();
	void OnRep_ServerMoveStartTime();
	void SetTrackLength();
	void SetTargetRotationAndBaseMesh();
	float CalculatePlayRate();
	void GetFinalDestinationOfTarget(struct FVector* Destination);
	void TargetMovement__FinishedFunc();
	void TargetMovement__UpdateFunc();
	void OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8(class UObject* Loaded);
	void OnLoaded_3C01053C48BCC07B689033B6DB9706E0(class UObject* Loaded);
	void ReceiveBeginPlay();
	void MoveTarget();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void AttachedTargetKnockedDown();
	void StopTargetMovement();
	void AttachedTargetPoppedUp();
	void ReverseTargetMovement();
	void AsyncLoadTargetBase();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void InitializeSettings();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Move_Target_Audio();
	void Stop_Move_Target_Audio();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_TargetTrack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
