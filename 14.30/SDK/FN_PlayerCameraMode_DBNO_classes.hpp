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

// BlueprintGeneratedClass PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C
// 0x0000 (0x0DC0 - 0x0DC0)
class UPlayerCameraMode_DBNO_C : public Uv3_PlayerCameraModeBase_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
