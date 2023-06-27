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

// BlueprintGeneratedClass DA_Glider_Item.DA_Glider_Item_C
// 0x0068 (0x0DA8 - 0x0D40)
class ADA_Glider_Item_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       ErrorReason;                                              // 0x0D48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ErrorReasonGamepad;                                       // 0x0D68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ErrorCannotUse;                                           // 0x0D88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DA_Glider_Item.DA_Glider_Item_C");
		
		return ptr;
	}


	void IsOnGround(bool* bOnGround);
	void RaiseUsageError(const struct FGameplayTagContainer& FailedReason);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_Glider_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
