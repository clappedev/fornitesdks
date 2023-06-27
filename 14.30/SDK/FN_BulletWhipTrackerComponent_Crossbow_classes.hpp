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

// BlueprintGeneratedClass BulletWhipTrackerComponent_Crossbow.BulletWhipTrackerComponent_Crossbow_C
// 0x0000 (0x00F0 - 0x00F0)
class UBulletWhipTrackerComponent_Crossbow_C : public UBulletWhipTrackerComponentBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BulletWhipTrackerComponent_Crossbow.BulletWhipTrackerComponent_Crossbow_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
