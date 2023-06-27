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

// BlueprintGeneratedClass B_Pistol_Vigilante_Athena.B_Pistol_Vigilante_Athena_C
// 0x0000 (0x1310 - 0x1310)
class AB_Pistol_Vigilante_Athena_C : public AB_Pistol_Generic_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Pistol_Vigilante_Athena.B_Pistol_Vigilante_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
