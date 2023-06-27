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

// BlueprintGeneratedClass GenericObjective_ReadyUp.GenericObjective_ReadyUp_C
// 0x00FD (0x040D - 0x0310)
class AGenericObjective_ReadyUp_C : public AFortObjectiveBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_ReadyUp_Interact_C*                      ReadyUpActor;                                             // 0x0320(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfDifficultyIncrease;                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	TArray<struct FName>                               DifficultyRowNames;                                       // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortGameplayModifierItemDefinition*> DifficultyBoostItems;                                     // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FActiveGameplayModifierHandle               DifficultyBoostItemHandle;                                // 0x0350(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BaseDifficulty;                                           // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         PylonUsedStat_Difficutly;                                 // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ObjectiveText;                                            // 0x0368(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FSlateBrush                                 BulletIcon;                                               // 0x0380(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BluGloMissionActivationQty;                               // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFightTheStorm;                                          // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericObjective_ReadyUp.GenericObjective_ReadyUp_C");
		return ptr;
	}


	void GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon);
	void OnRep_ObjectiveText();
	struct FText BlueprintGetObjectiveDisplayText();
	void OnRep_DifficultyLevel();
	void SetDifficultyIncreaseRewardTier();
	void ApplyGameDifficultyIncrease();
	void ApplyDifficultyBoostGameplayModifierItem();
	void HandleMissionEvent_StartObjective(struct FGuid InMissionGuid, struct FGameplayTagContainer ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, struct FText GenericText, struct FGameplayTagContainer GameplayTags, struct FFortMissionEvent MissionEvent);
	void HandleMissionEvent_MissionSucceeded(struct FGuid InMissionGuid, struct FGameplayTagContainer ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, struct FText GenericText, struct FGameplayTagContainer GameplayTags, struct FFortMissionEvent MissionEvent);
	void HandleMissionEvent_IncreaseDifficulty(struct FGuid InMissionGuid, struct FGameplayTagContainer ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, struct FText GenericText, struct FGameplayTagContainer GameplayTags, struct FFortMissionEvent MissionEvent);
	void ExecuteUbergraph_GenericObjective_ReadyUp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
