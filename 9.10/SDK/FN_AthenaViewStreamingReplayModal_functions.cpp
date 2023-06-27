// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaViewStreamingReplayModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent");

	UAthenaViewStreamingReplayModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaViewStreamingReplayModal_C::BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent(struct FText Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent");

	UAthenaViewStreamingReplayModal_C_BndEvt__GameSessionSearchText_K2Node_ComponentBoundEvent_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaViewStreamingReplayModal_C::BndEvt__SearchButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent");

	UAthenaViewStreamingReplayModal_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.ExecuteUbergraph_AthenaViewStreamingReplayModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaViewStreamingReplayModal_C::ExecuteUbergraph_AthenaViewStreamingReplayModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewStreamingReplayModal.AthenaViewStreamingReplayModal_C.ExecuteUbergraph_AthenaViewStreamingReplayModal");

	UAthenaViewStreamingReplayModal_C_ExecuteUbergraph_AthenaViewStreamingReplayModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
