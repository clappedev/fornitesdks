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

// AnimBlueprintGeneratedClass VehicleAnimLayerInterface.VehicleAnimLayerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UVehicleAnimLayerInterface_C : public UAnimLayerInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass VehicleAnimLayerInterface.VehicleAnimLayerInterface_C");
		
		return ptr;
	}


	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, const struct FPoseLink& InPoseUpperAndLowerCachePose, struct FPoseLink* VehicleFullBodyOverride);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
