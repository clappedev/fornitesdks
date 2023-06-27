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

// BlueprintGeneratedClass GA_Athena_MechanicFlopper.GA_Athena_MechanicFlopper_C
// 0x0008 (0x0BE8 - 0x0BE0)
class UGA_Athena_MechanicFlopper_C : public UGA_Athena_MedConsumable_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_MechanicFlopper.GA_Athena_MechanicFlopper_C");
		
		return ptr;
	}


	void K2_CommitExecute();
	void ExecuteUbergraph_GA_Athena_MechanicFlopper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
