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

// BlueprintGeneratedClass B_FlopperSmall_Weap_Athena.B_FlopperSmall_Weap_Athena_C
// 0x000F (0x0CD0 - 0x0CC1)
class AB_FlopperSmall_Weap_Athena_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    P_Flopper_Catch_Drips;                                    // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_FlopperSmall_Weap_Athena.B_FlopperSmall_Weap_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
