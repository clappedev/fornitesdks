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

// Class HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro
// 0x0010 (0x0390 - 0x0380)
class AFortAthenaMutator_HighTowerAbilityIntro : public AFortAthenaMutator_GameModeBase
{
public:
	struct FGameplayTag                                ShowAbilityIntroTag;                                      // 0x0380(0x0008) (Edit, DisableEditOnInstance)
	bool                                               bPlayOnlyOnce;                                            // 0x0388(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro");
		
		return ptr;
	}


	void OnBeginSkydiveFromBus(class AFortPlayerControllerZone* PlayerController);
};


// Class HighTowerRuntime.FortItemLayerAnimInstance_DateGaunlets
// 0x0010 (0x0300 - 0x02F0)
class UFortItemLayerAnimInstance_DateGaunlets : public UFortBaseLayerAnimInstance
{
public:
	bool                                               bIsBoostJumping;                                          // 0x02F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HighTowerRuntime.FortItemLayerAnimInstance_DateGaunlets");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
