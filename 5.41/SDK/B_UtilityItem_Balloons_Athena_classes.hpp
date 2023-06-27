#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x74 (0xB9C - 0xB28)
// BlueprintGeneratedClass B_UtilityItem_Balloons_Athena.B_UtilityItem_Balloons_Athena_C
class AB_UtilityItem_Balloons_Athena_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(Transient, DuplicateTransient)
	TArray<class ABuildingGameplayActor*>        Balloons;                                          // 0xB30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UFortWorldItemDefinition*              Balloons_WID;                                      // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Ballon_Inflate_Sound;                              // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Ballon_StartToRise_Sound;                          // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Ballon_ReleaseSingle_Sound;                        // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BalloonsNeededForFlight;                           // 0xB60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_541D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Ballon_ReleaseMultiple_Sound;                      // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Ballon_FloatingLoop_Sound;                         // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BalloonFloatingLoop_Sound;                         // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Ballon_Shot_Sound;                                 // 0xB80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentBalloonsInUse;                              // 0xB88(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomMovement               FortCustomMovementMode;                            // 0xB8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_541E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotationOffset;                                    // 0xB90(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_UtilityItem_Balloons_Athena_C");
		return Clss;
	}

	void OnRep_CurrentBalloonsInUse(class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_GetNumActiveBalloons_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena2, bool K2Node_DynamicCast_bSuccess2, class APawn* CallFunc_GetInstigator_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsFalling_ReturnValue, int32 CallFunc_GetRemainingAmmo_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue);
	void UserConstructionScript();
	void SpawnBalloon();
	void ReleaseBalloon(bool ReleaseAll);
	void K2_OnUnEquip();
	void ReceiveBeginPlay();
	void ReleaseOnDBNO(bool bIsDBNO);
	void ReleaseAllBalloons();
	void EnteredVehicle(int32 SeatIndex);
	void RemoveItemFromPlayer();
	void MovementModeChangeFloat(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void BalloonShot(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_B_UtilityItem_Balloons_Athena(int32 EntryPoint, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABuildingGameplayActor* CallFunc_Array_Get_Item, class ABGA_Athena_Balloons_C* K2Node_DynamicCast_AsBGA_Athena_Balloons, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool K2Node_CustomEvent_ReleaseAll, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess2, bool K2Node_CustomEvent_bIsDBNO, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APawn* CallFunc_GetInstigator_ReturnValue3, class AController* CallFunc_GetController_ReturnValue, int32 K2Node_CustomEvent_SeatIndex, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue4, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena2, bool K2Node_DynamicCast_bSuccess4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_IsFalling_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_HasAuthority_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue5, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena3, bool K2Node_DynamicCast_bSuccess6, int32 Temp_int_Array_Index_Variable, class ABuildingGameplayActor* CallFunc_Array_Get_Item1, class ABGA_Athena_Balloons_C* K2Node_DynamicCast_AsBGA_Athena_Balloons1, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class ABuildingGameplayActor* K2Node_DynamicCast_AsBuilding_Gameplay_Actor, bool K2Node_DynamicCast_bSuccess8, bool CallFunc_Array_RemoveItem_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue6, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess9, int32 CallFunc_Subtract_IntInt_ReturnValue1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, int32 CallFunc_Array_LastIndex_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABGA_Athena_Balloons_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
