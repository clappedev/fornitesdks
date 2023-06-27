#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaNewsTile.AthenaNewsTile_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTile_C::PlayIntroAnim()
{
	static auto Func = Class->GetFunction("AthenaNewsTile_C", "PlayIntroAnim");

	Params::UAthenaNewsTile_C_PlayIntroAnim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaNewsTile.AthenaNewsTile_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTile_C::SetDefaultImage()
{
	static auto Func = Class->GetFunction("AthenaNewsTile_C", "SetDefaultImage");

	Params::UAthenaNewsTile_C_SetDefaultImage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaNewsTile.AthenaNewsTile_C.ExecuteUbergraph_AthenaNewsTile
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNewsTile_C::ExecuteUbergraph_AthenaNewsTile(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaNewsTile_C", "ExecuteUbergraph_AthenaNewsTile");

	Params::UAthenaNewsTile_C_ExecuteUbergraph_AthenaNewsTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
