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

// Function HorizontalTabList.HorizontalTabList_C.SetVerticalAlignment
struct UHorizontalTabList_C_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    FillVertically;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.UpdateGamepadKeyVisibility
struct UHorizontalTabList_C_UpdateGamepadKeyVisibility_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
struct UHorizontalTabList_C_Get_Tab_From_Id_Params
{
	struct FName                                       TabNameID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.Construct
struct UHorizontalTabList_C_Construct_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
struct UHorizontalTabList_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.Previous Visibility
struct UHorizontalTabList_C_Previous_Visibility_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_1
struct UHorizontalTabList_C_CustomEvent_1_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
struct UHorizontalTabList_C_HandleTabCreated_Params
{
	struct FName                                       TabNameID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.HandleTabRemoved
struct UHorizontalTabList_C_HandleTabRemoved_Params
{
	struct FName                                       TabNameID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.HandleOnInputMethodChanged
struct UHorizontalTabList_C_HandleOnInputMethodChanged_Params
{
	ECommonInputType                                   bNewInputType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
struct UHorizontalTabList_C_ExecuteUbergraph_HorizontalTabList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
