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

// BlueprintGeneratedClass GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C
// 0x0010 (0x0AB8 - 0x0AA8)
class UGA_HeldObject_AbilityWeapon_Pickup_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C");
		
		return ptr;
	}


	void OnCancelled_064121774728AAB46B8294B952EF27BA();
	void OnInterrupted_064121774728AAB46B8294B952EF27BA();
	void OnBlendOut_064121774728AAB46B8294B952EF27BA();
	void OnCompleted_064121774728AAB46B8294B952EF27BA();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HeldObject_AbilityWeapon_Pickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
