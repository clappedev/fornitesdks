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

// BlueprintGeneratedClass GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C
// 0x001F (0x0AD8 - 0x0AB9)
class UGAT_Creative_TriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               OverriddenPropertyNames;                                  // 0x0AC8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C");
		
		return ptr;
	}


	void IsPropertyOverridden(const struct FName& PropertyName, bool* bResult);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void SetupAbilityFailsafeTimer(float Duration);
	void AbilityTimeout();
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
