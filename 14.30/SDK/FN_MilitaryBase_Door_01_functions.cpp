// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.IsOpen
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMilitaryBase_Door_01_C::IsOpen()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.IsOpen");

	AMilitaryBase_Door_01_C_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetComponentToLock
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (Parm, OutParm, ReturnParm)

TArray<class UPrimitiveComponent*> AMilitaryBase_Door_01_C::GetComponentToLock()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetComponentToLock");

	AMilitaryBase_Door_01_C_GetComponentToLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnRep_DoorOpen
// (BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::OnRep_DoorOpen()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnRep_DoorOpen");

	AMilitaryBase_Door_01_C_OnRep_DoorOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetDoorMID
// (Public, BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::GetDoorMID()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetDoorMID");

	AMilitaryBase_Door_01_C_GetDoorMID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.UserConstructionScript");

	AMilitaryBase_Door_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AMilitaryBase_Door_01_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__FinishedFunc");

	AMilitaryBase_Door_01_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AMilitaryBase_Door_01_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__UpdateFunc");

	AMilitaryBase_Door_01_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMilitaryBase_Door_01_C::BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AMilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMilitaryBase_Door_01_C::BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AMilitaryBase_Door_01_C_BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OpenDoor
// (BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::OpenDoor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OpenDoor");

	AMilitaryBase_Door_01_C_OpenDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.CloseDoor
// (BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::CloseDoor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.CloseDoor");

	AMilitaryBase_Door_01_C_CloseDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Open
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*             ControllerInstigator           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMilitaryBase_Door_01_C::Open(class AController* ControllerInstigator)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Open");

	AMilitaryBase_Door_01_C_Open_Params params;
	params.ControllerInstigator = ControllerInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Close
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*             ControllerInstigator           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMilitaryBase_Door_01_C::Close(class AController* ControllerInstigator)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Close");

	AMilitaryBase_Door_01_C_Close_Params params;
	params.ControllerInstigator = ControllerInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnUnLocked
// (Event, Public, BlueprintEvent)

void AMilitaryBase_Door_01_C::OnUnLocked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnUnLocked");

	AMilitaryBase_Door_01_C_OnUnLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnLocked
// (Event, Public, BlueprintEvent)

void AMilitaryBase_Door_01_C::OnLocked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnLocked");

	AMilitaryBase_Door_01_C_OnLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.ExecuteUbergraph_MilitaryBase_Door_01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMilitaryBase_Door_01_C::ExecuteUbergraph_MilitaryBase_Door_01(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.ExecuteUbergraph_MilitaryBase_Door_01");

	AMilitaryBase_Door_01_C_ExecuteUbergraph_MilitaryBase_Door_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnDoorOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AMilitaryBase_Door_01_C::OnDoorOpened__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnDoorOpened__DelegateSignature");

	AMilitaryBase_Door_01_C_OnDoorOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
