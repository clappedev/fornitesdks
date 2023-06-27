#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C
// 0x00C0 (0x0400 - 0x0340)
class AHeroLoadoutItemPedestal_C : public AFortHeroLoadoutPedestal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagQuery                           AnimationTagQuery_Idle;                                   // 0x0350(0x0048) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	struct FTransform                                  CommandScreenTransform;                                   // 0x03A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  HeroLoadoutScreenTransform;                               // 0x03D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C");
		return ptr;
	}


	void HandleSlotFocusInUIChanged();
	void OnHeroPawnSetupCompleted();
	void ExecuteUbergraph_HeroLoadoutItemPedestal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
