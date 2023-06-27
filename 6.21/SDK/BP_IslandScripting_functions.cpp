#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_DisableVortexGust
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnRep_DisableVortexGust(const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_DisableVortexGust");

	Params::ABP_IslandScripting_C_OnRep_DisableVortexGust_Params Parms;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_MapIconState
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARainbowMesh_C*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IslandScripting_C::OnRep_MapIconState(const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARainbowMesh_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_MapIconState");

	Params::ABP_IslandScripting_C_OnRep_MapIconState_Params Parms;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_LevelActorsDeletedInt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IslandScripting_C::OnRep_LevelActorsDeletedInt(bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_LevelActorsDeletedInt");

	Params::ABP_IslandScripting_C_OnRep_LevelActorsDeletedInt_Params Parms;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_DeimosAmbientEffectActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_Growth_HouseGlow_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ABP_Growth_HouseGlow_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnRep_DeimosAmbientEffectActive(bool CallFunc_HasAuthority_ReturnValue, TArray<class ABP_Growth_HouseGlow_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Growth_HouseGlow_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_DeimosAmbientEffectActive");

	Params::ABP_IslandScripting_C_OnRep_DeimosAmbientEffectActive_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_UpdateMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IslandScripting_C::OnRep_UpdateMap(bool CallFunc_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_UpdateMap");

	Params::ABP_IslandScripting_C_OnRep_UpdateMap_Params Parms;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.HideAndDestroyLevelActors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IslandScripting_C::HideAndDestroyLevelActors(bool Hide)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "HideAndDestroyLevelActors");

	Params::ABP_IslandScripting_C_HideAndDestroyLevelActors_Params Parms;
	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_IsDeimosActive
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Growth_HouseGlow_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnRep_IsDeimosActive(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Growth_HouseGlow_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_IsDeimosActive");

	Params::ABP_IslandScripting_C_OnRep_IsDeimosActive_Params Parms;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_LevelActorsDeleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::OnRep_LevelActorsDeleted()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_LevelActorsDeleted");

	Params::ABP_IslandScripting_C_OnRep_LevelActorsDeleted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.ConvertDebugPosToTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_IslandScripting_C::ConvertDebugPosToTime(float InputPin, bool Temp_bool_Variable, float CallFunc_Fraction_ReturnValue, float CallFunc_Fraction_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "ConvertDebugPosToTime");

	Params::ABP_IslandScripting_C_ConvertDebugPosToTime_Params Parms;
	Parms.InputPin = InputPin;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue1 = CallFunc_Fraction_ReturnValue1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_CachedTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::OnRep_CachedTime()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_CachedTime");

	Params::ABP_IslandScripting_C_OnRep_CachedTime_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.SetupDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IslandScripting_C::SetupDebug(bool Debug)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "SetupDebug");

	Params::ABP_IslandScripting_C_SetupDebug_Params Parms;
	Parms.Debug = Debug;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_CubeletGrowthstage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::OnRep_CubeletGrowthstage()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_CubeletGrowthstage");

	Params::ABP_IslandScripting_C_OnRep_CubeletGrowthstage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_BeaconActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::OnRep_BeaconActive()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnRep_BeaconActive");

	Params::ABP_IslandScripting_C_OnRep_BeaconActive_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.SetupCrackProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::SetupCrackProgress(float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "SetupCrackProgress");

	Params::ABP_IslandScripting_C_SetupCrackProgress_Params Parms;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "UserConstructionScript");

	Params::ABP_IslandScripting_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3");

	Params::ABP_IslandScripting_C_OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3");

	Params::ABP_IslandScripting_C_OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3");

	Params::ABP_IslandScripting_C_OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_0BA288F34CE353F34065D0BC1911B4F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnEventEnded_0BA288F34CE353F34065D0BC1911B4F5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnEventEnded_0BA288F34CE353F34065D0BC1911B4F5");

	Params::ABP_IslandScripting_C_OnEventEnded_0BA288F34CE353F34065D0BC1911B4F5_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_0BA288F34CE353F34065D0BC1911B4F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnEventUpdated_0BA288F34CE353F34065D0BC1911B4F5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnEventUpdated_0BA288F34CE353F34065D0BC1911B4F5");

	Params::ABP_IslandScripting_C_OnEventUpdated_0BA288F34CE353F34065D0BC1911B4F5_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_0BA288F34CE353F34065D0BC1911B4F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnEventActive_0BA288F34CE353F34065D0BC1911B4F5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnEventActive_0BA288F34CE353F34065D0BC1911B4F5");

	Params::ABP_IslandScripting_C_OnEventActive_0BA288F34CE353F34065D0BC1911B4F5_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_C977A1164A1D496AD675BFB5790E8842
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnEventEnded_C977A1164A1D496AD675BFB5790E8842(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnEventEnded_C977A1164A1D496AD675BFB5790E8842");

	Params::ABP_IslandScripting_C_OnEventEnded_C977A1164A1D496AD675BFB5790E8842_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_C977A1164A1D496AD675BFB5790E8842
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnEventUpdated_C977A1164A1D496AD675BFB5790E8842(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnEventUpdated_C977A1164A1D496AD675BFB5790E8842");

	Params::ABP_IslandScripting_C_OnEventUpdated_C977A1164A1D496AD675BFB5790E8842_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_C977A1164A1D496AD675BFB5790E8842
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnEventActive_C977A1164A1D496AD675BFB5790E8842(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnEventActive_C977A1164A1D496AD675BFB5790E8842");

	Params::ABP_IslandScripting_C_OnEventActive_C977A1164A1D496AD675BFB5790E8842_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.OnLoaded_55D3F973490D118E6671D19F32CF8F64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::OnLoaded_55D3F973490D118E6671D19F32CF8F64(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "OnLoaded_55D3F973490D118E6671D19F32CF8F64");

	Params::ABP_IslandScripting_C_OnLoaded_55D3F973490D118E6671D19F32CF8F64_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.BindCalendarEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::BindCalendarEvents()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "BindCalendarEvents");

	Params::ABP_IslandScripting_C_BindCalendarEvents_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "ReceiveBeginPlay");

	Params::ABP_IslandScripting_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.LoadDynamicLevels
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::LoadDynamicLevels()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "LoadDynamicLevels");

	Params::ABP_IslandScripting_C_LoadDynamicLevels_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.CleanupLevelActors
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::CleanupLevelActors()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "CleanupLevelActors");

	Params::ABP_IslandScripting_C_CleanupLevelActors_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.TrySetIslandLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::TrySetIslandLocation()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "TrySetIslandLocation");

	Params::ABP_IslandScripting_C_TrySetIslandLocation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.ButterflyScriptingReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::ButterflyScriptingReady()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "ButterflyScriptingReady");

	Params::ABP_IslandScripting_C_ButterflyScriptingReady_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.ButterflyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::ButterflyStart()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "ButterflyStart");

	Params::ABP_IslandScripting_C_ButterflyStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.CubeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::CubeEvent()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "CubeEvent");

	Params::ABP_IslandScripting_C_CubeEvent_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.SetMutator
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlaylistName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_IslandScripting_C::SetMutator(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "SetMutator");

	Params::ABP_IslandScripting_C_SetMutator_Params Parms;
	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.CubecrackLeadup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::CubecrackLeadup()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "CubecrackLeadup");

	Params::ABP_IslandScripting_C_CubecrackLeadup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.TrySetMapMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::TrySetMapMarker()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "TrySetMapMarker");

	Params::ABP_IslandScripting_C_TrySetMapMarker_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.SetupMapMarker
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::SetupMapMarker()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "SetupMapMarker");

	Params::ABP_IslandScripting_C_SetupMapMarker_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.StartButterflyOnPlaylistLoaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlaylistName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_IslandScripting_C::StartButterflyOnPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "StartButterflyOnPlaylistLoaded");

	Params::ABP_IslandScripting_C_StartButterflyOnPlaylistLoaded_Params Parms;
	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.ExecuteUbergraph_BP_IslandScripting
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName7                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd7                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin7                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName6                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd6                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin6                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimespan                   Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable1                                            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalSeconds_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalMinutes_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Add_TimespanTimespan_ReturnValue                        (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_TimespanRatio_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName5                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd5                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin5                               (NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName4                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd4                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin4                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName3                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd3                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin3                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FTimespan                   Temp_struct_Variable2                                            (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable3                                            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalSeconds_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable1                                            (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Right_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Right_ReturnValue1                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName2                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd2                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin2                               (NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName1                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd1                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin1                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd                                  (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// struct FTimespan                   Temp_struct_Variable4                                            (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable5                                            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalMinutes_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Add_TimespanTimespan_ReturnValue1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTotalHours_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalSeconds_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTotalSeconds_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable2                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate10                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_TimespanRatio_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Island_Server_Only                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate11                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate13                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_CalendarMultiEventWatcher*CallFunc_WatchCalendarEvents_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRunningNoMCP_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Temp_string_Variable3                                            (ZeroConstructor, ReferenceParm)
// class FString                      K2Node_CustomEvent_EventName8                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd8                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin8                               (NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CalendarEventWatcher*CallFunc_WatchCalendarEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate14                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate15                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate16                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_CalendarEventWatcher*CallFunc_WatchCalendarEvent_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate17                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue3                        (NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Temp_string_Variable4                                            (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameMode_C*          K2Node_DynamicCast_AsAthena_Game_Mode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_PlaylistName1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags1                          (ConstParm)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             ()
// bool                               CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_GetTimeUntilCalendarEventEnd_OutTime                    (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalSeconds_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_GetTimeUntilCalendarEventEnd_OutTime1                   (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate18                           (ZeroConstructor, NoDestructor)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_PlaylistName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags                           (ConstParm)

void ABP_IslandScripting_C::ExecuteUbergraph_BP_IslandScripting(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_EventName7, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd7, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName6, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd6, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable1, float CallFunc_GetTotalSeconds_ReturnValue, float CallFunc_GetTotalMinutes_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FTimespan& CallFunc_Add_TimespanTimespan_ReturnValue, float CallFunc_TimespanRatio_ReturnValue, const class FString& Temp_string_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const class FString& K2Node_CustomEvent_EventName5, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd5, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin5, const class FString& K2Node_CustomEvent_EventName4, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd4, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const class FString& K2Node_CustomEvent_EventName3, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd3, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FTimespan& Temp_struct_Variable2, const struct FTimespan& Temp_struct_Variable3, float CallFunc_GetTotalSeconds_ReturnValue1, const class FString& Temp_string_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const class FString& CallFunc_Right_ReturnValue, const class FString& CallFunc_Right_ReturnValue1, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_Conv_IntToBool_ReturnValue, const class FString& K2Node_CustomEvent_EventName2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin2, const class FString& K2Node_CustomEvent_EventName1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FTimespan& Temp_struct_Variable4, const struct FTimespan& Temp_struct_Variable5, float CallFunc_GetTotalMinutes_ReturnValue1, const struct FTimespan& CallFunc_Add_TimespanTimespan_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetTotalHours_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue1, float CallFunc_GetTotalSeconds_ReturnValue3, const class FString& Temp_string_Variable2, bool CallFunc_Less_FloatFloat_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_TimespanRatio_ReturnValue1, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsBP_Island_Server_Only, bool K2Node_ClassDynamicCast_bSuccess, int32 Temp_int_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, bool Temp_bool_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool Temp_bool_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UFortAsyncAction_CalendarMultiEventWatcher* CallFunc_WatchCalendarEvents_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue1, bool CallFunc_IsRunningNoMCP_ReturnValue, TArray<class FString>& Temp_string_Variable3, const class FString& K2Node_CustomEvent_EventName8, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd8, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin8, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State1, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, bool CallFunc_Conv_IntToBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue1, bool CallFunc_IsValid_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue3, TArray<class FString>& Temp_string_Variable4, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAthena_GameMode_C* K2Node_DynamicCast_AsAthena_Game_Mode, bool K2Node_DynamicCast_bSuccess2, class AGameStateBase* CallFunc_GetGameState_ReturnValue2, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State2, bool K2Node_DynamicCast_bSuccess3, class FName K2Node_CustomEvent_PlaylistName1, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags1, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent, const struct FTimespan& CallFunc_GetTimeUntilCalendarEventEnd_OutTime, float CallFunc_GetTotalSeconds_ReturnValue4, bool CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent1, const struct FTimespan& CallFunc_GetTimeUntilCalendarEventEnd_OutTime1, float CallFunc_Subtract_FloatFloat_ReturnValue1, class AGameStateBase* CallFunc_GetGameState_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess4, bool K2Node_Select_Default, bool CallFunc_HasAuthority_ReturnValue2, class FName K2Node_CustomEvent_PlaylistName, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "ExecuteUbergraph_BP_IslandScripting");

	Params::ABP_IslandScripting_C_ExecuteUbergraph_BP_IslandScripting_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_EventName7 = K2Node_CustomEvent_EventName7;
	Parms.K2Node_CustomEvent_TimeUntilEnd7 = K2Node_CustomEvent_TimeUntilEnd7;
	Parms.K2Node_CustomEvent_TimeSinceBegin7 = K2Node_CustomEvent_TimeSinceBegin7;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventName6 = K2Node_CustomEvent_EventName6;
	Parms.K2Node_CustomEvent_TimeUntilEnd6 = K2Node_CustomEvent_TimeUntilEnd6;
	Parms.K2Node_CustomEvent_TimeSinceBegin6 = K2Node_CustomEvent_TimeSinceBegin6;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_GetTotalSeconds_ReturnValue = CallFunc_GetTotalSeconds_ReturnValue;
	Parms.CallFunc_GetTotalMinutes_ReturnValue = CallFunc_GetTotalMinutes_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_TimespanTimespan_ReturnValue = CallFunc_Add_TimespanTimespan_ReturnValue;
	Parms.CallFunc_TimespanRatio_ReturnValue = CallFunc_TimespanRatio_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_EventName5 = K2Node_CustomEvent_EventName5;
	Parms.K2Node_CustomEvent_TimeUntilEnd5 = K2Node_CustomEvent_TimeUntilEnd5;
	Parms.K2Node_CustomEvent_TimeSinceBegin5 = K2Node_CustomEvent_TimeSinceBegin5;
	Parms.K2Node_CustomEvent_EventName4 = K2Node_CustomEvent_EventName4;
	Parms.K2Node_CustomEvent_TimeUntilEnd4 = K2Node_CustomEvent_TimeUntilEnd4;
	Parms.K2Node_CustomEvent_TimeSinceBegin4 = K2Node_CustomEvent_TimeSinceBegin4;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_EventName3 = K2Node_CustomEvent_EventName3;
	Parms.K2Node_CustomEvent_TimeUntilEnd3 = K2Node_CustomEvent_TimeUntilEnd3;
	Parms.K2Node_CustomEvent_TimeSinceBegin3 = K2Node_CustomEvent_TimeSinceBegin3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_GetTotalSeconds_ReturnValue1 = CallFunc_GetTotalSeconds_ReturnValue1;
	Parms.Temp_string_Variable1 = Temp_string_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_Right_ReturnValue = CallFunc_Right_ReturnValue;
	Parms.CallFunc_Right_ReturnValue1 = CallFunc_Right_ReturnValue1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_CustomEvent_EventName2 = K2Node_CustomEvent_EventName2;
	Parms.K2Node_CustomEvent_TimeUntilEnd2 = K2Node_CustomEvent_TimeUntilEnd2;
	Parms.K2Node_CustomEvent_TimeSinceBegin2 = K2Node_CustomEvent_TimeSinceBegin2;
	Parms.K2Node_CustomEvent_EventName1 = K2Node_CustomEvent_EventName1;
	Parms.K2Node_CustomEvent_TimeUntilEnd1 = K2Node_CustomEvent_TimeUntilEnd1;
	Parms.K2Node_CustomEvent_TimeSinceBegin1 = K2Node_CustomEvent_TimeSinceBegin1;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_TimeUntilEnd = K2Node_CustomEvent_TimeUntilEnd;
	Parms.K2Node_CustomEvent_TimeSinceBegin = K2Node_CustomEvent_TimeSinceBegin;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.CallFunc_GetTotalMinutes_ReturnValue1 = CallFunc_GetTotalMinutes_ReturnValue1;
	Parms.CallFunc_Add_TimespanTimespan_ReturnValue1 = CallFunc_Add_TimespanTimespan_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTotalHours_ReturnValue = CallFunc_GetTotalHours_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTotalSeconds_ReturnValue2 = CallFunc_GetTotalSeconds_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue1 = CallFunc_Less_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetTotalSeconds_ReturnValue3 = CallFunc_GetTotalSeconds_ReturnValue3;
	Parms.Temp_string_Variable2 = Temp_string_Variable2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_Less_FloatFloat_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.K2Node_CreateDelegate_OutputDelegate10 = K2Node_CreateDelegate_OutputDelegate10;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_TimespanRatio_ReturnValue1 = CallFunc_TimespanRatio_ReturnValue1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsBP_Island_Server_Only = K2Node_ClassDynamicCast_AsBP_Island_Server_Only;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate11 = K2Node_CreateDelegate_OutputDelegate11;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate13 = K2Node_CreateDelegate_OutputDelegate13;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_WatchCalendarEvents_ReturnValue = CallFunc_WatchCalendarEvents_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.CallFunc_IsRunningNoMCP_ReturnValue = CallFunc_IsRunningNoMCP_ReturnValue;
	Parms.Temp_string_Variable3 = Temp_string_Variable3;
	Parms.K2Node_CustomEvent_EventName8 = K2Node_CustomEvent_EventName8;
	Parms.K2Node_CustomEvent_TimeUntilEnd8 = K2Node_CustomEvent_TimeUntilEnd8;
	Parms.K2Node_CustomEvent_TimeSinceBegin8 = K2Node_CustomEvent_TimeSinceBegin8;
	Parms.CallFunc_WatchCalendarEvent_ReturnValue = CallFunc_WatchCalendarEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetGameState_ReturnValue1 = CallFunc_GetGameState_ReturnValue1;
	Parms.K2Node_DynamicCast_AsAthena_Game_State1 = K2Node_DynamicCast_AsAthena_Game_State1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CreateDelegate_OutputDelegate14 = K2Node_CreateDelegate_OutputDelegate14;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate15 = K2Node_CreateDelegate_OutputDelegate15;
	Parms.K2Node_CreateDelegate_OutputDelegate16 = K2Node_CreateDelegate_OutputDelegate16;
	Parms.CallFunc_Conv_IntToBool_ReturnValue1 = CallFunc_Conv_IntToBool_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_WatchCalendarEvent_ReturnValue1 = CallFunc_WatchCalendarEvent_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate17 = K2Node_CreateDelegate_OutputDelegate17;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue3 = CallFunc_K2_SetTimerDelegate_ReturnValue3;
	Parms.Temp_string_Variable4 = Temp_string_Variable4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue3 = CallFunc_Less_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_Mode = K2Node_DynamicCast_AsAthena_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetGameState_ReturnValue2 = CallFunc_GetGameState_ReturnValue2;
	Parms.K2Node_DynamicCast_AsAthena_Game_State2 = K2Node_DynamicCast_AsAthena_Game_State2;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_CustomEvent_PlaylistName1 = K2Node_CustomEvent_PlaylistName1;
	Parms.K2Node_CustomEvent_PlaylistContextTags1 = K2Node_CustomEvent_PlaylistContextTags1;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent = CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent;
	Parms.CallFunc_GetTimeUntilCalendarEventEnd_OutTime = CallFunc_GetTimeUntilCalendarEventEnd_OutTime;
	Parms.CallFunc_GetTotalSeconds_ReturnValue4 = CallFunc_GetTotalSeconds_ReturnValue4;
	Parms.CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent1 = CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent1;
	Parms.CallFunc_GetTimeUntilCalendarEventEnd_OutTime1 = CallFunc_GetTimeUntilCalendarEventEnd_OutTime1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetGameState_ReturnValue3 = CallFunc_GetGameState_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate18 = K2Node_CreateDelegate_OutputDelegate18;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.K2Node_CustomEvent_PlaylistName = K2Node_CustomEvent_PlaylistName;
	Parms.K2Node_CustomEvent_PlaylistContextTags = K2Node_CustomEvent_PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.onPOISwap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::OnPOISwap__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "onPOISwap__DelegateSignature");

	Params::ABP_IslandScripting_C_OnPOISwap__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.onPOISetup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IslandScripting_C::OnPOISetup__DelegateSignature(bool NewParam)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "onPOISetup__DelegateSignature");

	Params::ABP_IslandScripting_C_OnPOISetup__DelegateSignature_Params Parms;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.DataAssetLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IslandScripting_C::DataAssetLoaded__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "DataAssetLoaded__DelegateSignature");

	Params::ABP_IslandScripting_C_DataAssetLoaded__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_IslandScripting.BP_IslandScripting_C.IslandPositionUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IslandScripting_C::IslandPositionUpdate__DelegateSignature(const struct FVector& Position)
{
	static auto Func = Class->GetFunction("BP_IslandScripting_C", "IslandPositionUpdate__DelegateSignature");

	Params::ABP_IslandScripting_C_IslandPositionUpdate__DelegateSignature_Params Parms;
	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
