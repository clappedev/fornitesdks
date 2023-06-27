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

// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C
// 0x00A0 (0x0B48 - 0x0AA8)
class UGA_Athena_FloppingRabbit_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGameplayEffect*                             GE_Active;                                                // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       T_Active;                                                 // 0x0AB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_InWorld;                                               // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       T_InWorld;                                                // 0x0AE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      Projectile;                                               // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Wire;                                                     // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FailsafeDelay;                                            // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B14(0x0004) MISSED OFFSET
	class UGameplayEffect*                             GE_ReelIn;                                                // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       T_ReelIn;                                                 // 0x0B20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_FloppingRabbit_Weap_Athena_C*             WeaponRod;                                                // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C");
		
		return ptr;
	}


	void SaveOutRod();
	void SetBobberHidden(bool HideBobber, class AFortWeapon** CurrentWeapon, class AB_FloppingRabbit_Weap_Athena_C** CastedToRabbitWeapon);
	void Removed_DCA556AE47E7D8C25D9A27899D5C963C();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void Seat_Changed(int SeatIndex);
	void EndFishing();
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
