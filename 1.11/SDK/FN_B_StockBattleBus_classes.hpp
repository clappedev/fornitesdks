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

// BlueprintGeneratedClass B_StockBattleBus.B_StockBattleBus_C
// 0x0048 (0x03B8 - 0x0370)
class AB_StockBattleBus_C : public ABattleBusCosmeticInstanceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Bus;                                                      // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LaunchTheBalloon_van_generator;                           // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BalloonFlame;                                             // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Apparatus;                                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Balloon;                                                  // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LoopingSound;                                             // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LoopingMusic;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_StockBattleBus.B_StockBattleBus_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Start_Audio();
	void GrabAudioReferences();
	void ExecuteUbergraph_B_StockBattleBus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
