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

// BlueprintGeneratedClass GCN_RezIn.GCN_RezIn_C
// 0x016C (0x05CC - 0x0460)
class AGCN_RezIn_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C;// 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C;// 0x046C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C;// 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C;// 0x0474(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TFX_ResOutCharacterMesh;                                  // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028;// 0x0480(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028;// 0x0484(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TFX_GlowCharacterMesh;                                    // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DEBUG_ANIMATION;                                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnDrone;                                               // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0492(0x0006) MISSED OFFSET
	class ABP_TeleportationDrone_C*                    Teleportation_Drone;                                      // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Teleport_Bot_AnimPlayRate;                                // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Teleport_Bot_Lifespan;                                    // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        Teleportation_Point_Light;                                // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     Teleportation_Light_Offset;                               // 0x04B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Teleportation_Light_Color;                                // 0x04BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DissolveMIDs;                                             // 0x04D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInterface*                          Mat_Chracter_Dissolve;                                    // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerPawn_Athena_C*                        Pawn;                                                     // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x04F0(0x0050) UNKNOWN PROPERTY: SetProperty GCN_RezIn.GCN_RezIn_C.Dissolve
	struct FName                                       Socket_Mesh_Top;                                          // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Light_Intensity;                                      // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket_Mesh_Bottom;                                       // 0x054C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              Meshes_to_Dissolve;                                       // 0x0558(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_TeleportationDrone_C*                    Drone;                                                    // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DEBUG_CHILDCOMPONENTS;                                    // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	TArray<class UFXSystemComponent*>                  Particle_Components;                                      // 0x0578(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UNiagaraComponent*                           Spawned_Teleport_VFX;                                     // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UNiagaraSystem*                              Teleport_In_Visual_Effect;                                // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Teleport_In_VFX_Attach_Point_Name;                        // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Cur_Dissolve_Setup_Attempt;                               // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmountOfTimesToAttemptRestoreMats;                        // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Spawn_VFX_Attached;                                       // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	float                                              Dissolve_Timeline_Playrate;                               // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Glow_Timeline_Playrate;                                   // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	class UNiagaraSystem*                              Drone_Visual_Effect;                                      // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DEBUG_TESTJANUSFX;                                        // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	struct FName                                       Drone_VFX_Attach_Point;                                   // 0x05C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_RezIn.GCN_RezIn_C");
		
		return ptr;
	}


	void Spawn_Drone_VFX();
	void Set_Timelines__Playrates();
	void Spawn_Teleport_In_VFX();
	void Restore_Character_Materials(bool* Fully_Completed);
	void Clean_Up_Teleportation_Light();
	void Spawn_Teleportation_Light();
	void Spawn_Teleportation_Drone();
	void Stop_Looping_Audio();
	void TFX_GlowCharacterMesh__FinishedFunc();
	void TFX_GlowCharacterMesh__UpdateFunc();
	void TFX_ResOutCharacterMesh__FinishedFunc();
	void TFX_ResOutCharacterMesh__UpdateFunc();
	void OnBurstGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Pre_Sequence_Change();
	void Set_Additional_Niagara_Parameters_on_Spawned_FX(class UNiagaraComponent* Spawned_Teleport_In_FX);
	void Set_Additional_Niagara_Parameter_on_Drone_FX(class UNiagaraComponent* Drone_FX);
	void ExecuteUbergraph_GCN_RezIn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
