#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x504 - 0x504)
// BlueprintGeneratedClass MinigameState_ObstacleCourse.MinigameState_ObstacleCourse_C
class AMinigameState_ObstacleCourse_C : public AMinigameState_Generic_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameState_ObstacleCourse_C");
		return Clss;
	}

	struct FGameplayTagQuery GetStartQueryForPlayer(class APlayerState* Player);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
