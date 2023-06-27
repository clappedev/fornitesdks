#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass HuskInterface.HuskInterface_C
class UHuskInterface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HuskInterface_C");
		return Clss;
	}

	void ManageBurpEffect(bool Enabled);
	void BeeCloudDespawned(class AFortProjectileBase* Cloud);
	void FSMBeginPropaneTankMelee();
	void FSMFailedToSpawnTank();
	void FSMRemovePropaneTank();
	void IgnitePropaneTank(class AFortPawn* Pawn, float RemainingFuseTime, bool JustDrop);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
