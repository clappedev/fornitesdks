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

// BlueprintGeneratedClass v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C
// 0x0000 (0x0DC0 - 0x0DC0)
class Uv3_PlayerCameraModeTargetingPistol_C : public Uv3_PlayerCameraModeRanged_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
