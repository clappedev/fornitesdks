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

// BlueprintGeneratedClass B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C
// 0x000C (0x0CC4 - 0x0CB8)
class AB_HeldObject_Generic_Component_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                BattleLabHudKeyDataIndex;                                 // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C");
		
		return ptr;
	}


	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_HeldObject_Generic_Component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
