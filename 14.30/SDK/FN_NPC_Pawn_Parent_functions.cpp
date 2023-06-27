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

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckIsInSafeZone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TestSucceeded                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           isInSafeZone                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_CheckIsInSafeZone(bool* TestSucceeded, bool* isInSafeZone)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckIsInSafeZone");

	ANPC_Pawn_Parent_C_NPC_CheckIsInSafeZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestSucceeded != nullptr)
		*TestSucceeded = params.TestSucceeded;
	if (isInSafeZone != nullptr)
		*isInSafeZone = params.isInSafeZone;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HandleAlertLevelVoice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPC_HandleAlertLevelVoice()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HandleAlertLevelVoice");

	ANPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TryToDropLootOnDeath
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           CanDropLoot                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_TryToDropLootOnDeath(const struct FGameplayTagContainer& DamageTags, bool* CanDropLoot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TryToDropLootOnDeath");

	ANPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath_Params params;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDropLoot != nullptr)
		*CanDropLoot = params.CanDropLoot;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyGameplayEffectWithMMRScaling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayEffect*         GE_Class                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_ApplyGameplayEffectWithMMRScaling(class AActor* Actor, class UGameplayEffect* GE_Class)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyGameplayEffectWithMMRScaling");

	ANPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling_Params params;
	params.Actor = Actor;
	params.GE_Class = GE_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLootCollectionPhaseCompleteToBlackboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LootCollectionPhaseComplete    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_SetLootCollectionPhaseCompleteToBlackboard(bool LootCollectionPhaseComplete)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLootCollectionPhaseCompleteToBlackboard");

	ANPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard_Params params;
	params.LootCollectionPhaseComplete = LootCollectionPhaseComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalRotationRate
// (Public, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPC_ResetOriginalRotationRate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalRotationRate");

	ANPC_Pawn_Parent_C_NPC_ResetOriginalRotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalGravityScale
// (Public, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPC_ResetOriginalGravityScale()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalGravityScale");

	ANPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetReturnGatheredLootToBlackboard
// (Public, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPC_SetReturnGatheredLootToBlackboard()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetReturnGatheredLootToBlackboard");

	ANPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetScalableFloatHotfixValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat          ScalableFloatHotfix            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          AtLevel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AsBool                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AsIntRounded                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AsFloat                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_GetScalableFloatHotfixValue(const struct FScalableFloat& ScalableFloatHotfix, float AtLevel, bool* AsBool, int* AsIntRounded, float* AsFloat)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetScalableFloatHotfixValue");

	ANPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue_Params params;
	params.ScalableFloatHotfix = ScalableFloatHotfix;
	params.AtLevel = AtLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBool != nullptr)
		*AsBool = params.AsBool;
	if (AsIntRounded != nullptr)
		*AsIntRounded = params.AsIntRounded;
	if (AsFloat != nullptr)
		*AsFloat = params.AsFloat;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ScalableFloatIsValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat          ScalableFloat                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_ScalableFloatIsValid(const struct FScalableFloat& ScalableFloat, bool* Valid)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ScalableFloatIsValid");

	ANPC_Pawn_Parent_C_NPC_ScalableFloatIsValid_Params params;
	params.ScalableFloat = ScalableFloat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupDropped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*             FortPickupDropped              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_PickupDropped(class AFortPickup* FortPickupDropped)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupDropped");

	ANPC_Pawn_Parent_C_NPC_PickupDropped_Params params;
	params.FortPickupDropped = FortPickupDropped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*             FortPickupGrabbed              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_PickupGrabbed(class AFortPickup* FortPickupGrabbed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed");

	ANPC_Pawn_Parent_C_NPC_PickupGrabbed_Params params;
	params.FortPickupGrabbed = FortPickupGrabbed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory
// (BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::OnRep_NPC_BestLootRarityInInventory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory");

	ANPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPC_SendGameplayCuePickupGrabbed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed");

	ANPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           OnlyWhenDebug                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_PawnDebugMessage(const struct FString& String, bool OnlyWhenDebug)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage");

	ANPC_Pawn_Parent_C_NPC_PawnDebugMessage_Params params;
	params.String = String;
	params.OnlyWhenDebug = OnlyWhenDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetInventoryInformation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasItemInInventory             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TotalNumberOfInventoryItems    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            LastInventoryItemIndex         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasEnoughItemsToDeliver        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ConsumedEnoughItemsToBeConsideredFull (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_GetInventoryInformation(bool* HasItemInInventory, int* TotalNumberOfInventoryItems, int* LastInventoryItemIndex, bool* HasEnoughItemsToDeliver, bool* ConsumedEnoughItemsToBeConsideredFull)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetInventoryInformation");

	ANPC_Pawn_Parent_C_NPC_GetInventoryInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasItemInInventory != nullptr)
		*HasItemInInventory = params.HasItemInInventory;
	if (TotalNumberOfInventoryItems != nullptr)
		*TotalNumberOfInventoryItems = params.TotalNumberOfInventoryItems;
	if (LastInventoryItemIndex != nullptr)
		*LastInventoryItemIndex = params.LastInventoryItemIndex;
	if (HasEnoughItemsToDeliver != nullptr)
		*HasEnoughItemsToDeliver = params.HasEnoughItemsToDeliver;
	if (ConsumedEnoughItemsToBeConsideredFull != nullptr)
		*ConsumedEnoughItemsToBeConsideredFull = params.ConsumedEnoughItemsToBeConsideredFull;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortRarity                    NPC_BestLootRarityInInventory  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_SetBestLootRarityInInventory(EFortRarity* NPC_BestLootRarityInInventory)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory");

	ANPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NPC_BestLootRarityInInventory != nullptr)
		*NPC_BestLootRarityInInventory = params.NPC_BestLootRarityInInventory;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::OnRep_NPC_AlertLevel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel");

	ANPC_Pawn_Parent_C_OnRep_NPC_AlertLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Enum_NPC_AlertLevel> AlertLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            AlertLevelTag                  (Parm, OutParm)
