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

// BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C
// 0x000C (0x0E78 - 0x0E6C)
class ATrap_Athena_WallSpikes_C : public ATrap_Athena_Spikes_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E6C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C");
		
		return ptr;
	}


	void SetSpikePosition(float NewSpikePosition);
	void ExecuteUbergraph_Trap_Athena_WallSpikes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
