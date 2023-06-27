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

// Function B_Prj_Athena_FrostedTips_Fireballs.B_Prj_Athena_FrostedTips_Fireballs_C.ReceiveBeginPlay
struct AB_Prj_Athena_FrostedTips_Fireballs_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_FrostedTips_Fireballs.B_Prj_Athena_FrostedTips_Fireballs_C.ReceiveHit
struct AB_Prj_Athena_FrostedTips_Fireballs_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_FrostedTips_Fireballs.B_Prj_Athena_FrostedTips_Fireballs_C.OnStop
struct AB_Prj_Athena_FrostedTips_Fireballs_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_FrostedTips_Fireballs.B_Prj_Athena_FrostedTips_Fireballs_C.Play Impact Sound
struct AB_Prj_Athena_FrostedTips_Fireballs_C_Play_Impact_Sound_Params
{
};

// Function B_Prj_Athena_FrostedTips_Fireballs.B_Prj_Athena_FrostedTips_Fireballs_C.SpawnCurieBGA
struct AB_Prj_Athena_FrostedTips_Fireballs_C_SpawnCurieBGA_Params
{
};

// Function B_Prj_Athena_FrostedTips_Fireballs.B_Prj_Athena_FrostedTips_Fireballs_C.OnDied
struct AB_Prj_Athena_FrostedTips_Fireballs_C_OnDied_Params
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

// Function B_Prj_Athena_FrostedTips_Fireballs.B_Prj_Athena_FrostedTips_Fireballs_C.ExecuteUbergraph_B_Prj_Athena_FrostedTips_Fireballs
struct AB_Prj_Athena_FrostedTips_Fireballs_C_ExecuteUbergraph_B_Prj_Athena_FrostedTips_Fireballs_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