// bool                           ValidDataFound                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_GetAlertLevelInfo(TEnumAsByte<Enum_NPC_AlertLevel>* AlertLevel, struct FGameplayTag* AlertLevelTag, bool* ValidDataFound)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo");

	ANPC_Pawn_Parent_C_NPC_GetAlertLevelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AlertLevel != nullptr)
		*AlertLevel = params.AlertLevel;
	if (AlertLevelTag != nullptr)
		*AlertLevelTag = params.AlertLevelTag;
	if (ValidDataFound != nullptr)
		*ValidDataFound = params.ValidDataFound;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayEffect*         RecentlyDamagedOverride        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_ApplyRecentlyDamagedTag(class UGameplayEffect* RecentlyDamagedOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTag");

	ANPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTag_Params params;
	params.RecentlyDamagedOverride = RecentlyDamagedOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANPC_Pawn_Parent_C::ShouldUpdateSkeletalMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh");

	ANPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ANPC_Pawn_Parent_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer");

	ANPC_Pawn_Parent_C_OnDamageServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ANPC_Pawn_Parent_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamagePlayEffects");

	ANPC_Pawn_Parent_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_Pawn_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay");

	ANPC_Pawn_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems
// (BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::GrantStartingItems()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems");

	ANPC_Pawn_Parent_C_GrantStartingItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay");

	ANPC_Pawn_Parent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::WidgetVisibilityChanged(bool bVisible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged");

	ANPC_Pawn_Parent_C_WidgetVisibilityChanged_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPC_ParentLaunchVehicle(class AActor* Vehicle, const struct FVector& Velocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle");

	ANPC_Pawn_Parent_C_NPC_ParentLaunchVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot
// (BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::TestLoot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot");

	ANPC_Pawn_Parent_C_TestLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ANPC_Pawn_Parent_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathPlayEffects");

	ANPC_Pawn_Parent_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetupHealthBarOnDeath
// (BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPC_SetupHealthBarOnDeath()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetupHealthBarOnDeath");

	ANPC_Pawn_Parent_C_NPC_SetupHealthBarOnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceivePossessed");

	ANPC_Pawn_Parent_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RequestUpdateNPCAlertLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_NPC_AlertLevel> NPC_AlertLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::RequestUpdateNPCAlertLevel(TEnumAsByte<Enum_NPC_AlertLevel> NPC_AlertLevel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RequestUpdateNPCAlertLevel");

	ANPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel_Params params;
	params.NPC_AlertLevel = NPC_AlertLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_NPC_AlertLevel> NPC_AlertLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::NPCAlertLevelChanged(TEnumAsByte<Enum_NPC_AlertLevel> NPC_AlertLevel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelChanged");

	ANPC_Pawn_Parent_C_NPCAlertLevelChanged_Params params;
	params.NPC_AlertLevel = NPC_AlertLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC InitializeIdleVO
// (BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPC_InitializeIdleVO()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC InitializeIdleVO");

	ANPC_Pawn_Parent_C_NPC_InitializeIdleVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerIdleVO
// (BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::TriggerIdleVO()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerIdleVO");

	ANPC_Pawn_Parent_C_TriggerIdleVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ANPC_Pawn_Parent_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathServer");

	ANPC_Pawn_Parent_C_OnDeathServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCEnableHealthBars
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPCEnableHealthBars()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCEnableHealthBars");

	ANPC_Pawn_Parent_C_NPCEnableHealthBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCDisableHealthBars
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPCDisableHealthBars()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCDisableHealthBars");

	ANPC_Pawn_Parent_C_NPCDisableHealthBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPC_Pawn_Parent_C::ExecuteUbergraph_NPC_Pawn_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent");

	ANPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
