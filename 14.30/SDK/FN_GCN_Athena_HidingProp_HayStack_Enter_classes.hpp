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

// BlueprintGeneratedClass GCN_Athena_HidingProp_HayStack_Enter.GCN_Athena_HidingProp_HayStack_Enter_C
// 0x0000 (0x01B8 - 0x01B8)
class UGCN_Athena_HidingProp_HayStack_Enter_C : public UFortGameplayCueNotify_Burst
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_HidingProp_HayStack_Enter.GCN_Athena_HidingProp_HayStack_Enter_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
