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

// BlueprintGeneratedClass B_DangerGrape_Athena_Weap.B_DangerGrape_Athena_Weap_C
// 0x000F (0x0CD0 - 0x0CC1)
class AB_DangerGrape_Athena_Weap_C : public AB_ConsumableSmall_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        SM_PG_Bot_Grenade;                                        // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_DangerGrape_Athena_Weap.B_DangerGrape_Athena_Weap_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
