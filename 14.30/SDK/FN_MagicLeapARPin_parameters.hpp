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

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
struct UMagicLeapARPinComponent_UnPin_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
struct UMagicLeapARPinComponent_PinSceneComponent_Params
{
	class USceneComponent*                             ComponentToPin;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
struct UMagicLeapARPinComponent_PinRestoredOrSynced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
struct UMagicLeapARPinComponent_PinActor_Params
{
	class AActor*                                      ActorToPin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
struct UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params
{
	bool                                               bRestoredOrSynced;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
struct UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params
{
};

// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
struct UMagicLeapARPinComponent_IsPinned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
struct UMagicLeapARPinComponent_GetPinState_Params
{
	struct FMagicLeapARPinState                        State;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
struct UMagicLeapARPinComponent_GetPinnedPinID_Params
{
	struct FGuid                                       PinID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
struct UMagicLeapARPinComponent_GetPinData_Params
{
	class UMagicLeapARPinSaveGame*                     PinDataClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMagicLeapARPinSaveGame*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
struct UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
struct UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
struct UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
struct UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params
{
	struct FVector                                     SearchPoint;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGuid                                       PinID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
struct UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params
{
	int                                                NumRequested;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               Pins;                                                     // (Parm, OutParm, ZeroConstructor)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
struct UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params
{
	struct FMagicLeapARPinState                        State;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
struct UMagicLeapARPinFunctionLibrary_GetARPinState_Params
{
	struct FGuid                                       PinID;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FMagicLeapARPinState                        State;                                                    // (Parm, OutParm)
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params
{
	struct FGuid                                       PinID;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PinFoundInEnvironment;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params
{
	struct FGuid                                       PinID;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PinFoundInEnvironment;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
struct UMagicLeapARPinFunctionLibrary_DestroyTracker_Params
{
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
struct UMagicLeapARPinFunctionLibrary_CreateTracker_Params
{
	EMagicLeapPassableWorldError                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
struct UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
