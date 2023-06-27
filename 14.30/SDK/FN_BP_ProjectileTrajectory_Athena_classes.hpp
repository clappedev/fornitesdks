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

// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena.BP_ProjectileTrajectory_Athena_C
// 0x0000 (0x0269 - 0x0269)
class ABP_ProjectileTrajectory_Athena_C : public ABP_ProjectileTrajectory_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory_Athena.BP_ProjectileTrajectory_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
