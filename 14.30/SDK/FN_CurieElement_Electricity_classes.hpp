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

// BlueprintGeneratedClass CurieElement_Electricity.CurieElement_Electricity_C
// 0x0000 (0x00E0 - 0x00E0)
class UCurieElement_Electricity_C : public UFortCurieElementBehavior_Electricity
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CurieElement_Electricity.CurieElement_Electricity_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
