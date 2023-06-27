#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SolarisPrototype.BP_SolarisPrototype_C
// 0x0008 (0x0248 - 0x0240)
class ABP_SolarisPrototype_C : public ASolarisPrototype
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SolarisPrototype.BP_SolarisPrototype_C");
		return ptr;
	}


	struct FSolarisResponse CheckEndConditions();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
