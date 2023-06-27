#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_WaterBuffalo_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "UserConstructionScript");

	Params::AB_Decal_WaterBuffalo_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_WaterBuffalo_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "Timeline_0__FinishedFunc");

	Params::AB_Decal_WaterBuffalo_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_WaterBuffalo_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "Timeline_0__UpdateFunc");

	Params::AB_Decal_WaterBuffalo_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Decal_WaterBuffalo_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "ReceiveBeginPlay");

	Params::AB_Decal_WaterBuffalo_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.ExecuteUbergraph_B_Decal_WaterBuffalo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_WaterBuffalo_C::ExecuteUbergraph_B_Decal_WaterBuffalo(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "ExecuteUbergraph_B_Decal_WaterBuffalo");

	Params::AB_Decal_WaterBuffalo_C_ExecuteUbergraph_B_Decal_WaterBuffalo_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
