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

// BlueprintGeneratedClass GA_Throw_Petrol_Pump_AsHeldObjectBGA.GA_Throw_Petrol_Pump_AsHeldObjectBGA_C
// 0x000C (0x0C40 - 0x0C34)
class UGA_Throw_Petrol_Pump_AsHeldObjectBGA_C : public UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C34(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Throw_Petrol_Pump_AsHeldObjectBGA.GA_Throw_Petrol_Pump_AsHeldObjectBGA_C");
		
		return ptr;
	}


	void UpdateDummyProjectileBGA();
	void UpdateSpawnedBGA_ServerOnly_();
	void ExecuteUbergraph_GA_Throw_Petrol_Pump_AsHeldObjectBGA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
