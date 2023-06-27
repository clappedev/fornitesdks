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

// BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C
// 0x00C9 (0x0B82 - 0x0AB9)
class UGAT_GenericTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                // 0x0AC8(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoCommitted;                                          // 0x0B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStaminaLockedOut;                                       // 0x0B81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C");
		
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAT_GenericTriggeredAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
