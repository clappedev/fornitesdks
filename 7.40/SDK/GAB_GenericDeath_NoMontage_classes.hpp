#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x940 - 0x938)
// BlueprintGeneratedClass GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C
class UGAB_GenericDeath_NoMontage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_GenericDeath_NoMontage_C");
		return Clss;
	}

	void OnCancelled_878A944E4E232FA54BF973ACBC126DA3();
	void OnInterrupted_878A944E4E232FA54BF973ACBC126DA3();
	void OnBlendOut_878A944E4E232FA54BF973ACBC126DA3();
	void OnCompleted_878A944E4E232FA54BF973ACBC126DA3();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_GenericDeath_NoMontage(int32 EntryPoint, class UFortAbilityTask_PlayAnimAndWait* CallFunc_CreatePlayAnimAndWaitProxy_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
