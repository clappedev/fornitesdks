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

// BlueprintGeneratedClass Targeting3PCamera_Scope.Targeting3PCamera_Scope_C
// 0x0000 (0x0138 - 0x0138)
class UTargeting3PCamera_Scope_C : public UFort3PCam_Targeting
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Targeting3PCamera_Scope.Targeting3PCamera_Scope_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
