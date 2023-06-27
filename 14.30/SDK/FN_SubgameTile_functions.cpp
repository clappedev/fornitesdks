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

// Function SubgameTile.SubgameTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameTile_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameTile.SubgameTile_C.PreConstruct");

	USubgameTile_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameTile.SubgameTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubgameTile_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameTile.SubgameTile_C.Construct");

	USubgameTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameTile.SubgameTile_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature
// (BlueprintEvent)

void USubgameTile_C::BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameTile.SubgameTile_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature");

	USubgameTile_C_BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameTile.SubgameTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USubgameTile_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameTile.SubgameTile_C.BP_OnHovered");

	USubgameTile_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameTile.SubgameTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USubgameTile_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameTile.SubgameTile_C.BP_OnUnhovered");

	USubgameTile_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameTile.SubgameTile_C.ExecuteUbergraph_SubgameTile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameTile_C::ExecuteUbergraph_SubgameTile(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameTile.SubgameTile_C.ExecuteUbergraph_SubgameTile");

	USubgameTile_C_ExecuteUbergraph_SubgameTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
