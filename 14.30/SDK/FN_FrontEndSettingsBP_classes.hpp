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

// BlueprintGeneratedClass FrontEndSettingsBP.FrontEndSettingsBP_C
// 0x0008 (0x0248 - 0x0240)
class AFrontEndSettingsBP_C : public AFrontEndSettings
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontEndSettingsBP.FrontEndSettingsBP_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
