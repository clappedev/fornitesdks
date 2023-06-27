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

// BlueprintGeneratedClass GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C
// 0x0000 (0x01D0 - 0x01D0)
class UGCNS_GM_OnPreviewEmoji_C : public UGameplayCueNotify_OnPreviewEmoji
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
