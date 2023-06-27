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

// Function DA_CarminePack.DA_CarminePack_C.OnRep_StoneTags
struct ADA_CarminePack_C_OnRep_StoneTags_Params
{
};

// Function DA_CarminePack.DA_CarminePack_C.BPPressTrigger
struct ADA_CarminePack_C_BPPressTrigger_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_CarminePack.DA_CarminePack_C.BPPressSecondaryFire
struct ADA_CarminePack_C_BPPressSecondaryFire_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_CarminePack.DA_CarminePack_C.ReceiveBeginPlay
struct ADA_CarminePack_C_ReceiveBeginPlay_Params
{
};

// Function DA_CarminePack.DA_CarminePack_C.Landed
struct ADA_CarminePack_C_Landed_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DA_CarminePack.DA_CarminePack_C.BindPartchanged
struct ADA_CarminePack_C_BindPartchanged_Params
{
};

// Function DA_CarminePack.DA_CarminePack_C.ExecuteUbergraph_DA_CarminePack
struct ADA_CarminePack_C_ExecuteUbergraph_DA_CarminePack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
