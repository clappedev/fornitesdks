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

// BlueprintGeneratedClass STW_PlayerCameraModeTargetingShotgun.STW_PlayerCameraModeTargetingShotgun_C
// 0x0000 (0x0DC0 - 0x0DC0)
class USTW_PlayerCameraModeTargetingShotgun_C : public UAthena_PlayerCameraModeTargetingShotgun_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass STW_PlayerCameraModeTargetingShotgun.STW_PlayerCameraModeTargetingShotgun_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
