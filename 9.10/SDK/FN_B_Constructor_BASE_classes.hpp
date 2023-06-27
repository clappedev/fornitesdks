#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C
// 0x06D0 (0x1550 - 0x0E80)
class AB_Constructor_BASE_C : public AFortConstructorBASE
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             BaseEnergyComponentC;                                     // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             BaseEnergyComponentB;                                     // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             BaseEnergyComponentA;                                     // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_FeeltheBase_Chargup;                                    // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FeelTheBaseTraceLocation;                                 // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere_Collision_For_Anim;                                // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Base_Device;                                           // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap1;                                             // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Workbench_Ticking;                                        // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       TC_BigBrother;                                            // 0x0EE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BigBrotherAdditionalNodes;                                // 0x0F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0F0C(0x0004) MISSED OFFSET
	class UTexture2D*                                  MiniMapIcon;                                              // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Minimap_View_Distance;                                    // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0F1C(0x0004) MISSED OFFSET
	class UClass*                                      GE_ElectrifiedFloors;                                     // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Hyperthreading;                                        // 0x0F28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SubroutineOptimization;                                // 0x0F48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SubroutineOptimization;                                // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Recycling;                                             // 0x0F70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ConnectedWood;                                            // 0x0F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConnectedStone;                                           // 0x0F94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConnectedMetal;                                           // 0x0F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0F9C(0x0004) MISSED OFFSET
	class UFortWorldItemDefinition*                    Wood;                                                     // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    Stone;                                                    // 0x0FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    Metal;                                                    // 0x0FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecyclingMultiplier;                                      // 0x0FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnWood;                                                // 0x0FBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnStone;                                               // 0x0FBD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnMetal;                                               // 0x0FBE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0FBF(0x0001) MISSED OFFSET
	int                                                SpawnMax;                                                 // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HyperThreadingMultiplier;                                 // 0x0FC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_DefensiveIntegration;                                  // 0x0FC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_DefensiveIntegration;                                  // 0x0FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_AutomatedDefenses;                                     // 0x0FF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AutomatedDefenses_Additional_Nodes;                       // 0x1010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1014(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_TotalIntegration;                                      // 0x1018(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_PowerModulation;                                       // 0x1038(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_PowerModulation;                                       // 0x1058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefensiveIntegrationLevel;                                // 0x1060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1064(0x0004) MISSED OFFSET
	class UClass*                                      GE_LoftyArchitecture;                                     // 0x1068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_LoftyArchitecture;                                     // 0x1070(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SafetyProtocols;                                       // 0x1090(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SafetyProtocols;                                       // 0x10B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BaseIsPlaced;                                             // 0x10B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x10B9(0x0003) MISSED OFFSET
	int                                                NumPlayersNearBase;                                       // 0x10BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BasePowerLevel;                                           // 0x10C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalResourcesSpawned;                                    // 0x10C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ResourceLimit;                                            // 0x10C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x10CC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Overclocking;                                          // 0x10D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_UpgradedPowerModulation;                               // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ElectrifiedFloors;                                     // 0x10F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SlowUnit;                                              // 0x1118(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_SlowUnit;                                              // 0x1138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ContainmentUnit;                                       // 0x1140(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_Grant_TriggerReflectDamage_FromBASEWall;               // 0x1160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_StrongerExit;                                          // 0x1168(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_StrongerExit;                                          // 0x1188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_CardioFeedbackLoop;                                    // 0x1190(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ShieldCapacitor;                                       // 0x11B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_ShieldCapacitor;                                       // 0x11D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStructRecyclingResource                    StoredWood;                                               // 0x11D8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStructRecyclingResource                    StoredStone;                                              // 0x11E8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStructRecyclingResource                    StoredMetal;                                              // 0x11F8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HyperthreadingResourceLimit;                              // 0x1208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MegaBASEAdditionalNodes;                                  // 0x120C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_NeuroFeedbackLoop;                                     // 0x1210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAbilitySystemComponent*                     ConstructorAbilitySystemComponent;                        // 0x1218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      GE_OutgoingHealAmp;                                       // 0x1220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_FullyContained;                                        // 0x1228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Effect_Mesh_Comp;                                         // 0x1230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Inner_MIDs_Friendly;                                      // 0x1238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Transition_Start_Delay;                                   // 0x1248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x124C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Outer_MIDs_Friendly;                                      // 0x1250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_MegaBASE;                                              // 0x1260(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NeuroFeedbackLoop;                                     // 0x1280(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_CardioFeedbackLoop;                                    // 0x12A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_FullyContained;                                        // 0x12A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InitialStaticMeshAnimationIsComplete;                     // 0x12C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x12C9(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundResourcesCreated;                                    // 0x12D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundResourcesCollected;                                  // 0x12D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                EffectMeshArray;                                          // 0x12E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABuildingSMActor*>                    BuildingActorArray;                                       // 0x12F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              DelayBeforeShowingMeshes;                                 // 0x1300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DelayDisabled;                                            // 0x1304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1305(0x0003) MISSED OFFSET
	struct FTimerHandle                                DelayedMeshedTimer;                                       // 0x1308(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_TrapDamage;                                            // 0x1310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_TrapDamage;                                            // 0x1318(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_TrapReloadRate;                                        // 0x1338(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_TrapReloadRate;                                        // 0x1358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_Constructor_BASEOutgoingDamageMod;                     // 0x1360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                T1Amount;                                                 // 0x1368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                T2Amount;                                                 // 0x136C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                T3Amount;                                                 // 0x1370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecyclingTimer;                                           // 0x1374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_FeelTheBase;                                           // 0x1378(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_FeelTheBase;                                           // 0x1398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerPawn_Constructor_C*                   ConstructorPawn;                                          // 0x13A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    FeelTheBasePowerLevel1;                                   // 0x13A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FeelTheBasePowerLevel2;                                   // 0x13B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FeelTheBasePowerLevel3;                                   // 0x13B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  EnergyBuildASound;                                        // 0x13C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EnergyBuildBSound;                                        // 0x13C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EnergyBuildCSound;                                        // 0x13D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EnergyStageTransitionSound;                               // 0x13D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayingLoopA;                                          // 0x13E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x13E1(0x0007) MISSED OFFSET
	class UClass*                                      GE_Enduring_Machine;                                      // 0x13E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Enduring_Machine;                                      // 0x13F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_MegaBASE_T01;                                          // 0x1410(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_MegaBASE_T02;                                          // 0x1430(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MegaBASE_AdditionalNodes_T01;                             // 0x1450(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MegaBASE_AdditionalNodes_T02;                             // 0x1470(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_Recycling_T01;                                         // 0x1490(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_Recycling_T02;                                         // 0x14B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              NewVar_1;                                                 // 0x14D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              NewVar_2;                                                 // 0x14F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BASEMD;                                                // 0x1510(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_BASEMD;                                                // 0x1530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_FullyContained_T01;                                    // 0x1538(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NewHeroSystem;                                            // 0x1540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x1541(0x0007) MISSED OFFSET
	class UClass*                                      GE_FullyContained_T01;                                    // 0x1548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Constructor_BASE.B_Constructor_BASE_C");
		return ptr;
	}


	void UpdateAudioCrossfade(class USoundBase* Sound);
	void GetFeelTheBaseTraceLocation(struct FTransform* TraceLocation);
	void SpawnResourceWithAmount(class UFortWorldItemDefinition* ItemDefinition, int AmountToSpawn, TEnumAsByte<EFortResourceType> ResourceType);
	void SetHealingMultiplier();
	void SetupTrapEffects(class UAbilitySystemComponent* AbilityComponent);
	void GetTrapGEFromTag(struct FGameplayTagContainer InTag, class UClass** OutGE);
	void OnRep_InitialStaticMeshAnimationIsComplete();
	void BaseSelfApplyGameplaySpec(struct FGameplayEffectSpecHandle GE_Spec);
	void SetBaseVisualGlow(class UAbilitySystemComponent* AbilitySystemComponent);
	void SetDamageMultiplier();
	void OnRep_CollectResources();
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	void AddResourceToStack(struct FStructRecyclingResource RecyclingResource, class UFortWorldItemDefinition* Stored_Resource, int AmountToSpawn, struct FStructRecyclingResource* SetValue);
	void SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int AmountToSpawn, TEnumAsByte<EFortResourceType> ResourceType);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void OnRep_BaseIsPlaced();
	void RecycleResources();
	void SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* HostileEffects);
	void SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* FriendlyEffects);
	void SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* BuildingEffects);
	void Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects);
	void SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int* NodesToAffect);
	void OnPlaced(class UAbilitySystemComponent* InstigatorAbilitySystemComponent);
	void Recycling();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void AnimateLegs(bool LegsUp);
	void StartBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void StopBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void GetDamageAmp();
	void ResourcesCreated();
	void ResourcesCollected();
	void BaseIsReadyToAnimate();
	void ShowHiddenMeshes();
	void ApplyTrapEffects();
	void SaveOwner(class APlayerPawn_Constructor_C* ConstructorPawn);
	void FeelTheBaseGlow(bool Stack1, bool Stack2, bool Stack3);
	void ResetFeelTheBaseGlow();
	void BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent(struct FName EventName, float EmitterTime, int ParticleCount);
	void ExecuteUbergraph_B_Constructor_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
