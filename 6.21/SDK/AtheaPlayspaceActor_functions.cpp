#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AtheaPlayspaceActor.AtheaPlayspaceActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlaysetItemDefinition*  CallFunc_GetCurrentPlayset_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAtheaPlayspaceActor_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue, class UFortPlaysetItemDefinition* CallFunc_GetCurrentPlayset_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("AtheaPlayspaceActor_C", "UserConstructionScript");

	Params::AAtheaPlayspaceActor_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentPlayset_ReturnValue = CallFunc_GetCurrentPlayset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AtheaPlayspaceActor.AtheaPlayspaceActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAtheaPlayspaceActor_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("AtheaPlayspaceActor_C", "ReceiveBeginPlay");

	Params::AAtheaPlayspaceActor_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AtheaPlayspaceActor.AtheaPlayspaceActor_C.ExecuteUbergraph_AtheaPlayspaceActor
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAtheaPlayspaceActor_C::ExecuteUbergraph_AtheaPlayspaceActor(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AtheaPlayspaceActor_C", "ExecuteUbergraph_AtheaPlayspaceActor");

	Params::AAtheaPlayspaceActor_C_ExecuteUbergraph_AtheaPlayspaceActor_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
