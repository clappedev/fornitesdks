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

// Function ToyOptionsComponent.ToyOptionsComponent_C.BlueprintOnLocalInteract
struct UToyOptionsComponent_C_BlueprintOnLocalInteract_Params
{
	class AFortPlayerPawn*                             InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ToyOptionsComponent.ToyOptionsComponent_C.OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27
struct UToyOptionsComponent_C_OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToyOptionsComponent.ToyOptionsComponent_C.DisplayOptions
struct UToyOptionsComponent_C_DisplayOptions_Params
{
	class APlayerController*                           InteractingPlayer;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToyOptionsComponent.ToyOptionsComponent_C.ExecuteUbergraph_ToyOptionsComponent
struct UToyOptionsComponent_C_ExecuteUbergraph_ToyOptionsComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
