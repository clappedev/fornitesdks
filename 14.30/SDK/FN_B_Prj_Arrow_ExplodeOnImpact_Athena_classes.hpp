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

// BlueprintGeneratedClass B_Prj_Arrow_ExplodeOnImpact_Athena.B_Prj_Arrow_ExplodeOnImpact_Athena_C
// 0x0000 (0x0A48 - 0x0A48)
class AB_Prj_Arrow_ExplodeOnImpact_Athena_C : public AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Arrow_ExplodeOnImpact_Athena.B_Prj_Arrow_ExplodeOnImpact_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
