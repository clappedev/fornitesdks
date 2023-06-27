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

// BlueprintGeneratedClass B_FerretWeapon.B_FerretWeapon_C
// 0x0010 (0x0E38 - 0x0E28)
class AB_FerretWeapon_C : public AB_Ranged_Dual_Generic_FerretVehicle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortAthenaFerretVehicle*                    Biplane;                                                  // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_FerretWeapon.B_FerretWeapon_C");
		return ptr;
	}


	void K2_OnUnEquip();
	void FerretSnowmanCheck();
	void OnWeaponAttached();
	void HandFired(EDualWeaponHand Hand, bool bPersistantFire);
	void OnStartOverheated();
	void ExecuteUbergraph_B_FerretWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
