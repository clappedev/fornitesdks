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

// BlueprintGeneratedClass B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C
// 0x0017 (0x0CD8 - 0x0CC1)
class AB_Grenade_Playset_Athena_C : public AB_Grenade_Tower_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortPlaysetGrenadeInputComponent*           AthenaPlaysetGrenadeInput;                                // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Grenade_Playset_Athena.B_Grenade_Playset_Athena_C");
		
		return ptr;
	}


	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Grenade_Playset_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
