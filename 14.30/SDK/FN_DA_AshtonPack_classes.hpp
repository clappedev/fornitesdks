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

// BlueprintGeneratedClass DA_AshtonPack.DA_AshtonPack_C
// 0x0088 (0x0DC8 - 0x0D40)
class ADA_AshtonPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimePressed;                                              // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchPicker;                                              // 0x0D4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLanded;                                                // 0x0D50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D51(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       AshtonAbilityTags;                                        // 0x0D58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       GC_JumpTrails;                                            // 0x0D78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       GC_SkydiveTrails;                                         // 0x0D98(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                PrimaryFireEventTag;                                      // 0x0DB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                SecondaryFireEventTag;                                    // 0x0DC0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DA_AshtonPack.DA_AshtonPack_C");
		
		return ptr;
	}


	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void ReceiveBeginPlay();
	void Landed(const struct FHitResult& Hit);
	void ExecuteUbergraph_DA_AshtonPack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
