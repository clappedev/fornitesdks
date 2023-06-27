#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1B0 (0x938 - 0x788)
// BlueprintGeneratedClass B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C
class AB_Prj_Athena_PlaysetGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       PopupGrenade_ThrowLoop_AudioComponent;             // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BaseDestination;                                   // 0x7B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_634A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       P_BuildBuilding;                                   // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_DistantSound;                                  // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GridExplosionOffset;                               // 0x7D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeXY;                                        // 0x7E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeZ;                                         // 0x7E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridYOffset;                                       // 0x7EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridZOffset;                                       // 0x7F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECardinalDirection                CardinalDirection;                                 // 0x7F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_634B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ECardinalDirection, float>   OrientationYawOffsets;                             // 0x7F8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class ECardinalDirection, struct FVector> OrientationLocationOffsets;                        // 0x848(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               LastBounceLocation;                                // 0x898(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinBounceDistance;                                 // 0x8A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastBounceTime;                                    // 0x8A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinTimeBetweenBounces;                             // 0x8AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BounceSound;                                       // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BuildDelay;                                        // 0x8B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_634C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ECardinalDirection, struct FVector> OrientationDoortraceOffsets;                       // 0x8C0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                            InAirLoopSound;                                    // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       InAirLoopComponent;                                // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BounceTimeout;                                     // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_634D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlaysetItemDefinition*            CachedPlayset;                                     // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PlayspaceActorToSpawn;                             // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_PlaysetGrenade_C");
		return Clss;
	}

	void SetPlaysetData(class UFortPlaysetItemDefinition* NewPlayset);
	void CalculateCardinalDirection(class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2);
	void SetBaseDestination(struct FHitResult& Hit, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue2, int32 CallFunc_Round_ReturnValue2, float CallFunc_Multiply_IntFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnStop(struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void Handle_Bounce(const struct FVector& Hit_Location);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SpawnPlayspaceServer(class UFortPlaysetItemDefinition* Playset, const struct FVector& Location, const struct FRotator& Rotation);
	void ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade(int32 EntryPoint, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class ABP_DamageBalloon_Athena_C* K2Node_DynamicCast_AsBP_Damage_Balloon_Athena, bool K2Node_DynamicCast_bSuccess, class AFortAthenaSupplyDrop* K2Node_DynamicCast_AsFort_Athena_Supply_Drop, bool K2Node_DynamicCast_bSuccess1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, class ABuildingProp* K2Node_DynamicCast_AsBuilding_Prop, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue2, int32 CallFunc_Round_ReturnValue2, float CallFunc_Multiply_IntFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& K2Node_CustomEvent_Hit_Location, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_Square_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, const struct FHitResult& K2Node_Event_Hit1, bool Temp_bool_Has_Been_Initd_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_SwitchEnum1_CmpSuccess, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable1, bool Temp_bool_IsClosed_Variable1, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class UFortPlaysetItemDefinition* K2Node_CustomEvent_Playset, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Rotation, float CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, bool K2Node_SwitchEnum2_CmpSuccess, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_AdjustToFinalLocation_ReturnValue, class AFortVolume* CallFunc_SpawnVolume_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue2, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess4, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
