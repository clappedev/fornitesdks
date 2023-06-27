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

// Function Lightbox.Lightbox_C.RemoveContent
// (Public, BlueprintCallable, BlueprintEvent)

void ULightbox_C::RemoveContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.RemoveContent");

	ULightbox_C_RemoveContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.AddContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*       Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULightbox_C::AddContent(class UCommonUserWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.AddContent");

	ULightbox_C_AddContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)

void ULightbox_C::Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.Outro");

	ULightbox_C_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)

void ULightbox_C::Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.Intro");

	ULightbox_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULightbox_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.Destruct");

	ULightbox_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULightbox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.Construct");

	ULightbox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightbox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.PreConstruct");

	ULightbox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void ULightbox_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1");

	ULightbox_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void ULightbox_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2");

	ULightbox_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightbox_C::ExecuteUbergraph_Lightbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox");

	ULightbox_C_ExecuteUbergraph_Lightbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULightbox_C::OutroEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature");

	ULightbox_C_OutroEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULightbox_C::IntroEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature");

	ULightbox_C_IntroEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
