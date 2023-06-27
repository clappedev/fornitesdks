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

// BlueprintGeneratedClass Frontend_HeroLoadout.Frontend_HeroLoadout_C
// 0x0080 (0x02D8 - 0x0258)
class AFrontend_HeroLoadout_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTransform                                  Transform___HeroLoadOut;                                  // 0x0260(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Transform___Command;                                      // 0x0290(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AHeroLoadoutItemPedestal_C*                  HL_Pedestal;                                              // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Command_Pedestal_Placement_ExecuteUbergraph_Frontend_HeroLoadout_RefProperty;// 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      HeroLoadout_Pedestal_Placement_ExecuteUbergraph_Frontend_HeroLoadout_RefProperty;// 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_HeroLoadout.Frontend_HeroLoadout_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void HeroLoadout___Transfrom();
	void Command___Transform();
	void HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_Frontend_HeroLoadout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
