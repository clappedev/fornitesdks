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

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetRandomPropagationArcSpline
struct AGCNL_CurieState_ElementAttached_Electricity_C_GetRandomPropagationArcSpline_Params
{
	class UStaticMesh*                                 Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetNiagaraFlippedAxes
struct AGCNL_CurieState_ElementAttached_Electricity_C_GetNiagaraFlippedAxes_Params
{
	struct FVector                                     VectorIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorOut;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetSplineRelativeRotationXOffset
struct AGCNL_CurieState_ElementAttached_Electricity_C_GetSplineRelativeRotationXOffset_Params
{
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.GetActorPlaneOrientation
struct AGCNL_CurieState_ElementAttached_Electricity_C_GetActorPlaneOrientation_Params
{
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.SetPropagationSplineCustomPrimitiveData
struct AGCNL_CurieState_ElementAttached_Electricity_C_SetPropagationSplineCustomPrimitiveData_Params
{
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.SetPropagationSplineHiddenInGame
struct AGCNL_CurieState_ElementAttached_Electricity_C_SetPropagationSplineHiddenInGame_Params
{
	bool                                               NewHidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.FindPropagationParent
struct AGCNL_CurieState_ElementAttached_Electricity_C_FindPropagationParent_Params
{
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.OnLoopingStart
struct AGCNL_CurieState_ElementAttached_Electricity_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.ReceiveEndPlay
struct AGCNL_CurieState_ElementAttached_Electricity_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.OnRemoval
struct AGCNL_CurieState_ElementAttached_Electricity_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.DrawPropagationSpline
struct AGCNL_CurieState_ElementAttached_Electricity_C_DrawPropagationSpline_Params
{
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.HideSplineMesh
struct AGCNL_CurieState_ElementAttached_Electricity_C_HideSplineMesh_Params
{
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.RetriggerPropagationSpline
struct AGCNL_CurieState_ElementAttached_Electricity_C_RetriggerPropagationSpline_Params
{
};

// Function GCNL_CurieState_ElementAttached_Electricity.GCNL_CurieState_ElementAttached_Electricity_C.ExecuteUbergraph_GCNL_CurieState_ElementAttached_Electricity
struct AGCNL_CurieState_ElementAttached_Electricity_C_ExecuteUbergraph_GCNL_CurieState_ElementAttached_Electricity_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
