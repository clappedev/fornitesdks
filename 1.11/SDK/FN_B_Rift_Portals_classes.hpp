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

// BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C
// 0x01E8 (0x0968 - 0x0780)
class AB_Rift_Portals_C : public ABuildingRift
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Wind_Vector_Explosion;                                    // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        WindVectorVortex;                                         // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Storm_Small_Vortex_Cue;                                   // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Rift_RandomLightning_01;                                // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RiftVortex;                                               // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Rift_Active;                                            // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleLightOnOff_LERP_9100A5CB43D5BF71190A45AB7C00C2B9;    // 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleLightOnOff__Direction_9100A5CB43D5BF71190A45AB7C00C2B9;// 0x07D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleLightOnOff;                                          // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostLight_LERP_B8E171DC42A8E999600BC085D7EDCE3D;         // 0x07E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BoostLight__Direction_B8E171DC42A8E999600BC085D7EDCE3D;   // 0x07E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BoostLight;                                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnCloud;                                               // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SwipeMaterial;                                            // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Plasma_Particles;                                         // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Lightning_Strike_Particles;                               // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Decal_Material;                                           // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // 0x0818(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	class UDecalComponent*                             Decal;                                                    // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVectorFieldComponent*                       Impact_Vector_Field;                                      // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortWindImpulseHandle                      Wind_Impulse;                                             // 0x0838(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Wind_Impulse_Default_Strength;                            // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Wind_location;                                            // 0x0840(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Wind_Radius;                                              // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              Overlapping_Actors;                                       // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACar_Copper_C*>                       ArrayOfNearbyCars;                                        // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FLinearColor                                Light_Color_Idle;                                         // 0x0870(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Light_Color_Active;                                       // 0x0880(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Intensity_Idle;                                     // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Intensity_Active;                                   // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Radius_Idle;                                        // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Radius_Active;                                      // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ParticlesBaseMID;                                         // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LightEnabled;                                             // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08A9(0x0003) MISSED OFFSET
	float                                              Light_Fade_In_Time;                                       // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Light_Fade_Out_Time;                                      // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnImpactParticles;                                     // 0x08B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08B5(0x0003) MISSED OFFSET
	float                                              ManualDeactivateDelayBeforeDestory;                       // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiftLightningDuration;                                    // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VortexSize;                                               // 0x08C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VortexSizeMin;                                            // 0x08CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VortexSizeMax;                                            // 0x08D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Twist_Amount_Min;                                         // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Twist_Amount_Max;                                         // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Strength_Min;                                      // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Strength_Max;                                      // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x08F4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    RiftVortexMID;                                            // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Twist_Amount;                                             // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Strength;                                          // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WPO_Strength;                                             // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Model_Height;                                             // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   UV_Tile_Multiplier_Min;                                   // 0x0910(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   UV_Tile_Multiplier_Max;                                   // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Frequency_Min;                                     // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wiggle_Frequency_Max;                                     // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   Wiggle_Speed_Min;                                         // 0x0928(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   Wiggle_Speed_Max;                                         // 0x0930(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_Spawn_Loc;                                      // 0x0938(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_Bloat;                                          // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiftVortexFadeInTime;                                     // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiftVortexFadeOutTime;                                    // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Water_Scene_Capture_Activated;                            // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0951(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Wind_Vortex_MID;                                          // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Explosion_Wind_Vector_Mesh_MID;                           // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C");
		return ptr;
	}


	void UserConstructionScript();
	void BoostLight__FinishedFunc();
	void BoostLight__UpdateFunc();
	void ScaleLightOnOff__FinishedFunc();
	void ScaleLightOnOff__UpdateFunc();
	void OnPlaced();
	void OnRemoved();
	void OnSpawnAI();
	void Lightning_Impact_Event();
	void OnActivated();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void FadeLightIn();
	void FadeLightOut();
	void ManuallyActivateRift();
	void ManuallyDeactivateRift();
	void PatrolEnemySuckIn(float Delay, float RiftLightningDuration, bool SpawnImpactParticles);
	void OnDeactivated();
	void ResetGate();
	void ExecuteUbergraph_B_Rift_Portals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
