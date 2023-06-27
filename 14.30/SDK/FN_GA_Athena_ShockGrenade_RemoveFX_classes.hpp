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

// BlueprintGeneratedClass GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C
// 0x0028 (0x0AD0 - 0x0AA8)
class UGA_Athena_ShockGrenade_RemoveFX_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FGameplayTag                                Looping_GC;                                               // 0x0AB8(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                Player_Landing_GC;                                        // 0x0AC0(0x0008) (Edit, BlueprintVisible)
	struct FTimerHandle                                VehicleOnGroundTimer;                                     // 0x0AC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C");
		
		return ptr;
	}


	void OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E(TEnumAsByte<EMovementMode> NewMovementMode);
	void OnChange_FB10A796481939495F3E43A6ECDEF98E(TEnumAsByte<EMovementMode> NewMovementMode);
	void K2_ActivateAbility();
	void VehicleLandedCheck();
	void ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
