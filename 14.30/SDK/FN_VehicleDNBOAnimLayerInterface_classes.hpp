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

// AnimBlueprintGeneratedClass VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UVehicleDNBOAnimLayerInterface_C : public UAnimLayerInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C");
		
		return ptr;
	}


	void VehicleDBNOJoggingOverride(struct FPoseLink* VehicleDBNOJoggingOverride);
	void VehicleDBNOCarriedLeansOverride(const struct FPoseLink& InPoseDBNOCarried, struct FPoseLink* VehicleDBNOCarriedLeansOverride);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
