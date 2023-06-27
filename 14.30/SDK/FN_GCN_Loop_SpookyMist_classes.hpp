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

// BlueprintGeneratedClass GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C
// 0x0184 (0x0944 - 0x07C0)
class AGCN_Loop_SpookyMist_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Interaction_Fade_In_Out_Visbility_5529D6B24898E091AFB4668B43CFAB50;// 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Interaction_Fade_In_Out__Direction_5529D6B24898E091AFB4668B43CFAB50;// 0x07D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Interaction_Fade_In_Out;                         // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             TargetPlayer;                                             // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationSoundPeriod;                                    // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioVelocityInterp;                                      // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              PlayerSkeletalMeshes;                                     // 0x07F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpireTellDelayTimer;                                     // 0x0800(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpirationSoundTimer;                                     // 0x0808(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              VisbilityLevel;                                           // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkVisMultiplier;                                        // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintVisMultiplier;                                      // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFriendlyOpacity;                                       // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractVisibility;                                       // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	struct FScalableFloat                              DataDuration;                                             // 0x0828(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataTellDuration;                                         // 0x0848(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataWalkVisMult;                                          // 0x0868(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataSprintVisMult;                                        // 0x0888(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataFriendlyVisMult;                                      // 0x08A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataShadowPlaneOpacity;                                   // 0x08C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bShowExpireTell_Const;                                    // 0x08E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	float                                              Speed_Ribbon_Velocity_Threshold_Const;                    // 0x08EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAudioComponent*>                     Looping_Audio_Components;                                 // 0x08F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    Attached_FX_Head;                                         // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Attached_FX_Body;                                         // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       Mat_Parameter_Name_Spooky_Mist_Mode_Const;                // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FX_Parameter_Name_Ribbons_Const;                          // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Mat_Parameter_Name_Flash_Start_TimeConst;                 // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Audio_Parameter_Name_Velocity_Const;                      // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Mat_Parameter_Name_Movement_Opacity_Const;                // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FX_Parameter_Name_Friendly_Const;                         // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibilityLevel_Change_Speed_Const;                       // 0x0940(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C");
		
		return ptr;
	}


	float Get_Goal_Visibility_Level();
	void Is_Player_Controller_Friendly(class AController* PlayerController, bool* Is_Friendly_Player);
	bool ShouldRenderAsLocalPlayer();
	float TickMovement_Opacity();
	void ShouldSpeedRibbonsBeVisible(bool* Should_Show_Speed_Ribbons);
	void Get_Skeletal_Meshes();
	void Timeline_Interaction_Fade_In_Out__FinishedFunc();
	void Timeline_Interaction_Fade_In_Out__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveTick(float DeltaSeconds);
	void BeginExpireTell();
	void ClearExpireTell();
	void ExpireWarningTick();
	void Audio_Tick(float Velocity);
	void StartedInteract();
	void EndedInteract();
	void UpdateTeamVisbility();
	void Initialize_Player_Skeletal_Meshes();
	void ExecuteUbergraph_GCN_Loop_SpookyMist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
