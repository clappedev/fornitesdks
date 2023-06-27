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

// BlueprintGeneratedClass MegaStormManagerAthena.MegaStormManagerAthena_C
// 0x0008 (0x0260 - 0x0258)
class AMegaStormManagerAthena_C : public AMegaStormManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MegaStormManagerAthena.MegaStormManagerAthena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
