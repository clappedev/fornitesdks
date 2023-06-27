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

// BlueprintGeneratedClass B_PurpleMouse_Athena.B_PurpleMouse_Athena_C
// 0x000F (0x0CD0 - 0x0CC1)
class AB_PurpleMouse_Athena_C : public AB_Grenade_Frag_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_PurpleMouse_Athena.B_PurpleMouse_Athena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
