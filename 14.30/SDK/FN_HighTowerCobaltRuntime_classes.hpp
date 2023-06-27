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

// Class HighTowerCobaltRuntime.FortAthenaMutator_CobaltHighTower
// 0x00A8 (0x0CC8 - 0x0C20)
class AFortAthenaMutator_CobaltHighTower : public AFortAthenaMutator_Cobalt
{
public:
	struct FGameplayTag                                ShowAbilityIntroTag;                                      // 0x0C20(0x0008) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bPreventDamageToBuildingsDuringWarmup;                    // 0x0C28(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bAllowBuildingDuringWarmup;                               // 0x0C48(0x0020) (Edit, DisableEditOnInstance)
	class UGameplayEffect*                             BlockBuildAbilityGameplayEffect;                          // 0x0C68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                JumpAbilityActionTag;                                     // 0x0C70(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0C78(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HighTowerCobaltRuntime.FortAthenaMutator_CobaltHighTower");
		
		return ptr;
	}

};


// Class HighTowerCobaltRuntime.FortAthenaMutator_InventoryOverride_CobaltHighTower
// 0x0020 (0x04A8 - 0x0488)
class AFortAthenaMutator_InventoryOverride_CobaltHighTower : public AFortAthenaMutator_InventoryOverride
{
public:
	TArray<struct FItemLoadoutBucket>                  LoadoutBuckets;                                           // 0x0488(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0498(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HighTowerCobaltRuntime.FortAthenaMutator_InventoryOverride_CobaltHighTower");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
