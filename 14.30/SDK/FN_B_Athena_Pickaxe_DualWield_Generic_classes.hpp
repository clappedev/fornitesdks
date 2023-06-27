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

// BlueprintGeneratedClass B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
// 0x0060 (0x1010 - 0x0FB0)
class AB_Athena_Pickaxe_DualWield_Generic_C : public AFortWeaponPickaxeDualWieldAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Equipped;                                                 // 0x0FB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAttachmentRule                                    IdleFX_Location_Rule;                                     // 0x0FB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Idle_FX_Rotation_Rule;                                    // 0x0FBA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Idle_FX_Scale_Rule;                                       // 0x0FBB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    SwingFX_Location_Rule;                                    // 0x0FBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAttachmentRule                                    Swing_FX_Rotation_Rule;                                   // 0x0FBD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAttachmentRule                                    Swing_FX_Scale_Rule;                                      // 0x0FBE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0FBF(0x0001) MISSED OFFSET
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             MeleeHeavy_ParticleSystem;                                // 0x0FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    MeleeHeavy_PSC;                                           // 0x0FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               UseDestroyEffect;                                         // 0x0FD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0FD9(0x0007) MISSED OFFSET
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0FE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Offhand_Alteration_Ambient_PS;                            // 0x0FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bEquipPendingInstigator;                                  // 0x0FF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0FF9(0x0003) MISSED OFFSET
	struct FName                                       Offhand_Socket_Name;                                      // 0x0FFC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1004(0x0004) MISSED OFFSET
	class UAnimMontage*                                MontageReference;                                         // 0x1008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C");
		
		return ptr;
	}


	void SetWpnRarity();
	void Unbind_Dual_Melee_Swing_Events();
	void Bind_Dual_Melee_Swing_Events();
	void Set_Active_Alteration_Idle_Particles(bool Active, bool Reset);
	void UserConstructionScript();
	void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void PlayRClickImpacts();
	void OnEquippedWeaponDestory();
	void OnWeaponAttached();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnWeaponDetached();
	void OnInitWeaponCosmetics();
	void Swing_Left_End();
	void Swing_Right_End();
	void OnInstigatorSet();
	void K2_OnUnEquip();
	void SwingRight_Common();
	void SwingLeft_Common();
	void Swing_Left();
	void Swing_Right();
	void Swing_Left_2();
	void Swing_Right_2();
	void Anim_Trails_Notify(bool bActive);
	void Anim_Trails_Disable();
	void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
