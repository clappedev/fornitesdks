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

// BlueprintGeneratedClass GC_Teleport_Out.GC_Teleport_Out_C
// 0x0004 (0x0084 - 0x0080)
class UGC_Teleport_Out_C : public UFortGameplayCueNotify_Simple
{
public:
	float                                              Default_Play_Length;                                      // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Teleport_Out.GC_Teleport_Out_C");
		
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
