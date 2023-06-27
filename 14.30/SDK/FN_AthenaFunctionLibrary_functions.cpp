// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.SpawnLootFromTable
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TierGroupName                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WorldLevel                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ForcedLootTier                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OverrideMaxStackCount          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bToss                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRandomRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBlockedFromAutoPickup         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PickupInstigatorHandle         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortPickupSourceTypeFlag      SourceType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortPickupSpawnSource         Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerController*   OptionalOwnerPC                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPickupOnlyRelevantToOwner     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AFortPickup*>     ItemPickupsSpawned             (Parm, OutParm)

void UAthenaFunctionLibrary_C::STATIC_SpawnLootFromTable(const struct FName& TierGroupName, int WorldLevel, int ForcedLootTier, const struct FVector& position, const struct FVector& Direction, int OverrideMaxStackCount, bool bToss, bool bRandomRotation, bool bBlockedFromAutoPickup, int PickupInstigatorHandle, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source, class AFortPlayerController* OptionalOwnerPC, bool bPickupOnlyRelevantToOwner, class UObject* __WorldContext, TArray<class AFortPickup*>* ItemPickupsSpawned)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.SpawnLootFromTable");

	UAthenaFunctionLibrary_C_SpawnLootFromTable_Params params;
	params.TierGroupName = TierGroupName;
	params.WorldLevel = WorldLevel;
	params.ForcedLootTier = ForcedLootTier;
	params.position = position;
	params.Direction = Direction;
	params.OverrideMaxStackCount = OverrideMaxStackCount;
	params.bToss = bToss;
	params.bRandomRotation = bRandomRotation;
	params.bBlockedFromAutoPickup = bBlockedFromAutoPickup;
	params.PickupInstigatorHandle = PickupInstigatorHandle;
	params.SourceType = SourceType;
	params.Source = Source;
	params.OptionalOwnerPC = OptionalOwnerPC;
	params.bPickupOnlyRelevantToOwner = bPickupOnlyRelevantToOwner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemPickupsSpawned != nullptr)
		*ItemPickupsSpawned = params.ItemPickupsSpawned;
}


// Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.RowToBool
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat          Input                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaFunctionLibrary_C::STATIC_RowToBool(const struct FScalableFloat& Input, float Level, class UObject* __WorldContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.RowToBool");

	UAthenaFunctionLibrary_C_RowToBool_Params params;
	params.Input = Input;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.AllOnSameTeam
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorArray                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaFunctionLibrary_C::STATIC_AllOnSameTeam(class AActor* Actor, TArray<class AActor*> ActorArray, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.AllOnSameTeam");

	UAthenaFunctionLibrary_C_AllOnSameTeam_Params params;
	params.Actor = Actor;
	params.ActorArray = ActorArray;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.CreateEnvironmentalKnockbackExplosion
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ExplosionSourcePoint           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExplosionRadius                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinKnockbackAngle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpecificActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFunctionLibrary_C::STATIC_CreateEnvironmentalKnockbackExplosion(const struct FVector& ExplosionSourcePoint, float ExplosionRadius, float Intensity, float MinKnockbackAngle, bool Reverse, class AActor* SpecificActor, class UObject* __WorldContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaFunctionLibrary.AthenaFunctionLibrary_C.CreateEnvironmentalKnockbackExplosion");

	UAthenaFunctionLibrary_C_CreateEnvironmentalKnockbackExplosion_Params params;
	params.ExplosionSourcePoint = ExplosionSourcePoint;
	params.ExplosionRadius = ExplosionRadius;
	params.Intensity = Intensity;
	params.MinKnockbackAngle = MinKnockbackAngle;
	params.Reverse = Reverse;
	params.SpecificActor = SpecificActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
