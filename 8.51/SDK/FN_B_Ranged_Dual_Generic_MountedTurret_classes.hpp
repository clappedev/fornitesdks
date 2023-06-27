#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C
// 0x01A0 (0x0E28 - 0x0C88)
class AB_Ranged_Dual_Generic_MountedTurret_C : public AFortWeaponRangedDualMountedTurret
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    LeftReload_Empty_;                                        // 0x0C90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LeftShells_Empty_;                                        // 0x0C98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LeftMuzzle_Empty_;                                        // 0x0CA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Reload_Empty_;                                            // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Shells_empty_;                                            // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ScopeMesh1P;                                              // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Muzzle_Empty_;                                            // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             MuzzleParticleSystem;                                     // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDestroyEffect;                                         // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Reload_Particles;                                     // 0x0CE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0CE2(0x0006) MISSED OFFSET
	class UParticleSystem*                             Reload_ParticleSystem;                                    // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastPlayFXTime;                                           // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinPlayFXTime;                                            // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnFire_;                                         // 0x0CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnReload_;                                       // 0x0CF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnPump_;                                         // 0x0CFA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0CFB(0x0005) MISSED OFFSET
	class UParticleSystem*                             ShellsParticleSystemTemplate;                             // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReloadSocketName;                                         // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AFortAIPawn*>                         Array_Of_Active_Enemy_AI;                                 // 0x0D10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Scope___Render_Enemies_To_Custom_Depth_Buffer;            // 0x0D20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0D21(0x0003) MISSED OFFSET
	struct FName                                       Shells_Socket_Name;                                       // 0x0D24(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<En_ShellTypes>                         ShellTypeSelect;                                          // 0x0D2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0D2D(0x0003) MISSED OFFSET
	float                                              Shells_Spawn_Rate_Scale;                                  // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShellsRotationRate;                                       // 0x0D34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Velocity;                                          // 0x0D40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Gravity;                                           // 0x0D4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shells_Lifetime;                                          // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Size;                                              // 0x0D5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shells_Time_Dilation;                                     // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Target_Scope_Vignette_Blur_Screen_Percentage;             // 0x0D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scope_Camera_Offset_Amount;                               // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SmallShells;                                              // 0x0D74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MediumShells;                                             // 0x0D75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LargeShells;                                              // 0x0D76(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShotgunShells;                                            // 0x0D77(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnergyShells;                                             // 0x0D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0D79(0x0003) MISSED OFFSET
	float                                              Inherit_Parent_Velocity;                                  // 0x0D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cylindrical_Radius;                                       // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cylindrical_Height;                                       // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugShellsSocket_;                                       // 0x0D88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_2_Post_Processes_For_the_Scope;                       // 0x0D89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0D8A(0x0006) MISSED OFFSET
	class USoundBase*                                  Sound_ScopeZoomIn;                                        // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ScopeZoomOut;                                       // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       ReticleHUDElementTags;                                    // 0x0DA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Is_Wind_Enabled;                                          // 0x0DC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0DC9(0x0007) MISSED OFFSET
	class UParticleSystem*                             MuzzleWindParticleSystem;                                 // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleParticleSystem1P;                                   // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPostProcessComponent*                       DownScopePostProcessSpawned;                              // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       DownScopePostProcessSpawned2;                             // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleWindParticleSpawned;                                // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	EDualWeaponHand                                    LastHandFired;                                            // 0x0DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0DF9(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                StartHeatingTimer;                                        // 0x0E08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                StartCoolingTimer;                                        // 0x0E10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_MountedTurret_FireStates>            FireState;                                                // 0x0E18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0E19(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound_OnFailToFireWhenOverheated;                         // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C");
		return ptr;
	}


	void SetPostProcessParams(float InputPin);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void ShowReticle();
	void HideReticle();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX();
	void ActivateReloadSmokeFX();
	void ActivateShellsFX(bool Bool, bool Offhand);
	void DeactivateShellsFX();
	void SetupShellFX();
	void UpdateShellEmittersFX(class UParticleSystemComponent* PS);
	void Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection);
	void Muzzle_Flash_FX(bool Persistent_Fire, bool Offhand);
	void SetWpnRarity();
	void AddRandomScale(bool Offhand);
	void UserConstructionScript();
	void OnLoaded_A62EBF3C40D050102770839C33BDCD2B(class UObject* Loaded);
	void OnLoaded(class UObject* Loaded);
	void OnLoaded_BCE7AA6D424444D979EECCB29BA62459(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStopWeaponFireFX();
	void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage);
	void OnSetTargeting(bool bNewIsTargeting);
	void K2_OnUnEquip();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue);
	void OnWeaponAttached();
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod);
	void SetWeaponPierceThrough(bool Enable, int TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit);
	void ReceiveBeginPlay();
	void OnWeaponVisibilityChanged(bool bVisible);
	void HideWeaponMesh();
	void ShowWeaponMesh();
	void HideWeapon();
	void ShowWeapon();
	void HandFired(EDualWeaponHand Hand, bool bPersistantFire);
	void BindOnHandFired();
	void OnStartOverheated();
	void OnStartHeating();
	void OnStartCooling();
	void OnFinishedCooling();
	void OnLocalFailedToFireWhenOverheated();
	void ExecuteUbergraph_B_Ranged_Dual_Generic_MountedTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
