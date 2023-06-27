#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateActionDetailsContext
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalActionKeybindWidget_C::PropagateActionDetailsContext()
{
	static auto Func = Class->GetFunction("GlobalActionKeybindWidget_C", "PropagateActionDetailsContext");

	Params::UGlobalActionKeybindWidget_C_PropagateActionDetailsContext_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetActionDetailsContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortGlobalActionDetailsFunctionContextValue                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGlobalActionKeybindWidget_C::SetActionDetailsContext(const struct FFortGlobalActionDetailsFunctionContext& Value)
{
	static auto Func = Class->GetFunction("GlobalActionKeybindWidget_C", "SetActionDetailsContext");

	Params::UGlobalActionKeybindWidget_C_SetActionDetailsContext_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetGlobalAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortGlobalAction       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalActionKeybindWidget_C::SetGlobalAction(enum class EFortGlobalAction Value)
{
	static auto Func = Class->GetFunction("GlobalActionKeybindWidget_C", "SetGlobalAction");

	Params::UGlobalActionKeybindWidget_C_SetGlobalAction_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateGlobalAction
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalActionKeybindWidget_C::PropagateGlobalAction()
{
	static auto Func = Class->GetFunction("GlobalActionKeybindWidget_C", "PropagateGlobalAction");

	Params::UGlobalActionKeybindWidget_C_PropagateGlobalAction_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGlobalActionKeybindWidget_C::OnInitialized()
{
	static auto Func = Class->GetFunction("GlobalActionKeybindWidget_C", "OnInitialized");

	Params::UGlobalActionKeybindWidget_C_OnInitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.ExecuteUbergraph_GlobalActionKeybindWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGlobalActionDetailsFunctionContextTemp_struct_Variable                                             (ConstParm, NoDestructor)
// class UFortStandardGlobalActionDetailsDataSource*CallFunc_ConstructWithDefaultContexts_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_SetActionSource_Value_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalActionKeybindWidget_C::ExecuteUbergraph_GlobalActionKeybindWidget(int32 EntryPoint, const struct FFortGlobalActionDetailsFunctionContext& Temp_struct_Variable, class UFortStandardGlobalActionDetailsDataSource* CallFunc_ConstructWithDefaultContexts_ReturnValue, UInterfaceProperty_ CallFunc_SetActionSource_Value_CastInput)
{
	static auto Func = Class->GetFunction("GlobalActionKeybindWidget_C", "ExecuteUbergraph_GlobalActionKeybindWidget");

	Params::UGlobalActionKeybindWidget_C_ExecuteUbergraph_GlobalActionKeybindWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ConstructWithDefaultContexts_ReturnValue = CallFunc_ConstructWithDefaultContexts_ReturnValue;
	Parms.CallFunc_SetActionSource_Value_CastInput = CallFunc_SetActionSource_Value_CastInput;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
