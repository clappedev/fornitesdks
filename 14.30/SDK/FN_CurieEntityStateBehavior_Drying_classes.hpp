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

// BlueprintGeneratedClass CurieEntityStateBehavior_Drying.CurieEntityStateBehavior_Drying_C
// 0x0000 (0x00C8 - 0x00C8)
class UCurieEntityStateBehavior_Drying_C : public UFortCurieEntityStateBehavior_Drying
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CurieEntityStateBehavior_Drying.CurieEntityStateBehavior_Drying_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
