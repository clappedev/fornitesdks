#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTileSpecialEvent_C::PlayIntroAnim()
{
	static auto Func = Class->GetFunction("AthenaNewsTileSpecialEvent_C", "PlayIntroAnim");

	Params::UAthenaNewsTileSpecialEvent_C_PlayIntroAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTileSpecialEvent_C::SetDefaultImage()
{
	static auto Func = Class->GetFunction("AthenaNewsTileSpecialEvent_C", "SetDefaultImage");

	Params::UAthenaNewsTileSpecialEvent_C_SetDefaultImage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaNewsTileSpecialEvent.AthenaNewsTileSpecialEvent_C.ExecuteUbergraph_AthenaNewsTileSpecialEvent
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNewsTileSpecialEvent_C::ExecuteUbergraph_AthenaNewsTileSpecialEvent(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaNewsTileSpecialEvent_C", "ExecuteUbergraph_AthenaNewsTileSpecialEvent");

	Params::UAthenaNewsTileSpecialEvent_C_ExecuteUbergraph_AthenaNewsTileSpecialEvent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
