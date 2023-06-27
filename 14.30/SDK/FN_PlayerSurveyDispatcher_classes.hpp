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

// BlueprintGeneratedClass PlayerSurveyDispatcher.PlayerSurveyDispatcher_C
// 0x0000 (0x0078 - 0x0078)
class UPlayerSurveyDispatcher_C : public UFortPlayerSurveyDispatcher
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerSurveyDispatcher.PlayerSurveyDispatcher_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
