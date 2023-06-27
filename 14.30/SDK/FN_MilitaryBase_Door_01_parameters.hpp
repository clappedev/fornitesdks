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

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.IsOpen
struct AMilitaryBase_Door_01_C_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetComponentToLock
struct AMilitaryBase_Door_01_C_GetComponentToLock_Params
{
	TArray<class UPrimitiveComponent*>                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnRep_DoorOpen
struct AMilitaryBase_Door_01_C_OnRep_DoorOpen_Params
{
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetDoorMID
struct AMilitaryBase_Door_01_C_GetDoorMID_Params
{
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.UserConstructionScript
struct AMilitaryBase_Door_01_C_UserConstructionScript_Params
{
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__FinishedFunc
struct AMilitaryBase_Door_01_C_Timeline_0__FinishedFunc_Params
{
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__UpdateFunc
struct AMilitaryBase_Door_01_C_Timeline_0__UpdateFunc_Params
{
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AMilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AMilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OpenDoor
struct AMilitaryBase_Door_01_C_OpenDoor_Params
{
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.CloseDoor
struct AMilitaryBase_Door_01_C_CloseDoor_Params
{
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Open
struct AMilitaryBase_Door_01_C_Open_Params
{
	class AController*                                 ControllerInstigator;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Close
struct AMilitaryBase_Door_01_C_Close_Params
{
	class AController*                                 ControllerInstigator;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnUnLocked
struct AMilitaryBase_Door_01_C_OnUnLocked_Params
{
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnLocked
struct AMilitaryBase_Door_01_C_OnLocked_Params
{
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.ExecuteUbergraph_MilitaryBase_Door_01
struct AMilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnDoorOpened__DelegateSignature
struct AMilitaryBase_Door_01_C_OnDoorOpened__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
