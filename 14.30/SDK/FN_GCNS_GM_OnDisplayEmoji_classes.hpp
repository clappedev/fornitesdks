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

// BlueprintGeneratedClass GCNS_GM_OnDisplayEmoji.GCNS_GM_OnDisplayEmoji_C
// 0x0000 (0x01C8 - 0x01C8)
class UGCNS_GM_OnDisplayEmoji_C : public UGameplayCueNotify_OnDisplayEmoji
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNS_GM_OnDisplayEmoji.GCNS_GM_OnDisplayEmoji_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
