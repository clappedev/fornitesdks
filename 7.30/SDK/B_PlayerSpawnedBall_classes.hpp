#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x8D0 - 0x8A0)
// BlueprintGeneratedClass B_PlayerSpawnedBall.B_PlayerSpawnedBall_C
class AB_PlayerSpawnedBall_C : public APhysicsBall_Master_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ImpactFX_0;                                        // 0x8A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CueToPlayWhenReused;                               // 0x8B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CueToPlayWhenExpired;                              // 0x8B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        BounceCount_0;                                     // 0x8C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFrontEndPreview;                                // 0x8C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EB7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       OwningPawn;                                        // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_PlayerSpawnedBall_C");
		return Clss;
	}

	void PlayCueCenteredOnMe(const struct FGameplayTag& GameplayCueToPlay, float Raw_Magnitude, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters);
	void UserConstructionScript();
	void NotifyToyInstanceOfReuse();
	void StartToyFadeOutDueToNewPlacement();
	void InitializeToyInstance(class AFortPlayerController* OwningPC, int32 NumTimesSummoned);
	void InitializeToyPreviewInFrontend();
	void ExecuteUbergraph_B_PlayerSpawnedBall(int32 EntryPoint, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerController* K2Node_Event_OwningPC, int32 K2Node_Event_NumTimesSummoned, class AFortPlayerPawn* CallFunc_GetPawnFromPlayerStateZone_OutPawn, bool CallFunc_GetPawnFromPlayerStateZone_PawnReturned);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
