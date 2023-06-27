#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function CalloutEntry.CalloutEntry_C.SetCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UCalloutEntry_C::SetCallout(class FText InText, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("CalloutEntry_C", "SetCallout");

	Params::UCalloutEntry_C_SetCallout_Params Parms;
	Parms.InText = InText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
