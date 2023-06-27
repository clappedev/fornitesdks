#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AthenaFunctionLibrary.AthenaFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UAthenaFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AthenaFunctionLibrary.AthenaFunctionLibrary_C");
		
		return ptr;
	}


	void STATIC_SpawnLootFromTable(const struct FName& TierGroupName, int WorldLevel, int ForcedLootTier, const struct FVector& position, const struct FVector& Direction, int OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int PickupInstigatorHandle, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source, class AFortPlayerController* OptionalOwnerPC, bool bPickupOnlyRelevantToOwner, class UObject* __WorldContext, TArray<class AFortPickup*>* ItemPickupsSpawned);
	bool STATIC_RowToBool(const struct FScalableFloat& Input, float Level, class UObject* __WorldContext);
	void STATIC_AllOnSameTeam(class AActor* Actor, TArray<class AActor*> ActorArray, class UObject* __WorldContext, bool* Result);
	void STATIC_CreateEnvironmentalKnockbackExplosion(const struct FVector& ExplosionSourcePoint, float ExplosionRadius, float Intensity, float MinKnockbackAngle, bool Reverse, class AActor* SpecificActor, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
