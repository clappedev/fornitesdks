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

// BlueprintGeneratedClass B_Generic_Instance_Grenade_Playset_Athena.B_Generic_Instance_Grenade_Playset_Athena_C
// 0x0008 (0x0CE0 - 0x0CD8)
class AB_Generic_Instance_Grenade_Playset_Athena_C : public AB_Grenade_Playset_Athena_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Generic_Instance_Grenade_Playset_Athena.B_Generic_Instance_Grenade_Playset_Athena_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Generic_Instance_Grenade_Playset_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
