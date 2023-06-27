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

// BlueprintGeneratedClass GE_Athena_DBNO_Start.GE_Athena_DBNO_Start_C
// 0x0000 (0x07B8 - 0x07B8)
class UGE_Athena_DBNO_Start_C : public UGE_Map_Fortitude_To_Health_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Athena_DBNO_Start.GE_Athena_DBNO_Start_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
