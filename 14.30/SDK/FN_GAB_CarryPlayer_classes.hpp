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

// BlueprintGeneratedClass GAB_CarryPlayer.GAB_CarryPlayer_C
// 0x0048 (0x0B20 - 0x0AD8)
class UGAB_CarryPlayer_C : public UFortGameplayAbility_CarryPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PickedUpPawn;                                             // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DBNOCarryHolster;                                         // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCompletedPickup;                                         // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AF9(0x0003) MISSED OFFSET
	float                                              TotalDistanceTraveled;                                    // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PickupLocation;                                           // 0x0B00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CarryLongDistanceThreshold;                               // 0x0B0C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              NewVar_1;                                                 // 0x0B10(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAB_CarryPlayer.GAB_CarryPlayer_C");
		
		return ptr;
	}


	void OnCancelled_C4440F1640E9A8D79E44FD8C23525824();
	void OnInterrupted_C4440F1640E9A8D79E44FD8C23525824();
	void OnBlendOut_C4440F1640E9A8D79E44FD8C23525824();
	void OnCompleted_C4440F1640E9A8D79E44FD8C23525824();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_CarryPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
