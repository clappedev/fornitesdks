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

// BlueprintGeneratedClass PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C
// 0x0000 (0x0B78 - 0x0B78)
class APBWA_W1_StairSpiral_C : public ABuildingStairs
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C");
		
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
