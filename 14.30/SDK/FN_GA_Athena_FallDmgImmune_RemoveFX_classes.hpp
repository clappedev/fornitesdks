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

// BlueprintGeneratedClass GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C
// 0x0028 (0x0AD0 - 0x0AA8)
class UGA_Athena_FallDmgImmune_RemoveFX_C : public UFortGameplayAbility
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
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C");
		
		return ptr;
	}


	void OnChange_FD84FE4040E65CB60551DE8433D51332(TEnumAsByte<EMovementMode> NewMovementMode);
	void OnChange_E07DC5494A7BED888E9B24AA514662A5(TEnumAsByte<EMovementMode> NewMovementMode);
	void K2_ActivateAbility();
	void VehicleLandedCheck();
	void ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
