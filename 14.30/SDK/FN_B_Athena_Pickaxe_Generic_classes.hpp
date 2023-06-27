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

// BlueprintGeneratedClass B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
// 0x004E (0x0DAE - 0x0D60)
class AB_Athena_Pickaxe_Generic_C : public AFortWeaponPickaxeAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    MeleeHeavy_PSC;                                           // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	EAttachmentRule                                    IdleFX_Location_Rule;                                     // 0x0D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Idle_FX_Rotation_Rule;                                    // 0x0D71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Idle_FX_Scale_Rule;                                       // 0x0D72(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    SwingFX_Location_Rule;                                    // 0x0D73(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Swing_FX_Rotation_Rule;                                   // 0x0D74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Swing_FX_Scale_Rule;                                      // 0x0D75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0D76(0x0002) MISSED OFFSET
	class UParticleSystem*                             MeleeHeavy_ParticleSystem;                                // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDestroyEffect;                                         // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0D91(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     Effects_Color_Level;                                      // 0x0DA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Equipped;                                                 // 0x0DAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEquipPendingInstigator;                                  // 0x0DAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C");
		
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void UnbindSwingAnimTrailEvents();
	void BindSwingAnimTrailEvents();
	void PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void SetWpnRarity();
	void UserConstructionScript();
	void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(const struct FName& StatName, int StatValue);
	void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(class UObject* Loaded);
	void MeleeSwingRight(bool First_Right);
	void MeleeSwingLeft(bool First_Left);
	void FootStepLeft();
	void FootStepRight();
	void MeleeSwingRight_End();
	void MeleeSwingLeft_End();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void PlayRClickImpacts();
	void OnEquippedWeaponDestory();
	void OnWeaponAttached();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnWeaponDetached();
	void OnInitWeaponCosmetics();
	void HandleKillWatch();
	void UpdateBasedOnKills();
	void CandyCaneUpdate();
	void Anim_Trails_Notify(bool bActive);
	void Anim_Trails_Disable();
	void SwingRight();
	void SwingLeft();
	void SwingRightEnd();
	void SwingLeftEnd();
	void OnInstigatorSet();
	void K2_OnUnEquip();
	void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
