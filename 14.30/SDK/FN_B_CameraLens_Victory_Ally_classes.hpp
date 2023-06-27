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

// BlueprintGeneratedClass B_CameraLens_Victory_Ally.B_CameraLens_Victory_Ally_C
// 0x0000 (0x02E0 - 0x02E0)
class AB_CameraLens_Victory_Ally_C : public AEmitterCameraLensEffectBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraLens_Victory_Ally.B_CameraLens_Victory_Ally_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
