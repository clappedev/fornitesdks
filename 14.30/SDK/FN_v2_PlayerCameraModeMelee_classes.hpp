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

// BlueprintGeneratedClass v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C
// 0x0000 (0x0DC0 - 0x0DC0)
class Uv2_PlayerCameraModeMelee_C : public Uv2_PlayerCameraModeBase_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
