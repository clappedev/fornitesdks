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

// Function StatusWidget.StatusWidget_C.SetContinueButtonText
struct UStatusWidget_C_SetContinueButtonText_Params
{
	struct FText                                       ContinueText;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
struct UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
