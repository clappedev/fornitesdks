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

// BlueprintGeneratedClass B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C
// 0x0021 (0x0CE2 - 0x0CC1)
class AB_FloppingRabbit_Weap_Athena_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      Projectile;                                               // 0x0CD0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Wire;                                                     // 0x0CD8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideBobber;                                               // 0x0CE0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OneHandGrip;                                              // 0x0CE1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C");
		
		return ptr;
	}


	struct FName DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion);
	void OnRep_OneHandGrip();
	void OnRep_HideBobber();
	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ForceKillFishing();
	void OnTetherDetached();
	void ExecuteUbergraph_B_FloppingRabbit_Weap_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
