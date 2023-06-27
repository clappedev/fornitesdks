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

// BlueprintGeneratedClass GET_DirectVehicleDamage.GET_DirectVehicleDamage_C
// 0x0000 (0x07B8 - 0x07B8)
class UGET_DirectVehicleDamage_C : public UGet_DirectDamageParent_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GET_DirectVehicleDamage.GET_DirectVehicleDamage_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
