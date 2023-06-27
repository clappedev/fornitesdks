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

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd
struct UTalkingHeadWidget_C_HandleTalkingHeadEnd_Params
{
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
struct UTalkingHeadWidget_C_HandleTalkingHeadBegin_Params
{
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Subtitle;                                                 // (Parm)
	EFortAnnouncementDisplayPreference                 DisplayPreference;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
struct UTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params
{
	struct FText                                       Subtitle;                                                 // (Parm)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
struct UTalkingHeadWidget_C_SetTalkingHeadName_Params
{
	struct FText                                       Title;                                                    // (Parm)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
struct UTalkingHeadWidget_C_SetTalkingHeadImage_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.Construct
struct UTalkingHeadWidget_C_Construct_Params
{
};

// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
struct UTalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
