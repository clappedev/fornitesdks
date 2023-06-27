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

// Function DA_AshtonPack.DA_AshtonPack_C.BPPressTrigger
struct ADA_AshtonPack_C_BPPressTrigger_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_AshtonPack.DA_AshtonPack_C.BPPressSecondaryFire
struct ADA_AshtonPack_C_BPPressSecondaryFire_Params
{
	class AFortDecoHelper*                             FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_AshtonPack.DA_AshtonPack_C.ReceiveBeginPlay
struct ADA_AshtonPack_C_ReceiveBeginPlay_Params
{
};

// Function DA_AshtonPack.DA_AshtonPack_C.Landed
struct ADA_AshtonPack_C_Landed_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DA_AshtonPack.DA_AshtonPack_C.ExecuteUbergraph_DA_AshtonPack
struct ADA_AshtonPack_C_ExecuteUbergraph_DA_AshtonPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
