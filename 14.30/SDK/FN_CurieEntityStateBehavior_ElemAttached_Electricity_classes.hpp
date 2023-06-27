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

// BlueprintGeneratedClass CurieEntityStateBehavior_ElemAttached_Electricity.CurieEntityStateBehavior_ElemAttached_Electricity_C
// 0x0000 (0x00C0 - 0x00C0)
class UCurieEntityStateBehavior_ElemAttached_Electricity_C : public UFortCurieEntityStateBehavior
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CurieEntityStateBehavior_ElemAttached_Electricity.CurieEntityStateBehavior_ElemAttached_Electricity_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
