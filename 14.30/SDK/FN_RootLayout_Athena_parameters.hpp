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

// Function RootLayout_Athena.RootLayout_Athena_C.IsConsole
struct URootLayout_Athena_C_IsConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RootLayout_Athena.RootLayout_Athena_C.DialogResult_0099D78247C40A9775C753A2024EA419
struct URootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RootLayout_Athena.RootLayout_Athena_C.Construct
struct URootLayout_Athena_C_Construct_Params
{
};

// Function RootLayout_Athena.RootLayout_Athena_C.OnGameWindowCloseButtonClicked
struct URootLayout_Athena_C_OnGameWindowCloseButtonClicked_Params
{
};

// Function RootLayout_Athena.RootLayout_Athena_C.OnModalQueueEmptied_2
struct URootLayout_Athena_C_OnModalQueueEmptied_2_Params
{
};

// Function RootLayout_Athena.RootLayout_Athena_C.ExecuteUbergraph_RootLayout_Athena
struct URootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
