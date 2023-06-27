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

// Function SubgameOptionButton.SubgameOptionButton_C.SetupTile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Key_Art                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color_Fill                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color_Gradient                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SpecialMessage                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Message_BackgroundColor        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   StandardMessageLine1           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   StandardMessageLine2           (BlueprintVisible, BlueprintReadOnly, Parm)

void USubgameOptionButton_C::SetupTile(class UTexture2D* Key_Art, struct FLinearColor Color_Fill, struct FLinearColor Color_Gradient, struct FText Title, struct FText Description, struct FText SpecialMessage, struct FLinearColor Message_BackgroundColor, struct FText StandardMessageLine1, struct FText StandardMessageLine2)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.SetupTile");

	USubgameOptionButton_C_SetupTile_Params params;
	params.Key_Art = Key_Art;
	params.Color_Fill = Color_Fill;
	params.Color_Gradient = Color_Gradient;
	params.Title = Title;
	params.Description = Description;
	params.SpecialMessage = SpecialMessage;
	params.Message_BackgroundColor = Message_BackgroundColor;
	params.StandardMessageLine1 = StandardMessageLine1;
	params.StandardMessageLine2 = StandardMessageLine2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.OnTileFocused
// (BlueprintCallable, BlueprintEvent)

void USubgameOptionButton_C::OnTileFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.OnTileFocused");

	USubgameOptionButton_C_OnTileFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.OnTileUnfocused
// (BlueprintCallable, BlueprintEvent)

void USubgameOptionButton_C::OnTileUnfocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.OnTileUnfocused");

	USubgameOptionButton_C_OnTileUnfocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USubgameOptionButton_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent");

	USubgameOptionButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameOptionButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.PreConstruct");

	USubgameOptionButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void USubgameOptionButton_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.BP_OnClicked");

	USubgameOptionButton_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubgameOptionButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.Construct");

	USubgameOptionButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.EventOtherTileFocused
// (BlueprintCallable, BlueprintEvent)

void USubgameOptionButton_C::EventOtherTileFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.EventOtherTileFocused");

	USubgameOptionButton_C_EventOtherTileFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.RefreshSubGameDisplay
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSubgameDisplayData     SubGame                        (BlueprintVisible, BlueprintReadOnly, Parm)

void USubgameOptionButton_C::RefreshSubGameDisplay(struct FSubgameDisplayData SubGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.RefreshSubGameDisplay");

	USubgameOptionButton_C_RefreshSubGameDisplay_Params params;
	params.SubGame = SubGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void USubgameOptionButton_C::BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent");

	USubgameOptionButton_C_BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.ExecuteUbergraph_SubgameOptionButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameOptionButton_C::ExecuteUbergraph_SubgameOptionButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.ExecuteUbergraph_SubgameOptionButton");

	USubgameOptionButton_C_ExecuteUbergraph_SubgameOptionButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameOptionButton.SubgameOptionButton_C.OnSubgameOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USubgameOptionButton_C::OnSubgameOptionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameOptionButton.SubgameOptionButton_C.OnSubgameOptionSelected__DelegateSignature");

	USubgameOptionButton_C_OnSubgameOptionSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
