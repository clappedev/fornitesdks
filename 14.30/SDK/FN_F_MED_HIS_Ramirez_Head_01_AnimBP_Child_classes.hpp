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

// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_AnimBP_Child.F_MED_HIS_Ramirez_Head_01_AnimBP_Child_C
// 0x0000 (0x1592 - 0x1592)
class UF_MED_HIS_Ramirez_Head_01_AnimBP_Child_C : public UFortnite_Base_Head_Export_Skeleton_AnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_AnimBP_Child.F_MED_HIS_Ramirez_Head_01_AnimBP_Child_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
