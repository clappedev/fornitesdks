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

// BlueprintGeneratedClass BP_SpectateAFriendPC.BP_SpectateAFriendPC_C
// 0x0000 (0x30E0 - 0x30E0)
class ABP_SpectateAFriendPC_C : public AFortSpectateAFriendController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpectateAFriendPC.BP_SpectateAFriendPC_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
