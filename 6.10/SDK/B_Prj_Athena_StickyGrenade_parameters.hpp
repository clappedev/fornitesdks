#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x1 (0x1 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnRep_bResumeSimulation
struct AB_Prj_Athena_StickyGrenade_C_OnRep_bResumeSimulation_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHits
struct AB_Prj_Athena_StickyGrenade_C_HandleHits_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   Component;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHitSupplyDrop
struct AB_Prj_Athena_StickyGrenade_C_HandleHitSupplyDrop_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   Component;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                    LocalVehicle;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingWall*                         LocalWall;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAthenaSupplyDrop_C*                   K2Node_DynamicCast_AsAthena_Supply_Drop;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAthenaSupplyDropBalloon_C*            K2Node_DynamicCast_AsAthena_Supply_Drop_Balloon;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHitVehicle
struct AB_Prj_Athena_StickyGrenade_C_HandleHitVehicle_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   Component;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingWall*                         LocalWall;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                    K2Node_DynamicCast_AsFort_Athena_Vehicle;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHitBuildingWall
struct AB_Prj_Athena_StickyGrenade_C_HandleHitBuildingWall_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   Component;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingWall*                         LocalWall;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  K2Node_DynamicCast_AsStatic_Mesh_Component;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingWall*                         K2Node_DynamicCast_AsBuilding_Wall;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDoorComponent_ReturnValue;              // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.PlayStickSound
struct AB_Prj_Athena_StickyGrenade_C_PlayStickSound_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitActor;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue1;         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.UserConstructionScript
struct AB_Prj_Athena_StickyGrenade_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.WobbleOnStick__FinishedFunc
struct AB_Prj_Athena_StickyGrenade_C_WobbleOnStick__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.WobbleOnStick__UpdateFunc
struct AB_Prj_Athena_StickyGrenade_C_WobbleOnStick__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.ReceiveBeginPlay
struct AB_Prj_Athena_StickyGrenade_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Stop_Rotation
struct AB_Prj_Athena_StickyGrenade_C_Stop_Rotation_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnExploded
struct AB_Prj_Athena_StickyGrenade_C_OnExploded_Params
{
public:
	//TArray<class AActor*>                      HitActors;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	//TArray<struct FHitResult>                  HitResults;                                        // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// 0x4C (0x4C - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Event_BuildingActorDied
struct AB_Prj_Athena_StickyGrenade_C_Event_BuildingActorDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x20(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Momentum;                                          // 0x40(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnTouched
struct AB_Prj_Athena_StickyGrenade_C_OnTouched_Params
{
public:
	//class AActor*                              OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class UPrimitiveComponent*                 OtherComp;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FHitResult                          HitResult;                                         // 0x10(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//bool                                       bIsOverlap;                                        // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnAttachedToDied
struct AB_Prj_Athena_StickyGrenade_C_OnAttachedToDied_Params
{
public:
	//class AActor*                              DamagedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//float                                      Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class AController*                         InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class AActor*                              DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FVector                             HitLocation;                                       // 0x20(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class UPrimitiveComponent*                 FHitComponent;                                     // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class FName                                BoneName;                                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FVector                             Momentum;                                          // 0x40(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Event_TriggerExplosion
struct AB_Prj_Athena_StickyGrenade_C_Event_TriggerExplosion_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_Athena_StickyGrenade_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Event_Building_Actor_Destroyed
struct AB_Prj_Athena_StickyGrenade_C_Event_Building_Actor_Destroyed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.RestartSimulating
struct AB_Prj_Athena_StickyGrenade_C_RestartSimulating_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.ReopenPawnCollision
struct AB_Prj_Athena_StickyGrenade_C_ReopenPawnCollision_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Event_OnVehicleDestroyed
struct AB_Prj_Athena_StickyGrenade_C_Event_OnVehicleDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
struct AB_Prj_Athena_StickyGrenade_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
{
public:
	struct FHitResult                            ImpactResult;                                      // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0xC (0xC - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.SetBounceVelocity
struct AB_Prj_Athena_StickyGrenade_C_SetBounceVelocity_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.BounceOffNoStick
struct AB_Prj_Athena_StickyGrenade_C_BounceOffNoStick_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.ReceiveDestroyed
struct AB_Prj_Athena_StickyGrenade_C_ReceiveDestroyed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Destroy
struct AB_Prj_Athena_StickyGrenade_C_Destroy_Params
{
public:
};

// 0x701 (0x701 - 0x0)
// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.ExecuteUbergraph_B_Prj_Athena_StickyGrenade
struct AB_Prj_Athena_StickyGrenade_C_ExecuteUbergraph_B_Prj_Athena_StickyGrenade_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60D5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue1;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnSameTeam_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60D6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x24(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable1;                      // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable1;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_Event_HitActors;                            // 0x40(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                    K2Node_Event_HitResults;                           // 0x50(0x10)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x60(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_60D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue1;                 // 0x84(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x90(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x9C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue2;         // 0xB0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue3;         // 0xBC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue4;         // 0xC8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_DamagedActor;                   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Damage;                         // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_CustomEvent_InstigatedBy;                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_DamageCauser;                   // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_HitLocation;                    // 0xF8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_CustomEvent_FHitComponent;                  // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_BoneName;                       // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Momentum;                       // 0x118(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue2;         // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnSameTeam_ReturnValue1;                  // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue1;                 // 0x134(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue1;           // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue2;           // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60DF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OtherActor;                           // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_OtherComp;                            // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitResult;                            // 0x158(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         K2Node_Event_bIsOverlap;                           // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60E0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x1EC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x1F8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x204(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x210(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x248(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x254(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ComponentHasTag_ReturnValue;              // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x278(0x10)(ZeroConstructor, NoDestructor)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue1;               // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x290(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_NegateVector_ReturnValue;                 // 0x2A0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x2AC(0xC)(IsPlainOldData, NoDestructor)
	class AActor*                                K2Node_Event_DamagedActor;                         // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_HitLocation;                          // 0x2D8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   K2Node_Event_FHitComponent;                        // 0x2E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_BoneName;                             // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_Momentum;                             // 0x2F8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x308(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable2;                // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x320(0x8)(NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x338(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x3C8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable3;                // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable2;                      // 0x451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_OnSameTeam_ReturnValue2;                  // 0x452(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60EB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue2;                 // 0x454(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x464(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable3;                      // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue3;         // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnSameTeam_ReturnValue3;                  // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     CallFunc_SelectMaterialInstance_ReturnValue;       // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EFortTeamAffiliation>      K2Node_MakeArray_Array;                            // 0x490(0x10)(ZeroConstructor, ReferenceParm)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x4A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x4B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x4BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x4C0(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EFortTeam                         CallFunc_GetActorTeam_ReturnValue;                 // 0x548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x550(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn1;                   // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x571(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortTeamAffiliation>      K2Node_MakeArray_Array1;                           // 0x578(0x10)(ZeroConstructor, ReferenceParm)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue5;         // 0x588(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeam                         CallFunc_GetActorTeam_ReturnValue1;                // 0x594(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x595(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable4;                // 0x596(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_DestroyedActor;                 // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue1;                // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable5;                // 0x5A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable4;                      // 0x5A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x5A8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue1;         // 0x5B8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_ComponentBoundEvent_ImpactResult;           // 0x5C0(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit1;             // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap1;          // 0x649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time1;                     // 0x64C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance1;                 // 0x650(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location1;                 // 0x654(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint1;              // 0x660(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal1;                   // 0x66C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal1;             // 0x678(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat1;                  // 0x688(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor1;                 // 0x690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent1;             // 0x698(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName1;              // 0x6A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem1;                  // 0x6A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex1;                // 0x6AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart1;               // 0x6B0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd1;                 // 0x6BC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaVehicle*                    K2Node_DynamicCast_AsFort_Athena_Vehicle;          // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_Velocity;                       // 0x6F4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable5;                      // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
