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

// AnimBlueprintGeneratedClass PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UPlayerAnimOverrideLayerInterface_C : public UAnimLayerInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C");
		
		return ptr;
	}


	void CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK);
	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
