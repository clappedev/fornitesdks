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

// BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C
// 0x00B8 (0x0B60 - 0x0AA8)
class UGA_Athena_HookDestroy_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 SwitchLockGE;                                             // 0x0AB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Hit_;                                                     // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AC1(0x0003) MISSED OFFSET
	float                                              CleanedAngle;                                             // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FToyAngleSelectorInfo>               LaunchAngleVariations;                                    // 0x0AC8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                TravelMontage;                                            // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0AE1(0x0007) MISSED OFFSET
	class AB_Hookgun_Athena_C*                         WeaponActor;                                              // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       ChangeEquipmentTag;                                       // 0x0AF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                RopeActiveTag;                                            // 0x0B10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     NullMontage;                                              // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GliderGrappler;                                           // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B21(0x0003) MISSED OFFSET
	float                                              BadgerGrapeDelayFailsafe;                                 // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                DestroyEvent;                                             // 0x0B28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_GrapplerHit;                                        // 0x0B30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_GrapplerReturn;                                     // 0x0B38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       T_HoverboardMontage;                                      // 0x0B40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C");
		
		return ptr;
	}


	void OnRep_BadgerGrapeDelayFailsafe();
	void K2_OnEndAbility(bool bWasCancelled);
	void PickGrappleMontage(float PitchAngle, struct FName* SectionName);
	void OnRep_AmmoReserves();
	void OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void EventReceived_056D82C6464BB95E4DA717BEB307DB74(const struct FGameplayEventData& Payload);
	void OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void OnCompleted_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void EventReceived_3FEADD91456C78D266936684DE918289(const struct FGameplayEventData& Payload);
	void OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282(const struct FName& NotifyName);
	void OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282(const struct FName& NotifyName);
	void OnInterrupted_7CDAB77949F908D1F388AB845AE6C282(const struct FName& NotifyName);
	void OnBlendOut_7CDAB77949F908D1F388AB845AE6C282(const struct FName& NotifyName);
	void OnCompleted_7CDAB77949F908D1F388AB845AE6C282(const struct FName& NotifyName);
	void EventReceived_1B71851D49048B6433DA75B0D6007B6E(const struct FGameplayEventData& Payload);
	void OnSync_A7AA33494F9F686A79A026809EAEF410();
	void K2_ActivateAbility();
	void ResetDoOnce();
	void ExecuteUbergraph_GA_Athena_HookDestroy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
