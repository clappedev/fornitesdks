// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemWindow.ItemWindow_C.Set Description Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     Item_Definition                (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonTextBlock*        Text_Box_to_Set                (Parm, ZeroConstructor, IsPlainOldData)

void UItemWindow_C::Set_Description_Text(class UFortItemDefinition* Item_Definition, class UCommonTextBlock* Text_Box_to_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Set Description Text");

	UItemWindow_C_Set_Description_Text_Params params;
	params.Item_Definition = Item_Definition;
	params.Text_Box_to_Set = Text_Box_to_Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.InternalToExternalRarity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortRarity                    InRarity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ExternalRarity                 (Parm, OutParm)

void UItemWindow_C::InternalToExternalRarity(EFortRarity InRarity, struct FText* ExternalRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.InternalToExternalRarity");

	UItemWindow_C_InternalToExternalRarity_Params params;
	params.InRarity = InRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExternalRarity != nullptr)
		*ExternalRarity = params.ExternalRarity;
}


// Function ItemWindow.ItemWindow_C.HandleButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UItemWindow_C::HandleButton(class UWidget* Content, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.HandleButton");

	UItemWindow_C_HandleButton_Params params;
	params.Content = Content;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UItemWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Initialize");

	UItemWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.AddInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*> Info_Items                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Title                          (Parm)

void UItemWindow_C::AddInfo(const struct FText& Title, TArray<class UFortItemDefinition*>* Info_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.AddInfo");

	UItemWindow_C_AddInfo_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info_Items != nullptr)
		*Info_Items = params.Info_Items;
}


// Function ItemWindow.ItemWindow_C.OnSelectedButtonChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ButtonIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UItemWindow_C::OnSelectedButtonChanged_Event_1(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.OnSelectedButtonChanged_Event_1");

	UItemWindow_C_OnSelectedButtonChanged_Event_1_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemWindow_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Destruct");

	UItemWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.Construct");

	UItemWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UItemWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	UItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemWindow_C::ExecuteUbergraph_ItemWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow");

	UItemWindow_C_ExecuteUbergraph_ItemWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
