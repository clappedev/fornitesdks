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

// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
// 0x0140 (0x0DF8 - 0x0CB8)
class AB_Melee_Generic_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    IdleFX;                                                   // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SwingFX;                                                  // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrial;                                                // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MeleeHeavy_PSC;                                           // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             IdleFX_Template;                                          // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Idle_Effect;                                          // 0x0CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CE9(0x0007) MISSED OFFSET
	class UParticleSystem*                             Idle_Effect;                                              // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Idle_Effect_Component;                                    // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       IdleFXAttachSocket;                                       // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    IdleFX_Location_Rule;                                     // 0x0D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Idle_FX_Rotation_Rule;                                    // 0x0D09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Idle_FX_Scale_Rule;                                       // 0x0D0A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0D0B(0x0005) MISSED OFFSET
	class UParticleSystem*                             Swing_FX_Template;                                        // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Swing_Effect;                                         // 0x0D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0D19(0x0007) MISSED OFFSET
	class UParticleSystem*                             Swing_Effect;                                             // 0x0D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Swing_Effect_Component;                                   // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       SwingFXSocket;                                            // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    SwingFX_Location_Rule;                                    // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Swing_FX_Rotation_Rule;                                   // 0x0D39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Swing_FX_Scale_Rule;                                      // 0x0D3A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseAnimTrails;                                            // 0x0D3B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0D3C(0x0004) MISSED OFFSET
	class UParticleSystem*                             Anim_Trail_Template;                                      // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideFirstSocketName;                                  // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideSecond_Socket_Name;                               // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             AnimTrailsParticles;                                      // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrail_PSC;                                            // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       FirstSocketName;                                          // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Second_Socket_Name;                                       // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0D7C(0x0004) MISSED OFFSET
	class UParticleSystem*                             MeleeHeavy_ParticleSystem;                                // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDestroyEffect;                                         // 0x0D98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0D99(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        PokeAnimations;                                           // 0x0DA0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    WeaponMID;                                                // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  MeleeHeavy_Sound;                                         // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Melee_Heavy_Launch_Gameplay_Cue_Tag_Override;             // 0x0DC8(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                Melee_Heavy_Impact_Gameplay_Cue_Tag_Override;             // 0x0DD0(0x0008) (Edit, BlueprintVisible)
	struct FVector                                     Effects_Color_Level;                                      // 0x0DD8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0DE4(0x0004) MISSED OFFSET
	class USoundAttenuation*                           MeleeHeavySoundAttenuationSettings;                       // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundConcurrency*                           MeleeHeavySoundConcurrencySettings;                       // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C");
		
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void SetWpnRarity();
	void UserConstructionScript();
	void OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded);
	void MeleeSwingRight(bool First_Right);
	void MeleeSwingLeft(bool First_Left);
	void FootStepLeft();
	void FootStepRight();
	void MeleeSwingRight_End();
	void MeleeSwingLeft_End();
	void ReceiveBeginPlay();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void PlayRClickImpacts();
	void OnPlayImpactFX(const struct FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void OnEquippedWeaponDestory();
	void OnWeaponAttached();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnWeaponDetached();
	void ExecuteUbergraph_B_Melee_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
