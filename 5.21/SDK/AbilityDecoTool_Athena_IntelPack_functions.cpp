#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_Athena_IntelPack_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("AbilityDecoTool_Athena_IntelPack_C", "UserConstructionScript");

	Params::AAbilityDecoTool_Athena_IntelPack_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_IntelPack_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static auto Func = Class->GetFunction("AbilityDecoTool_Athena_IntelPack_C", "BPPressTrigger");

	Params::AAbilityDecoTool_Athena_IntelPack_C_BPPressTrigger_Params Parms;
	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_IntelPack_C::ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper)
{
	static auto Func = Class->GetFunction("AbilityDecoTool_Athena_IntelPack_C", "ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack");

	Params::AAbilityDecoTool_Athena_IntelPack_C_ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
