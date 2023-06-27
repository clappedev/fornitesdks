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

// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UEventPlayerStatProfileSelectorEntry_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnHovered");

	UEventPlayerStatProfileSelectorEntry_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UEventPlayerStatProfileSelectorEntry_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnUnhovered");

	UEventPlayerStatProfileSelectorEntry_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.ExecuteUbergraph_EventPlayerStatProfileSelectorEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventPlayerStatProfileSelectorEntry_C::ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.ExecuteUbergraph_EventPlayerStatProfileSelectorEntry");

	UEventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEventPlayerStatProfileSelectorEntry_C::Unhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Unhovered__DelegateSignature");

	UEventPlayerStatProfileSelectorEntry_C_Unhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEventPlayerStatProfileSelectorEntry_C::Hovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Hovered__DelegateSignature");

	UEventPlayerStatProfileSelectorEntry_C_Hovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
