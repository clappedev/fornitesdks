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

// BlueprintGeneratedClass CMSLobbyDirector.CMSLobbyDirector_C
// 0x0008 (0x02C8 - 0x02C0)
class ACMSLobbyDirector_C : public ADynamicBackgroundDirector
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CMSLobbyDirector.CMSLobbyDirector_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
