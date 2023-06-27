#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaServerAddress.AthenaServerAddress_C.UpdateServerAddress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSessionConnectString_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaServerAddress_C::UpdateServerAddress(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetSessionConnectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaServerAddress_C", "UpdateServerAddress");

	Params::UAthenaServerAddress_C_UpdateServerAddress_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSessionConnectString_ReturnValue = CallFunc_GetSessionConnectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaServerAddress.AthenaServerAddress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaServerAddress_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaServerAddress_C", "Construct");

	Params::UAthenaServerAddress_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaServerAddress.AthenaServerAddress_C.ExecuteUbergraph_AthenaServerAddress
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerAddress_C::ExecuteUbergraph_AthenaServerAddress(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaServerAddress_C", "ExecuteUbergraph_AthenaServerAddress");

	Params::UAthenaServerAddress_C_ExecuteUbergraph_AthenaServerAddress_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
