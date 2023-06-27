#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Reset Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::Reset_Intro()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "Reset Intro");

	Params::UFeatureUnlockScreen_C_Reset_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeatureUnlockScreen_C::HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "HandleBack");

	Params::UFeatureUnlockScreen_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::Construct()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "Construct");

	Params::UFeatureUnlockScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeatureUnlockScreen_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature");

	Params::UFeatureUnlockScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "OnBeginIntro");

	Params::UFeatureUnlockScreen_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "Destruct");

	Params::UFeatureUnlockScreen_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.ExecuteUbergraph_FeatureUnlockScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeatureUnlockScreen_C::ExecuteUbergraph_FeatureUnlockScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_HandleBack_Passthrough)
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "ExecuteUbergraph_FeatureUnlockScreen");

	Params::UFeatureUnlockScreen_C_ExecuteUbergraph_FeatureUnlockScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
