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

// BlueprintGeneratedClass GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C
// 0x000C (0x0370 - 0x0364)
class AGCN_Athena_LowGravity_ZipLine_C : public AGCN_Athena_LowGravity_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C");
		
		return ptr;
	}


	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
