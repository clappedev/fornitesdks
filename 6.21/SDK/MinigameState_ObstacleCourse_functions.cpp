#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function MinigameState_ObstacleCourse.MinigameState_ObstacleCourse_C.GetStartQueryForPlayer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FGameplayTagQuery AMinigameState_ObstacleCourse_C::GetStartQueryForPlayer(class APlayerState* Player)
{
	static auto Func = Class->GetFunction("MinigameState_ObstacleCourse_C", "GetStartQueryForPlayer");

	Params::AMinigameState_ObstacleCourse_C_GetStartQueryForPlayer_Params Parms;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function MinigameState_ObstacleCourse.MinigameState_ObstacleCourse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameState_ObstacleCourse_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("MinigameState_ObstacleCourse_C", "UserConstructionScript");

	Params::AMinigameState_ObstacleCourse_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
