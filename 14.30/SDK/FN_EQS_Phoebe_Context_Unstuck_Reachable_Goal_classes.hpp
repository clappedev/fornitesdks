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

// BlueprintGeneratedClass EQS_Phoebe_Context_Unstuck_Reachable_Goal.EQS_Phoebe_Context_Unstuck_Reachable_Goal_C
// 0x0000 (0x0030 - 0x0030)
class UEQS_Phoebe_Context_Unstuck_Reachable_Goal_C : public UEnvQueryContext_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EQS_Phoebe_Context_Unstuck_Reachable_Goal.EQS_Phoebe_Context_Unstuck_Reachable_Goal_C");
		
		return ptr;
	}


	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
