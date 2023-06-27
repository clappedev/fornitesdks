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

// BlueprintGeneratedClass BP_PhoebeController_NonParticipant.BP_PhoebeController_NonParticipant_C
// 0x0000 (0x0D28 - 0x0D28)
class ABP_PhoebeController_NonParticipant_C : public ABP_PhoebePlayerController_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhoebeController_NonParticipant.BP_PhoebeController_NonParticipant_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
