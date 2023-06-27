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

// BlueprintGeneratedClass Barrel_FishingRod_Container_Athena.Barrel_FishingRod_Container_Athena_C
// 0x0000 (0x0D91 - 0x0D91)
class ABarrel_FishingRod_Container_Athena_C : public AHotfix_Container_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Barrel_FishingRod_Container_Athena.Barrel_FishingRod_Container_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
