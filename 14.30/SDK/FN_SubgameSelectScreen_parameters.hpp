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

// Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled
struct USubgameSelectScreen_C_IsMinorShutdownWarningEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking
struct USubgameSelectScreen_C_IsBusyMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle
struct USubgameSelectScreen_C_AdvanceTextureCycle_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle
struct USubgameSelectScreen_C_InitializeTextureCycle_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FE9F49084346A08B6F02BA99FB50F5CD
struct USubgameSelectScreen_C_DialogResult_FE9F49084346A08B6F02BA99FB50F5CD_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated
struct USubgameSelectScreen_C_BP_OnActivated_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
struct USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
