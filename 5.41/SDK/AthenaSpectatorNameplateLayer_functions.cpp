#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.AddNameplate
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaSpectatorNameplateBase*NameplateWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplateLayer_C::AddNameplate(class UAthenaSpectatorNameplateBase* NameplateWidget)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplateLayer_C", "AddNameplate");

	Params::UAthenaSpectatorNameplateLayer_C_AddNameplate_Params Parms;
	Parms.NameplateWidget = NameplateWidget;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.RemoveNameplate
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaSpectatorNameplateBase*NameplateWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorNameplateLayer_C::RemoveNameplate(class UAthenaSpectatorNameplateBase* NameplateWidget)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplateLayer_C", "RemoveNameplate");

	Params::UAthenaSpectatorNameplateLayer_C_RemoveNameplate_Params Parms;
	Parms.NameplateWidget = NameplateWidget;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.ExecuteUbergraph_AthenaSpectatorNameplateLayer
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSpectatorNameplateBase*K2Node_Event_NameplateWidget1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSpectatorNameplateBase*K2Node_Event_NameplateWidget                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortActorCanvasSlot*        CallFunc_AddActorIndicator_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorNameplateLayer_C::ExecuteUbergraph_AthenaSpectatorNameplateLayer(int32 EntryPoint, class UAthenaSpectatorNameplateBase* K2Node_Event_NameplateWidget1, class UAthenaSpectatorNameplateBase* K2Node_Event_NameplateWidget, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, bool CallFunc_RemoveChild_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorNameplateLayer_C", "ExecuteUbergraph_AthenaSpectatorNameplateLayer");

	Params::UAthenaSpectatorNameplateLayer_C_ExecuteUbergraph_AthenaSpectatorNameplateLayer_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NameplateWidget1 = K2Node_Event_NameplateWidget1;
	Parms.K2Node_Event_NameplateWidget = K2Node_Event_NameplateWidget;
	Parms.CallFunc_AddActorIndicator_ReturnValue = CallFunc_AddActorIndicator_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
