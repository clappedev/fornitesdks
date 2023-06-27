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

// BlueprintGeneratedClass GA_Athena_DangerGrape.GA_Athena_DangerGrape_C
// 0x000C (0x0E30 - 0x0E24)
class UGA_Athena_DangerGrape_C : public UGA_ThrowConsumable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E24(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_DangerGrape.GA_Athena_DangerGrape_C");
		
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_DangerGrape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
