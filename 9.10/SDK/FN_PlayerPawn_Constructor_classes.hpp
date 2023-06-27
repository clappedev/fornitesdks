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

// BlueprintGeneratedClass PlayerPawn_Constructor.PlayerPawn_Constructor_C
// 0x012C (0x29B4 - 0x2888)
class APlayerPawn_Constructor_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2888(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               ShieldCollider;                                           // 0x2890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ShieldCollisionAttachLocation;                            // 0x2898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ServerShieldMesh;                                         // 0x28A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldMesh;                                               // 0x28A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IFFShield_Light;                                          // 0x28B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BullRushPoke;                                             // 0x28B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TakeDamageTimeline_LineBrightness_E993138E4A26ED909055A89FDA7BCA47;// 0x28C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TakeDamageTimeline_DamageFlash_E993138E4A26ED909055A89FDA7BCA47;// 0x28C4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TakeDamageTimeline__Direction_E993138E4A26ED909055A89FDA7BCA47;// 0x28C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x28C9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TakeDamageTimeline;                                       // 0x28D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_Activate;                                               // 0x28D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      ShieldPlayerMesh;                                         // 0x28E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_IFF_ShieldFlicker;                                    // 0x28E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFlash;                                              // 0x28F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LineBrightness;                                           // 0x28F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_TIABExplosion;                                          // 0x2900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_TIAB;                                               // 0x2908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Kinetic_Overload;                                   // 0x2910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Start;                                       // 0x2918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Stop;                                        // 0x2920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Impact_1;                                    // 0x2928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Finalized_IFF_BackPack_Offset;                            // 0x2930(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IFF_Local_Offset_Without_Backpack;                        // 0x293C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IFF_Local_Offset_With_Back_Pack;                          // 0x2948(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2954(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x2954(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArmAnim
	TArray<class UPrimitiveComponent*>                 AllIFFMeshes;                                             // 0x2968(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          IFFMaterialParent;                                        // 0x2978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FIFFBoneConfig>                      IFFBoneConfigs;                                           // 0x2980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AB_Constructor_BASE_C*                       SavedBase;                                                // 0x2990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_Perk_C_Constructor_BASE_C*                SavedBASE2;                                               // 0x2998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         NewVar_1;                                                 // 0x29A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Plasma_Pulse_Location;                                    // 0x29A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Constructor.PlayerPawn_Constructor_C");
		return ptr;
	}


	void OnRep_SavedBase();
	void SetIFFMeshesEnabled(bool IsEnabled);
	void UserConstructionScript();
	void TakeDamageTimeline__FinishedFunc();
	void TakeDamageTimeline__UpdateFunc();
	void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Constructor_PlasmaPulse_IFFCoding(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ReceiveBeginPlay();
	void testIFF();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void PlayArm();
	void testEndIFF();
	void SetMenuScreenClassName();
	void MultiToggleShield(bool Toggle);
	void ToggleShield(bool Toggle);
	void SetBase(class AB_Constructor_BASE_C* SavedBase);
	void SetBase2(class AB_Perk_C_Constructor_BASE_C* SavedBASE2);
	void SetPlasmaPulseLocation(struct FVector Plasma_Pulse_Location);
	void ExecuteUbergraph_PlayerPawn_Constructor(int EntryPoint);
	void PlayArmAnim__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
