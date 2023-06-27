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

// BlueprintGeneratedClass PlayerCameraMode1P.PlayerCameraMode1P_C
// 0x0000 (0x0DC0 - 0x0DC0)
class UPlayerCameraMode1P_C : public UFortCameraMode_ThirdPerson
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCameraMode1P.PlayerCameraMode1P_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
