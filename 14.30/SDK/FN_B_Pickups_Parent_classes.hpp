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

// BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C
// 0x0134 (0x0494 - 0x0360)
class AB_Pickups_Parent_C : public AFortPickupsParent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Root;                                                     // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7;// 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7;// 0x0374(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7;// 0x0378(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UTimelineComponent*                          MobileSelectedTL;                                         // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Pickup;                                       // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh_Pickup;                                     // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         SkeletalOrStaticMeshAssetPrimitive;                       // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                CurrentElementIndex;                                      // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Tossed;                                                   // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	float                                              Component_Radius__Scaled_;                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Component_Radius_Multiplier;                              // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        Outline_Rarity_Colors;                                    // 0x03B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Component_Radius;                                         // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Delay_Before_Glow;                              // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Fade_In_Time;                                   // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Hold_Time;                                      // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Fade_Out_Time;                                  // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Sweep_Speed;                                    // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Picked_Up_Trail_PS;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Sparkle_Spawn_Rate__Picked_Up_;                           // 0x03E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      Lifetime__Picked_Up_;                                     // 0x03F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UForceFeedbackEffect*                        PickupForceFeedback;                                      // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             Names_of_Materials_And_Parents_Exempt_from_Repartening;   // 0x0408(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasUniqueMaterialIds;                                     // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    BackgroundParticleSystem;                                 // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FLinearColor>                        BackgroundRarityColors;                                   // 0x0428(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Random_Rotation;                                          // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MobileSelectedOffset;                                     // 0x043C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MobileSelectedScale;                                      // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        MobileInteractIcon;                                       // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     MobileInteractIconLocation;                               // 0x0460(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MobileInteractIconScale;                                  // 0x046C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          MobileInteractionMaterial;                                // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PickedUp;                                                 // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	struct FLinearColor                                MissionItemOutlineColor;                                  // 0x0484(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C");
		
		return ptr;
	}


	void Mobile_Interation_Icon_Setup();
	void SetVisibleMobileInteractIcon(bool Visible);
	void SetActiveBackgroundParticleSystem(bool Active, bool Reset);
	void SetHiddenBackgroundVisualComponents(bool Hidden);
	void DestroyBackgroundVisualComponents();
	void ScaleHologramTimingsForPvP();
	void SetHologramPickedUpParams(bool Tier_0);
	void SpawnPickedUpTrailPS();
	void SetRarityColor();
	void UserConstructionScript();
	void MobileSelectedTL__FinishedFunc();
	void MobileSelectedTL__UpdateFunc();
	void EnableBacchusHighlight();
	void DisableBacchusHighlight();
	void HideBackgroundAndSpotlight();
	void OnAttached();
	void OnTossed();
	void ReceiveTick(float DeltaSeconds);
	void OnAboutToEnterBackpack(class AFortPawn* PickupTarget);
	void OnPickedUp();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Pickups_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
