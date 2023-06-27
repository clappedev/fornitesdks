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

// BlueprintGeneratedClass WorldLightingMenu.WorldLightingMenu_C
// 0x0008 (0x0240 - 0x0238)
class AWorldLightingMenu_C : public AFortLevelScriptActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WorldLightingMenu.WorldLightingMenu_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
