#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Results_CommanderXP_Data.Results_CommanderXP_Data
// 0x0028
struct FResults_CommanderXP_Data
{
	int                                                XpMax_2_125B68224E5B5DEA584907B5B4D334FC;                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                XpAmount_6_62330CC14533BA207EB39B86BA02A1E7;              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       XpType_16_9D3D2CAC4D8BDBDD7D4576B43E2E09C9;               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       XpName_11_C48BC1F24ECBE5D14FC7DA97D62DEFD2;               // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
