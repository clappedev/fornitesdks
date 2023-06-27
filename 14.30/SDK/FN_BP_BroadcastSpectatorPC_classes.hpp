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

// BlueprintGeneratedClass BP_BroadcastSpectatorPC.BP_BroadcastSpectatorPC_C
// 0x0000 (0x3040 - 0x3040)
class ABP_BroadcastSpectatorPC_C : public AFortLiveBroadcastController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BroadcastSpectatorPC.BP_BroadcastSpectatorPC_C");
		
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
