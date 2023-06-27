#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpReasonFeedItem_C::SetXpText(class FText Text)
{
	static auto Func = Class->GetFunction("XpReasonFeedItem_C", "SetXpText");

	Params::UXpReasonFeedItem_C_SetXpText_Params Parms;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);
}

// Function XpReasonFeedItem.XpReasonFeedItem_C.PlayPresentEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpReasonFeedItem_C::PlayPresentEffect(float PlaybackSpeed)
{
	static auto Func = Class->GetFunction("XpReasonFeedItem_C", "PlayPresentEffect");

	Params::UXpReasonFeedItem_C_PlayPresentEffect_Params Parms;
	Parms.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
