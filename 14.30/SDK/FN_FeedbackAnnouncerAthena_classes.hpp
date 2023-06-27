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

// BlueprintGeneratedClass FeedbackAnnouncerAthena.FeedbackAnnouncerAthena_C
// 0x0000 (0x1180 - 0x1180)
class AFeedbackAnnouncerAthena_C : public AFortPawn_FeedbackAnnouncer
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FeedbackAnnouncerAthena.FeedbackAnnouncerAthena_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
