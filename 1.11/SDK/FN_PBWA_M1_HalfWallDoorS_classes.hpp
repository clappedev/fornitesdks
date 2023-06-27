#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PBWA_M1_HalfWallDoorS.PBWA_M1_HalfWallDoorS_C
// 0x0000 (0x0E50 - 0x0E50)
class APBWA_M1_HalfWallDoorS_C : public ABuildingWall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_M1_HalfWallDoorS.PBWA_M1_HalfWallDoorS_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
