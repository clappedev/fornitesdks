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

// BlueprintGeneratedClass B_Keycard_Athena_Yacht.B_Keycard_Athena_Yacht_C
// 0x0000 (0x0CD0 - 0x0CD0)
class AB_Keycard_Athena_Yacht_C : public AB_Keycard_Athena_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Keycard_Athena_Yacht.B_Keycard_Athena_Yacht_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
