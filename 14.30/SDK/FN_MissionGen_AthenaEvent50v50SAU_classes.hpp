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

// BlueprintGeneratedClass MissionGen_AthenaEvent50v50SAU.MissionGen_AthenaEvent50v50SAU_C
// 0x0000 (0x06C0 - 0x06C0)
class UMissionGen_AthenaEvent50v50SAU_C : public UFortMissionGenerator
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionGen_AthenaEvent50v50SAU.MissionGen_AthenaEvent50v50SAU_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif