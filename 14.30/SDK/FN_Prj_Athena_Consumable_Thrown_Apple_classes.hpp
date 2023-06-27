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

// BlueprintGeneratedClass Prj_Athena_Consumable_Thrown_Apple.Prj_Athena_Consumable_Thrown_Apple_C
// 0x0000 (0x0904 - 0x0904)
class APrj_Athena_Consumable_Thrown_Apple_C : public AB_Prj_Athena_Consumable_Thrown_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prj_Athena_Consumable_Thrown_Apple.Prj_Athena_Consumable_Thrown_Apple_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
