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

// BlueprintGeneratedClass BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C
// 0x0110 (0x0940 - 0x0830)
class ABP_Athena_Environmental_ZipLine_C : public AFortAthenaZipline
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0830(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           InteractCapsule;                                          // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Line;                                                  // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           OverlapCapsule;                                           // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Zipline;                                                  // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0860(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x086C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MotorOffset;                                              // 0x0878(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineCollisionThickness;                                   // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x088C(0x0004) MISSED OFFSET
	class AActor*                                      PoleA;                                                    // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      PoleB;                                                    // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FCurveTableRowHandle                        SpeedCTHandle;                                            // 0x08A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        ZipLineEnabledCTHandle;                                   // 0x08B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        LineCollisionRadiusCTHandle;                              // 0x08C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        BuildingCheckBoxExtentsCTHandle;                          // 0x08D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       BackendName;                                              // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestItem;                                                // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineExtendBeyondPoleLength;                               // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PoleASocketLocation;                                      // 0x08F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PoleBSocketLocation;                                      // 0x0900(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortPlayerPawn*>                     PlayersPendingMovementModeChange;                         // 0x0918(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              CollisionHeightAboveLine;                                 // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerOffsetToLine_Hoverboard;                            // 0x092C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                EndOverlapReleaseTimer;                                   // 0x0938(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C");
		
		return ptr;
	}


	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void CalculatePositionsOfPoles();
	void Setup_Overlap_Bindings();
	void HandleEnterZipline(class AFortPlayerPawn* InPlayerPawn);
	void CheckForBuildings(class AFortPlayerPawn* Player, bool* BuildingNearby_);
	void QuestCheckForUse(class AFortPlayerController* FortPlayerController);
	void GetCharacterCustomMovementMode(class APawn* Character, TEnumAsByte<EFortCustomMovement>* CustomMovementMode, TEnumAsByte<EMovementMode>* MovementMode);
	void StartZipLining(class AFortPlayerPawn* FortPlayerPawn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleOnMapInfoInitialized();
	void HandleOnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void HandleOnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void HandleOnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReleaseZipline();
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
