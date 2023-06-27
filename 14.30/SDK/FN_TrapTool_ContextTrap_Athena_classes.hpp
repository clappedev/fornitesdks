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

// BlueprintGeneratedClass TrapTool_ContextTrap_Athena.TrapTool_ContextTrap_Athena_C
// 0x0000 (0x0D20 - 0x0D20)
class ATrapTool_ContextTrap_Athena_C : public AFortDecoTool_ContextTrap
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrapTool_ContextTrap_Athena.TrapTool_ContextTrap_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
