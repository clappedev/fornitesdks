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

// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// 0x0100 (0x3840 - 0x3740)
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>                  Default_Weapon_Materials;                                 // 0x3748(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBackpackMaterials;                                    // 0x3758(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHatMaterials;                                         // 0x3768(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHeadMaterials;                                        // 0x3778(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBodyMaterials;                                        // 0x3788(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnCharmMaterials;                                       // 0x3798(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnFaceMaterials;                                        // 0x37A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnLegsMaterials;                                        // 0x37B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnTorsoMaterials;                                       // 0x37C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UPostProcessComponent*                       PlayerPostProcessFX;                                      // 0x37D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshes;                                           // 0x37E0(0x0010) (Edit, BlueprintVisible)
	TArray<class UMaterialInstanceDynamic*>            PawnMaterials_ALL;                                        // 0x37F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x3800(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump
	unsigned char                                      UnknownData01[0x10];                                      // 0x3810(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnPlayHit
	unsigned char                                      UnknownData02[0x10];                                      // 0x3820(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicleDispatcher
	unsigned char                                      UnknownData03[0x10];                                      // 0x3830(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicleDispatcher

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnEnteredVehicle();
	void OnExitedVehicle();
	void OnJumped();
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int EntryPoint);
	void OnExitedVehicleDispatcher__DelegateSignature();
	void OnEnteredVehicleDispatcher__DelegateSignature();
	void OnPlayHit__DelegateSignature(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ShootingTargetReactToJump__DelegateSignature(class AFortPlayerPawnAthena* JumpingPlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
