#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BasicInteractionWidget.BasicInteractionWidget_C.UpdateDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasicInteractionWidget_C::UpdateDescription(class FText Description)
{
	static auto Func = Class->GetFunction("BasicInteractionWidget_C", "UpdateDescription");

	Params::UBasicInteractionWidget_C_UpdateDescription_Params Parms;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BasicInteractionWidget.BasicInteractionWidget_C.InitBasicInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBasicInteractionWidget_C::InitBasicInteraction()
{
	static auto Func = Class->GetFunction("BasicInteractionWidget_C", "InitBasicInteraction");

	Params::UBasicInteractionWidget_C_InitBasicInteraction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BasicInteractionWidget.BasicInteractionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBasicInteractionWidget_C::Construct()
{
	static auto Func = Class->GetFunction("BasicInteractionWidget_C", "Construct");

	Params::UBasicInteractionWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BasicInteractionWidget.BasicInteractionWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasicInteractionWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BasicInteractionWidget_C", "PreConstruct");

	Params::UBasicInteractionWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BasicInteractionWidget.BasicInteractionWidget_C.ExecuteUbergraph_BasicInteractionWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasicInteractionWidget_C::ExecuteUbergraph_BasicInteractionWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("BasicInteractionWidget_C", "ExecuteUbergraph_BasicInteractionWidget");

	Params::UBasicInteractionWidget_C_ExecuteUbergraph_BasicInteractionWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
