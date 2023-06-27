#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SolarisPrototype.BP_SolarisPrototype_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SolarisPrototype_C : public USolarisPrototype
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SolarisPrototype.BP_SolarisPrototype_C");
		return ptr;
	}


	struct FSolarisResponse CheckEndConditions();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
