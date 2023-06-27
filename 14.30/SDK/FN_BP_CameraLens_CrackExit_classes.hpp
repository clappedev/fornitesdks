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

// BlueprintGeneratedClass BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C
// 0x0008 (0x02E8 - 0x02E0)
class ABP_CameraLens_CrackExit_C : public AEmitterCameraLensEffectBase
{
public:
	class UParticleSystemComponent*                    Portal;                                                   // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
