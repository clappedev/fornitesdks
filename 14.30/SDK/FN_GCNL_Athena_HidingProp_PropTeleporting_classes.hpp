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

// BlueprintGeneratedClass GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C
// 0x0008 (0x07C8 - 0x07C0)
class AGCNL_Athena_HidingProp_PropTeleporting_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
