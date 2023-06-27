#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DA_Butterfly.DA_Butterfly_C.BPPressSecondaryFire
struct ADA_Butterfly_C_BPPressSecondaryFire_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_Butterfly.DA_Butterfly_C.BPPressTrigger
struct ADA_Butterfly_C_BPPressTrigger_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_Butterfly.DA_Butterfly_C.BPOnUnEquip
struct ADA_Butterfly_C_BPOnUnEquip_Params
{
};

// Function DA_Butterfly.DA_Butterfly_C.BPReleaseSecondaryFire
struct ADA_Butterfly_C_BPReleaseSecondaryFire_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_Butterfly.DA_Butterfly_C.ExecuteUbergraph_DA_Butterfly
struct ADA_Butterfly_C_ExecuteUbergraph_DA_Butterfly_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
