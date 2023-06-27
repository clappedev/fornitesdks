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

// Function GooseUI.GooseInventoryWidget.OpenWidget
struct UGooseInventoryWidget_OpenWidget_Params
{
	class UTexture2D*                                  IconTexture;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemDef;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseUI.GooseInventoryWidget.CloseWidget
struct UGooseInventoryWidget_CloseWidget_Params
{
};

// Function GooseUI.GooseWidgetBase.OnUpdateNumberOfPlanes
struct UGooseWidgetBase_OnUpdateNumberOfPlanes_Params
{
	int                                                FriendlyPlaneCount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnemyPlaneCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseUI.GooseLeaderboardWidget.UpdateLeaderboardUI
struct UGooseLeaderboardWidget_UpdateLeaderboardUI_Params
{
	TArray<struct FGooseLeaderboardData>               SortedLeaderboardInfo;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GooseUI.GoosePlanePickupWidget.OpenWidget
struct UGoosePlanePickupWidget_OpenWidget_Params
{
	int                                                DisplayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChestName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GooseUI.GoosePlanePickupWidget.CloseWidget
struct UGoosePlanePickupWidget_CloseWidget_Params
{
};

// Function GooseUI.GoosePlaneWeaponWidget.OpenWidget
struct UGoosePlaneWeaponWidget_OpenWidget_Params
{
	int                                                DisplayIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGooseWeaponDisplayData                     InDisplayData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseUI.GoosePlaneWeaponWidget.CloseWidget
struct UGoosePlaneWeaponWidget_CloseWidget_Params
{
};

// Function GooseUI.GooseRadarIconWidget.OnNewIconState
struct UGooseRadarIconWidget_OnNewIconState_Params
{
	ERadarIconState                                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseUI.GooseRadarWidgetBase.OnPlaneRep
struct UGooseRadarWidgetBase_OnPlaneRep_Params
{
	TArray<class AFortAthenaVehicle*>                  Planes;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GooseUI.GooseSkydivingWidget.OnStartSkydiving
struct UGooseSkydivingWidget_OnStartSkydiving_Params
{
};

// Function GooseUI.GooseSkydivingWidget.OnEndSkydiving
struct UGooseSkydivingWidget_OnEndSkydiving_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
