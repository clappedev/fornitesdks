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

// BlueprintGeneratedClass B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C
// 0x0000 (0x0220 - 0x0220)
class AB_FortGlobalAbilityTargetingActor_C : public AFortGlobalAbilityTargetingActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
