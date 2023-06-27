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

// BlueprintGeneratedClass B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C
// 0x00D4 (0x13E4 - 0x1310)
class AB_RocketLauncher_Generic_Athena_HighTier_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             RearMuzzleLoc;                                            // 0x1318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFortPortableSoftParticles                  Rear_Muzzle_Flash;                                        // 0x1320(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFXSystemAsset*                              RearMuzzleFXSystem;                                       // 0x1378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortPortableSoftParticles                  Front_Muzzle_Flash;                                       // 0x1380(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     RearMuzzleOffsetMultiplier;                               // 0x13D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
