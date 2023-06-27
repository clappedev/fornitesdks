#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "UserConstructionScript");

	Params::ABP_Growth_HouseGlow_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::PortalStage5()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "PortalStage5");

	Params::ABP_Growth_HouseGlow_C_PortalStage5_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::PortalStage6()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "PortalStage6");

	Params::ABP_Growth_HouseGlow_C_PortalStage6_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::PortalStage2()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "PortalStage2");

	Params::ABP_Growth_HouseGlow_C_PortalStage2_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::PortalStage4()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "PortalStage4");

	Params::ABP_Growth_HouseGlow_C_PortalStage4_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::PortalStage3()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "PortalStage3");

	Params::ABP_Growth_HouseGlow_C_PortalStage3_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.PortalStage1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::PortalStage1()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "PortalStage1");

	Params::ABP_Growth_HouseGlow_C_PortalStage1_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.EnablePortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::EnablePortal()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "EnablePortal");

	Params::ABP_Growth_HouseGlow_C_EnablePortal_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.EnableHouseGlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::EnableHouseGlow()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "EnableHouseGlow");

	Params::ABP_Growth_HouseGlow_C_EnableHouseGlow_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Growth_HouseGlow_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "ReceiveBeginPlay");

	Params::ABP_Growth_HouseGlow_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.On Amb Cube Zap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EmitterTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Growth_HouseGlow_C::On_Amb_Cube_Zap(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "On Amb Cube Zap");

	Params::ABP_Growth_HouseGlow_C_On_Amb_Cube_Zap_Params Parms;
	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.Location = Location;
	Parms.Velocity = Velocity;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.ActivateDiemosAmbient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Growth_HouseGlow_C::ActivateDiemosAmbient(bool Active)
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "ActivateDiemosAmbient");

	Params::ABP_Growth_HouseGlow_C_ActivateDiemosAmbient_Params Parms;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Growth_HouseGlow.BP_Growth_HouseGlow_C.ExecuteUbergraph_BP_Growth_HouseGlow
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_EventName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EmitterTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Velocity                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Growth_HouseGlow_C::ExecuteUbergraph_BP_Growth_HouseGlow(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_EventName, float K2Node_CustomEvent_EmitterTime, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Velocity, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool K2Node_CustomEvent_Active)
{
	static auto Func = Class->GetFunction("BP_Growth_HouseGlow_C", "ExecuteUbergraph_BP_Growth_HouseGlow");

	Params::ABP_Growth_HouseGlow_C_ExecuteUbergraph_BP_Growth_HouseGlow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_EmitterTime = K2Node_CustomEvent_EmitterTime;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Velocity = K2Node_CustomEvent_Velocity;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
