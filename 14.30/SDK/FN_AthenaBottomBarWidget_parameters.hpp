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

// Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.Construct
struct UAthenaBottomBarWidget_C_Construct_Params
{
};

// Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.PreConstruct
struct UAthenaBottomBarWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.ExecuteUbergraph_AthenaBottomBarWidget
struct UAthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
