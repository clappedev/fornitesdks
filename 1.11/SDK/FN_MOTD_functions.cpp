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

// Function MOTD.MOTD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMOTD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MOTD.MOTD_C.Construct");

	UMOTD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MOTD.MOTD_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMOTD_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MOTD.MOTD_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UMOTD_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MOTD.MOTD_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UMOTD_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MOTD.MOTD_C.OnActivated");

	UMOTD_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MOTD.MOTD_C.ExecuteUbergraph_MOTD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMOTD_C::ExecuteUbergraph_MOTD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MOTD.MOTD_C.ExecuteUbergraph_MOTD");

	UMOTD_C_ExecuteUbergraph_MOTD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MOTD.MOTD_C.MotdClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMOTD_C::MotdClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MOTD.MOTD_C.MotdClosed__DelegateSignature");

	UMOTD_C_MotdClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
