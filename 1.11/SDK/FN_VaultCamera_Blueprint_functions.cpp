// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVaultCamera_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.UserConstructionScript");

	AVaultCamera_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4");

	AVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVaultCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3");

	AVaultCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	AVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVaultCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");

	AVaultCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultCamera_Blueprint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ReceiveTick");

	AVaultCamera_Blueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)

void AVaultCamera_Blueprint_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnActivated");

	AVaultCamera_Blueprint_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AVaultCamera_Blueprint_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.OnDeactivated");

	AVaultCamera_Blueprint_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultCamera_Blueprint_C::ExecuteUbergraph_VaultCamera_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint");

	AVaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
