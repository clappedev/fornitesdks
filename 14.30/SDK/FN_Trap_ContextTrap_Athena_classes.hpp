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

// BlueprintGeneratedClass Trap_ContextTrap_Athena.Trap_ContextTrap_Athena_C
// 0x0000 (0x0D48 - 0x0D48)
class ATrap_ContextTrap_Athena_C : public ABuildingTrap
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trap_ContextTrap_Athena.Trap_ContextTrap_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
