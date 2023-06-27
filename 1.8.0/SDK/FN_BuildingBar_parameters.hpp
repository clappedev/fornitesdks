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

// Function BuildingBar.BuildingBar_C.UpdateBuildingTrap
struct UBuildingBar_C_UpdateBuildingTrap_Params
{
	class ABuildingTrap*                               BuildingTrap;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Set Display Mode
struct UBuildingBar_C_Set_Display_Mode_Params
{
	EFortBuildingInteraction                           Display_Mode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Update Durability Text
struct UBuildingBar_C_Update_Durability_Text_Params
{
};

// Function BuildingBar.BuildingBar_C.Update Current Durability Value
struct UBuildingBar_C_Update_Current_Durability_Value_Params
{
	float                                              CurrentDurability;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Update Max Durability Value
struct UBuildingBar_C_Update_Max_Durability_Value_Params
{
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Initialize Bar
struct UBuildingBar_C_Initialize_Bar_Params
{
};

// Function BuildingBar.BuildingBar_C.Set Timer
struct UBuildingBar_C_Set_Timer_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Update
struct UBuildingBar_C_Update_Params
{
};

// Function BuildingBar.BuildingBar_C.Update HP Delta Bar
struct UBuildingBar_C_Update_HP_Delta_Bar_Params
{
};

// Function BuildingBar.BuildingBar_C.Update HP Fill Bar
struct UBuildingBar_C_Update_HP_Fill_Bar_Params
{
};

// Function BuildingBar.BuildingBar_C.Update Current HP Value
struct UBuildingBar_C_Update_Current_HP_Value_Params
{
	float                                              Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Update Max HP Value
struct UBuildingBar_C_Update_Max_HP_Value_Params
{
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.PreConstruct
struct UBuildingBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Destruct
struct UBuildingBar_C_Destruct_Params
{
};

// Function BuildingBar.BuildingBar_C.ExecuteUbergraph_BuildingBar
struct UBuildingBar_C_ExecuteUbergraph_BuildingBar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
