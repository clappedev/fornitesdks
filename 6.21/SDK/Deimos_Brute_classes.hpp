#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x9 (0x2861 - 0x2858)
// BlueprintGeneratedClass Deimos_Brute.Deimos_Brute_C
class ADeimos_Brute_C : public ADeimos_Fiend_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2858(0x8)(Transient, DuplicateTransient)
	bool                                         IsTarget;                                          // 0x2860(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Deimos_Brute_C");
		return Clss;
	}

	void OnRep_isTarget(const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UChildActorComponent* CallFunc_AddComponent_ReturnValue);
	void UserConstructionScript();
	void IgnitePropaneTank(class AFortPawn* Pawn, float RemainingFuseTime, bool JustDrop);
	void FSMRemovePropaneTank();
	void FSMFailedToSpawnTank();
	void FSMBeginPropaneTankMelee();
	void BeeCloudDespawned(class AFortProjectileBase* Cloud);
	void ManageBurpEffect(bool Enabled);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Deimos_Brute(int32 EntryPoint, class AFortPawn* K2Node_Event_Pawn, float K2Node_Event_RemainingFuseTime, bool K2Node_Event_JustDrop, class AFortProjectileBase* K2Node_Event_Cloud, bool K2Node_Event_Enabled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
