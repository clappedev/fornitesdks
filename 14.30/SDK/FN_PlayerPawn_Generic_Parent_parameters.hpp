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

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay
struct APlayerPawn_Generic_Parent_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume
struct APlayerPawn_Generic_Parent_C_Entered_Water_Volume_Params
{
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash
struct APlayerPawn_Generic_Parent_C_Player_Creates_a_Splash_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials
struct APlayerPawn_Generic_Parent_C_ReinitializeWeaponMaterials_Params
{
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent
struct APlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.OnOverlapWaterVolume__DelegateSignature
struct APlayerPawn_Generic_Parent_C_OnOverlapWaterVolume__DelegateSignature_Params
{
	bool                                               bIsInWater;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Water;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
