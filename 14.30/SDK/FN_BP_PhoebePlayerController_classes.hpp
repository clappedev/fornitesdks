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

// BlueprintGeneratedClass BP_PhoebePlayerController.BP_PhoebePlayerController_C
// 0x0010 (0x0D28 - 0x0D18)
class ABP_PhoebePlayerController_C : public AFortAthenaAIBotController
{
public:
	class UAIPerceptionComponent*                      AIPerception;                                             // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        Blackboard1;                                              // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhoebePlayerController.BP_PhoebePlayerController_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
