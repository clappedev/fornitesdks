#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SocialInteraction.SocialInteraction_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialInteraction_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("SocialInteraction_C", "BP_OnHovered");

	Params::USocialInteraction_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SocialInteraction.SocialInteraction_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialInteraction_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("SocialInteraction_C", "BP_OnUnhovered");

	Params::USocialInteraction_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialInteraction_C::ExecuteUbergraph_SocialInteraction(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SocialInteraction_C", "ExecuteUbergraph_SocialInteraction");

	Params::USocialInteraction_C_ExecuteUbergraph_SocialInteraction_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
