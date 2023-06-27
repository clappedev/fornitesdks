#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Announce_QuestUpdate.Announce_QuestUpdate_C
// 0x0028 (0x0400 - 0x03D8)
class AAnnounce_QuestUpdate_C : public AFortClientAnnouncement
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDynamicQuestUpdateInfo                     QuestUpdateInfo;                                          // 0x03E0(0x0020) (Edit, BlueprintVisible, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_QuestUpdate.Announce_QuestUpdate_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
