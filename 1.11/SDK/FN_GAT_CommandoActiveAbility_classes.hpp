#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
// 0x00BA (0x0B7A - 0x0AC0)
class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayEventData                          Event_Data;                                               // 0x0AC8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Commando_C*                      CommandoPlayerPawn;                                       // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoCommitted;                                          // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStaminaLockedOut;                                       // 0x0B79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_CommandoActiveAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
