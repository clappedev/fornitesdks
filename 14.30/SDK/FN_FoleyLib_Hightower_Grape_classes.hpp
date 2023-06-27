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

// BlueprintGeneratedClass FoleyLib_Hightower_Grape.FoleyLib_Hightower_Grape_C
// 0x0000 (0x00B0 - 0x00B0)
class UFoleyLib_Hightower_Grape_C : public UFoleyLib_Character_Base_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FoleyLib_Hightower_Grape.FoleyLib_Hightower_Grape_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
