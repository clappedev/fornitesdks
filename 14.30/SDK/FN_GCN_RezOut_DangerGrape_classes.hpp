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

// BlueprintGeneratedClass GCN_RezOut_DangerGrape.GCN_RezOut_DangerGrape_C
// 0x0008 (0x05F0 - 0x05E8)
class AGCN_RezOut_DangerGrape_C : public AGCN_RezOut_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_RezOut_DangerGrape.GCN_RezOut_DangerGrape_C");
		
		return ptr;
	}


	void Pre_Sequence_Change();
	void ExecuteUbergraph_GCN_RezOut_DangerGrape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
