#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C
// 0x0000 (0x0080 - 0x0080)
class UGCN_BoostJumpPack_Equipped_C : public UFortGameplayCueNotify_Simple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	float GetMaxFuel(class APlayerPawn_Athena_C* PlayerPawn);
	float GetFuel(class APlayerPawn_Athena_C* PlayerPawn);
	void GetFuelPercent(class APlayerPawn_Athena_C* PlayerPawn, float* Fuel_Percent);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
