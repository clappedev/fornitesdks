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

// BlueprintGeneratedClass BP_CameraLens_HidingProp_Teleporting_Looping.BP_CameraLens_HidingProp_Teleporting_Looping_C
// 0x0000 (0x02E0 - 0x02E0)
class ABP_CameraLens_HidingProp_Teleporting_Looping_C : public AEmitterCameraLensEffectBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraLens_HidingProp_Teleporting_Looping.BP_CameraLens_HidingProp_Teleporting_Looping_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
