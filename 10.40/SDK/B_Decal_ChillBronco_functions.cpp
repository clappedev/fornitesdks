#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Decal_ChillBronco.B_Decal_ChillBronco_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_ChillBronco_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Decal_ChillBronco_C", "UserConstructionScript");

	Params::AB_Decal_ChillBronco_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Decal_ChillBronco.B_Decal_ChillBronco_C.FadeIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_ChillBronco_C::FadeIn__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Decal_ChillBronco_C", "FadeIn__FinishedFunc");

	Params::AB_Decal_ChillBronco_C_FadeIn__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Decal_ChillBronco.B_Decal_ChillBronco_C.FadeIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_ChillBronco_C::FadeIn__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Decal_ChillBronco_C", "FadeIn__UpdateFunc");

	Params::AB_Decal_ChillBronco_C_FadeIn__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Decal_ChillBronco.B_Decal_ChillBronco_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Decal_ChillBronco_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Decal_ChillBronco_C", "ReceiveBeginPlay");

	Params::AB_Decal_ChillBronco_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Decal_ChillBronco.B_Decal_ChillBronco_C.ExecuteUbergraph_B_Decal_ChillBronco
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_ChillBronco_C::ExecuteUbergraph_B_Decal_ChillBronco(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_Decal_ChillBronco_C", "ExecuteUbergraph_B_Decal_ChillBronco");

	Params::AB_Decal_ChillBronco_C_ExecuteUbergraph_B_Decal_ChillBronco_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
