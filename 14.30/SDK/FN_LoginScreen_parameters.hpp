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

// Function LoginScreen.LoginScreen_C.Construct
struct ULoginScreen_C_Construct_Params
{
};

// Function LoginScreen.LoginScreen_C.BndEvt__Switcher_ScreenContents_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
struct ULoginScreen_C_BndEvt__Switcher_ScreenContents_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnEnterState_2
struct ULoginScreen_C_OnEnterState_2_Params
{
	EFortUIState                                       PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
struct ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
