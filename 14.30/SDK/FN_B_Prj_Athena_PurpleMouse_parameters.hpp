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

// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SpawnBGA_
struct AB_Prj_Athena_PurpleMouse_C_SpawnBGA__Params
{
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromWater;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ReceiveBeginPlay
struct AB_Prj_Athena_PurpleMouse_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SetTeam
struct AB_Prj_Athena_PurpleMouse_C_SetTeam_Params
{
	unsigned char                                      Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ExecuteUbergraph_B_Prj_Athena_PurpleMouse
struct AB_Prj_Athena_PurpleMouse_C_ExecuteUbergraph_B_Prj_Athena_PurpleMouse_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
