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

// BlueprintGeneratedClass B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C
// 0x0009 (0x0CC1 - 0x0CB8)
class AB_UtilityItem_Generic_Athena_C : public AB_UtilityItem_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               UseThrowConsumableHudKeyActions;                          // 0x0CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ThrowConsumableHudActionKey_Targeting(bool Targeting);
	void ThrowConsumableHudActionKey_Visible(bool Visible);
	void ExecuteUbergraph_B_UtilityItem_Generic_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
