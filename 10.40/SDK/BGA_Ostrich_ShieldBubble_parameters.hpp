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
// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_EndSounds
struct ABGA_Ostrich_ShieldBubble_C_OnRep_EndSounds_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.SetOverchargeAudioEnabled
struct ABGA_Ostrich_ShieldBubble_C_SetOverchargeAudioEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5155[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.IsShieldActive
struct ABGA_Ostrich_ShieldBubble_C_IsShieldActive_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_ForceCancelOvercharge
struct ABGA_Ostrich_ShieldBubble_C_OnRep_ForceCancelOvercharge_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5156[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetMechMesh_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_IsOvercharged
struct ABGA_Ostrich_ShieldBubble_C_OnRep_IsOvercharged_Params
{
public:
	class USkeletalMeshComponent*                CallFunc_GetMechMesh_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetMechMesh_ReturnValue_1;                // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_RegenShield
struct ABGA_Ostrich_ShieldBubble_C_OnRep_RegenShield_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_ShieldActive
struct ABGA_Ostrich_ShieldBubble_C_OnRep_ShieldActive_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_ShieldDestroyed
struct ABGA_Ostrich_ShieldBubble_C_OnRep_ShieldDestroyed_Params
{
public:
};

// 0x15 (0x15 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_CurrentShield
struct ABGA_Ostrich_ShieldBubble_C_OnRep_CurrentShield_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5157[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetMechMesh_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.UserConstructionScript
struct ABGA_Ostrich_ShieldBubble_C_UserConstructionScript_Params
{
public:
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_3;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_4;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_5;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_6;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_7;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_8;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_9;            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ScaleUpShield__FinishedFunc
struct ABGA_Ostrich_ShieldBubble_C_ScaleUpShield__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ScaleUpShield__UpdateFunc
struct ABGA_Ostrich_ShieldBubble_C_ScaleUpShield__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.HitShieldVisuals__FinishedFunc
struct ABGA_Ostrich_ShieldBubble_C_HitShieldVisuals__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.HitShieldVisuals__UpdateFunc
struct ABGA_Ostrich_ShieldBubble_C_HitShieldVisuals__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OverchargeShieldPulse__FinishedFunc
struct ABGA_Ostrich_ShieldBubble_C_OverchargeShieldPulse__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OverchargeShieldPulse__UpdateFunc
struct ABGA_Ostrich_ShieldBubble_C_OverchargeShieldPulse__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OverchargeShieldPulse__PulseEvent__EventFunc
struct ABGA_Ostrich_ShieldBubble_C_OverchargeShieldPulse__PulseEvent__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ReactivateShield
struct ABGA_Ostrich_ShieldBubble_C_ReactivateShield_Params
{
public:
};

// 0xE8 (0xE8 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnDamageServer
struct ABGA_Ostrich_ShieldBubble_C_OnDamageServer_Params
{
public:
	//float                                      Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FGameplayTagContainer               DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	//struct FVector                             Momentum;                                          // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FHitResult                          HitInfo;                                           // 0x34(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	//class AController*                         InstigatedBy;                                      // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class AActor*                              DamageCauser;                                      // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FGameplayEffectContextHandle        EffectContext;                                     // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.BubbleFlash
struct ABGA_Ostrich_ShieldBubble_C_BubbleFlash_Params
{
public:
	bool                                         Play_Sound;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ShieldDestroy
struct ABGA_Ostrich_ShieldBubble_C_ShieldDestroy_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ResetShieldBool
struct ABGA_Ostrich_ShieldBubble_C_ResetShieldBool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ShieldBootUp
struct ABGA_Ostrich_ShieldBubble_C_ShieldBootUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ShieldPowerDown
struct ABGA_Ostrich_ShieldBubble_C_ShieldPowerDown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.Regen
struct ABGA_Ostrich_ShieldBubble_C_Regen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.BeginOverchargeShield
struct ABGA_Ostrich_ShieldBubble_C_BeginOverchargeShield_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.EndOverchargeShield
struct ABGA_Ostrich_ShieldBubble_C_EndOverchargeShield_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ResetIsOvercharged
struct ABGA_Ostrich_ShieldBubble_C_ResetIsOvercharged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.BeginRegen
struct ABGA_Ostrich_ShieldBubble_C_BeginRegen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ResetOverCharge
struct ABGA_Ostrich_ShieldBubble_C_ResetOverCharge_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OvershieldBeginExpirePulse
struct ABGA_Ostrich_ShieldBubble_C_OvershieldBeginExpirePulse_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ReceiveEndPlay
struct ABGA_Ostrich_ShieldBubble_C_ReceiveEndPlay_Params
{
public:
	//enum class EEndPlayReason                  EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20B (0x20B - 0x0)
// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ExecuteUbergraph_BGA_Ostrich_ShieldBubble
struct ABGA_Ostrich_ShieldBubble_C_ExecuteUbergraph_BGA_Ostrich_ShieldBubble_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5158[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Damage;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5159[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x30(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x5C(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_515A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_Event_InstigatedBy;                         // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0xF8(0x18)()
	bool                                         K2Node_CustomEvent_Play_Sound;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_515B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_515C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_1;                       // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue_2;                       // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_515D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x130(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x140(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x148(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_515E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x154(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_515F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x168(0x8)(NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5160[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetMechMesh_ReturnValue;                  // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x188(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5161[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1; // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2; // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1C0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5162[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_4;        // 0x1D8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeUnclamped_ReturnValue;            // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_3;         // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_4;         // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_5;         // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetHasGunner_ReturnValue;                 // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x20A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
