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

// BlueprintGeneratedClass GA_Ranged_GenericProjectileDrill_Athena.GA_Ranged_GenericProjectileDrill_Athena_C
// 0x0000 (0x0AE9 - 0x0AE9)
class UGA_Ranged_GenericProjectileDrill_Athena_C : public UGA_Ranged_GenericProjectileExplosive_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_GenericProjectileDrill_Athena.GA_Ranged_GenericProjectileDrill_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
