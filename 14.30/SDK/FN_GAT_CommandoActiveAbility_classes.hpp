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

// BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
// 0x00C9 (0x0BAA - 0x0AE1)
class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_Hero_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AE1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          Event_Data;                                               // 0x0AF0(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                                   CommandoPlayerPawn;                                       // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoCommitted;                                          // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStaminaLockedOut;                                       // 0x0BA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_CommandoActiveAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
