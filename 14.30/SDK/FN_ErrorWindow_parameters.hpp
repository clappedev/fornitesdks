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

// Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged
struct UErrorWindow_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ErrorWindow.ErrorWindow_C.Initialize Close Button
struct UErrorWindow_C_Initialize_Close_Button_Params
{
};

// Function ErrorWindow.ErrorWindow_C.Construct
struct UErrorWindow_C_Construct_Params
{
};

// Function ErrorWindow.ErrorWindow_C.Destruct
struct UErrorWindow_C_Destruct_Params
{
};

// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
struct UErrorWindow_C_OnBeginOutro_Params
{
};

// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
struct UErrorWindow_C_OnBeginIntro_Params
{
};

// Function ErrorWindow.ErrorWindow_C.BP_OnActivated
struct UErrorWindow_C_BP_OnActivated_Params
{
};

// Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish
struct UErrorWindow_C_HandleLlamaAnimFinish_Params
{
};

// Function ErrorWindow.ErrorWindow_C.LlamaReverse
struct UErrorWindow_C_LlamaReverse_Params
{
};

// Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished
struct UErrorWindow_C_HandleLlamaCycleFinished_Params
{
};

// Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama
struct UErrorWindow_C_PlayRandomAmbientLlama_Params
{
};

// Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence
struct UErrorWindow_C_StartAmbientLlamaSequence_Params
{
};

// Function ErrorWindow.ErrorWindow_C.ResetLlamas
struct UErrorWindow_C_ResetLlamas_Params
{
};

// Function ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText
struct UErrorWindow_C_OnOverrideCloseButtonText_Params
{
	struct FText                                       OverrideText;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
struct UErrorWindow_C_ExecuteUbergraph_ErrorWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
