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

// BlueprintGeneratedClass GE_Commando_ClusterBombDamage.GE_Commando_ClusterBombDamage_C
// 0x0000 (0x07B8 - 0x07B8)
class UGE_Commando_ClusterBombDamage_C : public UGET_DirectPhysicalDamage_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Commando_ClusterBombDamage.GE_Commando_ClusterBombDamage_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
