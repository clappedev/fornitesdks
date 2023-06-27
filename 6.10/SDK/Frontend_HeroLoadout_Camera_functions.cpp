#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Frontend_HeroLoadout_Camera.Frontend_HeroLoadout_Camera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_HeroLoadout_Camera_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Frontend_HeroLoadout_Camera_C", "UserConstructionScript");

	Params::AFrontend_HeroLoadout_Camera_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Frontend_HeroLoadout_Camera.Frontend_HeroLoadout_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontend_HeroLoadout_Camera_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("Frontend_HeroLoadout_Camera_C", "OnDeactivated");

	Params::AFrontend_HeroLoadout_Camera_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Frontend_HeroLoadout_Camera.Frontend_HeroLoadout_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontend_HeroLoadout_Camera_C::OnActivated()
{
	static auto Func = Class->GetFunction("Frontend_HeroLoadout_Camera_C", "OnActivated");

	Params::AFrontend_HeroLoadout_Camera_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Frontend_HeroLoadout_Camera.Frontend_HeroLoadout_Camera_C.ExecuteUbergraph_Frontend_HeroLoadout_Camera
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_HeroLoadout_Camera_C::ExecuteUbergraph_Frontend_HeroLoadout_Camera(int32 EntryPoint, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("Frontend_HeroLoadout_Camera_C", "ExecuteUbergraph_Frontend_HeroLoadout_Camera");

	Params::AFrontend_HeroLoadout_Camera_C_ExecuteUbergraph_Frontend_HeroLoadout_Camera_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
