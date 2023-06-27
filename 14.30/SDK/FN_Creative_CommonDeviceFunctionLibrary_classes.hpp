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

// BlueprintGeneratedClass Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UCreative_CommonDeviceFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C");
		
		return ptr;
	}


	void STATIC_GetMinigameSettingsMachineForMinigame(class AFortMinigame* Minigame, class UObject* __WorldContext, class AMinigameSettingsMachine_C** MinigameSettingsMachine);
	void STATIC_Reattach_or_Create_MID(class UPrimitiveComponent* Mesh, int MatId, class UObject* __WorldContext, class UMaterialInstanceDynamic** Target_MID);
	void STATIC_Wrapping_Modulo(int A, int B, class UObject* __WorldContext, int* Out);
	void STATIC_Animate_Float_Curve(float Delta_Time, class UCurveFloat* fCurve, float Animation_Time, bool Invert_Time, class UObject* __WorldContext, float* Current_Time, float* Value, bool* bIsComplete);
	void STATIC_TeamToIndex(unsigned char Team, class UObject* __WorldContext, int* Index);
	void STATIC_IndexToTeam(int Index, class UObject* __WorldContext, unsigned char* Team);
	void STATIC_IsLogicInPlayMode(class UFortMinigameLogicComponent* Logic, class UObject* __WorldContext, bool* Play_Mode);
	void STATIC_Get_Dynamic_Team_Color(class AActor* Actor, class AFortMinigame* Minigame, TEnumAsByte<ECreativeColorSetType> Color_Type, class UObject* __WorldContext, int* Array_Index);
	void STATIC_Get_Team_Color_Index_from_Tag(class AActor* Actor_with_Tag, class AFortMinigame* Minigame, class UObject* __WorldContext, int* Array_Index, TEnumAsByte<ECreativeColorSetType>* Color_Type_Out);
	int STATIC_Get_Team_Color_Index_or_Team_Index(class UFortMinigameLogicComponent* Minigame_Logic, int Team_Index, class UObject* __WorldContext);
	void STATIC_IsLocalPawn(class AActor* Actor, class UObject* __WorldContext, bool* IsLocalPawn);
	void STATIC_IsInPlayMode(class AActor* Actor, class UObject* __WorldContext, bool* Play_Mode);
	void STATIC_Get_Driver_or_Pawn_Controller(class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid_Controller, class AController** Controller);
	void STATIC_GetMID_FromMaterial(class UPrimitiveComponent* Target, int Index, class UMaterialInterface* SourceMaterial, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid);
	void STATIC_Refresh_Team_Change_Binding(class UFortMinigameLogicComponent* Minigame_Logic, bool Unbind, const struct FScriptDelegate& Event, class UObject* __WorldContext);
	void STATIC_Update_Team_Color(class UFortMinigameLogicComponent* Minigame_Logic, class UPrimitiveComponent* Mesh, int Team, class UObject* __WorldContext);
	void STATIC_GetMID(class UPrimitiveComponent* Target, class UObject* __WorldContext, class UMaterialInstanceDynamic** Mid);
	void STATIC_ActorCanTrigger(class AActor* Actor_To_Check, class UPrimitiveComponent* Overlap_Component, class UObject* __WorldContext, bool* CanTrigger, class AController** Controller);
	void STATIC_IsActivatedOnPhase(EFortMinigameState State, int PhaseIndex, class AActor* Actor, class UObject* __WorldContext, bool* Enabled);
	void STATIC_IsEnabledPhaseMatch(EFortMinigameState State, int PhaseIndex, class AActor* Actor, class UObject* __WorldContext, bool* Enabled);
	void STATIC_IsValidTeam(int Team_to_Check, class AActor* Actor_To_Check, class UObject* __WorldContext, bool* Valid);
	void STATIC_AwardScore(class AActor* Actor, int Score, TEnumAsByte<EAwardScoreType> Type, class AController* Controller, class UFortMinigameLogicComponent* Minigame_Logic, const struct FGameplayTagContainer& TargetTags, class UObject* __WorldContext);
	void STATIC_IsOnUnpublishedIsland(class AActor* Actor, class UObject* __WorldContext, bool* Edit_Mode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
