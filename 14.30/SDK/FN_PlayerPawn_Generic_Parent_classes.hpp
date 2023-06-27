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

// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// 0x00E8 (0x2E88 - 0x2DA0)
class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>                  Default_Weapon_Materials;                                 // 0x2DA8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBackpackMaterials;                                    // 0x2DB8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHatMaterials;                                         // 0x2DC8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHeadMaterials;                                        // 0x2DD8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBodyMaterials;                                        // 0x2DE8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnCharmMaterials;                                       // 0x2DF8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnFaceMaterials;                                        // 0x2E08(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnLegsMaterials;                                        // 0x2E18(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnTorsoMaterials;                                       // 0x2E28(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UPostProcessComponent*                       PlayerPostProcessFX;                                      // 0x2E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshes;                                           // 0x2E40(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnMaterials_ALL;                                        // 0x2E50(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                WaterCounter;                                             // 0x2E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2E64(0x0004) MISSED OFFSET
	class AActor*                                      CurrentWaterMeshActor;                                    // 0x2E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInWater;                                                // 0x2E70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2E71(0x0003) MISSED OFFSET
	float                                              Time_when_you_ll_be_able_to_splash_again;                 // 0x2E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x2E78(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.OnOverlapWaterVolume

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(const struct FTransform& NewTransform);
	void ReinitializeWeaponMaterials();
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int EntryPoint);
	void OnOverlapWaterVolume__DelegateSignature(bool bIsInWater, class AFortPlayerPawn* Pawn, class AActor* Water);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
