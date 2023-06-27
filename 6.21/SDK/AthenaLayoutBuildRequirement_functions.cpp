#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.KillOccupyingBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAthenaLayoutBuildRequirement_C::KillOccupyingBuilding(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLayoutBuildRequirement_C", "KillOccupyingBuilding");

	Params::AAthenaLayoutBuildRequirement_C_KillOccupyingBuilding_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthenaLayoutBuildRequirement_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("AthenaLayoutBuildRequirement_C", "UserConstructionScript");

	Params::AAthenaLayoutBuildRequirement_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.Event_OnLayoutSatisfied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingLayoutRequirement*  LayoutRequirement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            SatisfyingBuildingSMActor                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaLayoutBuildRequirement_C::Event_OnLayoutSatisfied(class ABuildingLayoutRequirement* LayoutRequirement, class ABuildingSMActor* SatisfyingBuildingSMActor)
{
	static auto Func = Class->GetFunction("AthenaLayoutBuildRequirement_C", "Event_OnLayoutSatisfied");

	Params::AAthenaLayoutBuildRequirement_C_Event_OnLayoutSatisfied_Params Parms;
	Parms.LayoutRequirement = LayoutRequirement;
	Parms.SatisfyingBuildingSMActor = SatisfyingBuildingSMActor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.Event_OnLayoutUnSatisfied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingLayoutRequirement*  LayoutRequirement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            SatisfyingBuildingSMActor                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaLayoutBuildRequirement_C::Event_OnLayoutUnSatisfied(class ABuildingLayoutRequirement* LayoutRequirement, class ABuildingSMActor* SatisfyingBuildingSMActor)
{
	static auto Func = Class->GetFunction("AthenaLayoutBuildRequirement_C", "Event_OnLayoutUnSatisfied");

	Params::AAthenaLayoutBuildRequirement_C_Event_OnLayoutUnSatisfied_Params Parms;
	Parms.LayoutRequirement = LayoutRequirement;
	Parms.SatisfyingBuildingSMActor = SatisfyingBuildingSMActor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAthenaLayoutBuildRequirement_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("AthenaLayoutBuildRequirement_C", "ReceiveBeginPlay");

	Params::AAthenaLayoutBuildRequirement_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_3_SimpleDynamicMulticastDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AAthenaLayoutBuildRequirement_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_3_SimpleDynamicMulticastDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaLayoutBuildRequirement_C", "BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_3_SimpleDynamicMulticastDelegate__DelegateSignature");

	Params::AAthenaLayoutBuildRequirement_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_3_SimpleDynamicMulticastDelegate__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AAthenaLayoutBuildRequirement_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaLayoutBuildRequirement_C", "BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature");

	Params::AAthenaLayoutBuildRequirement_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_OnResetMinigameComponent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortMinigameLogicComponent* MinigameComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaLayoutBuildRequirement_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_OnResetMinigameComponent__DelegateSignature(class UFortMinigameLogicComponent* MinigameComponent)
{
	static auto Func = Class->GetFunction("AthenaLayoutBuildRequirement_C", "BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_OnResetMinigameComponent__DelegateSignature");

	Params::AAthenaLayoutBuildRequirement_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_OnResetMinigameComponent__DelegateSignature_Params Parms;
	Parms.MinigameComponent = MinigameComponent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaLayoutBuildRequirement.AthenaLayoutBuildRequirement_C.ExecuteUbergraph_AthenaLayoutBuildRequirement
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingLayoutRequirement*  K2Node_CustomEvent_LayoutRequirement1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            K2Node_CustomEvent_SatisfyingBuildingSMActor1                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingLayoutRequirement*  K2Node_CustomEvent_LayoutRequirement                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            K2Node_CustomEvent_SatisfyingBuildingSMActor                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerState*            CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMinigameLogicComponent* K2Node_ComponentBoundEvent_MinigameComponent                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerState*            CallFunc_GetOwningPlayerState_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthenaLayoutBuildRequirement_C::ExecuteUbergraph_AthenaLayoutBuildRequirement(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_HasAuthority_ReturnValue, class ABuildingLayoutRequirement* K2Node_CustomEvent_LayoutRequirement1, class ABuildingSMActor* K2Node_CustomEvent_SatisfyingBuildingSMActor1, class ABuildingLayoutRequirement* K2Node_CustomEvent_LayoutRequirement, class ABuildingSMActor* K2Node_CustomEvent_SatisfyingBuildingSMActor, bool CallFunc_HasAuthority_ReturnValue1, class AFortPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UFortMinigameLogicComponent* K2Node_ComponentBoundEvent_MinigameComponent, bool CallFunc_HasAuthority_ReturnValue2, class AFortPlayerState* CallFunc_GetOwningPlayerState_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaLayoutBuildRequirement_C", "ExecuteUbergraph_AthenaLayoutBuildRequirement");

	Params::AAthenaLayoutBuildRequirement_C_ExecuteUbergraph_AthenaLayoutBuildRequirement_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_LayoutRequirement1 = K2Node_CustomEvent_LayoutRequirement1;
	Parms.K2Node_CustomEvent_SatisfyingBuildingSMActor1 = K2Node_CustomEvent_SatisfyingBuildingSMActor1;
	Parms.K2Node_CustomEvent_LayoutRequirement = K2Node_CustomEvent_LayoutRequirement;
	Parms.K2Node_CustomEvent_SatisfyingBuildingSMActor = K2Node_CustomEvent_SatisfyingBuildingSMActor;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_MinigameComponent = K2Node_ComponentBoundEvent_MinigameComponent;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue1 = CallFunc_GetOwningPlayerState_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
