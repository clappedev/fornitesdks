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

// AnimBlueprintGeneratedClass CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UCustomLocomotionLayerInterface_C : public UAnimLayerInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C");
		
		return ptr;
	}


	void CustomLocomotionFullBodyAdditive(const struct FPoseLink& InPoseFullBodyAdditive, struct FPoseLink* CustomLocomotionFullBodyAdditive);
	void CustomLocomotionPreIKLayer(const struct FPoseLink& InPosePreIK, struct FPoseLink* CustomLocomotionPreIKLayer);
	void CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
