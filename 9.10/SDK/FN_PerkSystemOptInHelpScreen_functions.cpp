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

// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.SetMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerkSystemOptInHelpScreen_C::SetMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.SetMode");

	UPerkSystemOptInHelpScreen_C_SetMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerkSystemOptInHelpScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.Construct");

	UPerkSystemOptInHelpScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.BndEvt__ButtonDonotshow_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerkSystemOptInHelpScreen_C::BndEvt__ButtonDonotshow_K2Node_ComponentBoundEvent(class UCommonButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.BndEvt__ButtonDonotshow_K2Node_ComponentBoundEvent");

	UPerkSystemOptInHelpScreen_C_BndEvt__ButtonDonotshow_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.BndEvt__ButtonInfo_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPerkSystemOptInHelpScreen_C::BndEvt__ButtonInfo_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.BndEvt__ButtonInfo_K2Node_ComponentBoundEvent");

	UPerkSystemOptInHelpScreen_C_BndEvt__ButtonInfo_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.ExecuteUbergraph_PerkSystemOptInHelpScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerkSystemOptInHelpScreen_C::ExecuteUbergraph_PerkSystemOptInHelpScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.ExecuteUbergraph_PerkSystemOptInHelpScreen");

	UPerkSystemOptInHelpScreen_C_ExecuteUbergraph_PerkSystemOptInHelpScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
