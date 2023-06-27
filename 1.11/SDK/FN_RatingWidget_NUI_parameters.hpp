#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RatingWidget_NUI.RatingWidget_NUI_C.SetShouldShowTeamPowerRating
struct URatingWidget_NUI_C_SetShouldShowTeamPowerRating_Params
{
	bool                                               ShowTeamRating;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Override Default Color Set
struct URatingWidget_NUI_C_Override_Default_Color_Set_Params
{
	bool                                               Override;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Medium_Color;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Dark_Color;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Texture2D Parameter From Multi Size Brush
struct URatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Parameter;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortMultiSizeBrush                         MBrush;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Update From Unique ID
struct URatingWidget_NUI_C_Update_From_Unique_ID_Params
{
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Unique ID
struct URatingWidget_NUI_C_Set_Unique_ID_Params
{
	struct FUniqueNetIdRepl                            ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Update
struct URatingWidget_NUI_C_Update_Params
{
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Update Rating Value
struct URatingWidget_NUI_C_Update_Rating_Value_Params
{
	int                                                Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.PreConstruct
struct URatingWidget_NUI_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerInfoChanged
struct URatingWidget_NUI_C_PlayerInfoChanged_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.Construct
struct URatingWidget_NUI_C_Construct_Params
{
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerStateChanged
struct URatingWidget_NUI_C_PlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RatingWidget_NUI.RatingWidget_NUI_C.ExecuteUbergraph_RatingWidget_NUI
struct URatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
