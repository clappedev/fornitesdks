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

// BlueprintGeneratedClass Athena_PlayerCameraMode_RespawnedAir.Athena_PlayerCameraMode_RespawnedAir_C
// 0x0000 (0x0DC0 - 0x0DC0)
class UAthena_PlayerCameraMode_RespawnedAir_C : public UFortCameraMode_RespawnedAir
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerCameraMode_RespawnedAir.Athena_PlayerCameraMode_RespawnedAir_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
