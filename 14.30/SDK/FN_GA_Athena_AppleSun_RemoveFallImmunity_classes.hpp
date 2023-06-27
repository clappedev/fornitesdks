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

// BlueprintGeneratedClass GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C
// 0x0028 (0x0AD0 - 0x0AA8)
class UGA_Athena_AppleSun_RemoveFallImmunity_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Looping_GC;                                               // 0x0AB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Player_Landing_GC;                                        // 0x0AC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                VehicleOnGroundTimer;                                     // 0x0AC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C");
		
		return ptr;
	}


	void OnChange_3DD8539A4FF5097BAD1292AD341357CA(TEnumAsByte<EMovementMode> NewMovementMode);
	void OnChange_E50882E9463BCB5DDE04EE8407D66091(TEnumAsByte<EMovementMode> NewMovementMode);
	void K2_ActivateAbility();
	void VehicleLandedCheck();
	void Remove();
	void ExecuteUbergraph_GA_Athena_AppleSun_RemoveFallImmunity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
