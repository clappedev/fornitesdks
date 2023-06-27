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

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.UpdateGameTexture
struct ALandscapeWaterInfo_C_UpdateGameTexture_Params
{
};

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Update Water MID
struct ALandscapeWaterInfo_C_Update_Water_MID_Params
{
	class UTexture*                                    Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Water MPC Values
struct ALandscapeWaterInfo_C_Set_Water_MPC_Values_Params
{
};

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.UserConstructionScript
struct ALandscapeWaterInfo_C_UserConstructionScript_Params
{
};

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay
struct ALandscapeWaterInfo_C_ReceiveBeginPlay_Params
{
};

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveEndPlay
struct ALandscapeWaterInfo_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level
struct ALandscapeWaterInfo_C_Set_Flood_Water_Level_Params
{
};

// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo
struct ALandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
