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

// BlueprintGeneratedClass BP_SpeedLines_Vertical_Camera_Lens.BP_SpeedLines_Vertical_Camera_Lens_C
// 0x0000 (0x02E0 - 0x02E0)
class ABP_SpeedLines_Vertical_Camera_Lens_C : public AEmitterCameraLensEffectBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpeedLines_Vertical_Camera_Lens.BP_SpeedLines_Vertical_Camera_Lens_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
