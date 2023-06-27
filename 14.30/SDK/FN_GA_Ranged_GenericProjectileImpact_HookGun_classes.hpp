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

// BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C
// 0x003F (0x0B28 - 0x0AE9)
class UGA_Ranged_GenericProjectileImpact_HookGun_C : public UGA_Ranged_GenericDamage_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AE9(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       ChangeEquipmentTag;                                       // 0x0AF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                RopeActiveTag;                                            // 0x0B10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortQuestItemDefinition*                    QuestItem;                                                // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ObjBackendName;                                           // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C");
		
		return ptr;
	}


	void Overflow(class UFortWorldItem* Item_Dropped);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_CommitExecute();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
