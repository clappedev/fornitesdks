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

// BlueprintGeneratedClass PlayerPawn_Commando.PlayerPawn_Commando_C
// 0x014C (0x1D68 - 0x1C1C)
class APlayerPawn_Commando_C : public APlayerPawn_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1C1C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1C20(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      TargetHead;                                               // 0x1C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      TargetBody;                                               // 0x1C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  PawnHeadMaterials_1;                                      // 0x1C38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnBodyMaterials_1;                                      // 0x1C48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             P_IncendiaryRound;                                        // 0x1C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_MakeItRain;                                             // 0x1C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_FlakVest;                                              // 0x1C68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                          Event_Data;                                               // 0x1C88(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventSpawnEffect;                                         // 0x1D30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ShockwaveRefractionRingHeight;                            // 0x1D38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1D3C(0x0004) MISSED OFFSET
	class UParticleSystem*                             P_Shockwave;                                              // 0x1D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ShockwaveForceFeedback;                                   // 0x1D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShockwaveCameraShake;                                     // 0x1D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMale;                                                   // 0x1D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1D59(0x0007) MISSED OFFSET
	class AB_GoinCommandoWeapon_C*                     MenuGoingCommandowWeapon;                                 // 0x1D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Commando.PlayerPawn_Commando_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceivePossessed(class AController** NewController);
	void GameplayCue_Abilities_Activation_Commando_Shockwave(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Abilities_Applied_Commando_IncendiaryRounds(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SetMenuScreenClassName();
	void ReceiveBeginPlay();
	void SelectPawn(class UAnimInstance* AnimInst);
	void ReceiveDestroyed();
	void CheckForGameState();
	void GameplayCue_Abilities_Applied_Commando_MakeItRain(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PlayerPawn_Commando(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
