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

// BlueprintGeneratedClass CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C
// 0x0000 (0x0060 - 0x0060)
class UCinematicCamera_MatineeTransition_C : public UFortCinematicCamera
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
