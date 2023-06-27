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

// BlueprintGeneratedClass Tiered_Chest_Athena.Tiered_Chest_Athena_C
// 0x00DC (0x0E04 - 0x0D28)
class ATiered_Chest_Athena_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Loot_Chest_Aura_Athena;                                 // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Chest_SmokeSheet;                                       // 0x0D38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        TreasureLight;                                            // 0x0D40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Chest_Ambient_Sound;                                      // 0x0D48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Time_C3D8BC62418047EE3E783F89FAF8EEB6;         // 0x0D50(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_C3D8BC62418047EE3E783F89FAF8EEB6;   // 0x0D54(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D55(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MobileSelectedTL_LerpInteactoIcon_EEB30EBE433E8977EDA63DB381EAF0C8;// 0x0D60(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MobileSelectedTL_LerpObject_EEB30EBE433E8977EDA63DB381EAF0C8;// 0x0D64(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MobileSelectedTL__Direction_EEB30EBE433E8977EDA63DB381EAF0C8;// 0x0D68(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0D69(0x0007) MISSED OFFSET
	class UTimelineComponent*                          MobileSelectedTL;                                         // 0x0D70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MobileOnInteractTL_LERP_9BD788A146DACD005BAF94BEBEDAB584; // 0x0D78(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MobileOnInteractTL__Direction_9BD788A146DACD005BAF94BEBEDAB584;// 0x0D7C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0D7D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MobileOnInteractTL;                                       // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Loot_Effect;                                              // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SpecialChestOpenSound;                                    // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MIDs;                                                     // 0x0D98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MobileWiggleAmount;                                       // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestChimeVisualUpdate;                                   // 0x0DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          MobileInteractionMaterial;                                // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        MobileInteractIcon;                                       // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     MobileInteractIconLocation;                               // 0x0DC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MobileInteractIconScale;                                  // 0x0DCC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Open_Chest_Sound;                                         // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_Loot_Chest_Opened_FX;                                   // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    NewVar_1;                                                 // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NewVar_2;                                                 // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Galileo_Chest_Open_FX;                                    // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpenFX_Rotation;                                          // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tiered_Chest_Athena.Tiered_Chest_Athena_C");
		
		return ptr;
	}


	void OnSetCustomDepthStencilValue(TArray<class UPrimitiveComponent*> PrimComponents, bool bUseCustomDepth, int StencilValue, bool* bOutConsume);
	void SetVisibleMobileInteractIcon(bool Visible);
	void GetMaxAudibleDistance(float* Max_Distance);
	void CleanupWiggleMIDs();
	void CreateMobileMIDs();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void SetLightVisibility(bool Visible);
	void UserConstructionScript();
	void MobileOnInteractTL__FinishedFunc();
	void MobileOnInteractTL__UpdateFunc();
	void MobileSelectedTL__FinishedFunc();
	void MobileSelectedTL__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnLoot();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void OnSetSearched();
	void Mobile_Outline_On();
	void Mobile_Outline_Off();
	void Mobile_OnInteract();
	void Mobile_OnDisconnect();
	void EnableBacchusHighlight();
	void DisableBacchusHighlight();
	void OnBeginSearch();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void HideChestOpenableCosmetics();
	void DetermineVFXRotation();
	void SpawnChestOpenVFX();
	void PlayChestOpeningTimeline();
	void ExecuteUbergraph_Tiered_Chest_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
