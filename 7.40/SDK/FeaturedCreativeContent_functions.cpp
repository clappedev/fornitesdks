#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function FeaturedCreativeContent.FeaturedCreativeContent_C.OnSetMediaURLs
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>              MediaURLs                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFeaturedCreativeContent_C::OnSetMediaURLs(TArray<class FString>& MediaURLs)
{
	static auto Func = Class->GetFunction("FeaturedCreativeContent_C", "OnSetMediaURLs");

	Params::UFeaturedCreativeContent_C_OnSetMediaURLs_Params Parms;
	Parms.MediaURLs = MediaURLs;

	UObject::ProcessEvent(Func, &Parms);
}

// Function FeaturedCreativeContent.FeaturedCreativeContent_C.ExecuteUbergraph_FeaturedCreativeContent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_MediaURLs                                           (ConstParm, ZeroConstructor, ReferenceParm)

void UFeaturedCreativeContent_C::ExecuteUbergraph_FeaturedCreativeContent(int32 EntryPoint, TArray<class FString>& K2Node_Event_MediaURLs)
{
	static auto Func = Class->GetFunction("FeaturedCreativeContent_C", "ExecuteUbergraph_FeaturedCreativeContent");

	Params::UFeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MediaURLs = K2Node_Event_MediaURLs;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
