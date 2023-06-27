#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x504 - 0x504)
// BlueprintGeneratedClass MinigameState_PirateShip.MinigameState_PirateShip_C
class AMinigameState_PirateShip_C : public AMinigameState_Generic_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameState_PirateShip_C");
		return Clss;
	}

	struct FGameplayTagQuery GetStartQueryForPlayer(class APlayerState* Player, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
