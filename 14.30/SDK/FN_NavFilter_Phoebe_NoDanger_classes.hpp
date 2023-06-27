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

// BlueprintGeneratedClass NavFilter_Phoebe_NoDanger.NavFilter_Phoebe_NoDanger_C
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_Phoebe_NoDanger_C : public UNavFilter_Phoebe_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NavFilter_Phoebe_NoDanger.NavFilter_Phoebe_NoDanger_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
