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

// BlueprintGeneratedClass DA_SpookyMist.DA_SpookyMist_C
// 0x0040 (0x0D80 - 0x0D40)
class ADA_SpookyMist_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CanCancelAbility;                                         // 0x0D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D49(0x0007) MISSED OFFSET
	struct FTimerHandle                                CanCancelTimer;                                           // 0x0D50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              CancelDelay;                                              // 0x0D58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DA_SpookyMist.DA_SpookyMist_C");
		
		return ptr;
	}


	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPOnUnEquip();
	void BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void CanCancel();
	void ReceiveBeginPlay();
	void On_DBNO();
	void ExecuteUbergraph_DA_SpookyMist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
