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

// BlueprintGeneratedClass B_PetrolWeapon.B_PetrolWeapon_C
// 0x00C8 (0x1271 - 0x11A9)
class AB_PetrolWeapon_C : public AB_Ranged_Generic_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x11A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortSplatterSourceComponent*                FortSplatterSource;                                       // 0x11B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               EnableAmmoMod;                                            // 0x11C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x11C1(0x0007) MISSED OFFSET
	class ABGA_Petrol_Pickup_C*                        AttachedBGAActor;                                         // 0x11C8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x11D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachedBGAScale;                                         // 0x11D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x11E4(0x000C) MISSED OFFSET
	struct FTransform                                  AttachedBGARelativeTransform;                             // 0x11F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UFortInventoryOwnerInterface> InventoryInterface;                                       // 0x1220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGuid                                       InventoryGUID;                                            // 0x1230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNiagaraComponent*                           NS_FuelLeaking;                                           // 0x1240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              IsShootableWhileHeld;                                     // 0x1248(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortWeapon*                                 WeaponReference;                                          // 0x1268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowHUDKeyActions;                                        // 0x1270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_PetrolWeapon.B_PetrolWeapon_C");
		
		return ptr;
	}


	void OnRep_AttachedBGAActor();
	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);
	void OnWeaponAttached();
	void K2_OnUnEquip();
	void UpdateAndAttachBGA();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnEquip_Copy_();
	void OnStopWeaponFireFX();
	void OnUnEquip_Copy_();
	void ReceiveBeginPlay();
	void HUDKeyAction_Targeting(bool IsTargeting);
	void OnHolstered();
	void OnUnholstered();
	void BindHolsterEvents();
	void UnbindHolsterEvents();
	void BGADestroyedWhileHeld();
	void ReplicateOnUnholstered();
	void ReplicateOnHolstered();
	void ExecuteUbergraph_B_PetrolWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
