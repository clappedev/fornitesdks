#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x430 - 0x420)
// BlueprintGeneratedClass GCNL_PurpleStuff.GCNL_PurpleStuff_C
class AGCNL_PurpleStuff_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)
	class APlayerPawn_Athena_Generic_C*          PlayerActor;                                       // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_PurpleStuff_C");
		return Clss;
	}

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCNL_PurpleStuff(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetShield_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
