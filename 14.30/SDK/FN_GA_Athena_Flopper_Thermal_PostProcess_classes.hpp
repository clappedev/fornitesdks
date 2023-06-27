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

// BlueprintGeneratedClass GA_Athena_Flopper_Thermal_PostProcess.GA_Athena_Flopper_Thermal_PostProcess_C
// 0x0000 (0x0B00 - 0x0B00)
class UGA_Athena_Flopper_Thermal_PostProcess_C : public UGA_Athena_Thermal_Parent_PostProcess_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Flopper_Thermal_PostProcess.GA_Athena_Flopper_Thermal_PostProcess_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
