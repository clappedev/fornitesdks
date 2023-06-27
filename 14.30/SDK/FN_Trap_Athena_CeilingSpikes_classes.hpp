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

// BlueprintGeneratedClass Trap_Athena_CeilingSpikes.Trap_Athena_CeilingSpikes_C
// 0x0000 (0x0E6C - 0x0E6C)
class ATrap_Athena_CeilingSpikes_C : public ATrap_Athena_Spikes_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Athena_CeilingSpikes.Trap_Athena_CeilingSpikes_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
