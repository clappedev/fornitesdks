#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Pickups.B_Pickups_C
// 0x01F0 (0x05A8 - 0x03B8)
class AB_Pickups_C : public AFortPickupEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pivot_Offset;                                             // 0x03D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation_Bias;                                            // 0x03DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Pickup;                                       // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh_Pickup;                                     // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSkeletalMesh;                                           // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_a_Backpack;                                            // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03FA(0x0006) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ListOfMaterialsExemptFromReparenting;                     // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPrimitiveComponent*                         SkeletalOrStaticMeshAssetPrimitive;                       // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentElementIndex;                                      // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MIDArray;                                                 // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          CurrentMaterial;                                          // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CurrentParentMaterial;                                    // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MaterialParentIsValid;                                    // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ListOfParentMaterialsExemptFromReparenting;               // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             BackpackParticleSystem;                                   // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tick_Accumulation;                                        // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed_After_Being_picked_up;                              // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ShrinkParticleWhenPickedupCurve;                          // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Tossed;                                                   // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Activate_Rarity_Particle_Systems;                         // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0472(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      Skeletal_Mesh_Pickup_Hologram;                            // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Hologram_MIDs;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture*>                            NormalMaps;                                               // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                Rarity_Color;                                             // 0x04A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Rarity_Level;                                             // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Current_MID;                                              // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Sweep_Brightness;                                         // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Sweep_Speed;                                              // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Component_Radius__Scaled_;                                // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Component_Radius_Multiplier;                              // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    Empty_Normal;                                             // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Pickup_Hologram;                              // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         SkeletalOrStaticMeshHologramAssetPrimitive;               // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Sparkle_Spawn_Rate__Ground_;                              // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        Outline_Rarity_Colors;                                    // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Sphere_Radius;                                            // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Delay_Before_Glow;                              // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Fade_In_Time;                                   // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Hold_Time;                                      // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Fade_Out_Time;                                  // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Picked_Up_Sweep_Speed;                                    // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBluglo;                                                 // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	class UParticleSystem*                             BlugloParticleSystem;                                     // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Picked_Up_Trail_PS;                                       // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Sparkle_Spawn_Rate__Picked_Up_;                           // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Lifetime__Picked_Up_;                                     // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          Hologram_Material;                                        // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLootGiftForOthers;                                      // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	class UForceFeedbackEffect*                        PickupForceFeedback;                                      // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Violentium_Particle;                                      // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ViolentiumParticleSystem;                                 // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Violentium;                                            // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	class UParticleSystem*                             LegendaryParticleSystem;                                  // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Pickups.B_Pickups_C");
		return ptr;
	}


	void CreateHologramMIDs();
	void SetHologramPickedUpParams(bool Tier_0_or_1);
	void SpawnPickedUpTrailPS();
	void SetRarityColor();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnTossed();
	void OnAboutToEnterBackpack(class AFortPawn** PickupTarget);
	void OnPickedUp();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Pickups(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
