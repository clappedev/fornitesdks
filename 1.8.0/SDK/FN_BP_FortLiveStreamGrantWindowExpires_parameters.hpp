#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.GetToolTipWidget_1
struct UBP_FortLiveStreamGrantWindowExpires_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Clean Up Name Text
struct UBP_FortLiveStreamGrantWindowExpires_C_Clean_Up_Name_Text_Params
{
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Name Text
struct UBP_FortLiveStreamGrantWindowExpires_C_Update_Name_Text_Params
{
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Expiration Text
struct UBP_FortLiveStreamGrantWindowExpires_C_Update_Expiration_Text_Params
{
	struct FTimespan                                   Timespan;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Set Stream Brush
struct UBP_FortLiveStreamGrantWindowExpires_C_Set_Stream_Brush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.PreConstruct
struct UBP_FortLiveStreamGrantWindowExpires_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Construct
struct UBP_FortLiveStreamGrantWindowExpires_C_Construct_Params
{
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowStarts_Event_1
struct UBP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowStarts_Event_1_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowEnds_Event_1
struct UBP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowEnds_Event_1_Params
{
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowSelectedViewers_Event_1
struct UBP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowSelectedViewers_Event_1_Params
{
	TArray<struct FText>                               Names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.HandleSimulateExpirationTimer
struct UBP_FortLiveStreamGrantWindowExpires_C_HandleSimulateExpirationTimer_Params
{
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnAnimation_Finished
struct UBP_FortLiveStreamGrantWindowExpires_C_OnAnimation_Finished_Params
{
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Handle Wait Between Names
struct UBP_FortLiveStreamGrantWindowExpires_C_Handle_Wait_Between_Names_Params
{
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.TextFadedOut
struct UBP_FortLiveStreamGrantWindowExpires_C_TextFadedOut_Params
{
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires
struct UBP_FortLiveStreamGrantWindowExpires_C_ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerStarted__DelegateSignature
struct UBP_FortLiveStreamGrantWindowExpires_C_StreamTimerStarted__DelegateSignature_Params
{
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.StreamTimerExpired__DelegateSignature
struct UBP_FortLiveStreamGrantWindowExpires_C_StreamTimerExpired__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
