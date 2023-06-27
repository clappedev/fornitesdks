#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_FriendSearchButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "BP_OnHovered");

	Params::USocialPanel_FriendSearchButton_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_FriendSearchButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "BP_OnUnhovered");

	Params::USocialPanel_FriendSearchButton_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.ExecuteUbergraph_SocialPanel_FriendSearchButton
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_FriendSearchButton_C::ExecuteUbergraph_SocialPanel_FriendSearchButton(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "ExecuteUbergraph_SocialPanel_FriendSearchButton");

	Params::USocialPanel_FriendSearchButton_C_ExecuteUbergraph_SocialPanel_FriendSearchButton_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
