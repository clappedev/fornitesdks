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

// BlueprintGeneratedClass GCN_Burst_Hot_Feet_Environmental.GCN_Burst_Hot_Feet_Environmental_C
// 0x0001 (0x01B9 - 0x01B8)
class UGCN_Burst_Hot_Feet_Environmental_C : public UFortGameplayCueNotify_Burst
{
public:
	bool                                               NewVar_1;                                                 // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Burst_Hot_Feet_Environmental.GCN_Burst_Hot_Feet_Environmental_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
