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

// BlueprintGeneratedClass GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C
// 0x0018 (0x0AC0 - 0x0AA8)
class UGA_SlamDoorOpen_Victim_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABuildingWall*                               BuildingWall;                                             // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C");
		
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_SlamDoorOpen_Victim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
