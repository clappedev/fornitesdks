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

// BlueprintGeneratedClass GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C
// 0x002C (0x0E50 - 0x0E24)
class UGA_Athena_FloppingRabbit_C : public UGA_ThrowConsumable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E24(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                T_Active;                                                 // 0x0E30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_InWorld;                                                // 0x0E38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                CastMontageWeapon;                                        // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                InVehicleTag;                                             // 0x0E48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C");
		
		return ptr;
	}


	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
	void OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7(const struct FName& NotifyName);
	void OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7(const struct FName& NotifyName);
	void OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(const struct FName& NotifyName);
	void OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7(const struct FName& NotifyName);
	void OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(const struct FName& NotifyName);
	void Added_5FF18B9B4B9A1DE12D88D68E50AB8A5B();
	void K2_ActivateAbility();
	void ThrowMontageStarted();
	void ExecuteUbergraph_GA_Athena_FloppingRabbit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
