#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CMSImageSlideShow.CMSImageSlideShow_C.SetMediaURLs
struct UCMSImageSlideShow_C_SetMediaURLs_Params
{
	TArray<struct FString>                             MediaURLs;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CMSImageSlideShow.CMSImageSlideShow_C.BndEvt__Images_K2Node_ComponentBoundEvent
struct UCMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_Params
{
	class UCommonWidgetCarousel*                       CarouselWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CurrentPageIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CMSImageSlideShow.CMSImageSlideShow_C.ExecuteUbergraph_CMSImageSlideShow
struct UCMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CMSImageSlideShow.CMSImageSlideShow_C.CarouselIndexChanged__DelegateSignature
struct UCMSImageSlideShow_C_CarouselIndexChanged__DelegateSignature_Params
{
	int                                                CurrentPageIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
