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

// BlueprintGeneratedClass STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C
// 0x0000 (0x0DC0 - 0x0DC0)
class USTW_PlayerCameraModeBase_C : public USTW_PlayerCameraModeMelee_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STW_PlayerCameraModeBase.STW_PlayerCameraModeBase_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
