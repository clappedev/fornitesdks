#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaQuestUpdateEntry_C::StartQuestIntro()
{
	static auto Func = Class->GetFunction("AthenaQuestUpdateEntry_C", "StartQuestIntro");

	Params::UAthenaQuestUpdateEntry_C_StartQuestIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaQuestUpdateEntry_C::StartQuestOutro()
{
	static auto Func = Class->GetFunction("AthenaQuestUpdateEntry_C", "StartQuestOutro");

	Params::UAthenaQuestUpdateEntry_C_StartQuestOutro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.ExecuteUbergraph_AthenaQuestUpdateEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UAthenaQuestUpdateEntry_C::ExecuteUbergraph_AthenaQuestUpdateEntry(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static auto Func = Class->GetFunction("AthenaQuestUpdateEntry_C", "ExecuteUbergraph_AthenaQuestUpdateEntry");

	Params::UAthenaQuestUpdateEntry_C_ExecuteUbergraph_AthenaQuestUpdateEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*         UpdateWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuestUpdateEntry_C::AllQuestUpdatesFinished_0__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget)
{
	static auto Func = Class->GetFunction("AthenaQuestUpdateEntry_C", "AllQuestUpdatesFinished_0__DelegateSignature");

	Params::UAthenaQuestUpdateEntry_C_AllQuestUpdatesFinished_0__DelegateSignature_Params Parms;
	Parms.UpdateWidget = UpdateWidget;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
