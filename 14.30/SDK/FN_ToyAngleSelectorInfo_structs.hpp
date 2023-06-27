#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ToyAngleSelectorInfo.ToyAngleSelectorInfo
// 0x0014
struct FToyAngleSelectorInfo
{
	float                                              MinPitch_6_C27DBDC64650F9BA5EBF09BE2564561B;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitch_7_75538945434998ADEC50BAA0EDF1654A;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionToPlay_12_2E20DBF74B43F4E8973E488482DCA3F7;        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseDelayTime_11_CD7080EA4E2363C638DE2B94C1969481;     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
