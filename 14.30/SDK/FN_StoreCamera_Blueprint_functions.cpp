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

// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript");

	AStoreCamera_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AStoreCamera_Blueprint_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc");

	AStoreCamera_Blueprint_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AStoreCamera_Blueprint_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc");

	AStoreCamera_Blueprint_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc
// (BlueprintEvent)

void AStoreCamera_Blueprint_C::ChoicePack__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc");

	AStoreCamera_Blueprint_C_ChoicePack__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc
// (BlueprintEvent)

void AStoreCamera_Blueprint_C::ChoicePack__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc");

	AStoreCamera_Blueprint_C_ChoicePack__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStoreCamera_Blueprint_C::OnActivated(class AFortPlayerController* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnActivated");

	AStoreCamera_Blueprint_C_OnActivated_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStoreCamera_Blueprint_C::OnDeactivated(class AFortPlayerController* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnDeactivated");

	AStoreCamera_Blueprint_C_OnDeactivated_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition
// (BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::OpeningCameraTransition()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition");

	AStoreCamera_Blueprint_C_OpeningCameraTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera
// (BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::ResetCamera()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera");

	AStoreCamera_Blueprint_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStoreCamera_Blueprint_C::DarkenBGVisibility(bool Enable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility");

	AStoreCamera_Blueprint_C_DarkenBGVisibility_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out
// (BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::ChoicePackFOV_Out()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out");

	AStoreCamera_Blueprint_C_ChoicePackFOV_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In
// (BlueprintCallable, BlueprintEvent)

void AStoreCamera_Blueprint_C::ChoicePackFOV_In()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In");

	AStoreCamera_Blueprint_C_ChoicePackFOV_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStoreCamera_Blueprint_C::ExecuteUbergraph_StoreCamera_Blueprint(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint");

	AStoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
