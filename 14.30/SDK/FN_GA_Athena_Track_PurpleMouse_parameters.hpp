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

// Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.EventReceived_739900834D974D726220CC9B70F2219C
struct UGA_Athena_Track_PurpleMouse_C_EventReceived_739900834D974D726220CC9B70F2219C_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.K2_ActivateAbility
struct UGA_Athena_Track_PurpleMouse_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.K2_OnEndAbility
struct UGA_Athena_Track_PurpleMouse_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.OnPlayerDeath
struct UGA_Athena_Track_PurpleMouse_C_OnPlayerDeath_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.OnMinigameChanged
struct UGA_Athena_Track_PurpleMouse_C_OnMinigameChanged_Params
{
};

// Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.ExecuteUbergraph_GA_Athena_Track_PurpleMouse
struct UGA_Athena_Track_PurpleMouse_C_ExecuteUbergraph_GA_Athena_Track_PurpleMouse_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
