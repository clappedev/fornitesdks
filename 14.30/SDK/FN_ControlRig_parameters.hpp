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

// Function ControlRig.ControlRigComponent.OnPreInitialize
struct UControlRigComponent_OnPreInitialize_Params
{
};

// Function ControlRig.ControlRigComponent.OnPreEvaluate
struct UControlRigComponent_OnPreEvaluate_Params
{
};

// Function ControlRig.ControlRigComponent.OnPostInitialize
struct UControlRigComponent_OnPostInitialize_Params
{
};

// Function ControlRig.ControlRigComponent.OnPostEvaluate
struct UControlRigComponent_OnPostEvaluate_Params
{
};

// Function ControlRig.ControlRigComponent.BP_GetControlRig
struct UControlRigComponent_BP_GetControlRig_Params
{
	class UControlRig*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
