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

// WidgetBlueprintGeneratedClass BuildWatermark.BuildWatermark_C
// 0x0008 (0x02F0 - 0x02E8)
class UBuildWatermark_C : public UFortBuildWatermark
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuildWatermark.BuildWatermark_C");
		
		return ptr;
	}


	void Construct();
	void HandlePartyJoined();
	void Destruct();
	void HandlePlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_BuildWatermark(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
