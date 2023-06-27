#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TrickEntry.TrickEntry_C.SetTrick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UTrickEntry_C::SetTrick(class FText InText, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("TrickEntry_C", "SetTrick");

	Params::UTrickEntry_C_SetTrick_Params Parms;
	Parms.InText = InText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
