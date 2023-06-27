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

// BlueprintGeneratedClass GCN_RezIn_CreativeRespawn.GCN_RezIn_CreativeRespawn_C
// 0x0000 (0x05CC - 0x05CC)
class AGCN_RezIn_CreativeRespawn_C : public AGCN_RezIn_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_RezIn_CreativeRespawn.GCN_RezIn_CreativeRespawn_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
