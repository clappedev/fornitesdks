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

// BlueprintGeneratedClass GA_Athena_ShieldMushroom.GA_Athena_ShieldMushroom_C
// 0x0000 (0x0BE8 - 0x0BE8)
class UGA_Athena_ShieldMushroom_C : public UGA_Athena_ForagedItemVersion_Consume_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_ShieldMushroom.GA_Athena_ShieldMushroom_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
