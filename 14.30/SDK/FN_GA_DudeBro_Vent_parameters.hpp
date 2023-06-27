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

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.ActuallyCleanPlayerUp
struct UGA_DudeBro_Vent_C_ActuallyCleanPlayerUp_Params
{
};

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.PlayerCapsuleHit
struct UGA_DudeBro_Vent_C_PlayerCapsuleHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_ActivateAbilityFromEvent
struct UGA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.MovementModeChangedDelegate_Event_1
struct UGA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_1_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_OnEndAbility
struct UGA_DudeBro_Vent_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.ExecuteUbergraph_GA_DudeBro_Vent
struct UGA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
