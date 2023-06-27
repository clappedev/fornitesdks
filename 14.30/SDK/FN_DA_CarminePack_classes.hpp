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

// BlueprintGeneratedClass DA_CarminePack.DA_CarminePack_C
// 0x00A0 (0x0DE0 - 0x0D40)
class ADA_CarminePack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimePressed;                                              // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchPicker;                                              // 0x0D4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasLandedAfterBeam;                                       // 0x0D50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D51(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       Carmine_Ability_Tags;                                     // 0x0D58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        StoneTags;                                                // 0x0D78(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        GemTags;                                                  // 0x0D88(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                iint;                                                      // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D9C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       SkydiveCue;                                               // 0x0DA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TrailsCue;                                                // 0x0DC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DA_CarminePack.DA_CarminePack_C");
		
		return ptr;
	}


	void OnRep_StoneTags();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void ReceiveBeginPlay();
	void Landed(const struct FHitResult& Hit);
	void BindPartchanged();
	void ExecuteUbergraph_DA_CarminePack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
