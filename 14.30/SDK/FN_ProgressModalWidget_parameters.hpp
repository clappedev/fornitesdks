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

// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
struct UProgressModalWidget_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ProgressModalWidget.ProgressModalWidget_C.Construct
struct UProgressModalWidget_C_Construct_Params
{
};

// Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
struct UProgressModalWidget_C_HandleIntroEnded_Params
{
};

// Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
struct UProgressModalWidget_C_HandleOutroEnded_Params
{
};

// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
struct UProgressModalWidget_C_OnBeginIntro_Params
{
};

// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
struct UProgressModalWidget_C_OnBeginOutro_Params
{
};

// Function ProgressModalWidget.ProgressModalWidget_C.Destruct
struct UProgressModalWidget_C_Destruct_Params
{
};

// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
struct UProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
