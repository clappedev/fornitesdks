#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class FortniteGame.AIHotSpotSlot
// 0x0098 (0x00C0 - 0x0028)
class UAIHotSpotSlot : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  LocalTransform;                                           // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Height;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5C];                                      // 0x0064(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AIHotSpotSlot");
		return ptr;
	}

};


// Class FortniteGame.AIHotSpot
// 0x0188 (0x0510 - 0x0388)
class AAIHotSpot : public AActor
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0388(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AIHotSpot");
		return ptr;
	}

};


// Class FortniteGame.AIHotSpotManagerProxy
// 0x0058 (0x0080 - 0x0028)
class UAIHotSpotManagerProxy : public UAIHotSpotManager
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AIHotSpotManagerProxy");
		return ptr;
	}

};


// Class FortniteGame.FortInventorySortFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortInventorySortFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInventorySortFunctionLibrary");
		return ptr;
	}


	void STATIC_GetCriterionDisplayNameOfSortType();
};


// Class FortniteGame.FortBrushSizeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortBrushSizeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBrushSizeFunctionLibrary");
		return ptr;
	}


	void STATIC_ShrinkBrushSize();
	void STATIC_GrowBrushSize();
};


// Class FortniteGame.FortMultiSizeBrushAsset
// 0x0360 (0x0388 - 0x0028)
class UFortMultiSizeBrushAsset : public UDataAsset
{
public:
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0028(0x0360) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMultiSizeBrushAsset");
		return ptr;
	}

};


// Class FortniteGame.BuildingActorHotSpotConfig
// 0x00F0 (0x0118 - 0x0028)
class UBuildingActorHotSpotConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingActorHotSpotConfig");
		return ptr;
	}

};


// Class FortniteGame.FortAIHotSpotManager
// 0x0140 (0x01C0 - 0x0080)
class UFortAIHotSpotManager : public UAIHotSpotManagerProxy
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0080(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIHotSpotManager");
		return ptr;
	}

};


// Class FortniteGame.FortAIHotSpot
// 0x0028 (0x0538 - 0x0510)
class AFortAIHotSpot : public AAIHotSpot
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0510(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIHotSpot");
		return ptr;
	}

};


// Class FortniteGame.FortMissionConfigData
// 0x0000 (0x0028 - 0x0028)
class UFortMissionConfigData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionConfigData");
		return ptr;
	}

};


// Class FortniteGame.FortMissionEventParams
// 0x0000 (0x0028 - 0x0028)
class UFortMissionEventParams : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionEventParams");
		return ptr;
	}

};


// Class FortniteGame.FortStartMissionParams
// 0x0000 (0x0028 - 0x0028)
class UFortStartMissionParams : public UFortMissionEventParams
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortStartMissionParams");
		return ptr;
	}

};


// Class FortniteGame.FortItemCollectedParams
// 0x0018 (0x0040 - 0x0028)
class UFortItemCollectedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemCollectedParams");
		return ptr;
	}

};


// Class FortniteGame.FortItemDroppedParams
// 0x0018 (0x0040 - 0x0028)
class UFortItemDroppedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemDroppedParams");
		return ptr;
	}

};


// Class FortniteGame.FortItemCraftedParams
// 0x0018 (0x0040 - 0x0028)
class UFortItemCraftedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemCraftedParams");
		return ptr;
	}

};


// Class FortniteGame.FortEnemyKilledParams
// 0x0010 (0x0038 - 0x0028)
class UFortEnemyKilledParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortEnemyKilledParams");
		return ptr;
	}

};


// Class FortniteGame.FortEnemyDamagedParams
// 0x0018 (0x0040 - 0x0028)
class UFortEnemyDamagedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortEnemyDamagedParams");
		return ptr;
	}

};


// Class FortniteGame.FortNewPlayerParams
// 0x0008 (0x0030 - 0x0028)
class UFortNewPlayerParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNewPlayerParams");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerAbandonParams
// 0x0018 (0x0040 - 0x0028)
class UFortPlayerAbandonParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerAbandonParams");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerExitParams
// 0x0008 (0x0030 - 0x0028)
class UFortPlayerExitParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerExitParams");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerSpawnedParams
// 0x0008 (0x0030 - 0x0028)
class UFortPlayerSpawnedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerSpawnedParams");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerDiedParams
// 0x0010 (0x0038 - 0x0028)
class UFortPlayerDiedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerDiedParams");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerDBNOEnterParams
// 0x0010 (0x0038 - 0x0028)
class UFortPlayerDBNOEnterParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerDBNOEnterParams");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerDBNORevivedParams
// 0x0010 (0x0038 - 0x0028)
class UFortPlayerDBNORevivedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerDBNORevivedParams");
		return ptr;
	}

};


// Class FortniteGame.FortDayPhaseChangeParams
// 0x0010 (0x0038 - 0x0028)
class UFortDayPhaseChangeParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDayPhaseChangeParams");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerBuiltParams
// 0x0018 (0x0040 - 0x0028)
class UFortPlayerBuiltParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerBuiltParams");
		return ptr;
	}

};


// Class FortniteGame.FortBuildingDestroyedParams
// 0x0018 (0x0040 - 0x0028)
class UFortBuildingDestroyedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBuildingDestroyedParams");
		return ptr;
	}

};


// Class FortniteGame.FortBuildingEditedParams
// 0x0020 (0x0048 - 0x0028)
class UFortBuildingEditedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBuildingEditedParams");
		return ptr;
	}

};


// Class FortniteGame.FortBuildingDamagedParams
// 0x0020 (0x0048 - 0x0028)
class UFortBuildingDamagedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBuildingDamagedParams");
		return ptr;
	}

};


// Class FortniteGame.FortMissionSucceededParams
// 0x0008 (0x0030 - 0x0028)
class UFortMissionSucceededParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionSucceededParams");
		return ptr;
	}

};


// Class FortniteGame.FortMissionFailedParams
// 0x0008 (0x0030 - 0x0028)
class UFortMissionFailedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionFailedParams");
		return ptr;
	}

};


// Class FortniteGame.FortMissionForceSuccessParams
// 0x0008 (0x0030 - 0x0028)
class UFortMissionForceSuccessParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionForceSuccessParams");
		return ptr;
	}

};


// Class FortniteGame.FortMissionNeutralCompleteParams
// 0x0008 (0x0030 - 0x0028)
class UFortMissionNeutralCompleteParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionNeutralCompleteParams");
		return ptr;
	}

};


// Class FortniteGame.FortObjectiveSucceededParams
// 0x0008 (0x0030 - 0x0028)
class UFortObjectiveSucceededParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortObjectiveSucceededParams");
		return ptr;
	}

};


// Class FortniteGame.FortObjectiveFailedParams
// 0x0008 (0x0030 - 0x0028)
class UFortObjectiveFailedParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortObjectiveFailedParams");
		return ptr;
	}

};


// Class FortniteGame.FortObjectiveNeutralCompleteParams
// 0x0008 (0x0030 - 0x0028)
class UFortObjectiveNeutralCompleteParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortObjectiveNeutralCompleteParams");
		return ptr;
	}

};


// Class FortniteGame.FortToggledCursorModeParams
// 0x0010 (0x0038 - 0x0028)
class UFortToggledCursorModeParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortToggledCursorModeParams");
		return ptr;
	}

};


// Class FortniteGame.FortToggledOptionsMenuParams
// 0x0010 (0x0038 - 0x0028)
class UFortToggledOptionsMenuParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortToggledOptionsMenuParams");
		return ptr;
	}

};


// Class FortniteGame.FortToggledEditModeParams
// 0x0018 (0x0040 - 0x0028)
class UFortToggledEditModeParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortToggledEditModeParams");
		return ptr;
	}

};


// Class FortniteGame.FortShutdownParams
// 0x0000 (0x0028 - 0x0028)
class UFortShutdownParams : public UFortMissionEventParams
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortShutdownParams");
		return ptr;
	}

};


// Class FortniteGame.FortPvPVictoryParams
// 0x0008 (0x0030 - 0x0028)
class UFortPvPVictoryParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPVictoryParams");
		return ptr;
	}

};


// Class FortniteGame.FortStartLeavingZoneParams
// 0x0008 (0x0030 - 0x0028)
class UFortStartLeavingZoneParams : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortStartLeavingZoneParams");
		return ptr;
	}

};


// Class FortniteGame.FortInteractInterface
// 0x0000 (0x0028 - 0x0028)
class UFortInteractInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInteractInterface");
		return ptr;
	}


	void ServerOnAttemptInteract();
};


// Class FortniteGame.FortAttributeSet
// 0x0000 (0x0030 - 0x0030)
class UFortAttributeSet : public UAttributeSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAttributeSet");
		return ptr;
	}

};


// Class FortniteGame.FortDamageableActorInterface
// 0x0000 (0x0028 - 0x0028)
class UFortDamageableActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDamageableActorInterface");
		return ptr;
	}

};


// Class FortniteGame.FortTeamActorInterface
// 0x0000 (0x0028 - 0x0028)
class UFortTeamActorInterface : public UGenericTeamAgentInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTeamActorInterface");
		return ptr;
	}


	void GetTeam();
};


// Class FortniteGame.FortInitializationInterface
// 0x0000 (0x0028 - 0x0028)
class UFortInitializationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInitializationInterface");
		return ptr;
	}


	void WorldReady();
	void NeedsWorldReady();
	void MatchStarted();
};


// Class FortniteGame.FortSpawnableByPlacementSystemInterface
// 0x0000 (0x0028 - 0x0028)
class UFortSpawnableByPlacementSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSpawnableByPlacementSystemInterface");
		return ptr;
	}


	void GetMissionGuid();
	void GetMission();
};


// Class FortniteGame.FortAbilitySystemInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAbilitySystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySystemInterface");
		return ptr;
	}

};


// Class FortniteGame.BuildingActor
// 0x03B8 (0x0740 - 0x0388)
class ABuildingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0388(0x0068) MISSED OFFSET
	TEnumAsByte<EFortBuildingType>                     BuildingType;                                             // 0x03F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34F];                                     // 0x03F1(0x034F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingActor");
		return ptr;
	}

};


// Class FortniteGame.FortCrackEffect
// 0x00C8 (0x0450 - 0x0388)
class AFortCrackEffect : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0388(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCrackEffect");
		return ptr;
	}

};


// Class FortniteGame.FortAttachToActorInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAttachToActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAttachToActorInterface");
		return ptr;
	}


	void GetActorAttachedTo();
};


// Class FortniteGame.BuildingSMActor
// 0x0880 (0x0FC0 - 0x0740)
class ABuildingSMActor : public ABuildingActor
{
public:
	unsigned char                                      UnknownData00[0x880];                                     // 0x0740(0x0880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingSMActor");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeSupport
// 0x0268 (0x0290 - 0x0028)
class UBuildingEditModeSupport : public UObject
{
public:
	unsigned char                                      UnknownData00[0x268];                                     // 0x0028(0x0268) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeSupport");
		return ptr;
	}

};


// Class FortniteGame.BuildingStructuralSupportSystem
// 0x0448 (0x0470 - 0x0028)
class UBuildingStructuralSupportSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x448];                                     // 0x0028(0x0448) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingStructuralSupportSystem");
		return ptr;
	}

};


// Class FortniteGame.FortAIHotSpot_Building
// 0x0088 (0x05C0 - 0x0538)
class AFortAIHotSpot_Building : public AFortAIHotSpot
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0538(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIHotSpot_Building");
		return ptr;
	}

};


// Class FortniteGame.FortAIHotSpot_FakeBuilding
// 0x0000 (0x0538 - 0x0538)
class AFortAIHotSpot_FakeBuilding : public AFortAIHotSpot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIHotSpot_FakeBuilding");
		return ptr;
	}

};


// Class FortniteGame.FortAIHotSpot_Shooting
// 0x0000 (0x0538 - 0x0538)
class AFortAIHotSpot_Shooting : public AFortAIHotSpot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIHotSpot_Shooting");
		return ptr;
	}

};


// Class FortniteGame.AIHotSpotConfig
// 0x0020 (0x0048 - 0x0028)
class UAIHotSpotConfig : public UDataAsset
{
public:
	TArray<struct FAIHotSpotSlotConfig>                Slots;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AIHotSpotConfig");
		return ptr;
	}

};


// Class FortniteGame.AIHotSpotRenderingComponent
// 0x0000 (0x0670 - 0x0670)
class UAIHotSpotRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AIHotSpotRenderingComponent");
		return ptr;
	}

};


// Class FortniteGame.FortAIHotSpotSlot
// 0x0010 (0x00D0 - 0x00C0)
class UFortAIHotSpotSlot : public UAIHotSpotSlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIHotSpotSlot");
		return ptr;
	}

};


// Class FortniteGame.AIHotSpotSlotGenerator
// 0x0000 (0x0028 - 0x0028)
class UAIHotSpotSlotGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AIHotSpotSlotGenerator");
		return ptr;
	}


	void GetHotSpot();
	void GenerateSlots();
	void AddSlot();
};


// Class FortniteGame.AIHotSpotSlotGenerator_OnBoundingBox
// 0x0048 (0x0070 - 0x0028)
class UAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AIHotSpotSlotGenerator_OnBoundingBox");
		return ptr;
	}

};


// Class FortniteGame.FortAIHotSpotSlotGenerator_OnBoundingBox
// 0x0008 (0x0078 - 0x0070)
class UFortAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator_OnBoundingBox
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIHotSpotSlotGenerator_OnBoundingBox");
		return ptr;
	}

};


// Class FortniteGame.FortAIHotSpotSlotGenerator_FromConfig
// 0x0018 (0x0040 - 0x0028)
class UFortAIHotSpotSlotGenerator_FromConfig : public UAIHotSpotSlotGenerator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIHotSpotSlotGenerator_FromConfig");
		return ptr;
	}

};


// Class FortniteGame.FortAIHotSpotSlotGenerator_RampTrace
// 0x0018 (0x0040 - 0x0028)
class UFortAIHotSpotSlotGenerator_RampTrace : public UAIHotSpotSlotGenerator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIHotSpotSlotGenerator_RampTrace");
		return ptr;
	}

};


// Class FortniteGame.AthenaGameData
// 0x0078 (0x00A0 - 0x0028)
class UAthenaGameData : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaGameData");
		return ptr;
	}

};


// Class FortniteGame.AutomationPerfMonitorManager
// 0x0088 (0x00B0 - 0x0028)
class UAutomationPerfMonitorManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AutomationPerfMonitorManager");
		return ptr;
	}

};


// Class FortniteGame.FortAbilitySet
// 0x0028 (0x0050 - 0x0028)
class UFortAbilitySet : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class UClass*>                              GameplayAbilities;                                        // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySet");
		return ptr;
	}

};


// Class FortniteGame.FortDamageSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UFortDamageSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDamageSourceInterface");
		return ptr;
	}

};


// Class FortniteGame.FortTargetSelectionInterface
// 0x0000 (0x0028 - 0x0028)
class UFortTargetSelectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTargetSelectionInterface");
		return ptr;
	}


	void GetTargetingTransform(EFortAbilityTargetingSource Source);
};


// Class FortniteGame.BuildingGameplayActor
// 0x0100 (0x0840 - 0x0740)
class ABuildingGameplayActor : public ABuildingActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0740(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingGameplayActor");
		return ptr;
	}

};


// Class FortniteGame.BuildingCapturePointActor
// 0x00A0 (0x08E0 - 0x0840)
class ABuildingCapturePointActor : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0840(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingCapturePointActor");
		return ptr;
	}

};


// Class FortniteGame.FortCarriedObjectHolderInterface
// 0x0000 (0x0028 - 0x0028)
class UFortCarriedObjectHolderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCarriedObjectHolderInterface");
		return ptr;
	}


	void OnCarriedObjectDetach();
	void OnCarriedObjectAttach();
	void GetCarriedObjectAttachmentInfo();
	void GetAttachmentComponent();
	void CanHoldObject();
};


// Class FortniteGame.BuildingFlagSpawn
// 0x0060 (0x08A0 - 0x0840)
class ABuildingFlagSpawn : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0840(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingFlagSpawn");
		return ptr;
	}

};


// Class FortniteGame.FortItemTypeFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortItemTypeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemTypeFunctionLibrary");
		return ptr;
	}


	void STATIC_ToText(EFortItemType ItemType);
};


// Class FortniteGame.FortGenericRecord
// 0x00A8 (0x00D0 - 0x0028)
class UFortGenericRecord : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGenericRecord");
		return ptr;
	}

};


// Class FortniteGame.FortTooltipInterface
// 0x0000 (0x0028 - 0x0028)
class UFortTooltipInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTooltipInterface");
		return ptr;
	}


	void GetTooltip();
	void GetDisplayStats();
};


// Class FortniteGame.FortTooltipContext
// 0x0040 (0x0068 - 0x0028)
class UFortTooltipContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTooltipContext");
		return ptr;
	}

};


// Class FortniteGame.FortTooltipMap
// 0x0060 (0x0088 - 0x0028)
class UFortTooltipMap : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTooltipMap");
		return ptr;
	}

};


// Class FortniteGame.FortTooltipManager
// 0x0058 (0x0080 - 0x0028)
class UFortTooltipManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTooltipManager");
		return ptr;
	}

};


// Class FortniteGame.FortTooltip
// 0x0068 (0x0090 - 0x0028)
class UFortTooltip : public UObject
{
public:
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTooltip");
		return ptr;
	}


	void SetLocalizationText(const struct FString& Name);
	void SetLocalizationInt(const struct FString& Name);
	void SetLocalizationFloat(const struct FString& Name);
	void GetValueData();
	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
	void BP_GetValueData();
	void BP_GetTokenizedDescriptionText();
	void BP_GetTextForToken();
	void BP_GetNumericValue();
};


// Class FortniteGame.FortTooltipDisplayStatsList
// 0x0010 (0x0038 - 0x0028)
class UFortTooltipDisplayStatsList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTooltipDisplayStatsList");
		return ptr;
	}

};


// Class FortniteGame.FortTooltipDisplayStatsLookupTable
// 0x0060 (0x0088 - 0x0028)
class UFortTooltipDisplayStatsLookupTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTooltipDisplayStatsLookupTable");
		return ptr;
	}

};


// Class FortniteGame.FortItemDefinition
// 0x0218 (0x0240 - 0x0028)
class UFortItemDefinition : public UMcpItemDefinitionBase
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x0028(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortItemIconDefinition
// 0x0120 (0x0148 - 0x0028)
class UFortItemIconDefinition : public UDataAsset
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0028(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x90];                                      // 0x00B8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemIconDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortItem
// 0x00A8 (0x00D0 - 0x0028)
class UFortItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnItemChanged;                                            // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0040(0x0070) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnItemDestroyed;                                          // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItem");
		return ptr;
	}

};


// Class FortniteGame.FortPickupEffect
// 0x0040 (0x03C8 - 0x0388)
class AFortPickupEffect : public AActor
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0398(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPickupEffect");
		return ptr;
	}

};


// Class FortniteGame.FortWorldItemDefinition
// 0x0200 (0x0440 - 0x0240)
class UFortWorldItemDefinition : public UFortItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0240(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorldItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortQuickBars
// 0x0328 (0x06B0 - 0x0388)
class AFortQuickBars : public AActor
{
public:
	unsigned char                                      UnknownData00[0x328];                                     // 0x0388(0x0328) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuickBars");
		return ptr;
	}

};


// Class FortniteGame.FortMetadataItemDefinition
// 0x0000 (0x0240 - 0x0240)
class UFortMetadataItemDefinition : public UFortItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMetadataItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortCloudSaveItemDefinition
// 0x0010 (0x0250 - 0x0240)
class UFortCloudSaveItemDefinition : public UFortMetadataItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCloudSaveItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortWorldRecord
// 0x0148 (0x0218 - 0x00D0)
class UFortWorldRecord : public UFortGenericRecord
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x00D0(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorldRecord");
		return ptr;
	}

};


// Class FortniteGame.FortZoneRecord
// 0x01D0 (0x02A0 - 0x00D0)
class UFortZoneRecord : public UFortGenericRecord
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x00D0(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortZoneRecord");
		return ptr;
	}

};


// Class FortniteGame.FortBuildingInstructions
// 0x00B0 (0x00D8 - 0x0028)
class UFortBuildingInstructions : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBuildingInstructions");
		return ptr;
	}

};


// Class FortniteGame.BuildingFOBCoreSpawnPad
// 0x0000 (0x0840 - 0x0840)
class ABuildingFOBCoreSpawnPad : public ABuildingGameplayActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingFOBCoreSpawnPad");
		return ptr;
	}


	void GetCoreSpawnTransform();
};


// Class FortniteGame.BuildingFOBConfigActor
// 0x02F0 (0x0B30 - 0x0840)
class ABuildingFOBConfigActor : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0x2F0];                                     // 0x0840(0x02F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingFOBConfigActor");
		return ptr;
	}

};


// Class FortniteGame.BuildingFOBCoreActor
// 0x0110 (0x0950 - 0x0840)
class ABuildingFOBCoreActor : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0840(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingFOBCoreActor");
		return ptr;
	}

};


// Class FortniteGame.BuildingItemCollectorActor
// 0x00C0 (0x0900 - 0x0840)
class ABuildingItemCollectorActor : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0840(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingItemCollectorActor");
		return ptr;
	}

};


// Class FortniteGame.DecoyActor
// 0x0010 (0x0850 - 0x0840)
class ADecoyActor : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0840(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.DecoyActor");
		return ptr;
	}

};


// Class FortniteGame.DeployableBaseCore
// 0x0050 (0x0890 - 0x0840)
class ADeployableBaseCore : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0840(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.DeployableBaseCore");
		return ptr;
	}

};


// Class FortniteGame.FortInventoryOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UFortInventoryOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInventoryOwnerInterface");
		return ptr;
	}

};


// Class FortniteGame.FortInventoryInterface
// 0x0000 (0x0028 - 0x0028)
class UFortInventoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInventoryInterface");
		return ptr;
	}

};


// Class FortniteGame.FortInventory
// 0x01D8 (0x0560 - 0x0388)
class AFortInventory : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0388(0x01D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInventory");
		return ptr;
	}

};


// Class FortniteGame.DeployableBasePlot
// 0x02C0 (0x0B00 - 0x0840)
class ADeployableBasePlot : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0x2C0];                                     // 0x0840(0x02C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.DeployableBasePlot");
		return ptr;
	}

};


// Class FortniteGame.FortAthenaSupplyDrop
// 0x0010 (0x0850 - 0x0840)
class AFortAthenaSupplyDrop : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0840(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAthenaSupplyDrop");
		return ptr;
	}

};


// Class FortniteGame.SBAGrantedBuildingGameplayActor
// 0x0010 (0x0850 - 0x0840)
class ASBAGrantedBuildingGameplayActor : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0840(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.SBAGrantedBuildingGameplayActor");
		return ptr;
	}

};


// Class FortniteGame.FortIndicator
// 0x0028 (0x0050 - 0x0028)
class UFortIndicator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortMiniMapIndicator
// 0x02D0 (0x0320 - 0x0050)
class UFortMiniMapIndicator : public UFortIndicator
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0050(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMiniMapIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility
// 0x04B0 (0x0A40 - 0x0590)
class UFortGameplayAbility : public UGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x4B0];                                     // 0x0590(0x04B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility");
		return ptr;
	}

};


// Class FortniteGame.StrategicBuildingActor
// 0x0140 (0x0980 - 0x0840)
class AStrategicBuildingActor : public ABuildingGameplayActor
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0840(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.StrategicBuildingActor");
		return ptr;
	}

};


// Class FortniteGame.FortPvPBaseCornerstone
// 0x0030 (0x09B0 - 0x0980)
class AFortPvPBaseCornerstone : public AStrategicBuildingActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0980(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPBaseCornerstone");
		return ptr;
	}

};


// Class FortniteGame.BuildingRift
// 0x00A0 (0x07E0 - 0x0740)
class ABuildingRift : public ABuildingActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0740(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingRift");
		return ptr;
	}

};


// Class FortniteGame.FortTakerRift
// 0x0020 (0x0800 - 0x07E0)
class AFortTakerRift : public ABuildingRift
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTakerRift");
		return ptr;
	}

};


// Class FortniteGame.BuildingAutoNav
// 0x0010 (0x0FD0 - 0x0FC0)
class ABuildingAutoNav : public ABuildingSMActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0FC0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingAutoNav");
		return ptr;
	}

};


// Class FortniteGame.BuildingContainer
// 0x0100 (0x10D0 - 0x0FD0)
class ABuildingContainer : public ABuildingAutoNav
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0FD0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingContainer");
		return ptr;
	}

};


// Class FortniteGame.KeepItemContainer
// 0x0070 (0x1140 - 0x10D0)
class AKeepItemContainer : public ABuildingContainer
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x10D0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.KeepItemContainer");
		return ptr;
	}

};


// Class FortniteGame.KeepItemCoreContainer
// 0x0000 (0x1140 - 0x1140)
class AKeepItemCoreContainer : public AKeepItemContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.KeepItemCoreContainer");
		return ptr;
	}

};


// Class FortniteGame.BuildingCorner
// 0x0010 (0x0FE0 - 0x0FD0)
class ABuildingCorner : public ABuildingAutoNav
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0FD0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingCorner");
		return ptr;
	}

};


// Class FortniteGame.BuildingPropCorner
// 0x0000 (0x0FE0 - 0x0FE0)
class ABuildingPropCorner : public ABuildingCorner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingPropCorner");
		return ptr;
	}

};


// Class FortniteGame.BuildingDeco
// 0x0000 (0x0FD0 - 0x0FD0)
class ABuildingDeco : public ABuildingAutoNav
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingDeco");
		return ptr;
	}

};


// Class FortniteGame.BuildingPillar
// 0x0000 (0x0FD0 - 0x0FD0)
class ABuildingPillar : public ABuildingAutoNav
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingPillar");
		return ptr;
	}

};


// Class FortniteGame.BuildingProp
// 0x0000 (0x0FD0 - 0x0FD0)
class ABuildingProp : public ABuildingAutoNav
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingProp");
		return ptr;
	}

};


// Class FortniteGame.BuildingPropAtlas
// 0x0140 (0x1110 - 0x0FD0)
class ABuildingPropAtlas : public ABuildingProp
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0FD0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingPropAtlas");
		return ptr;
	}

};


// Class FortniteGame.BuildingPropWall
// 0x0010 (0x0FE0 - 0x0FD0)
class ABuildingPropWall : public ABuildingProp
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0FD0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingPropWall");
		return ptr;
	}

};


// Class FortniteGame.FortAccountItemDefinition
// 0x0060 (0x02A0 - 0x0240)
class UFortAccountItemDefinition : public UFortItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0240(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAccountItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortAlterationItemDefinition
// 0x0940 (0x0BE0 - 0x02A0)
class UFortAlterationItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x940];                                     // 0x02A0(0x0940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAlterationItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortAlterationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortAlterationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAlterationFunctionLibrary");
		return ptr;
	}


	void STATIC_GetAlterationImpactPhysicalSurfaceEffects();
};


// Class FortniteGame.FortWeaponItemDefinition
// 0x0210 (0x0650 - 0x0440)
class UFortWeaponItemDefinition : public UFortWorldItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0440(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortConstructorBASE
// 0x0390 (0x1360 - 0x0FD0)
class AFortConstructorBASE : public ABuildingProp
{
public:
	unsigned char                                      UnknownData00[0x390];                                     // 0x0FD0(0x0390) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConstructorBASE");
		return ptr;
	}

};


// Class FortniteGame.FortOutpostBuilding
// 0x0000 (0x0FD0 - 0x0FD0)
class AFortOutpostBuilding : public ABuildingProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOutpostBuilding");
		return ptr;
	}

};


// Class FortniteGame.FortTrack
// 0x0190 (0x1160 - 0x0FD0)
class AFortTrack : public ABuildingProp
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0FD0(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTrack");
		return ptr;
	}

};


// Class FortniteGame.OutpostStructureBase
// 0x0000 (0x0FD0 - 0x0FD0)
class AOutpostStructureBase : public ABuildingProp
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.OutpostStructureBase");
		return ptr;
	}

};


// Class FortniteGame.BuildingOutpostCraftingTable
// 0x0000 (0x0FD0 - 0x0FD0)
class ABuildingOutpostCraftingTable : public AOutpostStructureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingOutpostCraftingTable");
		return ptr;
	}

};


// Class FortniteGame.BuildingOutpostFabricator
// 0x0000 (0x0FD0 - 0x0FD0)
class ABuildingOutpostFabricator : public AOutpostStructureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingOutpostFabricator");
		return ptr;
	}

};


// Class FortniteGame.BuildingOutpostStorageVault
// 0x0000 (0x0FD0 - 0x0FD0)
class ABuildingOutpostStorageVault : public AOutpostStructureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingOutpostStorageVault");
		return ptr;
	}

};


// Class FortniteGame.BuildingOutpostStormshieldUpgrade
// 0x0000 (0x0FD0 - 0x0FD0)
class ABuildingOutpostStormshieldUpgrade : public AOutpostStructureBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingOutpostStormshieldUpgrade");
		return ptr;
	}

};


// Class FortniteGame.BuildingOutpostStormshieldCore
// 0x0000 (0x0FD0 - 0x0FD0)
class ABuildingOutpostStormshieldCore : public ABuildingOutpostStormshieldUpgrade
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingOutpostStormshieldCore");
		return ptr;
	}

};


// Class FortniteGame.BuildingFloor
// 0x0010 (0x0FD0 - 0x0FC0)
class ABuildingFloor : public ABuildingSMActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0FC0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingFloor");
		return ptr;
	}

};


// Class FortniteGame.BuildingStairs
// 0x0000 (0x0FD0 - 0x0FD0)
class ABuildingStairs : public ABuildingFloor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingStairs");
		return ptr;
	}

};


// Class FortniteGame.FortGlobals
// 0x0228 (0x0250 - 0x0028)
class UFortGlobals : public UObject
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x0028(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGlobals");
		return ptr;
	}

};


// Class FortniteGame.ThreatCloud
// 0x01C8 (0x0550 - 0x0388)
class AThreatCloud : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0388(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.ThreatCloud");
		return ptr;
	}

};


// Class FortniteGame.FortThreatVisualsManager
// 0x0200 (0x0588 - 0x0388)
class AFortThreatVisualsManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0388(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortThreatVisualsManager");
		return ptr;
	}

};


// Class FortniteGame.FortTimeOfDayManager
// 0x0868 (0x0BF0 - 0x0388)
class AFortTimeOfDayManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x868];                                     // 0x0388(0x0868) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTimeOfDayManager");
		return ptr;
	}

};


// Class FortniteGame.FortMusicManager
// 0x0048 (0x03D0 - 0x0388)
class AFortMusicManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0388(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMusicManager");
		return ptr;
	}

};


// Class FortniteGame.FortWorldSettings
// 0x0248 (0x0778 - 0x0530)
class AFortWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0530(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorldSettings");
		return ptr;
	}

};


// Class FortniteGame.BuildingFoundation
// 0x00C0 (0x1080 - 0x0FC0)
class ABuildingFoundation : public ABuildingSMActor
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0FC0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingFoundation");
		return ptr;
	}

};


// Class FortniteGame.BuildingFoundation3x3
// 0x0000 (0x1080 - 0x1080)
class ABuildingFoundation3x3 : public ABuildingFoundation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingFoundation3x3");
		return ptr;
	}

};


// Class FortniteGame.BuildingFoundation5x10
// 0x0000 (0x1080 - 0x1080)
class ABuildingFoundation5x10 : public ABuildingFoundation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingFoundation5x10");
		return ptr;
	}

};


// Class FortniteGame.BuildingFoundation5x5
// 0x0000 (0x1080 - 0x1080)
class ABuildingFoundation5x5 : public ABuildingFoundation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingFoundation5x5");
		return ptr;
	}

};


// Class FortniteGame.WorldTileFoundation
// 0x0020 (0x10A0 - 0x1080)
class AWorldTileFoundation : public ABuildingFoundation
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x1080(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.WorldTileFoundation");
		return ptr;
	}

};


// Class FortniteGame.BuildingPlayerPrimitivePreview
// 0x0000 (0x0FC0 - 0x0FC0)
class ABuildingPlayerPrimitivePreview : public ABuildingSMActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingPlayerPrimitivePreview");
		return ptr;
	}

};


// Class FortniteGame.BuildingLayoutRequirement
// 0x0060 (0x1020 - 0x0FC0)
class ABuildingLayoutRequirement : public ABuildingPlayerPrimitivePreview
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0FC0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingLayoutRequirement");
		return ptr;
	}

};


// Class FortniteGame.BuildingRoof
// 0x0010 (0x0FD0 - 0x0FC0)
class ABuildingRoof : public ABuildingSMActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0FC0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingRoof");
		return ptr;
	}

};


// Class FortniteGame.BuildingTrap
// 0x0120 (0x10E0 - 0x0FC0)
class ABuildingTrap : public ABuildingSMActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0FC0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingTrap");
		return ptr;
	}

};


// Class FortniteGame.BuildingTrapCeiling
// 0x0000 (0x10E0 - 0x10E0)
class ABuildingTrapCeiling : public ABuildingTrap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingTrapCeiling");
		return ptr;
	}

};


// Class FortniteGame.BuildingTrapCeiling_Falling
// 0x0010 (0x10F0 - 0x10E0)
class ABuildingTrapCeiling_Falling : public ABuildingTrapCeiling
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x10E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingTrapCeiling_Falling");
		return ptr;
	}

};


// Class FortniteGame.BuildingTrapFloor
// 0x0000 (0x10E0 - 0x10E0)
class ABuildingTrapFloor : public ABuildingTrap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingTrapFloor");
		return ptr;
	}

};


// Class FortniteGame.BuildingTrapDefender
// 0x0050 (0x1130 - 0x10E0)
class ABuildingTrapDefender : public ABuildingTrapFloor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x10E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingTrapDefender");
		return ptr;
	}

};


// Class FortniteGame.FortLauncherAthena
// 0x0040 (0x1120 - 0x10E0)
class AFortLauncherAthena : public ABuildingTrapFloor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x10E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLauncherAthena");
		return ptr;
	}

};


// Class FortniteGame.BuildingTrapWall
// 0x0000 (0x10E0 - 0x10E0)
class ABuildingTrapWall : public ABuildingTrap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingTrapWall");
		return ptr;
	}

};


// Class FortniteGame.BuildingWall
// 0x0100 (0x10C0 - 0x0FC0)
class ABuildingWall : public ABuildingSMActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0FC0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingWall");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerSpawnPad
// 0x0020 (0x0FE0 - 0x0FC0)
class AFortPlayerSpawnPad : public ABuildingSMActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0FC0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerSpawnPad");
		return ptr;
	}

};


// Class FortniteGame.KeepHeartBase
// 0x00B0 (0x1070 - 0x0FC0)
class AKeepHeartBase : public ABuildingSMActor
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0FC0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.KeepHeartBase");
		return ptr;
	}

};


// Class FortniteGame.KeepHeart
// 0x0020 (0x1090 - 0x1070)
class AKeepHeart : public AKeepHeartBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x1070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.KeepHeart");
		return ptr;
	}

};


// Class FortniteGame.ManorHeart
// 0x0030 (0x10A0 - 0x1070)
class AManorHeart : public AKeepHeartBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x1070(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.ManorHeart");
		return ptr;
	}

};


// Class FortniteGame.FortDynamicBuilder
// 0x0110 (0x0850 - 0x0740)
class AFortDynamicBuilder : public ABuildingActor
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0740(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDynamicBuilder");
		return ptr;
	}

};


// Class FortniteGame.FortClientDynamicBuilder
// 0x0000 (0x0850 - 0x0850)
class AFortClientDynamicBuilder : public AFortDynamicBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientDynamicBuilder");
		return ptr;
	}

};


// Class FortniteGame.FortEnemySpawn
// 0x0000 (0x0740 - 0x0740)
class AFortEnemySpawn : public ABuildingActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortEnemySpawn");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayTagVolumeInterface
// 0x0000 (0x0028 - 0x0028)
class UFortGameplayTagVolumeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayTagVolumeInterface");
		return ptr;
	}


	void ApplyTags();
};


// Class FortniteGame.FortGameplayTagBuildingActor
// 0x0040 (0x0780 - 0x0740)
class AFortGameplayTagBuildingActor : public ABuildingActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0740(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayTagBuildingActor");
		return ptr;
	}

};


// Class FortniteGame.FortPlacementActor
// 0x0000 (0x0740 - 0x0740)
class AFortPlacementActor : public ABuildingActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlacementActor");
		return ptr;
	}

};


// Class FortniteGame.BuildingActorEditorComponent
// 0x0040 (0x0820 - 0x07E0)
class UBuildingActorEditorComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x07E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingActorEditorComponent");
		return ptr;
	}

};


// Class FortniteGame.BuildingActorHotSpotRenderingComponent
// 0x0000 (0x0670 - 0x0670)
class UBuildingActorHotSpotRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingActorHotSpotRenderingComponent");
		return ptr;
	}

};


// Class FortniteGame.BuildingConnectivityComponent
// 0x00E0 (0x0370 - 0x0290)
class UBuildingConnectivityComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0290(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingConnectivityComponent");
		return ptr;
	}

};


// Class FortniteGame.BuildingConnectivityEffect
// 0x0038 (0x03C0 - 0x0388)
class ABuildingConnectivityEffect : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0388(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingConnectivityEffect");
		return ptr;
	}

};


// Class FortniteGame.BuildingConnectivityManager
// 0x0010 (0x0398 - 0x0388)
class ABuildingConnectivityManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingConnectivityManager");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeMetadata
// 0x00F0 (0x0118 - 0x0028)
class UBuildingEditModeMetadata : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeMetadata");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeMetadata_BinaryToggle
// 0x0010 (0x0128 - 0x0118)
class UBuildingEditModeMetadata_BinaryToggle : public UBuildingEditModeMetadata
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeMetadata_BinaryToggle");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeMetadata_Floor
// 0x0000 (0x0128 - 0x0128)
class UBuildingEditModeMetadata_Floor : public UBuildingEditModeMetadata_BinaryToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeMetadata_Floor");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeMetadata_Roof
// 0x0010 (0x0138 - 0x0128)
class UBuildingEditModeMetadata_Roof : public UBuildingEditModeMetadata_BinaryToggle
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeMetadata_Roof");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeMetadata_Wall
// 0x0000 (0x0128 - 0x0128)
class UBuildingEditModeMetadata_Wall : public UBuildingEditModeMetadata_BinaryToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeMetadata_Wall");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeMetadata_Pillar
// 0x0000 (0x0118 - 0x0118)
class UBuildingEditModeMetadata_Pillar : public UBuildingEditModeMetadata
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeMetadata_Pillar");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeMetadata_Stair
// 0x0010 (0x0128 - 0x0118)
class UBuildingEditModeMetadata_Stair : public UBuildingEditModeMetadata
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeMetadata_Stair");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeMetadataContainer
// 0x0010 (0x0038 - 0x0028)
class UBuildingEditModeMetadataContainer : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeMetadataContainer");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeSupport_BinaryToggle
// 0x0020 (0x02B0 - 0x0290)
class UBuildingEditModeSupport_BinaryToggle : public UBuildingEditModeSupport
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0290(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeSupport_BinaryToggle");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeSupport_Floor
// 0x0000 (0x02B0 - 0x02B0)
class UBuildingEditModeSupport_Floor : public UBuildingEditModeSupport_BinaryToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeSupport_Floor");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeSupport_Roof
// 0x0020 (0x02D0 - 0x02B0)
class UBuildingEditModeSupport_Roof : public UBuildingEditModeSupport_BinaryToggle
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeSupport_Roof");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeSupport_Wall
// 0x0000 (0x02B0 - 0x02B0)
class UBuildingEditModeSupport_Wall : public UBuildingEditModeSupport_BinaryToggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeSupport_Wall");
		return ptr;
	}

};


// Class FortniteGame.BuildingEditModeSupport_Stair
// 0x00B0 (0x0340 - 0x0290)
class UBuildingEditModeSupport_Stair : public UBuildingEditModeSupport
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0290(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingEditModeSupport_Stair");
		return ptr;
	}

};


// Class FortniteGame.BuildingGroup
// 0x0048 (0x0070 - 0x0028)
class UBuildingGroup : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingGroup");
		return ptr;
	}

};


// Class FortniteGame.BuildingTextureData
// 0x0038 (0x0060 - 0x0028)
class UBuildingTextureData : public UDataAsset
{
public:
	class UTexture2D*                                  Diffuse;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Normal;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Specular;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingTextureData");
		return ptr;
	}

};


// Class FortniteGame.BuildingTurretComponent
// 0x0050 (0x0140 - 0x00F0)
class UBuildingTurretComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingTurretComponent");
		return ptr;
	}

};


// Class FortniteGame.BuildingTurretComponent_MOBA
// 0x0010 (0x0150 - 0x0140)
class UBuildingTurretComponent_MOBA : public UBuildingTurretComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.BuildingTurretComponent_MOBA");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterPartData
// 0x0000 (0x0028 - 0x0028)
class UCustomCharacterPartData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterPartData");
		return ptr;
	}

};


// Class FortniteGame.CustomColorSwatch
// 0x0008 (0x0030 - 0x0028)
class UCustomColorSwatch : public UPrimaryDataAsset
{
public:
	TEnumAsByte<EFortCustomGender>                     GenderPermitted;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomColorSwatch");
		return ptr;
	}

};


// Class FortniteGame.CustomDynamicColorSwatch
// 0x0010 (0x0040 - 0x0030)
class UCustomDynamicColorSwatch : public UCustomColorSwatch
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomDynamicColorSwatch");
		return ptr;
	}

};


// Class FortniteGame.CustomAccessoryColorSwatch
// 0x0030 (0x0070 - 0x0040)
class UCustomAccessoryColorSwatch : public UCustomDynamicColorSwatch
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomAccessoryColorSwatch");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterAccessoryData
// 0x00B0 (0x00D8 - 0x0028)
class UCustomCharacterAccessoryData : public UCustomCharacterPartData
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterAccessoryData");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterBackpackData
// 0x0008 (0x00E0 - 0x00D8)
class UCustomCharacterBackpackData : public UCustomCharacterAccessoryData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterBackpackData");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterCharmData
// 0x0008 (0x00E0 - 0x00D8)
class UCustomCharacterCharmData : public UCustomCharacterAccessoryData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterCharmData");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterFaceData
// 0x0008 (0x00E0 - 0x00D8)
class UCustomCharacterFaceData : public UCustomCharacterAccessoryData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterFaceData");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterHatData
// 0x0008 (0x00E0 - 0x00D8)
class UCustomCharacterHatData : public UCustomCharacterAccessoryData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterHatData");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterBodyPartData
// 0x0080 (0x00A8 - 0x0028)
class UCustomCharacterBodyPartData : public UCustomCharacterPartData
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterBodyPartData");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterHeadData
// 0x0080 (0x0128 - 0x00A8)
class UCustomCharacterHeadData : public UCustomCharacterBodyPartData
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00A8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterHeadData");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterPartModifier
// 0x0010 (0x0398 - 0x0388)
class ACustomCharacterPartModifier : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterPartModifier");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterPartOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomCharacterPartOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterPartOwnerInterface");
		return ptr;
	}


	void PlayAnimationsMatchingQuery();
	void GetCustomizationRootSkeletalMeshComponent();
};


// Class FortniteGame.CustomColorComponent
// 0x0010 (0x0038 - 0x0028)
class UCustomColorComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomColorComponent");
		return ptr;
	}

};


// Class FortniteGame.CustomClothingColorSwatch
// 0x0020 (0x0050 - 0x0030)
class UCustomClothingColorSwatch : public UCustomColorSwatch
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomClothingColorSwatch");
		return ptr;
	}

};


// Class FortniteGame.CustomHairColorSwatch
// 0x0000 (0x0040 - 0x0040)
class UCustomHairColorSwatch : public UCustomDynamicColorSwatch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomHairColorSwatch");
		return ptr;
	}

};


// Class FortniteGame.CustomSkinColorSwatch
// 0x0000 (0x0040 - 0x0040)
class UCustomSkinColorSwatch : public UCustomDynamicColorSwatch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomSkinColorSwatch");
		return ptr;
	}

};


// Class FortniteGame.CustomPlayerComponent
// 0x0028 (0x0050 - 0x0028)
class UCustomPlayerComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomPlayerComponent");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityKit
// 0x01B8 (0x0208 - 0x0050)
class UFortAbilityKit : public UFortAbilitySet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FText>                               Description;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x188];                                     // 0x0080(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityKit");
		return ptr;
	}

};


// Class FortniteGame.FortAbilitySystemComponentAbilityGivenListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAbilitySystemComponentAbilityGivenListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySystemComponentAbilityGivenListenerInterface");
		return ptr;
	}

};


// Class FortniteGame.FortAbilitySystemComponent
// 0x0200 (0x17E0 - 0x15E0)
class UFortAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x15E0(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySystemComponent");
		return ptr;
	}

};


// Class FortniteGame.FortAbilitySystemComponentAthena
// 0x0000 (0x17E0 - 0x17E0)
class UFortAbilitySystemComponentAthena : public UFortAbilitySystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySystemComponentAthena");
		return ptr;
	}

};


// Class FortniteGame.FortAbilitySystemGlobals
// 0x0000 (0x0310 - 0x0310)
class UFortAbilitySystemGlobals : public UAbilitySystemGlobals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySystemGlobals");
		return ptr;
	}

};


// Class FortniteGame.FortAttributeLookupTable
// 0x0060 (0x0088 - 0x0028)
class UFortAttributeLookupTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAttributeLookupTable");
		return ptr;
	}

};


// Class FortniteGame.FortAbilitySystemUI
// 0x0050 (0x0078 - 0x0028)
class UFortAbilitySystemUI : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySystemUI");
		return ptr;
	}


	void STATIC_GetStaticGameplayEffectDescription();
	void STATIC_GetDefaultObjectOfGameplayEffectType();
};


// Class FortniteGame.FortAbilityTask_CommitAccountCosts
// 0x0048 (0x00C8 - 0x0080)
class UFortAbilityTask_CommitAccountCosts : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0080(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityTask_CommitAccountCosts");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityTask_DirectedMovement
// 0x0070 (0x00F0 - 0x0080)
class UFortAbilityTask_DirectedMovement : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0080(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityTask_DirectedMovement");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityTask_WaitTargetSelection
// 0x0040 (0x00C0 - 0x0080)
class UFortAbilityTask_WaitTargetSelection : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0080(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityTask_WaitTargetSelection");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityTask_PlayMontageWaitTarget
// 0x00B0 (0x0130 - 0x0080)
class UFortAbilityTask_PlayMontageWaitTarget : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0080(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityTask_PlayMontageWaitTarget");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityTask_SetNextMontageSectionAndWait
// 0x0030 (0x00B0 - 0x0080)
class UFortAbilityTask_SetNextMontageSectionAndWait : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityTask_SetNextMontageSectionAndWait");
		return ptr;
	}

};


// Class FortniteGame.FortSpawnContextObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UFortSpawnContextObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSpawnContextObjectInterface");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayEffectDeliveryActor
// 0x02F8 (0x0680 - 0x0388)
class AFortGameplayEffectDeliveryActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x0388(0x02F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayEffectDeliveryActor");
		return ptr;
	}

};


// Class FortniteGame.FortProjectileBase
// 0x0180 (0x0800 - 0x0680)
class AFortProjectileBase : public AFortGameplayEffectDeliveryActor
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0680(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortProjectileBase");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityTask_SpawnProjectileAndWait
// 0x01A8 (0x0228 - 0x0080)
class UFortAbilityTask_SpawnProjectileAndWait : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0080(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityTask_SpawnProjectileAndWait");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityTask_Sprint
// 0x0010 (0x0090 - 0x0080)
class UFortAbilityTask_Sprint : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityTask_Sprint");
		return ptr;
	}

};


// Class FortniteGame.FortAccountStatProxyInstance
// 0x0028 (0x0050 - 0x0028)
class UFortAccountStatProxyInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAccountStatProxyInstance");
		return ptr;
	}

};


// Class FortniteGame.FortActorIndicatorInterface
// 0x0000 (0x0028 - 0x0028)
class UFortActorIndicatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortActorIndicatorInterface");
		return ptr;
	}

};


// Class FortniteGame.FortAIEncounterInfoOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAIEncounterInfoOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIEncounterInfoOwnerInterface");
		return ptr;
	}


	void GetEncounterInfo();
};


// Class FortniteGame.FortAIGoalProvider
// 0x0020 (0x0048 - 0x0028)
class UFortAIGoalProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIGoalProvider");
		return ptr;
	}

};


// Class FortniteGame.FortAIAssignment
// 0x00B0 (0x00D8 - 0x0028)
class UFortAIAssignment : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIAssignment");
		return ptr;
	}

};


// Class FortniteGame.FortAIAssignmentSettings
// 0x0060 (0x0088 - 0x0028)
class UFortAIAssignmentSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIAssignmentSettings");
		return ptr;
	}

};


// Class FortniteGame.FortPathFollowingComponent
// 0x0130 (0x0530 - 0x0400)
class UFortPathFollowingComponent : public UCrowdFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0400(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPathFollowingComponent");
		return ptr;
	}

};


// Class FortniteGame.FortAccountItem
// 0x0070 (0x0140 - 0x00D0)
class UFortAccountItem : public UFortItem
{
public:
	int                                                Level;                                                    // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6C];                                      // 0x00D4(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAccountItem");
		return ptr;
	}

};


// Class FortniteGame.FortFeedbackManager
// 0x0120 (0x04A8 - 0x0388)
class AFortFeedbackManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0388(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortFeedbackManager");
		return ptr;
	}

};


// Class FortniteGame.FortSpottableActorInterface
// 0x0000 (0x0028 - 0x0028)
class UFortSpottableActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSpottableActorInterface");
		return ptr;
	}

};


// Class FortniteGame.FortHealthSet
// 0x04A0 (0x04D0 - 0x0030)
class UFortHealthSet : public UFortAttributeSet
{
public:
	unsigned char                                      UnknownData00[0x4A0];                                     // 0x0030(0x04A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHealthSet");
		return ptr;
	}

};


// Class FortniteGame.FortHealthRegenInterface
// 0x0000 (0x0028 - 0x0028)
class UFortHealthRegenInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHealthRegenInterface");
		return ptr;
	}


	void GetShieldRegenGameplayEffectClass();
	void GetShieldRegenGameplayEffect();
	void GetShieldRegenDelayGameplayEffect();
	void GetHealthRegenGameplayEffectClass();
	void GetHealthRegenGameplayEffect();
	void GetHealthRegenDelayGameplayEffect();
};


// Class FortniteGame.FortRegenHealthSet
// 0x00D0 (0x05A0 - 0x04D0)
class UFortRegenHealthSet : public UFortHealthSet
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x04D0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortRegenHealthSet");
		return ptr;
	}

};


// Class FortniteGame.FortConversation
// 0x0010 (0x0038 - 0x0028)
class UFortConversation : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConversation");
		return ptr;
	}

};


// Class FortniteGame.FortSpline
// 0x0040 (0x0068 - 0x0028)
class UFortSpline : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSpline");
		return ptr;
	}

};


// Class FortniteGame.FortSimpleMiniMapIndicator
// 0x0130 (0x0450 - 0x0320)
class UFortSimpleMiniMapIndicator : public UFortMiniMapIndicator
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0320(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSimpleMiniMapIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortPickup
// 0x0200 (0x0588 - 0x0388)
class AFortPickup : public AActor
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0388(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPickup");
		return ptr;
	}

};


// Class FortniteGame.FortPawn
// 0x0740 (0x0EE0 - 0x07A0)
class AFortPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x740];                                     // 0x07A0(0x0740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPawn");
		return ptr;
	}

};


// Class FortniteGame.FortHUDTargetUnderReticleInterface
// 0x0000 (0x0028 - 0x0028)
class UFortHUDTargetUnderReticleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHUDTargetUnderReticleInterface");
		return ptr;
	}


	void GetHUDTargetHealthPercentage();
	void GetHUDTargetDisplayName();
	void GetHUDTargetDisplayModifiers();
	void GetHUDTargetDifficultyRating();
};


// Class FortniteGame.FortAIPawn
// 0x0C10 (0x1AF0 - 0x0EE0)
class AFortAIPawn : public AFortPawn
{
public:
	unsigned char                                      UnknownData00[0xC10];                                     // 0x0EE0(0x0C10) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIPawn");
		return ptr;
	}

};


// Class FortniteGame.FortAIController
// 0x0150 (0x05D0 - 0x0480)
class AFortAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0480(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIController");
		return ptr;
	}

};


// Class FortniteGame.FortBotController
// 0x0010 (0x05E0 - 0x05D0)
class AFortBotController : public AFortAIController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBotController");
		return ptr;
	}

};


// Class FortniteGame.FortAIDataProvider_Ability
// 0x0048 (0x0070 - 0x0028)
class UFortAIDataProvider_Ability : public UAIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIDataProvider_Ability");
		return ptr;
	}

};


// Class FortniteGame.FortAIDataProvider_GoalProviderAbility
// 0x0000 (0x0070 - 0x0070)
class UFortAIDataProvider_GoalProviderAbility : public UFortAIDataProvider_Ability
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIDataProvider_GoalProviderAbility");
		return ptr;
	}

};


// Class FortniteGame.FortAIDataProvider_AIDirector
// 0x0008 (0x0030 - 0x0028)
class UFortAIDataProvider_AIDirector : public UAIDataProvider
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIDataProvider_AIDirector");
		return ptr;
	}

};


// Class FortniteGame.FortAIDataProvider_Pawn
// 0x0030 (0x0058 - 0x0028)
class UFortAIDataProvider_Pawn : public UAIDataProvider
{
public:
	float                                              SightRadius;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x002C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIDataProvider_Pawn");
		return ptr;
	}

};


// Class FortniteGame.FortMissionPowerPointsInterface
// 0x0000 (0x0028 - 0x0028)
class UFortMissionPowerPointsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionPowerPointsInterface");
		return ptr;
	}


	void GetPowerPointsCost();
	void GetMaxRangeLerpValue();
	void GetInitialRangeLerpValue();
	void GetAvailabilityWeight();
};


// Class FortniteGame.FortDifficultyOption
// 0x0018 (0x0040 - 0x0028)
class UFortDifficultyOption : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOption");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter
// 0x0008 (0x0048 - 0x0040)
class UFortDifficultyOptionEncounter : public UFortDifficultyOption
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_UtilitiesFree
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_UtilitiesFree : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_UtilitiesFree");
		return ptr;
	}

};


// Class FortniteGame.FortPatrolWardInterface
// 0x0000 (0x0028 - 0x0028)
class UFortPatrolWardInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPatrolWardInterface");
		return ptr;
	}


	void GetAffectingType();
	void GetAffectingDistance();
};


// Class FortniteGame.FortAIDirector
// 0x08C8 (0x0C50 - 0x0388)
class AFortAIDirector : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8C8];                                     // 0x0388(0x08C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIDirector");
		return ptr;
	}

};


// Class FortniteGame.FortAIDirectorDataManager
// 0x00F0 (0x0478 - 0x0388)
class AFortAIDirectorDataManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0388(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIDirectorDataManager");
		return ptr;
	}

};


// Class FortniteGame.FortAIDirectorDataTrackingSettings
// 0x0010 (0x0038 - 0x0028)
class UFortAIDirectorDataTrackingSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIDirectorDataTrackingSettings");
		return ptr;
	}

};


// Class FortniteGame.FortAIDirectorEventManager
// 0x0050 (0x03D8 - 0x0388)
class AFortAIDirectorEventManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIDirectorEventManager");
		return ptr;
	}

};


// Class FortniteGame.FortAIEncounterGoalSelectionTable
// 0x0010 (0x0038 - 0x0028)
class UFortAIEncounterGoalSelectionTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIEncounterGoalSelectionTable");
		return ptr;
	}

};


// Class FortniteGame.FortIntensityCurveSequence
// 0x0018 (0x0040 - 0x0028)
class UFortIntensityCurveSequence : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortIntensityCurveSequence");
		return ptr;
	}

};


// Class FortniteGame.GameplayMutatorObserverInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayMutatorObserverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.GameplayMutatorObserverInterface");
		return ptr;
	}

};


// Class FortniteGame.FortAIEncounterInfo
// 0x0BF8 (0x0C20 - 0x0028)
class UFortAIEncounterInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0xBF8];                                     // 0x0028(0x0BF8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIEncounterInfo");
		return ptr;
	}

};


// Class FortniteGame.FortAIPawnVariant
// 0x0048 (0x0070 - 0x0028)
class UFortAIPawnVariant : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIPawnVariant");
		return ptr;
	}

};


// Class FortniteGame.FortAISpawnGroup
// 0x00E0 (0x0108 - 0x0028)
class UFortAISpawnGroup : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAISpawnGroup");
		return ptr;
	}

};


// Class FortniteGame.FortAIEncounterRiftManager
// 0x01E0 (0x0208 - 0x0028)
class UFortAIEncounterRiftManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0028(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIEncounterRiftManager");
		return ptr;
	}

};


// Class FortniteGame.FortAIEncounterSequence
// 0x0050 (0x0078 - 0x0028)
class UFortAIEncounterSequence : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIEncounterSequence");
		return ptr;
	}

};


// Class FortniteGame.FortAIEncounterTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAIEncounterTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIEncounterTargetInterface");
		return ptr;
	}


	void IsFloatingTarget();
	void GetObjectiveCompletionPercentage();
};


// Class FortniteGame.FortAIFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortAIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIFunctionLibrary");
		return ptr;
	}


	void STATIC_MakeNoiseEventAtLocation();
	void STATIC_MakeNoiseEvent();
};


// Class FortniteGame.FortAIGoalManager
// 0x0118 (0x04A0 - 0x0388)
class AFortAIGoalManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0388(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIGoalManager");
		return ptr;
	}

};


// Class FortniteGame.FortAIRootAssignmentProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAIRootAssignmentProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIRootAssignmentProviderInterface");
		return ptr;
	}


	void GetRootAssignmentIdentifier();
};


// Class FortniteGame.FortAIGoalProvider_EnvQuery
// 0x0088 (0x00D0 - 0x0048)
class UFortAIGoalProvider_EnvQuery : public UFortAIGoalProvider
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIGoalProvider_EnvQuery");
		return ptr;
	}

};


// Class FortniteGame.FortAIObjectiveInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAIObjectiveInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIObjectiveInterface");
		return ptr;
	}

};


// Class FortniteGame.FortAIPerceptionComponent
// 0x0008 (0x01D0 - 0x01C8)
class UFortAIPerceptionComponent : public UAIPerceptionComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIPerceptionComponent");
		return ptr;
	}

};


// Class FortniteGame.FortAIPerceptionSystem
// 0x0000 (0x0130 - 0x0130)
class UFortAIPerceptionSystem : public UAIPerceptionSystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIPerceptionSystem");
		return ptr;
	}

};


// Class FortniteGame.FortAIProxyActor
// 0x0040 (0x03C8 - 0x0388)
class AFortAIProxyActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0388(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIProxyActor");
		return ptr;
	}

};


// Class FortniteGame.FortAIMobileProxyActor
// 0x0000 (0x03C8 - 0x03C8)
class AFortAIMobileProxyActor : public AFortAIProxyActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIMobileProxyActor");
		return ptr;
	}

};


// Class FortniteGame.FortAISpawnerInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAISpawnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAISpawnerInterface");
		return ptr;
	}


	void OnReceiveSpawnGroup();
	void IsReadyToReceiveNewSpawnGroup();
};


// Class FortniteGame.FortAISpawnGroupProgressionInfo
// 0x0010 (0x0038 - 0x0028)
class UFortAISpawnGroupProgressionInfo : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAISpawnGroupProgressionInfo");
		return ptr;
	}

};


// Class FortniteGame.FortBotMissionManager
// 0x00A0 (0x00C8 - 0x0028)
class UFortBotMissionManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBotMissionManager");
		return ptr;
	}

};


// Class FortniteGame.FortAISystem
// 0x0090 (0x01A0 - 0x0110)
class UFortAISystem : public UAISystem
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0110(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAISystem");
		return ptr;
	}

};


// Class FortniteGame.FortAITask_AdjustToSlot
// 0x0030 (0x00A0 - 0x0070)
class UFortAITask_AdjustToSlot : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0070(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAITask_AdjustToSlot");
		return ptr;
	}

};


// Class FortniteGame.FortAITask_ExecuteAbility
// 0x0080 (0x00F0 - 0x0070)
class UFortAITask_ExecuteAbility : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAITask_ExecuteAbility");
		return ptr;
	}

};


// Class FortniteGame.FortAITask_FuzzyQueue
// 0x0020 (0x0130 - 0x0110)
class UFortAITask_FuzzyQueue : public UAITask_MoveTo
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAITask_FuzzyQueue");
		return ptr;
	}

};


// Class FortniteGame.FortAITask_Move
// 0x0038 (0x0148 - 0x0110)
class UFortAITask_Move : public UAITask_MoveTo
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0110(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAITask_Move");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityTestObserver
// 0x0030 (0x03B8 - 0x0388)
class AFortAbilityTestObserver : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0388(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityTestObserver");
		return ptr;
	}


	void WasAbilityTagActivated();
	void WasAbilityActivated();
	void StopObserving();
	void StartObserving(class APawn* Pawn);
};


// Class FortniteGame.FortAITask_StepAside
// 0x0030 (0x0178 - 0x0148)
class UFortAITask_StepAside : public UFortAITask_Move
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0148(0x0010) MISSED OFFSET
	class AActor*                                      GoalActor;                                                // 0x0158(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0160(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAITask_StepAside");
		return ptr;
	}

};


// Class FortniteGame.FortAITask_NavmeshWait
// 0x0010 (0x0080 - 0x0070)
class UFortAITask_NavmeshWait : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAITask_NavmeshWait");
		return ptr;
	}

};


// Class FortniteGame.FortAITask_RotateToFace
// 0x0020 (0x0090 - 0x0070)
class UFortAITask_RotateToFace : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAITask_RotateToFace");
		return ptr;
	}

};


// Class FortniteGame.FortAITetheringBoxBoundsInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAITetheringBoxBoundsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAITetheringBoxBoundsInterface");
		return ptr;
	}


	void GetTetheredBoxBoundsWidth();
	void GetTetheredBoxBoundsHeight();
	void GetTetheredBoxBoundsEQSSpaceBetween();
	void GetTetheredBoxBoundsEQSGridSize();
	void GetTetheredBoxBoundsCenter();
};


// Class FortniteGame.FortAnimInstance
// 0x0088 (0x03E0 - 0x0358)
class UFortAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0358(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAnimInstance");
		return ptr;
	}

};


// Class FortniteGame.FortPlayMontageForGameplayTagQueryInterface
// 0x0000 (0x0028 - 0x0028)
class UFortPlayMontageForGameplayTagQueryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayMontageForGameplayTagQueryInterface");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterPartAnimInstance
// 0x0030 (0x0410 - 0x03E0)
class UCustomCharacterPartAnimInstance : public UFortAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterPartAnimInstance");
		return ptr;
	}

};


// Class FortniteGame.FortAIAnimInstance
// 0x0028 (0x0408 - 0x03E0)
class UFortAIAnimInstance : public UFortAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIAnimInstance");
		return ptr;
	}

};


// Class FortniteGame.FortDefenderAnimInstance
// 0x0018 (0x0420 - 0x0408)
class UFortDefenderAnimInstance : public UFortAIAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0408(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDefenderAnimInstance");
		return ptr;
	}

};


// Class FortniteGame.FortHuskAnimInstance
// 0x0048 (0x0450 - 0x0408)
class UFortHuskAnimInstance : public UFortAIAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0408(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHuskAnimInstance");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerAnimInstance
// 0x00C0 (0x04A0 - 0x03E0)
class UFortPlayerAnimInstance : public UFortAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x03E0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerAnimInstance");
		return ptr;
	}

};


// Class FortniteGame.FortCharacterType
// 0x0000 (0x02A0 - 0x02A0)
class UFortCharacterType : public UFortAccountItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCharacterType");
		return ptr;
	}

};


// Class FortniteGame.FortWorkerType
// 0x00A0 (0x0340 - 0x02A0)
class UFortWorkerType : public UFortCharacterType
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02A0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorkerType");
		return ptr;
	}

};


// Class FortniteGame.FrontendAnimInstance
// 0x0078 (0x03D0 - 0x0358)
class UFrontendAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0358(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FrontendAnimInstance");
		return ptr;
	}

};


// Class FortniteGame.FortHeroSpecialization
// 0x0248 (0x0270 - 0x0028)
class UFortHeroSpecialization : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0028(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHeroSpecialization");
		return ptr;
	}

};


// Class FortniteGame.FortHeroType
// 0x0140 (0x0480 - 0x0340)
class UFortHeroType : public UFortWorkerType
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0340(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHeroType");
		return ptr;
	}

};


// Class FortniteGame.FortCharacter
// 0x0010 (0x0150 - 0x0140)
class UFortCharacter : public UFortAccountItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCharacter");
		return ptr;
	}

};


// Class FortniteGame.FortWorker
// 0x00D0 (0x0220 - 0x0150)
class UFortWorker : public UFortCharacter
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0150(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorker");
		return ptr;
	}

};


// Class FortniteGame.FortHero
// 0x0070 (0x0290 - 0x0220)
class UFortHero : public UFortWorker
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0220(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHero");
		return ptr;
	}

};


// Class FortniteGame.FortGameDeathPenalty
// 0x0078 (0x00A0 - 0x0028)
class UFortGameDeathPenalty : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameDeathPenalty");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerPawn
// 0x07D0 (0x16B0 - 0x0EE0)
class AFortPlayerPawn : public AFortPawn
{
public:
	unsigned char                                      UnknownData00[0x7D0];                                     // 0x0EE0(0x07D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerPawn");
		return ptr;
	}

};


// Class FortniteGame.FortMcpProfile
// 0x0030 (0x02E0 - 0x02B0)
class UFortMcpProfile : public UMcpProfile
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpProfile");
		return ptr;
	}

};


// Class FortniteGame.FortClientEventInterface
// 0x0000 (0x0028 - 0x0028)
class UFortClientEventInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientEventInterface");
		return ptr;
	}


	void BlueprintCustomHandleClientEvent();
};


// Class FortniteGame.FortClientAnnouncement
// 0x0070 (0x03F8 - 0x0388)
class AFortClientAnnouncement : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0388(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement");
		return ptr;
	}

};


// Class FortniteGame.FortClientAnnouncement_Basic
// 0x00F0 (0x04E8 - 0x03F8)
class AFortClientAnnouncement_Basic : public AFortClientAnnouncement
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x03F8(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement_Basic");
		return ptr;
	}

};


// Class FortniteGame.FortCollectionBookData
// 0x0040 (0x0068 - 0x0028)
class UFortCollectionBookData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCollectionBookData");
		return ptr;
	}

};


// Class FortniteGame.CustomCharacterPart
// 0x0110 (0x0550 - 0x0440)
class UCustomCharacterPart : public UFortWorldItemDefinition
{
public:
	TEnumAsByte<EFortCustomGender>                     GenderPermitted;                                          // 0x0440(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortCustomBodyType>                   BodyTypesPermitted;                                       // 0x0441(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortCustomPartType>                   CharacterPartType;                                        // 0x0442(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10D];                                     // 0x0443(0x010D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.CustomCharacterPart");
		return ptr;
	}

};


// Class FortniteGame.Stat
// 0x0098 (0x00C0 - 0x0028)
class UStat : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.Stat");
		return ptr;
	}

};


// Class FortniteGame.FortStatEventManager
// 0x0060 (0x0088 - 0x0028)
class UFortStatEventManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortStatEventManager");
		return ptr;
	}

};


// Class FortniteGame.FortTokenType
// 0x0050 (0x02F0 - 0x02A0)
class UFortTokenType : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02A0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTokenType");
		return ptr;
	}

};


// Class FortniteGame.FortDailyRewardScheduleTokenDefinition
// 0x0000 (0x02F0 - 0x02F0)
class UFortDailyRewardScheduleTokenDefinition : public UFortTokenType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDailyRewardScheduleTokenDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortDailyRewardScheduleDefinitions
// 0x0010 (0x0038 - 0x0028)
class UFortDailyRewardScheduleDefinitions : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDailyRewardScheduleDefinitions");
		return ptr;
	}

};


// Class FortniteGame.FortGamepadSettings
// 0x0280 (0x02A8 - 0x0028)
class UFortGamepadSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0028(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGamepadSettings");
		return ptr;
	}

};


// Class FortniteGame.FortOutpostItemDefinition
// 0x0020 (0x0270 - 0x0250)
class UFortOutpostItemDefinition : public UFortCloudSaveItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0250(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOutpostItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.OutpostPOSTRequirementData
// 0x0020 (0x0048 - 0x0028)
class UOutpostPOSTRequirementData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.OutpostPOSTRequirementData");
		return ptr;
	}

};


// Class FortniteGame.FortOutpostData
// 0x0198 (0x01C0 - 0x0028)
class UFortOutpostData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOutpostData");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseBannerIconItemDefinition
// 0x0000 (0x02A0 - 0x02A0)
class UFortHomebaseBannerIconItemDefinition : public UFortAccountItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseBannerIconItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseBannerColorMap
// 0x0050 (0x0078 - 0x0028)
class UFortHomebaseBannerColorMap : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseBannerColorMap");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseManager
// 0x02B8 (0x02E0 - 0x0028)
class UFortHomebaseManager : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2B8];                                     // 0x0028(0x02B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseManager");
		return ptr;
	}

};


// Class FortniteGame.FortAttributeCategory
// 0x0010 (0x0038 - 0x0028)
class UFortAttributeCategory : public UDataAsset
{
public:
	TArray<struct FMyFortCategoryData>                 Categories;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAttributeCategory");
		return ptr;
	}

};


// Class FortniteGame.FortEditToolItemDefinition
// 0x0000 (0x0650 - 0x0650)
class UFortEditToolItemDefinition : public UFortWeaponItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortEditToolItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortTagUIDataLookupTable
// 0x0060 (0x0088 - 0x0028)
class UFortTagUIDataLookupTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTagUIDataLookupTable");
		return ptr;
	}

};


// Class FortniteGame.FortMissionGenerationData
// 0x00D8 (0x0100 - 0x0028)
class UFortMissionGenerationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionGenerationData");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_SpawnGroupProgression
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_SpawnGroupProgression : public UFortDifficultyOptionEncounter
{
public:
	class UFortAISpawnGroupProgressionInfo*            SpawnGroupProgression;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_SpawnGroupProgression");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_SpawnPointsMultiplier
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_SpawnPointsMultiplier : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_SpawnPointsMultiplier");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_UtilitiesAdjustment
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_UtilitiesAdjustment : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_UtilitiesAdjustment");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_UtilitiesLocked
// 0x0010 (0x0058 - 0x0048)
class UFortDifficultyOptionEncounter_UtilitiesLocked : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_UtilitiesLocked");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_Distance
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_Distance : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_Distance");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_DirectionNumber
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_DirectionNumber : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_DirectionNumber");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_ModifierTags
// 0x0020 (0x0068 - 0x0048)
class UFortDifficultyOptionEncounter_ModifierTags : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_ModifierTags");
		return ptr;
	}

};


// Class FortniteGame.MyTownData
// 0x0060 (0x0088 - 0x0028)
class UMyTownData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.MyTownData");
		return ptr;
	}

};


// Class FortniteGame.FortUIFeedbackBank
// 0x0070 (0x0098 - 0x0028)
class UFortUIFeedbackBank : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUIFeedbackBank");
		return ptr;
	}

};


// Class FortniteGame.FortSurvivorData
// 0x0068 (0x0090 - 0x0028)
class UFortSurvivorData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSurvivorData");
		return ptr;
	}

};


// Class FortniteGame.FortNotificationHandler
// 0x0018 (0x0040 - 0x0028)
class UFortNotificationHandler : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnNotificationCleared;                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNotificationHandler");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_MCPContextUpgradeItem
// 0x0020 (0x0048 - 0x0028)
class UFortAsyncAction_MCPContextUpgradeItem : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_MCPContextUpgradeItem");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_MCPContextRecycleItems
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_MCPContextRecycleItems : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_MCPContextRecycleItems");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_MCPContextConsumeItem
// 0x0038 (0x0060 - 0x0028)
class UFortAsyncAction_MCPContextConsumeItem : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_MCPContextConsumeItem");
		return ptr;
	}

};


// Class FortniteGame.FortMcpContext
// 0x0418 (0x0440 - 0x0028)
class UFortMcpContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x418];                                     // 0x0028(0x0418) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpContext");
		return ptr;
	}

};


// Class FortniteGame.FortUITeamInfo
// 0x01E8 (0x0210 - 0x0028)
class UFortUITeamInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0028(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUITeamInfo");
		return ptr;
	}

};


// Class FortniteGame.FortUINotification
// 0x0068 (0x0090 - 0x0028)
class UFortUINotification : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUINotification");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityTask_MoveAI
// 0x0038 (0x0180 - 0x0148)
class UFortAbilityTask_MoveAI : public UFortAITask_Move
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0148(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityTask_MoveAI");
		return ptr;
	}

};


// Class FortniteGame.WorldMapPin
// 0x0018 (0x03A0 - 0x0388)
class AWorldMapPin : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.WorldMapPin");
		return ptr;
	}

};


// Class FortniteGame.FortTheaterInfo
// 0x0688 (0x06B0 - 0x0028)
class UFortTheaterInfo : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x688];                                     // 0x0028(0x0688) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTheaterInfo");
		return ptr;
	}

};


// Class FortniteGame.FortTimeOfDayCollection
// 0x0010 (0x0038 - 0x0028)
class UFortTimeOfDayCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTimeOfDayCollection");
		return ptr;
	}

};


// Class FortniteGame.FortWindManager
// 0x0278 (0x0600 - 0x0388)
class AFortWindManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x278];                                     // 0x0388(0x0278) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWindManager");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionSetMission
// 0x0010 (0x0038 - 0x0028)
class UFortDifficultyOptionSetMission : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionSetMission");
		return ptr;
	}

};


// Class FortniteGame.FortMissionInfo
// 0x0770 (0x0798 - 0x0028)
class UFortMissionInfo : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x770];                                     // 0x0028(0x0770) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionInfo");
		return ptr;
	}

};


// Class FortniteGame.FortMissionGenerator
// 0x0680 (0x06A8 - 0x0028)
class UFortMissionGenerator : public UPrimaryDataAsset
{
public:
	struct FText                                       MissionName;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x668];                                     // 0x0040(0x0668) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionGenerator");
		return ptr;
	}

};


// Class FortniteGame.FortTheaterMapViewer
// 0x0308 (0x0690 - 0x0388)
class AFortTheaterMapViewer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x308];                                     // 0x0388(0x0308) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTheaterMapViewer");
		return ptr;
	}

};


// Class FortniteGame.FortClientAnnouncement_ZoneModifiers
// 0x0018 (0x0410 - 0x03F8)
class AFortClientAnnouncement_ZoneModifiers : public AFortClientAnnouncement
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement_ZoneModifiers");
		return ptr;
	}

};


// Class FortniteGame.FortPlacementActorTagTest
// 0x0040 (0x0068 - 0x0028)
class UFortPlacementActorTagTest : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlacementActorTagTest");
		return ptr;
	}

};


// Class FortniteGame.FortGameData
// 0x2398 (0x23C0 - 0x0028)
class UFortGameData : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2398];                                    // 0x0028(0x2398) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameData");
		return ptr;
	}

};


// Class FortniteGame.FortGameMode
// 0x0320 (0x0790 - 0x0470)
class AFortGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x0470(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameMode");
		return ptr;
	}

};


// Class FortniteGame.FortClientOnlyActor
// 0x0008 (0x0390 - 0x0388)
class AFortClientOnlyActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientOnlyActor");
		return ptr;
	}

};


// Class FortniteGame.FortTheaterMapTile
// 0x0270 (0x0600 - 0x0390)
class AFortTheaterMapTile : public AFortClientOnlyActor
{
public:
	unsigned char                                      UnknownData00[0x270];                                     // 0x0390(0x0270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTheaterMapTile");
		return ptr;
	}

};


// Class FortniteGame.FortDeployableBaseCloudSaveItemDefinition
// 0x0010 (0x0260 - 0x0250)
class UFortDeployableBaseCloudSaveItemDefinition : public UFortCloudSaveItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeployableBaseCloudSaveItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortDeployableBaseSkillTreeUnlocks
// 0x0040 (0x0068 - 0x0028)
class UFortDeployableBaseSkillTreeUnlocks : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeployableBaseSkillTreeUnlocks");
		return ptr;
	}

};


// Class FortniteGame.FortZoneTheme
// 0x0268 (0x0290 - 0x0028)
class UFortZoneTheme : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x268];                                     // 0x0028(0x0268) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortZoneTheme");
		return ptr;
	}

};


// Class FortniteGame.FortMcpProfileQuest
// 0x0080 (0x0360 - 0x02E0)
class UFortMcpProfileQuest : public UFortMcpProfile
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x02E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpProfileQuest");
		return ptr;
	}

};


// Class FortniteGame.FortMcpProfileAthena
// 0x0130 (0x0490 - 0x0360)
class UFortMcpProfileAthena : public UFortMcpProfileQuest
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0360(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpProfileAthena");
		return ptr;
	}


	void SetBattleRoyaleBanner();
	void ReportConsumableUsed();
	void EquipBattleRoyaleCustomization();
	void EndBattleRoyaleGame();
};


// Class FortniteGame.FortPlayerPawnAthena
// 0x0640 (0x1CF0 - 0x16B0)
class AFortPlayerPawnAthena : public AFortPlayerPawn
{
public:
	unsigned char                                      UnknownData00[0x640];                                     // 0x16B0(0x0640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerPawnAthena");
		return ptr;
	}

};


// Class FortniteGame.FortAnimNotify_PlayConsumeSound
// 0x0000 (0x0058 - 0x0058)
class UFortAnimNotify_PlayConsumeSound : public UAnimNotify_PlaySound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAnimNotify_PlayConsumeSound");
		return ptr;
	}

};


// Class FortniteGame.FortAnimNotify_PlayEmoteMusic
// 0x0008 (0x0060 - 0x0058)
class UFortAnimNotify_PlayEmoteMusic : public UAnimNotify_PlaySound
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAnimNotify_PlayEmoteMusic");
		return ptr;
	}

};


// Class FortniteGame.FortAnimNotify_PlaySoundLocalOnly
// 0x0000 (0x0058 - 0x0058)
class UFortAnimNotify_PlaySoundLocalOnly : public UAnimNotify_PlaySound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAnimNotify_PlaySoundLocalOnly");
		return ptr;
	}

};


// Class FortniteGame.FortAnimNotify_PlayWindParticleEffect
// 0x0000 (0x0080 - 0x0080)
class UFortAnimNotify_PlayWindParticleEffect : public UAnimNotify_PlayParticleEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAnimNotify_PlayWindParticleEffect");
		return ptr;
	}

};


// Class FortniteGame.FortAnimNotify_TriggerGameplayAbility
// 0x0018 (0x0050 - 0x0038)
class UFortAnimNotify_TriggerGameplayAbility : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAnimNotify_TriggerGameplayAbility");
		return ptr;
	}

};


// Class FortniteGame.FortAnimNotifyState_AbilityDecisionWindow
// 0x0048 (0x0078 - 0x0030)
class UFortAnimNotifyState_AbilityDecisionWindow : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAnimNotifyState_AbilityDecisionWindow");
		return ptr;
	}

};


// Class FortniteGame.FortAnimNotifyState_AllowBlockedActions
// 0x0000 (0x0030 - 0x0030)
class UFortAnimNotifyState_AllowBlockedActions : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAnimNotifyState_AllowBlockedActions");
		return ptr;
	}

};


// Class FortniteGame.FortAnimNotifyState_RootMotionInterrupt
// 0x0008 (0x0038 - 0x0030)
class UFortAnimNotifyState_RootMotionInterrupt : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAnimNotifyState_RootMotionInterrupt");
		return ptr;
	}

};


// Class FortniteGame.FortChunkDownloadManager
// 0x00F8 (0x0120 - 0x0028)
class UFortChunkDownloadManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortChunkDownloadManager");
		return ptr;
	}

};


// Class FortniteGame.FortAssetManager
// 0x01F0 (0x05A0 - 0x03B0)
class UFortAssetManager : public UAssetManager
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x03B0(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAssetManager");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_AbandonSession
// 0x0030 (0x0058 - 0x0028)
class UFortAsyncAction_AbandonSession : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_AbandonSession");
		return ptr;
	}

};


// Class FortniteGame.FortRegionInfo
// 0x00D8 (0x0100 - 0x0028)
class UFortRegionInfo : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortRegionInfo");
		return ptr;
	}

};


// Class FortniteGame.FortUpdateManager
// 0x0000 (0x0270 - 0x0270)
class UFortUpdateManager : public UUpdateManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUpdateManager");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_CheckForUpdate
// 0x0038 (0x0060 - 0x0028)
class UFortAsyncAction_CheckForUpdate : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_CheckForUpdate");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_EnsureClientQuestLogin
// 0x0028 (0x0050 - 0x0028)
class UFortAsyncAction_EnsureClientQuestLogin : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_EnsureClientQuestLogin");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_HomebaseContextPurchaseNode
// 0x0030 (0x0058 - 0x0028)
class UFortAsyncAction_HomebaseContextPurchaseNode : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_HomebaseContextPurchaseNode");
		return ptr;
	}

};


// Class FortniteGame.HomeBaseContext
// 0x00B8 (0x00E0 - 0x0028)
class UHomeBaseContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.HomeBaseContext");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_MakeTieredWaveEncounterSettings
// 0x0198 (0x01C0 - 0x0028)
class UFortAsyncAction_MakeTieredWaveEncounterSettings : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_MakeTieredWaveEncounterSettings");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_OpenChoiceUI
// 0x0060 (0x0088 - 0x0028)
class UFortAsyncAction_OpenChoiceUI : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_OpenChoiceUI");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_PlayConversation
// 0x0058 (0x0080 - 0x0028)
class UFortAsyncAction_PlayConversation : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_PlayConversation");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_RejoinSession
// 0x0030 (0x0058 - 0x0028)
class UFortAsyncAction_RejoinSession : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_RejoinSession");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_SendQuestStatEvent
// 0x00B0 (0x00D8 - 0x0028)
class UFortAsyncAction_SendQuestStatEvent : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_SendQuestStatEvent");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_TriggerNotification
// 0x01A8 (0x01D0 - 0x0028)
class UFortAsyncAction_TriggerNotification : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0028(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_TriggerNotification");
		return ptr;
	}

};


// Class FortniteGame.FortAsyncAction_WaitForClientAnnouncement
// 0x0038 (0x0060 - 0x0028)
class UFortAsyncAction_WaitForClientAnnouncement : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAsyncAction_WaitForClientAnnouncement");
		return ptr;
	}

};


// Class FortniteGame.FortCameraMode
// 0x0028 (0x0050 - 0x0028)
class UFortCameraMode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCameraMode");
		return ptr;
	}

};


// Class FortniteGame.Fort3PCameraMode
// 0x00D8 (0x0128 - 0x0050)
class UFort3PCameraMode : public UFortCameraMode
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0050(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.Fort3PCameraMode");
		return ptr;
	}

};


// Class FortniteGame.FortCameraMode_ThirdPerson
// 0x00C0 (0x0110 - 0x0050)
class UFortCameraMode_ThirdPerson : public UFortCameraMode
{
public:
	float                                              FOV;                                                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xBC];                                      // 0x0054(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCameraMode_ThirdPerson");
		return ptr;
	}

};


// Class FortniteGame.FortCameraMode_AthenaAircraft
// 0x0010 (0x0120 - 0x0110)
class UFortCameraMode_AthenaAircraft : public UFortCameraMode_ThirdPerson
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCameraMode_AthenaAircraft");
		return ptr;
	}

};


// Class FortniteGame.FortAthenaAircraft
// 0x0138 (0x04C0 - 0x0388)
class AFortAthenaAircraft : public AActor
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0388(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAthenaAircraft");
		return ptr;
	}

};


// Class FortniteGame.FortAthenaHoverCarMovementComponent
// 0x0018 (0x02F8 - 0x02E0)
class UFortAthenaHoverCarMovementComponent : public USimpleWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAthenaHoverCarMovementComponent");
		return ptr;
	}

};


// Class FortniteGame.FortAthenaSimpleCarMovementComponent
// 0x0000 (0x0440 - 0x0440)
class UFortAthenaSimpleCarMovementComponent : public UWheeledVehicleMovementComponent4W
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAthenaSimpleCarMovementComponent");
		return ptr;
	}

};


// Class FortniteGame.FortVisibilityComponent
// 0x0020 (0x0110 - 0x00F0)
class UFortVisibilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortVisibilityComponent");
		return ptr;
	}

};


// Class FortniteGame.FortMiniMapComponent
// 0x00B8 (0x01C8 - 0x0110)
class UFortMiniMapComponent : public UFortVisibilityComponent
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0110(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMiniMapComponent");
		return ptr;
	}

};


// Class FortniteGame.FortSafeZoneIndicator
// 0x01F0 (0x0578 - 0x0388)
class AFortSafeZoneIndicator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0388(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSafeZoneIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortAthenaMapInfo
// 0x02D0 (0x0658 - 0x0388)
class AFortAthenaMapInfo : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0388(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAthenaMapInfo");
		return ptr;
	}

};


// Class FortniteGame.FortCameraMode_AthenaVehicle
// 0x0010 (0x0120 - 0x0110)
class UFortCameraMode_AthenaVehicle : public UFortCameraMode_ThirdPerson
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCameraMode_AthenaVehicle");
		return ptr;
	}

};


// Class FortniteGame.FortAthenaSimpleCar
// 0x0038 (0x0420 - 0x03E8)
class AFortAthenaSimpleCar : public APawn
{
public:
	class UFortAthenaSimpleCarMovementComponent*       WheeledVehicleMovementComponent;                          // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x03F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAthenaSimpleCar");
		return ptr;
	}

};


// Class FortniteGame.FortCharacterAttrSet
// 0x00A0 (0x00D0 - 0x0030)
class UFortCharacterAttrSet : public UFortAttributeSet
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCharacterAttrSet");
		return ptr;
	}

};


// Class FortniteGame.FortConstructionSet
// 0x01A0 (0x01D0 - 0x0030)
class UFortConstructionSet : public UFortAttributeSet
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0030(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConstructionSet");
		return ptr;
	}

};


// Class FortniteGame.FortControlResistanceSet
// 0x0280 (0x02B0 - 0x0030)
class UFortControlResistanceSet : public UFortAttributeSet
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0030(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortControlResistanceSet");
		return ptr;
	}

};


// Class FortniteGame.FortAIAttributesSet
// 0x0000 (0x00D0 - 0x00D0)
class UFortAIAttributesSet : public UFortCharacterAttrSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAIAttributesSet");
		return ptr;
	}

};


// Class FortniteGame.FortBuildingActorSet
// 0x0040 (0x0510 - 0x04D0)
class UFortBuildingActorSet : public UFortHealthSet
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x04D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBuildingActorSet");
		return ptr;
	}

};


// Class FortniteGame.FortBuildingTrapSet
// 0x0180 (0x0690 - 0x0510)
class UFortBuildingTrapSet : public UFortBuildingActorSet
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0510(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBuildingTrapSet");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseSet
// 0x0520 (0x0550 - 0x0030)
class UFortHomebaseSet : public UFortAttributeSet
{
public:
	unsigned char                                      UnknownData00[0x520];                                     // 0x0030(0x0520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseSet");
		return ptr;
	}

};


// Class FortniteGame.FortMovementSet
// 0x0120 (0x0150 - 0x0030)
class UFortMovementSet : public UFortAttributeSet
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0030(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMovementSet");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerAttrSet
// 0x03F0 (0x0420 - 0x0030)
class UFortPlayerAttrSet : public UFortAttributeSet
{
public:
	unsigned char                                      UnknownData00[0x3F0];                                     // 0x0030(0x03F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerAttrSet");
		return ptr;
	}

};


// Class FortniteGame.FortWeaponAttrSet
// 0x0100 (0x0130 - 0x0030)
class UFortWeaponAttrSet : public UFortAttributeSet
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0030(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponAttrSet");
		return ptr;
	}

};


// Class FortniteGame.FortBannerUtilities
// 0x0000 (0x0028 - 0x0028)
class UFortBannerUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBannerUtilities");
		return ptr;
	}


	void STATIC_LoadAndGetBannerLargeIconFromRowName();
	void STATIC_GetSecondaryColor();
	void STATIC_GetRowNameForBannerIconItem();
	void STATIC_GetRowNameForBannerColorItem();
	void STATIC_GetPrimaryColor();
	void STATIC_GetBannerSmallIconAssetFromRowName();
	void STATIC_GetBannerSmallIconAsset();
	void STATIC_GetBannerLargeIconAssetFromRowName();
	void STATIC_GetBannerLargeIconAsset();
	void STATIC_GetBannerIconsForCategory();
	void STATIC_GetBannerIconItemFromRowName();
	void STATIC_GetBannerIconCategoryRowName();
	void STATIC_GetBannerIconCategoryName();
	void STATIC_GetBannerColorsForCategory();
	void STATIC_GetBannerColorSecondaryColorFromRowName();
	void STATIC_GetBannerColorSecondaryColor();
	void STATIC_GetBannerColorPrimaryColorFromRowName();
	void STATIC_GetBannerColorPrimaryColor();
	void STATIC_GetBannerColorItemFromRowName();
	void STATIC_GetBannerColorFromRowName();
	void STATIC_GetBannerColorCategoryRowName();
	void STATIC_GetBannerColorCategoryName();
	void STATIC_GetBannerColor();
};


// Class FortniteGame.FortTieredCollectionLayout
// 0x00E0 (0x0108 - 0x0028)
class UFortTieredCollectionLayout : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTieredCollectionLayout");
		return ptr;
	}

};


// Class FortniteGame.FortExpeditionItemDefinition
// 0x0040 (0x02E0 - 0x02A0)
class UFortExpeditionItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortExpeditionItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortExpeditionItem
// 0x0060 (0x01A0 - 0x0140)
class UFortExpeditionItem : public UFortAccountItem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0140(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortExpeditionItem");
		return ptr;
	}

};


// Class FortniteGame.FortBlueprintAnalytics
// 0x0000 (0x0028 - 0x0028)
class UFortBlueprintAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBlueprintAnalytics");
		return ptr;
	}


	void STATIC_FireQuestAnalyticsEvent_BlueprintArray();
	void STATIC_FireQuestAnalyticsEvent_Blueprint();
	void STATIC_FireMissionAnalyticsEvent_BlueprintArray();
	void STATIC_FireMissionAnalyticsEvent_Blueprint();
	void STATIC_FireEvent_MatchmakingClientStatusTextChanged();
	void STATIC_FireEvent_MatchmakingClientStarted();
	void STATIC_FireEvent_MatchmakingClientEnded();
	void STATIC_FireEvent_BuildLimitProgressIncremented();
	void STATIC_FireEvent_BuildLimitProgressDecremented();
	void STATIC_FireAnalyticsEvent_BlueprintArray();
	void STATIC_FireAnalyticsEvent_Blueprint();
	void STATIC_ConstructAnalyticsAttribute();
};


// Class FortniteGame.FortOnboardingAnalytics
// 0x0000 (0x0028 - 0x0028)
class UFortOnboardingAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOnboardingAnalytics");
		return ptr;
	}


	void STATIC_FireAnalyticsEvent_VinderTipPlayed();
	void STATIC_FireAnalyticsEvent_TutorialStartupFailed();
	void STATIC_FireAnalyticsEvent_TutorialCompleted();
	void STATIC_FireAnalyticsEvent_TutorialCanceled();
	void STATIC_FireAnalyticsEvent_MineCartDestroyed();
	void STATIC_FireAnalyticsEvent_CinematicSkipped();
};


// Class FortniteGame.FortOutpostAnalytics
// 0x0000 (0x0028 - 0x0028)
class UFortOutpostAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOutpostAnalytics");
		return ptr;
	}


	void STATIC_FireAnalyticsEvent_OutpostSupplyDropPickedUp();
	void STATIC_FireAnalyticsEvent_OutpostLoaded();
	void STATIC_FireAnalyticsEvent_OutpostLeaveOutpost();
	void STATIC_FireAnalyticsEvent_OutpostDefenseStart();
	void STATIC_FireAnalyticsEvent_OutpostDefenseEnd();
	void STATIC_FireAnalyticsEvent_OutpostBuildingDefended();
	void STATIC_FireAnalyticsEvent_OutpostBuildingActivated();
	void STATIC_FireAnalyticsEvent_OutpostAttackWaveStarted();
	void STATIC_FireAnalyticsEvent_OutpostAttackWaveCompleted();
};


// Class FortniteGame.FortDeployableBaseAnalytics
// 0x0000 (0x0028 - 0x0028)
class UFortDeployableBaseAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeployableBaseAnalytics");
		return ptr;
	}


	void STATIC_FireAnalyticsEvent_Neighborhood_ConsoleOpened();
	void STATIC_FireAnalyticsEvent_CombatZone_WaveStarted();
	void STATIC_FireAnalyticsEvent_CombatZone_WaveFailed();
	void STATIC_FireAnalyticsEvent_CombatZone_TierStarted();
	void STATIC_FireAnalyticsEvent_CombatZone_TierFailed();
	void STATIC_FireAnalyticsEvent_CombatZone_TierCompleted();
	void STATIC_FireAnalyticsEvent_CombatZone_ConsoleOpened();
};


// Class FortniteGame.FortExpeditionAnalytics
// 0x0000 (0x0028 - 0x0028)
class UFortExpeditionAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortExpeditionAnalytics");
		return ptr;
	}

};


// Class FortniteGame.FortCollectionBookAnalytics
// 0x0000 (0x0028 - 0x0028)
class UFortCollectionBookAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCollectionBookAnalytics");
		return ptr;
	}

};


// Class FortniteGame.FortSurvivorAnalytics
// 0x0000 (0x0028 - 0x0028)
class UFortSurvivorAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSurvivorAnalytics");
		return ptr;
	}

};


// Class FortniteGame.FortTwitchAnalytics
// 0x0000 (0x0028 - 0x0028)
class UFortTwitchAnalytics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTwitchAnalytics");
		return ptr;
	}

};


// Class FortniteGame.FortBluGloManager
// 0x0098 (0x0420 - 0x0388)
class AFortBluGloManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0388(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBluGloManager");
		return ptr;
	}

};


// Class FortniteGame.FortBotStructureBuilder
// 0x0038 (0x03C0 - 0x0388)
class AFortBotStructureBuilder : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0388(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBotStructureBuilder");
		return ptr;
	}

};


// Class FortniteGame.FortBotMissionLogic
// 0x0050 (0x0078 - 0x0028)
class UFortBotMissionLogic : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBotMissionLogic");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_DistanceBetween
// 0x0068 (0x00D0 - 0x0068)
class UFortBTDecorator_DistanceBetween : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0068(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_DistanceBetween");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_GameplayAbility_HasGameplayAbility
// 0x0020 (0x0088 - 0x0068)
class UFortBTDecorator_GameplayAbility_HasGameplayAbility : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_GameplayAbility_HasGameplayAbility");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_IsGoalPawn
// 0x0000 (0x0090 - 0x0090)
class UFortBTDecorator_IsGoalPawn : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_IsGoalPawn");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_IsTakerAirborne
// 0x0000 (0x0068 - 0x0068)
class UFortBTDecorator_IsTakerAirborne : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_IsTakerAirborne");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_QueryGameplayAbility
// 0x0070 (0x00D8 - 0x0068)
class UFortBTDecorator_QueryGameplayAbility : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0068(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_QueryGameplayAbility");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_GameplayAbility_CanActivate
// 0x0000 (0x00D8 - 0x00D8)
class UFortBTDecorator_GameplayAbility_CanActivate : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_GameplayAbility_CanActivate");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_GameplayAbility_CanHitTarget
// 0x0008 (0x00E0 - 0x00D8)
class UFortBTDecorator_GameplayAbility_CanHitTarget : public UFortBTDecorator_QueryGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_GameplayAbility_CanHitTarget");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_GameplayAbility_CompareDistance
// 0x0010 (0x00E8 - 0x00D8)
class UFortBTDecorator_GameplayAbility_CompareDistance : public UFortBTDecorator_QueryGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_GameplayAbility_CompareDistance");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
// 0x0000 (0x00D8 - 0x00D8)
class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_GameplayAbility_IsOnCooldown
// 0x0000 (0x00D8 - 0x00D8)
class UFortBTDecorator_GameplayAbility_IsOnCooldown : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_GameplayAbility_IsOnCooldown");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
// 0x0000 (0x00D8 - 0x00D8)
class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
// 0x0000 (0x00D8 - 0x00D8)
class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange : public UFortBTDecorator_QueryGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange");
		return ptr;
	}

};


// Class FortniteGame.FortBTDecorator_WeaponStatus
// 0x0030 (0x0098 - 0x0068)
class UFortBTDecorator_WeaponStatus : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTDecorator_WeaponStatus");
		return ptr;
	}

};


// Class FortniteGame.FortBTService_ContextOverride
// 0x0000 (0x0070 - 0x0070)
class UFortBTService_ContextOverride : public UBTService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTService_ContextOverride");
		return ptr;
	}

};


// Class FortniteGame.FortBTContext_MoveUrgency
// 0x0008 (0x0078 - 0x0070)
class UFortBTContext_MoveUrgency : public UFortBTService_ContextOverride
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTContext_MoveUrgency");
		return ptr;
	}

};


// Class FortniteGame.FortBTContext_SkipNotPerceivedGoals
// 0x0000 (0x0070 - 0x0070)
class UFortBTContext_SkipNotPerceivedGoals : public UFortBTService_ContextOverride
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTContext_SkipNotPerceivedGoals");
		return ptr;
	}

};


// Class FortniteGame.FortBTContext_SuppressGoalUpdate
// 0x0008 (0x0078 - 0x0070)
class UFortBTContext_SuppressGoalUpdate : public UFortBTService_ContextOverride
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTContext_SuppressGoalUpdate");
		return ptr;
	}

};


// Class FortniteGame.FortBTService_UpdateBotMissionBuilding
// 0x0050 (0x00C0 - 0x0070)
class UFortBTService_UpdateBotMissionBuilding : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0070(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTService_UpdateBotMissionBuilding");
		return ptr;
	}

};


// Class FortniteGame.FortDamageSet
// 0x0200 (0x0230 - 0x0030)
class UFortDamageSet : public UFortAttributeSet
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0030(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDamageSet");
		return ptr;
	}

};


// Class FortniteGame.FortBTService_UpdateBotMissionGoal
// 0x0008 (0x00A0 - 0x0098)
class UFortBTService_UpdateBotMissionGoal : public UBTService_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTService_UpdateBotMissionGoal");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_BotMissionBuild
// 0x0000 (0x0098 - 0x0098)
class UFortBTTask_BotMissionBuild : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_BotMissionBuild");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_BotMissionInteract
// 0x0000 (0x0098 - 0x0098)
class UFortBTTask_BotMissionInteract : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_BotMissionInteract");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_ExecuteGameplayAbility
// 0x0020 (0x0098 - 0x0078)
class UFortBTTask_ExecuteGameplayAbility : public UBTTask_GameplayTaskBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_ExecuteGameplayAbility");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_GameMoveTo
// 0x0040 (0x00F0 - 0x00B0)
class UFortBTTask_GameMoveTo : public UBTTask_MoveTo
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_GameMoveTo");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_GameMoveDirectlyToward
// 0x0000 (0x00F0 - 0x00F0)
class UFortBTTask_GameMoveDirectlyToward : public UFortBTTask_GameMoveTo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_GameMoveDirectlyToward");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_RequestUndermining
// 0x0000 (0x0070 - 0x0070)
class UFortBTTask_RequestUndermining : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_RequestUndermining");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_SetFrustrationDiscouragement
// 0x0008 (0x0078 - 0x0070)
class UFortBTTask_SetFrustrationDiscouragement : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_SetFrustrationDiscouragement");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_Sleep
// 0x0000 (0x0070 - 0x0070)
class UFortBTTask_Sleep : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_Sleep");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_TakerMoveToNavmesh
// 0x0000 (0x00B0 - 0x00B0)
class UFortBTTask_TakerMoveToNavmesh : public UBTTask_MoveTo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_TakerMoveToNavmesh");
		return ptr;
	}

};


// Class FortniteGame.FortBTTask_TriggerVOEvent
// 0x0030 (0x00A0 - 0x0070)
class UFortBTTask_TriggerVOEvent : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0070(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBTTask_TriggerVOEvent");
		return ptr;
	}

};


// Class FortniteGame.FortCameraBase
// 0x0040 (0x08C0 - 0x0880)
class AFortCameraBase : public ACameraActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0880(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCameraBase");
		return ptr;
	}

};


// Class FortniteGame.FortTheaterCamera
// 0x0000 (0x08C0 - 0x08C0)
class AFortTheaterCamera : public AFortCameraBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTheaterCamera");
		return ptr;
	}


	void SetTileFocus();
	void LimitToTheater();
};


// Class FortniteGame.Fort3PCam_Default
// 0x0000 (0x0128 - 0x0128)
class UFort3PCam_Default : public UFort3PCameraMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.Fort3PCam_Default");
		return ptr;
	}

};


// Class FortniteGame.Fort3PCam_Targeting
// 0x0000 (0x0128 - 0x0128)
class UFort3PCam_Targeting : public UFort3PCameraMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.Fort3PCam_Targeting");
		return ptr;
	}

};


// Class FortniteGame.FortCinematicCamera
// 0x0000 (0x0050 - 0x0050)
class UFortCinematicCamera : public UFortCameraMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCinematicCamera");
		return ptr;
	}

};


// Class FortniteGame.FortDeathCameraMode
// 0x0030 (0x0080 - 0x0050)
class UFortDeathCameraMode : public UFortCameraMode
{
public:
	float                                              FOV;                                                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0054(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeathCameraMode");
		return ptr;
	}

};


// Class FortniteGame.FortCarriedObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UFortCarriedObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCarriedObjectInterface");
		return ptr;
	}

};


// Class FortniteGame.FortCarriedObject
// 0x0170 (0x04F8 - 0x0388)
class AFortCarriedObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0388(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCarriedObject");
		return ptr;
	}

};


// Class FortniteGame.FortFlag
// 0x0010 (0x0508 - 0x04F8)
class AFortFlag : public AFortCarriedObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortFlag");
		return ptr;
	}

};


// Class FortniteGame.FortWeatherAugment
// 0x0020 (0x0518 - 0x04F8)
class AFortWeatherAugment : public AFortCarriedObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeatherAugment");
		return ptr;
	}

};


// Class FortniteGame.FortChat
// 0x0000 (0x0058 - 0x0058)
class UFortChat : public UChatroom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortChat");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerController
// 0x1C78 (0x2340 - 0x06C8)
class AFortPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x1C78];                                    // 0x06C8(0x1C78) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerController");
		return ptr;
	}

};


// Class FortniteGame.FortCheatManager
// 0x0058 (0x00D0 - 0x0078)
class UFortCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0078(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCheatManager");
		return ptr;
	}

};


// Class FortniteGame.FortClientAnnouncement_Cinematic
// 0x0000 (0x03F8 - 0x03F8)
class AFortClientAnnouncement_Cinematic : public AFortClientAnnouncement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement_Cinematic");
		return ptr;
	}


	void OnPlayerSkippedCutscene();
};


// Class FortniteGame.FortClientAnnouncement_ConversationInterface
// 0x0000 (0x0028 - 0x0028)
class UFortClientAnnouncement_ConversationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement_ConversationInterface");
		return ptr;
	}


	void ShouldPlaySentence();
	void OnSentenceStarted();
	void OnSentenceFinished();
	void OnConversationStarted();
	void OnConversationFinished();
};


// Class FortniteGame.FortClientAnnouncement_ConversationCodeInterface
// 0x0000 (0x0028 - 0x0028)
class UFortClientAnnouncement_ConversationCodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement_ConversationCodeInterface");
		return ptr;
	}


	void StopConversation();
	void PlayConversationFromSentenceIndex();
	void PlayConversationFromSentence();
	void PlayConversation();
	void IsPlayingSentenceIndex();
	void IsPlayingSentence();
	void IsPlayingConversation();
};


// Class FortniteGame.FortClientAnnouncement_Conversation
// 0x0050 (0x0448 - 0x03F8)
class AFortClientAnnouncement_Conversation : public AFortClientAnnouncement
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement_Conversation");
		return ptr;
	}

};


// Class FortniteGame.FortClientAnnouncement_TutorialInterface
// 0x0000 (0x0028 - 0x0028)
class UFortClientAnnouncement_TutorialInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement_TutorialInterface");
		return ptr;
	}


	void WaitForContinue();
	void SetVAlign();
	void SetTitleText();
	void SetSystemText();
	void SetPadding();
	void SetNameText();
	void SetLightboxEnabled();
	void SetLightboxDisableInputOnly();
	void SetHAlign();
	void SetDetailText();
	void SetButtonEnabled();
	void HideTutorialWidget();
};


// Class FortniteGame.FortClientAnnouncement_Tutorial
// 0x0168 (0x0560 - 0x03F8)
class AFortClientAnnouncement_Tutorial : public AFortClientAnnouncement
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x03F8(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement_Tutorial");
		return ptr;
	}

};


// Class FortniteGame.FortClientAnnouncement_TutorialConversation
// 0x0168 (0x05B0 - 0x0448)
class AFortClientAnnouncement_TutorialConversation : public AFortClientAnnouncement_Conversation
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0448(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncement_TutorialConversation");
		return ptr;
	}

};


// Class FortniteGame.FortClientAnnouncementManager
// 0x0188 (0x0510 - 0x0388)
class AFortClientAnnouncementManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0388(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientAnnouncementManager");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeFrontEnd
// 0x0010 (0x07A0 - 0x0790)
class AFortGameModeFrontEnd : public AFortGameMode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0790(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeFrontEnd");
		return ptr;
	}

};


// Class FortniteGame.FortRejoinCheck
// 0x00D0 (0x0280 - 0x01B0)
class UFortRejoinCheck : public URejoinCheck
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x01B0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortRejoinCheck");
		return ptr;
	}

};


// Class FortniteGame.FortOnlineAccount
// 0x01B0 (0x09B0 - 0x0800)
class UFortOnlineAccount : public UOnlineAccountCommon
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x0800(0x0074) MISSED OFFSET
	int                                                RecommendChatFailureDelay;                                // 0x0874(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RecommendChatRandomWindow;                                // 0x0878(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RecommendChatBackoffMultiplier;                           // 0x087C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                RecommendChatFailureCountCap;                             // 0x0880(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0884(0x0005) MISSED OFFSET
	bool                                               bShouldRequestGeneralChatRooms;                           // 0x0889(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldJoinGlobalChat;                                    // 0x088A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldJoinFounderChat;                                   // 0x088B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldCheckIfPlatformAllowed;                            // 0x088C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x123];                                     // 0x088D(0x0123) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOnlineAccount");
		return ptr;
	}

};


// Class FortniteGame.FortClientBotManager
// 0x0260 (0x0288 - 0x0028)
class UFortClientBotManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0028(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientBotManager");
		return ptr;
	}

};


// Class FortniteGame.FortPartyContext
// 0x04D0 (0x04F8 - 0x0028)
class UFortPartyContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x4D0];                                     // 0x0028(0x04D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPartyContext");
		return ptr;
	}

};


// Class FortniteGame.FortSocialItem
// 0x0050 (0x0078 - 0x0028)
class UFortSocialItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSocialItem");
		return ptr;
	}

};


// Class FortniteGame.FortMcpUtils
// 0x00E8 (0x0110 - 0x0028)
class UFortMcpUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpUtils");
		return ptr;
	}

};


// Class FortniteGame.FortClientBotManagerAthena
// 0x0078 (0x0300 - 0x0288)
class UFortClientBotManagerAthena : public UFortClientBotManager
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0288(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientBotManagerAthena");
		return ptr;
	}

};


// Class FortniteGame.FortClientEventData
// 0x0010 (0x0038 - 0x0028)
class UFortClientEventData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientEventData");
		return ptr;
	}

};


// Class FortniteGame.FortDamageNumbersActor
// 0x01D0 (0x0560 - 0x0390)
class AFortDamageNumbersActor : public AFortClientOnlyActor
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0390(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDamageNumbersActor");
		return ptr;
	}

};


// Class FortniteGame.FortFXManager
// 0x00F8 (0x0488 - 0x0390)
class AFortFXManager : public AFortClientOnlyActor
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0390(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortFXManager");
		return ptr;
	}

};


// Class FortniteGame.FortLightningActor
// 0x0050 (0x03E0 - 0x0390)
class AFortLightningActor : public AFortClientOnlyActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0390(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLightningActor");
		return ptr;
	}

};


// Class FortniteGame.FortTracerBase
// 0x0080 (0x0410 - 0x0390)
class AFortTracerBase : public AFortClientOnlyActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0390(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTracerBase");
		return ptr;
	}

};


// Class FortniteGame.FortCollectionBookManager
// 0x01F0 (0x0218 - 0x0028)
class UFortCollectionBookManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSlottedItemOperationComplete;                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSlotItemComplete;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0048(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCollectionBookManager");
		return ptr;
	}

};


// Class FortniteGame.FortCollectionBookPage
// 0x0048 (0x0070 - 0x0028)
class UFortCollectionBookPage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCollectionBookPage");
		return ptr;
	}

};


// Class FortniteGame.FortCollectionBookSection
// 0x0010 (0x0038 - 0x0028)
class UFortCollectionBookSection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCollectionBookSection");
		return ptr;
	}

};


// Class FortniteGame.FortCombatManager
// 0x0878 (0x0C00 - 0x0388)
class AFortCombatManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x878];                                     // 0x0388(0x0878) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCombatManager");
		return ptr;
	}

};


// Class FortniteGame.FortCollectionBookCategory
// 0x0020 (0x0048 - 0x0028)
class UFortCollectionBookCategory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCollectionBookCategory");
		return ptr;
	}

};


// Class FortniteGame.FortConsole
// 0x0000 (0x0130 - 0x0130)
class UFortConsole : public UConsole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConsole");
		return ptr;
	}

};


// Class FortniteGame.FortCrowdManager
// 0x0008 (0x00F8 - 0x00F0)
class UFortCrowdManager : public UCrowdManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCrowdManager");
		return ptr;
	}

};


// Class FortniteGame.FortDateTimeLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortDateTimeLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDateTimeLibrary");
		return ptr;
	}


	void STATIC_GetTimespanAsText(const struct FTimespan& Timespan);
	void STATIC_GetMcpRelativeUtcNow();
};


// Class FortniteGame.FortDecoHelper
// 0x0168 (0x04F0 - 0x0388)
class AFortDecoHelper : public AActor
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0388(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDecoHelper");
		return ptr;
	}

};


// Class FortniteGame.FortDecoPreview
// 0x01A8 (0x0530 - 0x0388)
class AFortDecoPreview : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0388(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDecoPreview");
		return ptr;
	}

};


// Class FortniteGame.FortDecoPreview_ComponentHarvester
// 0x0000 (0x0530 - 0x0530)
class AFortDecoPreview_ComponentHarvester : public AFortDecoPreview
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDecoPreview_ComponentHarvester");
		return ptr;
	}

};


// Class FortniteGame.FortDecoPreview_MeshHarvester
// 0x0000 (0x0530 - 0x0530)
class AFortDecoPreview_MeshHarvester : public AFortDecoPreview_ComponentHarvester
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDecoPreview_MeshHarvester");
		return ptr;
	}

};


// Class FortniteGame.FortDecoPreview_GenericBuildingSMActor
// 0x0010 (0x0540 - 0x0530)
class AFortDecoPreview_GenericBuildingSMActor : public AFortDecoPreview
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0530(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDecoPreview_GenericBuildingSMActor");
		return ptr;
	}

};


// Class FortniteGame.FortDecoPreview_GenericTrap
// 0x0000 (0x0540 - 0x0540)
class AFortDecoPreview_GenericTrap : public AFortDecoPreview_GenericBuildingSMActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDecoPreview_GenericTrap");
		return ptr;
	}

};


// Class FortniteGame.FortTrackPreview
// 0x0040 (0x0570 - 0x0530)
class AFortTrackPreview : public AFortDecoPreview
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0530(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTrackPreview");
		return ptr;
	}

};


// Class FortniteGame.FortDeployableBaseLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortDeployableBaseLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeployableBaseLibrary");
		return ptr;
	}


	void STATIC_UpdateDeployableBaseTierProgressionForPlayers();
	void STATIC_SetupDeployableBaseCombatZoneInventoriesOnPlayers();
	void STATIC_SetDeployableBaseMatchJoinability();
	void STATIC_ResetDeployableBaseHordePlayerInventories();
	void STATIC_OnPreHordeTierStart();
	void STATIC_IsWorldItemDefValidToPersistForDeployableBasePlayerInventory();
	void STATIC_GrantPlayersCompletedWaveRewards();
	void STATIC_GetTieredModifierSet();
	void STATIC_GetPrimaryHordeMission();
	void STATIC_GetHordeTierStartStatus();
	void STATIC_GetGameDifficultyInfo();
	void STATIC_ForceRestartDeployableBasePlayers();
	void STATIC_ForceDeployableBaseHordePlayersToResetAndRespawn();
	void STATIC_ForceClearAllDefenders();
	void STATIC_BroadcastHordeTierComplete();
	void STATIC_ApplyTieredModifierSet();
};


// Class FortniteGame.FortWorldManager
// 0x06D8 (0x0A60 - 0x0388)
class AFortWorldManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x6D8];                                     // 0x0388(0x06D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorldManager");
		return ptr;
	}

};


// Class FortniteGame.FortUserCloudHelperComponent
// 0x0080 (0x0170 - 0x00F0)
class UFortUserCloudHelperComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00F0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUserCloudHelperComponent");
		return ptr;
	}

};


// Class FortniteGame.FortGameState
// 0x0458 (0x0840 - 0x03E8)
class AFortGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x458];                                     // 0x03E8(0x0458) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameState");
		return ptr;
	}

};


// Class FortniteGame.FortMissionWeightedRewards
// 0x0010 (0x0038 - 0x0028)
class UFortMissionWeightedRewards : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionWeightedRewards");
		return ptr;
	}

};


// Class FortniteGame.FortPlacementActorDataProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UFortPlacementActorDataProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlacementActorDataProviderInterface");
		return ptr;
	}

};


// Class FortniteGame.FortMissionState
// 0x0030 (0x03B8 - 0x0388)
class AFortMissionState : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0388(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionState");
		return ptr;
	}

};


// Class FortniteGame.FortMissionTimerInterface
// 0x0000 (0x0028 - 0x0028)
class UFortMissionTimerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionTimerInterface");
		return ptr;
	}

};


// Class FortniteGame.FortObjectiveBase
// 0x0098 (0x0450 - 0x03B8)
class AFortObjectiveBase : public AFortMissionState
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x03B8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortObjectiveBase");
		return ptr;
	}

};


// Class FortniteGame.FortMission
// 0x0320 (0x06D8 - 0x03B8)
class AFortMission : public AFortMissionState
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x03B8(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMission");
		return ptr;
	}

};


// Class FortniteGame.WorldTileManager
// 0x0058 (0x0080 - 0x0028)
class UWorldTileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.WorldTileManager");
		return ptr;
	}

};


// Class FortniteGame.FortDeployableBaseManager
// 0x02C8 (0x0650 - 0x0388)
class AFortDeployableBaseManager : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x0388(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeployableBaseManager");
		return ptr;
	}

};


// Class FortniteGame.FortDeveloperSettings
// 0x0000 (0x0038 - 0x0038)
class UFortDeveloperSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeveloperSettings");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_Breathers
// 0x0038 (0x0080 - 0x0048)
class UFortDifficultyOptionEncounter_Breathers : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_Breathers");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_DirectionChange
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_DirectionChange : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_DirectionChange");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_IntensityCurveSequence
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_IntensityCurveSequence : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_IntensityCurveSequence");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_PawnNumberCap
// 0x0018 (0x0060 - 0x0048)
class UFortDifficultyOptionEncounter_PawnNumberCap : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_PawnNumberCap");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_SpawnLimitPawns
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_SpawnLimitPawns : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_SpawnLimitPawns");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_SpawnLimitPoints
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_SpawnLimitPoints : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_SpawnLimitPoints");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_SpawnPointsBurst
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_SpawnPointsBurst : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_SpawnPointsBurst");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_SpawnPointsCurve
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_SpawnPointsCurve : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_SpawnPointsCurve");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_SpawnTiming
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_SpawnTiming : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_SpawnTiming");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionEncounter_Time
// 0x0008 (0x0050 - 0x0048)
class UFortDifficultyOptionEncounter_Time : public UFortDifficultyOptionEncounter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionEncounter_Time");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionMission
// 0x0000 (0x0040 - 0x0040)
class UFortDifficultyOptionMission : public UFortDifficultyOption
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionMission");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategory
// 0x0008 (0x0030 - 0x0028)
class UFortDifficultyOptionCategory : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategory");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter
// 0x0000 (0x0030 - 0x0030)
class UFortDifficultyOptionCategoryEncounter : public UFortDifficultyOptionCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_Breathers
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_Breathers : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_Breathers");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_DirectionChange
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_DirectionChange : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_DirectionChange");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_DirectionNumber
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_DirectionNumber : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_DirectionNumber");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_Distance
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_Distance : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_Distance");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_IntensityCurveSequence
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_IntensityCurveSequence : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_IntensityCurveSequence");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_PawnNumberCap
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_PawnNumberCap : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_PawnNumberCap");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnGroupProgression
// 0x0008 (0x0038 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_SpawnGroupProgression : public UFortDifficultyOptionCategoryEncounter
{
public:
	class UClass*                                      SpawnGroupProgression;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnGroupProgression");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnLimitPawns
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_SpawnLimitPawns : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnLimitPawns");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnLimitPoints
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_SpawnLimitPoints : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnLimitPoints");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnPointsBurst
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_SpawnPointsBurst : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnPointsBurst");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnPointsCurve
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_SpawnPointsCurve : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnPointsCurve");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnPointsMultiplier
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_SpawnPointsMultiplier : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnPointsMultiplier");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_ModifierTags
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_ModifierTags : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_ModifierTags");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnTiming
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_SpawnTiming : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_SpawnTiming");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_UtilitiesAdjustment
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_UtilitiesAdjustment : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_UtilitiesAdjustment");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_UtilitiesFree
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_UtilitiesFree : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_UtilitiesFree");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_Time
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_Time : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_Time");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryEncounter_UtilitiesLocked
// 0x0010 (0x0040 - 0x0030)
class UFortDifficultyOptionCategoryEncounter_UtilitiesLocked : public UFortDifficultyOptionCategoryEncounter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryEncounter_UtilitiesLocked");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionCategoryMission
// 0x0000 (0x0030 - 0x0030)
class UFortDifficultyOptionCategoryMission : public UFortDifficultyOptionCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionCategoryMission");
		return ptr;
	}

};


// Class FortniteGame.FortDifficultyOptionSetEncounter
// 0x00B0 (0x00D8 - 0x0028)
class UFortDifficultyOptionSetEncounter : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDifficultyOptionSetEncounter");
		return ptr;
	}

};


// Class FortniteGame.FortDoorLinkComponent
// 0x0000 (0x0230 - 0x0230)
class UFortDoorLinkComponent : public UNavLinkCustomComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDoorLinkComponent");
		return ptr;
	}

};


// Class FortniteGame.FortDynamicBuildingDeconstructor
// 0x0088 (0x0410 - 0x0388)
class AFortDynamicBuildingDeconstructor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0388(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDynamicBuildingDeconstructor");
		return ptr;
	}

};


// Class FortniteGame.FortEmitterCameraLensEffectDirectional
// 0x0030 (0x0470 - 0x0440)
class AFortEmitterCameraLensEffectDirectional : public AEmitterCameraLensEffectBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0440(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortEmitterCameraLensEffectDirectional");
		return ptr;
	}

};


// Class FortniteGame.FortEmotePreviewActor
// 0x0000 (0x0388 - 0x0388)
class AFortEmotePreviewActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortEmotePreviewActor");
		return ptr;
	}


	void PreviewEmote(class UFortMontageItemDefinitionBase* Emote);
	void GetAthenaSlottedCharacter();
};


// Class FortniteGame.FortEngine
// 0x0000 (0x0CE0 - 0x0CE0)
class UFortEngine : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortEngine");
		return ptr;
	}

};


// Class FortniteGame.FortExhibitActor
// 0x0048 (0x03D0 - 0x0388)
class AFortExhibitActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	struct FTransform                                  CameraOffset;                                             // 0x0390(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortExhibitActor");
		return ptr;
	}

};


// Class FortniteGame.FortHeroExhibitActor
// 0x0010 (0x03E0 - 0x03D0)
class AFortHeroExhibitActor : public AFortExhibitActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHeroExhibitActor");
		return ptr;
	}

};


// Class FortniteGame.FortItemExhibitActor
// 0x0010 (0x03E0 - 0x03D0)
class AFortItemExhibitActor : public AFortExhibitActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemExhibitActor");
		return ptr;
	}

};


// Class FortniteGame.FortExpeditionManager
// 0x0010 (0x0038 - 0x0028)
class UFortExpeditionManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortExpeditionManager");
		return ptr;
	}

};


// Class FortniteGame.FortFastLoadConfig
// 0x0008 (0x0030 - 0x0028)
class UFortFastLoadConfig : public UObject
{
public:
	unsigned char                                      bDisableStreamInBuildings : 1;                            // 0x0028(0x0001) (Config)
	unsigned char                                      bDisableStartupAIDirector : 1;                            // 0x0028(0x0001) (Config)
	unsigned char                                      bDisableUpgradePlayerBuildingClasses : 1;                 // 0x0028(0x0001) (Config)
	unsigned char                                      bUseMinimalPlayerBuildingClasses : 1;                     // 0x0028(0x0001) (Config)
	unsigned char                                      bDisableStartingMissions : 1;                             // 0x0028(0x0001) (Config)
	unsigned char                                      bUseFastLoadDefaultInventory : 1;                         // 0x0028(0x0001) (Config)
	unsigned char                                      bDisableNavAgentCostData : 1;                             // 0x0028(0x0001) (Config)
	unsigned char                                      bDisableThreatVisualsManager : 1;                         // 0x0028(0x0001) (Config)
	unsigned char                                      bDisablePreLoadAssets : 1;                                // 0x0029(0x0001) (Config)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortFastLoadConfig");
		return ptr;
	}

};


// Class FortniteGame.FortFeedbackBank
// 0x00C0 (0x00E8 - 0x0028)
class UFortFeedbackBank : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortFeedbackBank");
		return ptr;
	}

};


// Class FortniteGame.FortFoliageSpawnerSet
// 0x0010 (0x0038 - 0x0028)
class UFortFoliageSpawnerSet : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortFoliageSpawnerSet");
		return ptr;
	}

};


// Class FortniteGame.FortForcedLODZone
// 0x0008 (0x0390 - 0x0388)
class AFortForcedLODZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortForcedLODZone");
		return ptr;
	}

};


// Class FortniteGame.PartyDisplayManager
// 0x00A8 (0x0430 - 0x0388)
class APartyDisplayManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0388(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.PartyDisplayManager");
		return ptr;
	}

};


// Class FortniteGame.FortGameInstance
// 0x0640 (0x0730 - 0x00F0)
class UFortGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x640];                                     // 0x00F0(0x0640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameInstance");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeEmptyDedicated
// 0x0000 (0x0790 - 0x0790)
class AFortGameModeEmptyDedicated : public AFortGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeEmptyDedicated");
		return ptr;
	}

};


// Class FortniteGame.FortVisibilityManager
// 0x00D8 (0x0460 - 0x0388)
class AFortVisibilityManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0388(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortVisibilityManager");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeZone
// 0x00C0 (0x0850 - 0x0790)
class AFortGameModeZone : public AFortGameMode
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0790(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeZone");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeDeployableBase
// 0x0050 (0x08A0 - 0x0850)
class AFortGameModeDeployableBase : public AFortGameModeZone
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0850(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeDeployableBase");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeFOB
// 0x0020 (0x0870 - 0x0850)
class AFortGameModeFOB : public AFortGameModeZone
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0850(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeFOB");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeKeep
// 0x0030 (0x0880 - 0x0850)
class AFortGameModeKeep : public AFortGameModeZone
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0850(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeKeep");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeManor
// 0x0020 (0x0870 - 0x0850)
class AFortGameModeManor : public AFortGameModeZone
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0850(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeManor");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeOutpost
// 0x0030 (0x0880 - 0x0850)
class AFortGameModeOutpost : public AFortGameModeZone
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0850(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeOutpost");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeSurvival
// 0x0000 (0x0850 - 0x0850)
class AFortGameModeSurvival : public AFortGameModeZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeSurvival");
		return ptr;
	}


	void FireEvent_SurvivalVoteReport();
	void FireEvent_SurvivalPeriodicReport();
};


// Class FortniteGame.FortGamePvPBase
// 0x0070 (0x08C0 - 0x0850)
class AFortGamePvPBase : public AFortGameModeZone
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0850(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGamePvPBase");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerInput
// 0x0168 (0x0500 - 0x0398)
class UFortPlayerInput : public UPlayerInput
{
public:
	struct FString                                     DefaultPresetName;                                        // 0x0398(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultPresetNameAthena;                                  // 0x03A8(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             FortPlayerInputSettingsNames;                             // 0x03B8(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x138];                                     // 0x03C8(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerInput");
		return ptr;
	}

};


// Class FortniteGame.FortClientSettingsRecord
// 0x0210 (0x02E0 - 0x00D0)
class UFortClientSettingsRecord : public UFortGenericRecord
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET
	struct FVector2D                                   GamepadLookSensitivity;                                   // 0x00D4(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x204];                                     // 0x00DC(0x0204) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortClientSettingsRecord");
		return ptr;
	}

};


// Class FortniteGame.FortMcpProfileAccount
// 0x00B0 (0x0410 - 0x0360)
class UFortMcpProfileAccount : public UFortMcpProfileQuest
{
public:
	struct FString                                     ListCatalogEntriesUrl;                                    // 0x0360(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0370(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpProfileAccount");
		return ptr;
	}


	void UpgradeItem();
	void UpdateBuildingLevelAndRating();
	void UnslotAllWorkers();
	void UnloadWarehouse();
	void UnassignAllSquads();
	void TwitchUpdateBroadcasterRegistration();
	void TransmogItem();
	void StartPrimaryMission();
	void StartExpedition();
	void SlotItemInCollectionBook();
	void SkipTutorial();
	void SetMtxPlatform();
	void SetModeLoadout();
	void SetItemFavoriteStatus();
	void SetHomebaseName();
	void SetHomebaseMeta();
	void SetHomebaseBanner();
	void SetHeroModeLoadout();
	void SetGameplayStats();
	void SetDefaultHeroSquad();
	void RefreshExpeditions();
	void RecycleItemBatch();
	void RecycleItem();
	void PurchaseHomebaseNode();
	void OpenCardPackBatch();
	void OpenCardPack();
	void ModifyMission();
	void IssueFriendCode();
	void IncrementNamedCounterStat();
	void EquipCharCosmetic();
	void EndPrimaryMission();
	void EarnScore();
	void ConvertItem();
	void ConsumeItems();
	void CollectExpedition();
	void ClaimMissionAlertRewards();
	void ClaimLoginReward();
	void ClaimCollectionBookRewards();
	void ClaimCollectedResources();
	void AssignWorkerToSquadBatch();
	void AssignWorkerToSquad();
	void ApplyAlteration();
	void ActivateConsumable();
	void AbandonExpedition();
};


// Class FortniteGame.FortMcpProfileMetadata
// 0x0000 (0x02E0 - 0x02E0)
class UFortMcpProfileMetadata : public UFortMcpProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpProfileMetadata");
		return ptr;
	}


	void UpdateOutpostCore();
	void UpdateDeployableBaseTierProgression();
	void CreateOrUpgradeOutpostItem();
	void CreateDeployableBaseItem();
};


// Class FortniteGame.FortPlayerControllerGameplay
// 0x0090 (0x23D0 - 0x2340)
class AFortPlayerControllerGameplay : public AFortPlayerController
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x2340(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerGameplay");
		return ptr;
	}


	void SetHUDElementVisibility();
	void ResetHUDElementVisibilityToSettings();
	void RefreshHUDElementVisibilitiesToSettings();
	void AreHUDElementsVisible();
};


// Class FortniteGame.FortPlayerControllerZone
// 0x04A0 (0x2870 - 0x23D0)
class AFortPlayerControllerZone : public AFortPlayerControllerGameplay
{
public:
	unsigned char                                      UnknownData00[0x4A0];                                     // 0x23D0(0x04A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerZone");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerControllerPvP
// 0x0000 (0x2870 - 0x2870)
class AFortPlayerControllerPvP : public AFortPlayerControllerZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerPvP");
		return ptr;
	}


	void ServerAttemptSelectFOBCore();
	void ClientShowGameOverWidget();
	void ClientReceiveKillNotification();
};


// Class FortniteGame.FortQuestItemDefinition
// 0x01A0 (0x0440 - 0x02A0)
class UFortQuestItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x02A0(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuestItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortQuestCategory
// 0x0060 (0x0088 - 0x0028)
class UFortQuestCategory : public UObject
{
public:
	struct FText                                       Name;                                                     // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0040(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuestCategory");
		return ptr;
	}

};


// Class FortniteGame.FortQuestManager
// 0x0298 (0x02C0 - 0x0028)
class UFortQuestManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnQuestsUpdated;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x288];                                     // 0x0038(0x0288) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuestManager");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerControllerAthena
// 0x0A80 (0x32F0 - 0x2870)
class AFortPlayerControllerAthena : public AFortPlayerControllerPvP
{
public:
	unsigned char                                      UnknownData00[0xA80];                                     // 0x2870(0x0A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerAthena");
		return ptr;
	}

};


// Class FortniteGame.FortGameModeAthena
// 0x0290 (0x0B50 - 0x08C0)
class AFortGameModeAthena : public AFortGamePvPBase
{
public:
	unsigned char                                      UnknownData00[0x290];                                     // 0x08C0(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameModeAthena");
		return ptr;
	}

};


// Class FortniteGame.FortGamePvPBaseDestruction
// 0x0000 (0x08C0 - 0x08C0)
class AFortGamePvPBaseDestruction : public AFortGamePvPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGamePvPBaseDestruction");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_Action
// 0x0010 (0x0A50 - 0x0A40)
class UFortGameplayAbility_Action : public UFortGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0A40(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Action");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_AIPortal
// 0x0050 (0x0AA0 - 0x0A50)
class UFortGameplayAbility_AIPortal : public UFortGameplayAbility_Action
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0A50(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_AIPortal");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_Crouch
// 0x0000 (0x0A50 - 0x0A50)
class UFortGameplayAbility_Crouch : public UFortGameplayAbility_Action
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Crouch");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_Jump
// 0x0000 (0x0A50 - 0x0A50)
class UFortGameplayAbility_Jump : public UFortGameplayAbility_Action
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Jump");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_Sprint
// 0x0000 (0x0A50 - 0x0A50)
class UFortGameplayAbility_Sprint : public UFortGameplayAbility_Action
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Sprint");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_AITurnTransition
// 0x0050 (0x0A90 - 0x0A40)
class UFortGameplayAbility_AITurnTransition : public UFortGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0A40(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_AITurnTransition");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_CeilingFallingTrap
// 0x0050 (0x0A90 - 0x0A40)
class UFortGameplayAbility_CeilingFallingTrap : public UFortGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0A40(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_CeilingFallingTrap");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_Land
// 0x0000 (0x0A40 - 0x0A40)
class UFortGameplayAbility_Land : public UFortGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Land");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_PlayConversation
// 0x0010 (0x0A50 - 0x0A40)
class UFortGameplayAbility_PlayConversation : public UFortGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0A40(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_PlayConversation");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_RangedWeapon
// 0x0050 (0x0A90 - 0x0A40)
class UFortGameplayAbility_RangedWeapon : public UFortGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0A40(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_RangedWeapon");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayAbility_Reload
// 0x0020 (0x0A60 - 0x0A40)
class UFortGameplayAbility_Reload : public UFortGameplayAbility
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0A40(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Reload");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayCueManager
// 0x0000 (0x03B0 - 0x03B0)
class UFortGameplayCueManager : public UGameplayCueManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayCueManager");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayCueNotify_Looping
// 0x0080 (0x0468 - 0x03E8)
class AFortGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03E8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayCueNotify_Looping");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayCueNotify_Simple
// 0x0030 (0x0070 - 0x0040)
class UFortGameplayCueNotify_Simple : public UGameplayCueNotify_Static
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayCueNotify_Simple");
		return ptr;
	}

};


// Class FortniteGame.FortAreaOfEffectCloud
// 0x0000 (0x0680 - 0x0680)
class AFortAreaOfEffectCloud : public AFortGameplayEffectDeliveryActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAreaOfEffectCloud");
		return ptr;
	}

};


// Class FortniteGame.FortProjectile_MOBATurret
// 0x0010 (0x0810 - 0x0800)
class AFortProjectile_MOBATurret : public AFortProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0800(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortProjectile_MOBATurret");
		return ptr;
	}

};


// Class FortniteGame.FortProjectileAthena
// 0x0010 (0x0810 - 0x0800)
class AFortProjectileAthena : public AFortProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0800(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortProjectileAthena");
		return ptr;
	}

};


// Class FortniteGame.FortProjectileFallingTrap
// 0x0000 (0x0800 - 0x0800)
class AFortProjectileFallingTrap : public AFortProjectileBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortProjectileFallingTrap");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayEffectExecutionCalculation
// 0x0000 (0x0040 - 0x0040)
class UFortGameplayEffectExecutionCalculation : public UGameplayEffectExecutionCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayEffectExecutionCalculation");
		return ptr;
	}

};


// Class FortniteGame.FortActiveDurationExecutionCalculation
// 0x0000 (0x0040 - 0x0040)
class UFortActiveDurationExecutionCalculation : public UFortGameplayEffectExecutionCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortActiveDurationExecutionCalculation");
		return ptr;
	}

};


// Class FortniteGame.FortDamageFormulaExecutionCalculation
// 0x0008 (0x0048 - 0x0040)
class UFortDamageFormulaExecutionCalculation : public UFortGameplayEffectExecutionCalculation
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDamageFormulaExecutionCalculation");
		return ptr;
	}

};


// Class FortniteGame.FortHealing
// 0x0000 (0x0040 - 0x0040)
class UFortHealing : public UFortGameplayEffectExecutionCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHealing");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayEffectUIData
// 0x0040 (0x0068 - 0x0028)
class UFortGameplayEffectUIData : public UGameplayEffectUIData
{
public:
	struct FText                                       DisplayName;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayEffectUIData");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayModMagnitudeCalculation
// 0x0000 (0x0040 - 0x0040)
class UFortGameplayModMagnitudeCalculation : public UGameplayModMagnitudeCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.FromFortitudeModMagnitudeCalculation
// 0x0070 (0x00B0 - 0x0040)
class UFromFortitudeModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FromFortitudeModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.FromOffenseModMagnitudeCalculation
// 0x0070 (0x00B0 - 0x0040)
class UFromOffenseModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FromOffenseModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.FromResistanceModMagnitudeCalculation
// 0x0070 (0x00B0 - 0x0040)
class UFromResistanceModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FromResistanceModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.FromTeamFortitudeModMagnitudeCalculation
// 0x0070 (0x00B0 - 0x0040)
class UFromTeamFortitudeModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FromTeamFortitudeModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.FromTeamOffenseModMagnitudeCalculation
// 0x0070 (0x00B0 - 0x0040)
class UFromTeamOffenseModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FromTeamOffenseModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.FromTeamResistanceModMagnitudeCalculation
// 0x0070 (0x00B0 - 0x0040)
class UFromTeamResistanceModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FromTeamResistanceModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.FromTeamTechModMagnitudeCalculation
// 0x0070 (0x00B0 - 0x0040)
class UFromTeamTechModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FromTeamTechModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.FromTechModMagnitudeCalculation
// 0x0070 (0x00B0 - 0x0040)
class UFromTechModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FromTechModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.PlayerTrapBonusModMagnitudeCalculation
// 0x0028 (0x0068 - 0x0040)
class UPlayerTrapBonusModMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.PlayerTrapBonusModMagnitudeCalculation");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayMutator
// 0x0008 (0x0390 - 0x0388)
class AFortGameplayMutator : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayMutator");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayMutator_AILevelVariance
// 0x0008 (0x0398 - 0x0390)
class AFortGameplayMutator_AILevelVariance : public AFortGameplayMutator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayMutator_AILevelVariance");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayTagVolume
// 0x0028 (0x03E8 - 0x03C0)
class AFortGameplayTagVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayTagVolume");
		return ptr;
	}

};


// Class FortniteGame.FortGameSession
// 0x00F0 (0x0490 - 0x03A0)
class AFortGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x03A0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameSession");
		return ptr;
	}

};


// Class FortniteGame.FortGameSessionDedicated
// 0x0300 (0x0790 - 0x0490)
class AFortGameSessionDedicated : public AFortGameSession
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0490(0x00C0) MISSED OFFSET
	float                                              HotfixCheckTimer;                                         // 0x0550(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HotfixCheckVariance;                                      // 0x0554(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0558(0x0068) MISSED OFFSET
	float                                              ConsoleSessionRetryWaitSeconds;                           // 0x05C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x54];                                      // 0x05C4(0x0054) MISSED OFFSET
	float                                              IdleResetShortTimer;                                      // 0x0618(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x84];                                      // 0x061C(0x0084) MISSED OFFSET
	float                                              ReconnectToMMSDelay;                                      // 0x06A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxReconnectToMMSDelay;                                   // 0x06A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	struct FString                                     MMSVersionCompatability;                                  // 0x06B0(0x0010) (ZeroConstructor, Config)
	struct FString                                     MMSTicketURLServer;                                       // 0x06C0(0x0010) (ZeroConstructor, Config)
	float                                              MMSPingInterval;                                          // 0x06D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0xBC];                                      // 0x06D4(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameSessionDedicated");
		return ptr;
	}

};


// Class FortniteGame.FortGameStateFrontEnd
// 0x0000 (0x0840 - 0x0840)
class AFortGameStateFrontEnd : public AFortGameState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStateFrontEnd");
		return ptr;
	}

};


// Class FortniteGame.FortGameStateZone
// 0x09E0 (0x1220 - 0x0840)
class AFortGameStateZone : public AFortGameState
{
public:
	unsigned char                                      UnknownData00[0x9E0];                                     // 0x0840(0x09E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStateZone");
		return ptr;
	}

};


// Class FortniteGame.FortGameStateDeployableBase
// 0x0040 (0x1260 - 0x1220)
class AFortGameStateDeployableBase : public AFortGameStateZone
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x1220(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStateDeployableBase");
		return ptr;
	}

};


// Class FortniteGame.FortGameStateFOB
// 0x0010 (0x1230 - 0x1220)
class AFortGameStateFOB : public AFortGameStateZone
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStateFOB");
		return ptr;
	}

};


// Class FortniteGame.FortGameStateKeep
// 0x0050 (0x1270 - 0x1220)
class AFortGameStateKeep : public AFortGameStateZone
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x1220(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStateKeep");
		return ptr;
	}

};


// Class FortniteGame.FortGameStateManor
// 0x0060 (0x1280 - 0x1220)
class AFortGameStateManor : public AFortGameStateZone
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x1220(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStateManor");
		return ptr;
	}

};


// Class FortniteGame.FortGameStateOutpost
// 0x0000 (0x1220 - 0x1220)
class AFortGameStateOutpost : public AFortGameStateZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStateOutpost");
		return ptr;
	}

};


// Class FortniteGame.FortGameStatePvP
// 0x0130 (0x1350 - 0x1220)
class AFortGameStatePvP : public AFortGameStateZone
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x1220(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStatePvP");
		return ptr;
	}

};


// Class FortniteGame.FortGameStateAthena
// 0x01A0 (0x14F0 - 0x1350)
class AFortGameStateAthena : public AFortGameStatePvP
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x1350(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStateAthena");
		return ptr;
	}

};


// Class FortniteGame.FortGameStatePvPBaseDestruction
// 0x00F0 (0x1440 - 0x1350)
class AFortGameStatePvPBaseDestruction : public AFortGameStatePvP
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x1350(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStatePvPBaseDestruction");
		return ptr;
	}

};


// Class FortniteGame.FortGameStateSurvival
// 0x0000 (0x1220 - 0x1220)
class AFortGameStateSurvival : public AFortGameStateZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameStateSurvival");
		return ptr;
	}


	void SetGameDifficultyRow(const struct FDataTableRowHandle& GameDifficultyInfo);
};


// Class FortniteGame.FortGameUserSettings
// 0x00B8 (0x01C0 - 0x0108)
class UFortGameUserSettings : public UGameUserSettings
{
public:
	float                                              MouseSensitivity;                                         // 0x0108(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                FortVersion;                                              // 0x010C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0110(0x0070) MISSED OFFSET
	bool                                               UnlockConsoleFPS;                                         // 0x0180(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0181(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameUserSettings");
		return ptr;
	}

};


// Class FortniteGame.FortGameViewportClient
// 0x00A0 (0x0610 - 0x0570)
class UFortGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0570(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameViewportClient");
		return ptr;
	}

};


// Class FortniteGame.FortDeployableBaseRecord
// 0x0018 (0x00E8 - 0x00D0)
class UFortDeployableBaseRecord : public UFortGenericRecord
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeployableBaseRecord");
		return ptr;
	}

};


// Class FortniteGame.FortGlobalAbilityTargetingActor
// 0x0000 (0x0388 - 0x0388)
class AFortGlobalAbilityTargetingActor : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGlobalAbilityTargetingActor");
		return ptr;
	}

};


// Class FortniteGame.FortGlobalEnvironmentAbilityActor
// 0x0018 (0x03A0 - 0x0388)
class AFortGlobalEnvironmentAbilityActor : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	class UFortAbilitySystemComponent*                 AbilitySystemComponent;                                   // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGlobalEnvironmentAbilityActor");
		return ptr;
	}

};


// Class FortniteGame.FortHealthBarComponent
// 0x0050 (0x02E0 - 0x0290)
class UFortHealthBarComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0290(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHealthBarComponent");
		return ptr;
	}

};


// Class FortniteGame.FortHexMapMarkerBase
// 0x0020 (0x03A8 - 0x0388)
class AFortHexMapMarkerBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0388(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHexMapMarkerBase");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseNodeGameplayEffectDataTable
// 0x0010 (0x0098 - 0x0088)
class UFortHomebaseNodeGameplayEffectDataTable : public UDataTable
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseNodeGameplayEffectDataTable");
		return ptr;
	}

};


// Class FortniteGame.FortHomeTeleporterInterface
// 0x0000 (0x0028 - 0x0028)
class UFortHomeTeleporterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomeTeleporterInterface");
		return ptr;
	}


	void OnHomeTeleporterUnboundServer();
	void OnHomeTeleporterUnbound();
	void OnHomeTeleporterBoundServer();
	void OnHomeTeleporterBound();
};


// Class FortniteGame.FortHotfixManager
// 0x0000 (0x03D0 - 0x03D0)
class UFortHotfixManager : public UOnlineHotfixManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHotfixManager");
		return ptr;
	}

};


// Class FortniteGame.FortMiniMapPingIndicator
// 0x0080 (0x03A0 - 0x0320)
class UFortMiniMapPingIndicator : public UFortMiniMapIndicator
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0320(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMiniMapPingIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortDamageMiniMapIndicator
// 0x0000 (0x03A0 - 0x03A0)
class UFortDamageMiniMapIndicator : public UFortMiniMapPingIndicator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDamageMiniMapIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortVolumeMiniMapIndicator
// 0x0030 (0x0350 - 0x0320)
class UFortVolumeMiniMapIndicator : public UFortMiniMapIndicator
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0320(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortVolumeMiniMapIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortSlateHUDIndicator
// 0x0038 (0x0088 - 0x0050)
class UFortSlateHUDIndicator : public UFortIndicator
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSlateHUDIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortHealthBarIndicator
// 0x0078 (0x0100 - 0x0088)
class UFortHealthBarIndicator : public UFortSlateHUDIndicator
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0088(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHealthBarIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortMissionInfoIndicator
// 0x0068 (0x00F0 - 0x0088)
class UFortMissionInfoIndicator : public UFortSlateHUDIndicator
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0088(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionInfoIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortSpottedActorIndicator
// 0x0008 (0x0090 - 0x0088)
class UFortSpottedActorIndicator : public UFortSlateHUDIndicator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSpottedActorIndicator");
		return ptr;
	}

};


// Class FortniteGame.FortIndicatorManager
// 0x0018 (0x0040 - 0x0028)
class UFortIndicatorManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortIndicatorManager");
		return ptr;
	}

};


// Class FortniteGame.FortNavigationGraph
// 0x0178 (0x06A0 - 0x0528)
class AFortNavigationGraph : public ANavigationData
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0528(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavigationGraph");
		return ptr;
	}

};


// Class FortniteGame.FortNavSystem
// 0x01D0 (0x0630 - 0x0460)
class UFortNavSystem : public UNavigationSystem
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0460(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavSystem");
		return ptr;
	}

};


// Class FortniteGame.FortInescapableZoneTracker
// 0x0040 (0x0068 - 0x0028)
class UFortInescapableZoneTracker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInescapableZoneTracker");
		return ptr;
	}

};


// Class FortniteGame.FortInfluenceMap
// 0x00D0 (0x00F8 - 0x0028)
class UFortInfluenceMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInfluenceMap");
		return ptr;
	}

};


// Class FortniteGame.FortInGameMapManager
// 0x0160 (0x04E8 - 0x0388)
class AFortInGameMapManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0388(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInGameMapManager");
		return ptr;
	}

};


// Class FortniteGame.FortInGameMapManagerAthena
// 0x0008 (0x04F0 - 0x04E8)
class AFortInGameMapManagerAthena : public AFortInGameMapManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInGameMapManagerAthena");
		return ptr;
	}

};


// Class FortniteGame.FortInitializeFromObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UFortInitializeFromObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInitializeFromObjectInterface");
		return ptr;
	}


	void InitFromObject();
};


// Class FortniteGame.FortIntensityCurveSequenceProgression
// 0x0010 (0x0038 - 0x0028)
class UFortIntensityCurveSequenceProgression : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortIntensityCurveSequenceProgression");
		return ptr;
	}

};


// Class FortniteGame.FortInteractContextInfo
// 0x0048 (0x0070 - 0x0028)
class UFortInteractContextInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortInteractContextInfo");
		return ptr;
	}

};


// Class FortniteGame.AthenaGliderItem
// 0x0000 (0x0140 - 0x0140)
class UAthenaGliderItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaGliderItem");
		return ptr;
	}

};


// Class FortniteGame.FortAccountBuffCreditItem
// 0x0000 (0x0140 - 0x0140)
class UFortAccountBuffCreditItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAccountBuffCreditItem");
		return ptr;
	}

};


// Class FortniteGame.FortAccountBuffItem
// 0x0000 (0x0140 - 0x0140)
class UFortAccountBuffItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAccountBuffItem");
		return ptr;
	}

};


// Class FortniteGame.FortAlterableItemDefinition
// 0x0010 (0x02B0 - 0x02A0)
class UFortAlterableItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAlterableItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortAlterableItem
// 0x0030 (0x0170 - 0x0140)
class UFortAlterableItem : public UFortAccountItem
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0140(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAlterableItem");
		return ptr;
	}

};


// Class FortniteGame.FortSchematicItemDefinition
// 0x00A0 (0x0350 - 0x02B0)
class UFortSchematicItemDefinition : public UFortAlterableItemDefinition
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x02B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSchematicItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortSchematicItem
// 0x0060 (0x01D0 - 0x0170)
class UFortSchematicItem : public UFortAlterableItem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0170(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSchematicItem");
		return ptr;
	}

};


// Class FortniteGame.FortAlterationItem
// 0x0000 (0x0140 - 0x0140)
class UFortAlterationItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAlterationItem");
		return ptr;
	}


	void GetAlterationDefinitionBP();
};


// Class FortniteGame.FortCardPackItemDefinition
// 0x0080 (0x0320 - 0x02A0)
class UFortCardPackItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x02A0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCardPackItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortCardPackItem
// 0x0020 (0x0160 - 0x0140)
class UFortCardPackItem : public UFortAccountItem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0140(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCardPackItem");
		return ptr;
	}

};


// Class FortniteGame.FortDefenderItemDefinition
// 0x0060 (0x0300 - 0x02A0)
class UFortDefenderItemDefinition : public UFortCharacterType
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDefenderItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortDefenderItem
// 0x0040 (0x0190 - 0x0150)
class UFortDefenderItem : public UFortCharacter
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0150(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDefenderItem");
		return ptr;
	}

};


// Class FortniteGame.FortCharacterCosmeticItemDefinition
// 0x0040 (0x02E0 - 0x02A0)
class UFortCharacterCosmeticItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCharacterCosmeticItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortCharacterCosmeticItem
// 0x0010 (0x0150 - 0x0140)
class UFortCharacterCosmeticItem : public UFortAccountItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCharacterCosmeticItem");
		return ptr;
	}

};


// Class FortniteGame.FortCodeTokenItemDefinition
// 0x0030 (0x02D0 - 0x02A0)
class UFortCodeTokenItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCodeTokenItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortCodeTokenItem
// 0x0000 (0x0140 - 0x0140)
class UFortCodeTokenItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCodeTokenItem");
		return ptr;
	}

};


// Class FortniteGame.FortCollectedResourceItem
// 0x0020 (0x0160 - 0x0140)
class UFortCollectedResourceItem : public UFortAccountItem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0140(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCollectedResourceItem");
		return ptr;
	}

};


// Class FortniteGame.FortCompendiumBundle
// 0x0000 (0x0140 - 0x0140)
class UFortCompendiumBundle : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCompendiumBundle");
		return ptr;
	}


	void GetPercentageComplete();
	void GetCompendiumBundleDefinitionBP();
	void GetAchievedCount();
};


// Class FortniteGame.FortCompendiumItem
// 0x0000 (0x0140 - 0x0140)
class UFortCompendiumItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCompendiumItem");
		return ptr;
	}


	void GetPercentageComplete();
	void GetCompendiumDefinitionBP();
	void GetAchievedCount();
};


// Class FortniteGame.FortConsumableAccountItem
// 0x0000 (0x0140 - 0x0140)
class UFortConsumableAccountItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConsumableAccountItem");
		return ptr;
	}


	void CanActivateOnSelf();
	void CanActivateOnOthers();
};


// Class FortniteGame.FortCurrencyItem
// 0x0000 (0x0140 - 0x0140)
class UFortCurrencyItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCurrencyItem");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseBannerColorItem
// 0x0000 (0x0140 - 0x0140)
class UFortHomebaseBannerColorItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseBannerColorItem");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseBannerIconItem
// 0x0000 (0x0140 - 0x0140)
class UFortHomebaseBannerIconItem : public UFortAccountItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseBannerIconItem");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseNodeItem
// 0x0020 (0x0160 - 0x0140)
class UFortHomebaseNodeItem : public UFortAccountItem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0140(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseNodeItem");
		return ptr;
	}

};


// Class FortniteGame.FortQuestItem
// 0x00A0 (0x01E0 - 0x0140)
class UFortQuestItem : public UFortAccountItem
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0140(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuestItem");
		return ptr;
	}

};


// Class FortniteGame.FortQuotaItemDefinition
// 0x0010 (0x02B0 - 0x02A0)
class UFortQuotaItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuotaItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortQuotaItem
// 0x0030 (0x0170 - 0x0140)
class UFortQuotaItem : public UFortAccountItem
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0140(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuotaItem");
		return ptr;
	}

};


// Class FortniteGame.FortMetadataItem
// 0x0040 (0x0110 - 0x00D0)
class UFortMetadataItem : public UFortItem
{
public:
	int                                                Level;                                                    // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00D4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMetadataItem");
		return ptr;
	}

};


// Class FortniteGame.FortCloudSaveItem
// 0x0010 (0x0120 - 0x0110)
class UFortCloudSaveItem : public UFortMetadataItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCloudSaveItem");
		return ptr;
	}

};


// Class FortniteGame.FortDeployableBaseCloudSaveItem
// 0x0010 (0x0130 - 0x0120)
class UFortDeployableBaseCloudSaveItem : public UFortCloudSaveItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeployableBaseCloudSaveItem");
		return ptr;
	}

};


// Class FortniteGame.FortOutpostItem
// 0x0020 (0x0140 - 0x0120)
class UFortOutpostItem : public UFortCloudSaveItem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOutpostItem");
		return ptr;
	}

};


// Class FortniteGame.FortWorldItem
// 0x01E0 (0x02B0 - 0x00D0)
class UFortWorldItem : public UFortItem
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x00D0(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorldItem");
		return ptr;
	}

};


// Class FortniteGame.FortItemCategory
// 0x0030 (0x0058 - 0x0028)
class UFortItemCategory : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemCategory");
		return ptr;
	}

};


// Class FortniteGame.AthenaCosmeticItemDefinition
// 0x0020 (0x02C0 - 0x02A0)
class UAthenaCosmeticItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaCosmeticItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaBackpackItemDefinition
// 0x0000 (0x02C0 - 0x02C0)
class UAthenaBackpackItemDefinition : public UAthenaCosmeticItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaBackpackItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaBattleBusItemDefinition
// 0x0020 (0x02E0 - 0x02C0)
class UAthenaBattleBusItemDefinition : public UAthenaCosmeticItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaBattleBusItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaCharacterItemDefinition
// 0x0000 (0x02C0 - 0x02C0)
class UAthenaCharacterItemDefinition : public UAthenaCosmeticItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaCharacterItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaGliderItemDefinition
// 0x0070 (0x0330 - 0x02C0)
class UAthenaGliderItemDefinition : public UAthenaCosmeticItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaGliderItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaHatItemDefinition
// 0x0000 (0x02C0 - 0x02C0)
class UAthenaHatItemDefinition : public UAthenaCosmeticItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaHatItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaLoadingScreenItemDefinition
// 0x0020 (0x02E0 - 0x02C0)
class UAthenaLoadingScreenItemDefinition : public UAthenaCosmeticItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaLoadingScreenItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortWeaponMeleeItemDefinition
// 0x0000 (0x0650 - 0x0650)
class UFortWeaponMeleeItemDefinition : public UFortWeaponItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponMeleeItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaPickaxeItemDefinition
// 0x0000 (0x02C0 - 0x02C0)
class UAthenaPickaxeItemDefinition : public UAthenaCosmeticItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaPickaxeItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaMedalItemDefinition
// 0x0000 (0x02A0 - 0x02A0)
class UAthenaMedalItemDefinition : public UFortAccountItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaMedalItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortAccountBuffItemDefinition
// 0x0010 (0x02B0 - 0x02A0)
class UFortAccountBuffItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAccountBuffItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortCollectedResourceItemDefinition
// 0x0000 (0x02A0 - 0x02A0)
class UFortCollectedResourceItemDefinition : public UFortAccountItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCollectedResourceItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortCompendiumItemDefinition
// 0x0020 (0x02C0 - 0x02A0)
class UFortCompendiumItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCompendiumItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortCompendiumBundleDefinition
// 0x0020 (0x02C0 - 0x02A0)
class UFortCompendiumBundleDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCompendiumBundleDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortConsumableAccountItemDefinition
// 0x0010 (0x02B0 - 0x02A0)
class UFortConsumableAccountItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConsumableAccountItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortAccountBuffCreditItemDefinition
// 0x0020 (0x02D0 - 0x02B0)
class UFortAccountBuffCreditItemDefinition : public UFortConsumableAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAccountBuffCreditItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortConversionControlItemDefinition
// 0x0040 (0x02E0 - 0x02A0)
class UFortConversionControlItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConversionControlItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortCurrencyItemDefinition
// 0x0000 (0x02A0 - 0x02A0)
class UFortCurrencyItemDefinition : public UFortAccountItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCurrencyItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortGameplayModifierItemDefinition
// 0x0030 (0x02D0 - 0x02A0)
class UFortGameplayModifierItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayModifierItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseBannerColorItemDefinition
// 0x0000 (0x02A0 - 0x02A0)
class UFortHomebaseBannerColorItemDefinition : public UFortAccountItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseBannerColorItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortHomebaseNodeItemDefinition
// 0x0000 (0x02A0 - 0x02A0)
class UFortHomebaseNodeItemDefinition : public UFortAccountItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseNodeItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortMontageItemDefinitionBase
// 0x0020 (0x02C0 - 0x02A0)
class UFortMontageItemDefinitionBase : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMontageItemDefinitionBase");
		return ptr;
	}

};


// Class FortniteGame.AthenaConsumableEmoteItemDefinition
// 0x0000 (0x02C0 - 0x02C0)
class UAthenaConsumableEmoteItemDefinition : public UFortMontageItemDefinitionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaConsumableEmoteItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaDanceItemDefinition
// 0x0000 (0x02C0 - 0x02C0)
class UAthenaDanceItemDefinition : public UFortMontageItemDefinitionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaDanceItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.AthenaVictoryPoseItemDefinition
// 0x0000 (0x02C0 - 0x02C0)
class UAthenaVictoryPoseItemDefinition : public UFortMontageItemDefinitionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.AthenaVictoryPoseItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortEmoteItemDefinition
// 0x0020 (0x02E0 - 0x02C0)
class UFortEmoteItemDefinition : public UFortMontageItemDefinitionBase
{
public:
	struct FText                                       CommandName;                                              // 0x02C0(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortEmoteItemDefinition");
		return ptr;
	}


	void GetCommandName();
};


// Class FortniteGame.FortPersistentResourceItemDefinition
// 0x0010 (0x02B0 - 0x02A0)
class UFortPersistentResourceItemDefinition : public UFortAccountItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPersistentResourceItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortAmmoItemDefinition
// 0x0400 (0x0840 - 0x0440)
class UFortAmmoItemDefinition : public UFortWorldItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x400];                                     // 0x0440(0x0400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAmmoItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortBackpackItemDefinition
// 0x0000 (0x0440 - 0x0440)
class UFortBackpackItemDefinition : public UFortWorldItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBackpackItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortBadgeItemDefinition
// 0x0080 (0x04C0 - 0x0440)
class UFortBadgeItemDefinition : public UFortWorldItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0440(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBadgeItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortConsumableItemDefinition
// 0x0040 (0x0480 - 0x0440)
class UFortConsumableItemDefinition : public UFortWorldItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0440(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConsumableItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortGadgetItemDefinition
// 0x0090 (0x04D0 - 0x0440)
class UFortGadgetItemDefinition : public UFortWorldItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	TAssetPtr<class UClass>                            GameplayAbility;                                          // 0x0448(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0468(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGadgetItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortIngredientItemDefinition
// 0x0000 (0x0440 - 0x0440)
class UFortIngredientItemDefinition : public UFortWorldItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortIngredientItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortMissionItemDefinition
// 0x0000 (0x0440 - 0x0440)
class UFortMissionItemDefinition : public UFortWorldItemDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortResourceItemDefinition
// 0x0010 (0x0450 - 0x0440)
class UFortResourceItemDefinition : public UFortWorldItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortResourceItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortBuildingItemDefinition
// 0x0020 (0x0670 - 0x0650)
class UFortBuildingItemDefinition : public UFortWeaponItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0650(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBuildingItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortDecoItemDefinition
// 0x0060 (0x06B0 - 0x0650)
class UFortDecoItemDefinition : public UFortWeaponItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0650(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDecoItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortFOBCoreDecoItemDefinition
// 0x0040 (0x06F0 - 0x06B0)
class UFortFOBCoreDecoItemDefinition : public UFortDecoItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x06B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortFOBCoreDecoItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortTrapItemDefinition
// 0x0010 (0x06C0 - 0x06B0)
class UFortTrapItemDefinition : public UFortDecoItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTrapItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortContextTrapItemDefinition
// 0x0020 (0x06E0 - 0x06C0)
class UFortContextTrapItemDefinition : public UFortTrapItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x06C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortContextTrapItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortWeaponRangedItemDefinition
// 0x0050 (0x06A0 - 0x0650)
class UFortWeaponRangedItemDefinition : public UFortWeaponItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0650(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponRangedItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortJumpDownLink
// 0x0000 (0x03D8 - 0x03D8)
class AFortJumpDownLink : public ANavLinkProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortJumpDownLink");
		return ptr;
	}

};


// Class FortniteGame.FortKeepEventInfo
// 0x0028 (0x0050 - 0x0028)
class UFortKeepEventInfo : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortKeepEventInfo");
		return ptr;
	}

};


// Class FortniteGame.FortKeepEventList
// 0x0010 (0x0038 - 0x0028)
class UFortKeepEventList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortKeepEventList");
		return ptr;
	}

};


// Class FortniteGame.FortKeepDefenseManager
// 0x00D0 (0x0458 - 0x0388)
class AFortKeepDefenseManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0388(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortKeepDefenseManager");
		return ptr;
	}

};


// Class FortniteGame.FortKeepItemManager
// 0x0320 (0x0348 - 0x0028)
class UFortKeepItemManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x0028(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortKeepItemManager");
		return ptr;
	}

};


// Class FortniteGame.FortKismetLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortKismetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortKismetLibrary");
		return ptr;
	}


	void STATIC_VectorToNormalizedAngleInDegrees(const struct FVector& V);
	void STATIC_UnhideTutorialWidget();
	void STATIC_UnhideAllTutorialWidgets();
	void STATIC_UnequipFortAbilitySet();
	void STATIC_TriggerFeedbackEvent();
	void STATIC_SwitchHeroType();
	void STATIC_SpawnTracerFromPool();
	void STATIC_SpawnProjectile();
	void STATIC_SpawnBuildingGameplayActor();
	void STATIC_SpawnAreaOfEffectCloud();
	void STATIC_ShouldHideTutorialWidget();
	void STATIC_SetTimeOfDaySpeed();
	void STATIC_SetTimeOfDay();
	void STATIC_SetCanBeDamaged(class AActor* Actor);
	void STATIC_SelectMaterialInstance(class UMaterialInstance* A, class UMaterialInstance* B);
	void STATIC_RemoveActorsOfClassFromBuildingSMActorArray();
	void STATIC_RegisterDayTimeHitCallback(class UObject* Object);
	void STATIC_RegisterDayPhaseHitCallback(class UObject* Object);
	void STATIC_PushOffTransformByHitLocation();
	void STATIC_PushOffHitLocation();
	void STATIC_PlayLocalForceFeedbackAtLocationMulti();
	void STATIC_PlayLocalForceFeedbackAtLocation();
	void STATIC_PickLootDrops();
	void STATIC_OpenTalkingHead();
	void STATIC_OnSameTeam();
	void STATIC_NotEqual_UniqueNetIdReplUniqueNetIdRepl(const struct FUniqueNetIdRepl& A, const struct FUniqueNetIdRepl& B);
	void STATIC_NotEqual_FFortDialogWaitingForLatentActionHandle(const struct FFortDialogExternalLatentActionHandle& A, const struct FFortDialogExternalLatentActionHandle& B);
	void STATIC_NormalizedAngleInDegreesToVector(float A);
	void STATIC_MakeWeaponCoreAnimation();
	void STATIC_MakeResourceType();
	void STATIC_MakeMovementStyle();
	void STATIC_MakeGameplayEffectContainerSpecFromAbilityComponent();
	void STATIC_MakeGameplayEffectContainerSpecFromAbility();
	void STATIC_MakeDayNightPhase();
	void STATIC_MakeBuildingState();
	void STATIC_MakeAllPlayersTalkToSelf();
	void STATIC_K2_SpawnPickupInWorld();
	void STATIC_K2_RemoveItemFromPlayer(class AFortPlayerController* PlayerController);
	void STATIC_K2_RemoveItemFromAllPlayers();
	void STATIC_K2_GiveItemToPlayer(class AFortPlayerController* PlayerController);
	void STATIC_K2_GiveItemToAllPlayers();
	void STATIC_K2_GetItemQuantityOnPlayer(class AFortPlayerController* PlayerController);
	void STATIC_K2_GetClosestAxisXY();
	void STATIC_JonLHack_GetAllObjectsOfClassFromPath();
	void STATIC_IsValid_UniqueNetIdRepl();
	void STATIC_IsValid(const struct FAttributeInfo& AttributeInfo);
	void STATIC_IsLinkingStreamedAccountsEnabled();
	void STATIC_IsLatentActionHandleValid();
	void STATIC_IsFullBodyHit();
	void STATIC_IsFatalHit();
	void STATIC_IsCriticalHit();
	void STATIC_IsConsolePlatform();
	void STATIC_IsAssetNull();
	void STATIC_InvalidateLatentActionHandle();
	void STATIC_HideTutorialWidget();
	void STATIC_HasSelectableRewards();
	void STATIC_HasRewards();
	void STATIC_HasOpenBroadcasterGrantWindow();
	void STATIC_HasMultipleVisibleRewards();
	void STATIC_GiveItemToInventoryOwner();
	void STATIC_GetWeaponStatsRow(const struct FDataTableRowHandle& DataTableRowHandle);
	void STATIC_GetWeaponDurabilityByRarityStatsRow(const struct FDataTableRowHandle& DataTableRowHandle);
	void STATIC_GetTrapStatsRow(const struct FDataTableRowHandle& DataTableRowHandle);
	void STATIC_GetTooltipTextFromTokenFromTooltipClass();
	void STATIC_GetTooltipTextFromToken();
	void STATIC_GetTooltipNumericValueFromTooltipClass();
	void STATIC_GetTooltipNumericValue();
	void STATIC_GetTooltipDescriptionFromTooltipClass();
	void STATIC_GetTooltipDescription();
	void STATIC_GetTimeUntilInRealTimeSeconds();
	void STATIC_GetTimeOfDaySpeed();
	void STATIC_GetTimeOfDayAccumulator();
	void STATIC_GetTimeOfDay();
	void STATIC_GetTimeDayPhaseBegins();
	void STATIC_GetThreatVisualsManager();
	void STATIC_GetTeamInfo();
	void STATIC_GetTeamAffiliationBetweenTeams();
	void STATIC_GetTeamAffiliation();
	void STATIC_GetStunTime();
	void STATIC_GetShowHeroHeadAccessoriesForLocalPlayer();
	void STATIC_GetShowHeroBackpackForLocalPlayer();
	void STATIC_GetRemovedAbilityKit();
	void STATIC_GetRangedWeaponStatsRow(const struct FDataTableRowHandle& DataTableRowHandle);
	void STATIC_GetRandomSurvivorName();
	void STATIC_GetRandomLiveStreamingViewerName();
	void STATIC_GetPrimaryInstance();
	void STATIC_GetPreviousDayPhase();
	void STATIC_GetPlayerInfoFromUniqueID();
	void STATIC_GetPawnStatsRow(const struct FDataTableRowHandle& DataTableRowHandle);
	void STATIC_GetNumericCVar();
	void STATIC_GetMusicManager();
	void STATIC_GetMIDForSkeletalMeshComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
	void STATIC_GetMeleeWeaponStatsRow(const struct FDataTableRowHandle& DataTableRowHandle);
	void STATIC_GetMatchmakingDifficultyRangeFromDifficultyInfo();
	void STATIC_GetLootLevel();
	void STATIC_GetLocalPlayerHasHeroHeadAccessories();
	void STATIC_GetLocalPlayerHasHeroBackpack();
	void STATIC_GetLocalFortPlayerControllers();
	void STATIC_GetImpulseData();
	void STATIC_GetHumanReadableName(class AActor* Actor);
	void STATIC_GetHoursUntilDayPhase();
	void STATIC_GetHostilityPercentage();
	void STATIC_GetGrantedAbilityKit();
	void STATIC_GetGameDifficulty();
	void STATIC_GetFortPlayerPawns();
	void STATIC_GetFortPhysicalSurface();
	void STATIC_GetFloatHoursUntilDayPhase();
	void STATIC_GetDirectionActorToActor();
	void STATIC_GetDefaultAbsoluteTimeOfDaySpeed();
	void STATIC_GetDebugStringForUniqueId();
	void STATIC_GetDayNightDirectionalLightVector();
	void STATIC_GetDayNightDirectionalLightColor();
	void STATIC_GetCurrentDayPhase();
	void STATIC_GetClosestFortPlayerPawn();
	void STATIC_GetClosestBuildingActorFromArray(class AActor* Actor);
	void STATIC_GetClosestActorFromArray(class AActor* Actor);
	void STATIC_GetCalculatedGameDifficulty();
	void STATIC_GetBuildingStructuralSupportSystem();
	void STATIC_GetBuildingHealthPercentage(class ABuildingActor* BuildingActor);
	void STATIC_GetBroadcasterGrantWindowSecondsRemaining();
	void STATIC_GetAllFortPlayerPawns();
	void STATIC_GetAllFortPlayerControllers();
	void STATIC_GetAIGoalManager();
	void STATIC_GetAIDirector();
	void STATIC_GetActorTeamInfo(class AActor* Actor);
	void STATIC_GetActorTeam(class AActor* Actor);
	void STATIC_FilterTargetHitResultList();
	void STATIC_FilterTargetActorList();
	void STATIC_FilterSingleTargetHitResult();
	void STATIC_FilterSingleTargetActor();
	void STATIC_ExecuteClientEvent();
	void STATIC_EvaluateCurveTableRow(const struct FCurveTableRowHandle& CurveTableRowHandle);
	void STATIC_EquipItemToQuickBarSlot();
	void STATIC_EquipFortAbilitySet();
	void STATIC_EqualEqual_UniqueNetIdReplUniqueNetIdRepl(const struct FUniqueNetIdRepl& A, const struct FUniqueNetIdRepl& B);
	void STATIC_EqualEqual_FFortDialogWaitingForLatentActionHandle(const struct FFortDialogExternalLatentActionHandle& A, const struct FFortDialogExternalLatentActionHandle& B);
	void STATIC_EndWaitForConfirmationDialog();
	void STATIC_EnableTutorialHighlight();
	void STATIC_EmptyQuickBarSlot();
	void STATIC_EffectContextAddSourceObject();
	void STATIC_DisableTutorialHighlight();
	void STATIC_CreateNewSplineObject(class UObject* Outer);
	void STATIC_ConvertToRealTime();
	void STATIC_ConvertToGameTime();
	void STATIC_CloseTalkingHead();
	void STATIC_ClearTutorialHighlights();
	void STATIC_BroadcastSoundAtLocation();
	void STATIC_BroadcastSound();
	void STATIC_BroadcastPlayerImpactAtLocation();
	void STATIC_BroadcastMessage();
	void STATIC_AuthorityGetFortPossessedPlayerPawns();
	void STATIC_ApplyGlobalEnvironmentGameplayEffectToActor();
	void STATIC_ApplyGlobalEnvironmentDamageToActor();
	void STATIC_ApplyEncounterOptionOverridesFromWaveDataToEncounterSettings();
};


// Class FortniteGame.FortLeaderboardRowProxyInstance
// 0x0038 (0x0060 - 0x0028)
class UFortLeaderboardRowProxyInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLeaderboardRowProxyInstance");
		return ptr;
	}

};


// Class FortniteGame.FortLevelScriptActor
// 0x0010 (0x03A0 - 0x0390)
class AFortLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLevelScriptActor");
		return ptr;
	}

};


// Class FortniteGame.FortLinkedAccount
// 0x0008 (0x0030 - 0x0028)
class UFortLinkedAccount : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLinkedAccount");
		return ptr;
	}

};


// Class FortniteGame.FortLinkedAccountManager
// 0x0018 (0x0040 - 0x0028)
class UFortLinkedAccountManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLinkedAccountManager");
		return ptr;
	}

};


// Class FortniteGame.FortMcpResource
// 0x0018 (0x0040 - 0x0028)
class UFortMcpResource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpResource");
		return ptr;
	}

};


// Class FortniteGame.FortMcpTwitch
// 0x0000 (0x0040 - 0x0040)
class UFortMcpTwitch : public UFortMcpResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpTwitch");
		return ptr;
	}

};


// Class FortniteGame.FortTwitchAccount
// 0x02D0 (0x0300 - 0x0030)
class UFortTwitchAccount : public UFortLinkedAccount
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0030(0x02D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTwitchAccount");
		return ptr;
	}


	void HandleQuestsUpdated();
};


// Class FortniteGame.FortLobbyBeaconClient
// 0x0000 (0x05E0 - 0x05E0)
class AFortLobbyBeaconClient : public ALobbyBeaconClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconClient");
		return ptr;
	}


	void ServerTeamChatRoomReady();
	void ServerSetMatchmakingLevel();
	void ServerSetHeroType();
	void ServerSetHeroSquadId();
	void ServerSetHeroId();
	void ServerSetGadget();
	void ServerSetCurrentCharacterXp();
	void ServerSetConsoleUniqueNetId();
	void ServerSetCharacterGender();
	void ServerIncrementHomeBaseVersion();
	void ClientCreateOrJoinChatRoom();
};


// Class FortniteGame.FortLobbyBeaconClientPvE
// 0x0000 (0x05E0 - 0x05E0)
class AFortLobbyBeaconClientPvE : public AFortLobbyBeaconClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconClientPvE");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconClientPvP
// 0x0070 (0x0650 - 0x05E0)
class AFortLobbyBeaconClientPvP : public AFortLobbyBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x05E0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconClientPvP");
		return ptr;
	}


	void ServerReadyUp();
};


// Class FortniteGame.FortLobbyBeaconClientRM
// 0x0030 (0x0610 - 0x05E0)
class AFortLobbyBeaconClientRM : public AFortLobbyBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x05E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconClientRM");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconHost
// 0x0018 (0x03F8 - 0x03E0)
class AFortLobbyBeaconHost : public ALobbyBeaconHost
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconHost");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconHostPvE
// 0x0000 (0x03F8 - 0x03F8)
class AFortLobbyBeaconHostPvE : public AFortLobbyBeaconHost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconHostPvE");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconHostOutpost
// 0x0000 (0x03F8 - 0x03F8)
class AFortLobbyBeaconHostOutpost : public AFortLobbyBeaconHostPvE
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconHostOutpost");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconHostPvP
// 0x0000 (0x03F8 - 0x03F8)
class AFortLobbyBeaconHostPvP : public AFortLobbyBeaconHost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconHostPvP");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconHostRM
// 0x0000 (0x03F8 - 0x03F8)
class AFortLobbyBeaconHostRM : public AFortLobbyBeaconHost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconHostRM");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconPlayerState
// 0x01D0 (0x0690 - 0x04C0)
class AFortLobbyBeaconPlayerState : public ALobbyBeaconPlayerState
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x04C0(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconPlayerState");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconPlayerStatePvE
// 0x0000 (0x0690 - 0x0690)
class AFortLobbyBeaconPlayerStatePvE : public AFortLobbyBeaconPlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconPlayerStatePvE");
		return ptr;
	}

};


// Class FortniteGame.FortNeverPersistItemDefinition
// 0x0010 (0x0450 - 0x0440)
class UFortNeverPersistItemDefinition : public UFortWorldItemDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNeverPersistItemDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconPlayerStatePvP
// 0x0010 (0x06A0 - 0x0690)
class AFortLobbyBeaconPlayerStatePvP : public AFortLobbyBeaconPlayerState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconPlayerStatePvP");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconPlayerStateRM
// 0x0010 (0x06A0 - 0x0690)
class AFortLobbyBeaconPlayerStateRM : public AFortLobbyBeaconPlayerState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconPlayerStateRM");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconState
// 0x0090 (0x06D0 - 0x0640)
class AFortLobbyBeaconState : public ALobbyBeaconState
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0640(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconState");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconStatePvE
// 0x0000 (0x06D0 - 0x06D0)
class AFortLobbyBeaconStatePvE : public AFortLobbyBeaconState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconStatePvE");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconStateOutpost
// 0x0000 (0x06D0 - 0x06D0)
class AFortLobbyBeaconStateOutpost : public AFortLobbyBeaconStatePvE
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconStateOutpost");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconStatePvP
// 0x0010 (0x06E0 - 0x06D0)
class AFortLobbyBeaconStatePvP : public AFortLobbyBeaconState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconStatePvP");
		return ptr;
	}

};


// Class FortniteGame.FortLobbyBeaconStateRM
// 0x0010 (0x06E0 - 0x06D0)
class AFortLobbyBeaconStateRM : public AFortLobbyBeaconState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLobbyBeaconStateRM");
		return ptr;
	}

};


// Class FortniteGame.FortLocalPlayer
// 0x03E8 (0x05B0 - 0x01C8)
class UFortLocalPlayer : public ULocalPlayer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET
	class UFortOnlineAccount*                          FortOnlineAccount;                                        // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3D0];                                     // 0x01E0(0x03D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLocalPlayer");
		return ptr;
	}

};


// Class FortniteGame.FortLOSComponent
// 0x00B0 (0x01A0 - 0x00F0)
class UFortLOSComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00F0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortLOSComponent");
		return ptr;
	}

};


// Class FortniteGame.FortMarkActor
// 0x00E0 (0x0468 - 0x0388)
class AFortMarkActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0388(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMarkActor");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingPolicy
// 0x0158 (0x0180 - 0x0028)
class UFortMatchmakingPolicy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0028(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingPolicy");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmaking
// 0x0768 (0x0790 - 0x0028)
class UFortMatchmaking : public UObject
{
public:
	unsigned char                                      UnknownData00[0x768];                                     // 0x0028(0x0768) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmaking");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingContext
// 0x0180 (0x01A8 - 0x0028)
class UFortMatchmakingContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0028(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingContext");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingCommon
// 0x0010 (0x0190 - 0x0180)
class UFortMatchmakingCommon : public UFortMatchmakingPolicy
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingCommon");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingPvE
// 0x0000 (0x0190 - 0x0190)
class UFortMatchmakingPvE : public UFortMatchmakingCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingPvE");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingGather
// 0x0020 (0x01A0 - 0x0180)
class UFortMatchmakingGather : public UFortMatchmakingPolicy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0180(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingGather");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingMissionCommon
// 0x0010 (0x0190 - 0x0180)
class UFortMatchmakingMissionCommon : public UFortMatchmakingPolicy
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingMissionCommon");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingCriticalMission
// 0x0000 (0x0190 - 0x0190)
class UFortMatchmakingCriticalMission : public UFortMatchmakingMissionCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingCriticalMission");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingQuickPlay
// 0x0000 (0x0190 - 0x0190)
class UFortMatchmakingQuickPlay : public UFortMatchmakingMissionCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingQuickPlay");
		return ptr;
	}

};


// Class FortniteGame.FortPartyBeaconState
// 0x0080 (0x00F0 - 0x0070)
class UFortPartyBeaconState : public UPartyBeaconState
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPartyBeaconState");
		return ptr;
	}

};


// Class FortniteGame.FortSessionHelper
// 0x01B8 (0x01E0 - 0x0028)
class UFortSessionHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0028(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSessionHelper");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingSingleSession
// 0x0040 (0x01C0 - 0x0180)
class UFortMatchmakingSingleSession : public UFortMatchmakingPolicy
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0180(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingSingleSession");
		return ptr;
	}

};


// Class FortniteGame.FortMatchmakingV2
// 0x05D8 (0x0600 - 0x0028)
class UFortMatchmakingV2 : public UObject
{
public:
	struct FString                                     MMSVersionCompatability;                                  // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     MMSTicketURLClient;                                       // 0x0038(0x0010) (ZeroConstructor, Config)
	float                                              MMSPingInterval;                                          // 0x0048(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5B4];                                     // 0x004C(0x05B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMatchmakingV2");
		return ptr;
	}

};


// Class FortniteGame.FortMcpProfileCollectionBook
// 0x0000 (0x02E0 - 0x02E0)
class UFortMcpProfileCollectionBook : public UFortMcpProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpProfileCollectionBook");
		return ptr;
	}


	void UpgradeSlottedItem();
	void ConvertSlottedItem();
	void ClaimCollectionBookPageRewards();
};


// Class FortniteGame.FortMcpProfileWorld
// 0x0170 (0x0450 - 0x02E0)
class UFortMcpProfileWorld : public UFortMcpProfile
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x02E0(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpProfileWorld");
		return ptr;
	}

};


// Class FortniteGame.FortMcpWorlds
// 0x0038 (0x0078 - 0x0040)
class UFortMcpWorlds : public UFortMcpResource
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMcpWorlds");
		return ptr;
	}

};


// Class FortniteGame.FortMetaNavArea
// 0x0010 (0x0050 - 0x0040)
class UFortMetaNavArea : public UNavAreaMeta
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMetaNavArea");
		return ptr;
	}

};


// Class FortniteGame.FortMetaNavArea_Wall
// 0x0000 (0x0050 - 0x0050)
class UFortMetaNavArea_Wall : public UFortMetaNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMetaNavArea_Wall");
		return ptr;
	}

};


// Class FortniteGame.FortMetaNavArea_Obstacles
// 0x0008 (0x0048 - 0x0040)
class UFortMetaNavArea_Obstacles : public UNavAreaMeta
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMetaNavArea_Obstacles");
		return ptr;
	}

};


// Class FortniteGame.FortMissionOutpostConfigData
// 0x0010 (0x0038 - 0x0028)
class UFortMissionOutpostConfigData : public UFortMissionConfigData
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionOutpostConfigData");
		return ptr;
	}

};


// Class FortniteGame.FortMissionOutpostQuestConfigData
// 0x0008 (0x0030 - 0x0028)
class UFortMissionOutpostQuestConfigData : public UFortMissionConfigData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionOutpostQuestConfigData");
		return ptr;
	}

};


// Class FortniteGame.FortMissionGenerationManager
// 0x0008 (0x0390 - 0x0388)
class AFortMissionGenerationManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionGenerationManager");
		return ptr;
	}

};


// Class FortniteGame.FortMissionInterface
// 0x0000 (0x0028 - 0x0028)
class UFortMissionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionInterface");
		return ptr;
	}

};


// Class FortniteGame.FortMissionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortMissionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionLibrary");
		return ptr;
	}


	void STATIC_UnregisterForMissionEvents();
	void STATIC_TeleportPlayerPawn();
	void STATIC_TeleportPawnNearLocation(class AFortPawn* Pawn);
	void STATIC_StopAIEncounterAgainstActor();
	void STATIC_StopAIEncounter();
	void STATIC_StartPlayingMission();
	void STATIC_StartAIEncounterWithEnvironmentQuery();
	void STATIC_StartAIEncounter();
	void STATIC_SpawnPlacementMissionActor();
	void STATIC_SpawnMissionItemPickupInWorld();
	void STATIC_SpawnMissionItemPickup();
	void STATIC_SpawnBuildingActorAtTransform();
	void STATIC_SpawnAtPlacementActorsHelper();
	void STATIC_SpawnAndCollectPlayerPickups();
	void STATIC_ShouldUseAlternateAIDirectorBalance();
	void STATIC_SetWorldSavingEnabled();
	void STATIC_SetOnlinePresenceDoNotDisturb();
	void STATIC_RespawnOutlanderFragments();
	void STATIC_RegisterMissionInfoUIActor();
	void STATIC_RegisterForMissionEvents();
	void STATIC_PollActorsInVolume();
	void STATIC_PingMinimap();
	void STATIC_NumBluGloFromPlayerState(class AFortPlayerStateZone* PlayerState);
	void STATIC_NumBluGloFromPlayerPawn();
	void STATIC_LoadMission();
	void STATIC_IsUsingNewMissionGeneration();
	void STATIC_HasTags();
	void STATIC_GiveMissionSchematicItemDirectlyToPlayer();
	void STATIC_GiveMissionRewardsToPlayerAsPickups();
	void STATIC_GiveMissionRewardsToPlayer();
	void STATIC_GetTieredWaveSet();
	void STATIC_GetTieredWaveBaseWaveLength();
	void STATIC_GetTieredWaveBaseNumKills();
	void STATIC_GetTieredWaveBaseNumKillPoints();
	void STATIC_GetMissionHUDTextLineHeightEstimate();
	void STATIC_GetMissionFromGuid();
	void STATIC_GetMissionActorsInVectorDirection();
	void STATIC_GetMissionActorsInEncounterDirection();
	void STATIC_GetBluGloManager();
	void STATIC_GetAllLoadedMissions();
	void STATIC_FindOriginatingPlacementActor(class ABuildingActor* BuildingActor);
	void STATIC_FindActorsWithTags();
	void STATIC_ExecuteMissionEventEx();
	void STATIC_ExecuteMissionEvent();
	void STATIC_CreateMissionEvent();
	void STATIC_CreateDynamicBuildingDeconstructor();
	void STATIC_AdjustWaveBasedGameDifficulty();
	void STATIC_AddCompletionTagToMission();
	void STATIC_AddCompletionTagsToMission();
};


// Class FortniteGame.FortMissionManager
// 0x0328 (0x06B0 - 0x0388)
class AFortMissionManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x328];                                     // 0x0388(0x0328) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionManager");
		return ptr;
	}

};


// Class FortniteGame.FortPvPMissionManager
// 0x0000 (0x06B0 - 0x06B0)
class AFortPvPMissionManager : public AFortMissionManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPMissionManager");
		return ptr;
	}

};


// Class FortniteGame.FortPvPMission
// 0x0010 (0x06E8 - 0x06D8)
class AFortPvPMission : public AFortMission
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPMission");
		return ptr;
	}

};


// Class FortniteGame.FortPvPMission_3PtDomination
// 0x0028 (0x0710 - 0x06E8)
class AFortPvPMission_3PtDomination : public AFortPvPMission
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x06E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPMission_3PtDomination");
		return ptr;
	}

};


// Class FortniteGame.FortPvPMission_CTF
// 0x0018 (0x0700 - 0x06E8)
class AFortPvPMission_CTF : public AFortPvPMission
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x06E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPMission_CTF");
		return ptr;
	}

};


// Class FortniteGame.FortPvPMission_EnemyBaseDestruction
// 0x0000 (0x06E8 - 0x06E8)
class AFortPvPMission_EnemyBaseDestruction : public AFortPvPMission
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPMission_EnemyBaseDestruction");
		return ptr;
	}


	void GetCornerstoneForTeam();
};


// Class FortniteGame.FortPvPObjective
// 0x0008 (0x0458 - 0x0450)
class AFortPvPObjective : public AFortObjectiveBase
{
public:
	TEnumAsByte<EFortTeam>                             Team;                                                     // 0x0450(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0451(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPObjective");
		return ptr;
	}

};


// Class FortniteGame.FortPvPObjective_3PtDomination
// 0x0000 (0x0458 - 0x0458)
class AFortPvPObjective_3PtDomination : public AFortPvPObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPObjective_3PtDomination");
		return ptr;
	}

};


// Class FortniteGame.FortPvPObjective_CTF
// 0x0000 (0x0458 - 0x0458)
class AFortPvPObjective_CTF : public AFortPvPObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPObjective_CTF");
		return ptr;
	}

};


// Class FortniteGame.FortPvPObjective_EnemyBaseDestruction
// 0x0000 (0x0458 - 0x0458)
class AFortPvPObjective_EnemyBaseDestruction : public AFortPvPObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPObjective_EnemyBaseDestruction");
		return ptr;
	}

};


// Class FortniteGame.FortMissionTimerComponent
// 0x0078 (0x0168 - 0x00F0)
class UFortMissionTimerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMissionTimerComponent");
		return ptr;
	}

};


// Class FortniteGame.FortMovementComp_Character
// 0x0030 (0x0760 - 0x0730)
class UFortMovementComp_Character : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0730(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMovementComp_Character");
		return ptr;
	}

};


// Class FortniteGame.FortMovementComp_CharacterAthena
// 0x0360 (0x0AC0 - 0x0760)
class UFortMovementComp_CharacterAthena : public UFortMovementComp_Character
{
public:
	unsigned char                                      UnknownData00[0x360];                                     // 0x0760(0x0360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortMovementComp_CharacterAthena");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea
// 0x0008 (0x0048 - 0x0040)
class UFortNavArea : public UNavArea
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_StoneWall
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_StoneWall : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_StoneWall");
		return ptr;
	}

};


// Class FortniteGame.FortNavAgentCostData
// 0x0018 (0x0040 - 0x0028)
class UFortNavAgentCostData : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavAgentCostData");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_CheapObstacle
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_CheapObstacle : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_CheapObstacle");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_ClosedDoors
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_ClosedDoors : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_ClosedDoors");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_DefaultSmashable
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_DefaultSmashable : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_DefaultSmashable");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_LowSmashable
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_LowSmashable : public UFortNavArea_DefaultSmashable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_LowSmashable");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_TraceSmashable
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_TraceSmashable : public UFortNavArea_DefaultSmashable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_TraceSmashable");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_DefenderNull
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_DefenderNull : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_DefenderNull");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_HuskNull
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_HuskNull : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_HuskNull");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_LowJump
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_LowJump : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_LowJump");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_Obstacle
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_Obstacle : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_Obstacle");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_PortalOrSmash
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_PortalOrSmash : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_PortalOrSmash");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_SmashableJump
// 0x0008 (0x0050 - 0x0048)
class UFortNavArea_SmashableJump : public UFortNavArea
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_SmashableJump");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_TakerOnly
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_TakerOnly : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_TakerOnly");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_Unwalkable
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_Unwalkable : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_Unwalkable");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_WalkOverWall
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_WalkOverWall : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_WalkOverWall");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_WallCorner
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_WallCorner : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_WallCorner");
		return ptr;
	}

};


// Class FortniteGame.FortNavArea_WoodenWall
// 0x0000 (0x0048 - 0x0048)
class UFortNavArea_WoodenWall : public UFortNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavArea_WoodenWall");
		return ptr;
	}

};


// Class FortniteGame.FortNavAreaAutomatic
// 0x0018 (0x0060 - 0x0048)
class UFortNavAreaAutomatic : public UFortNavArea
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavAreaAutomatic");
		return ptr;
	}

};


// Class FortniteGame.FortNavGraphGoal
// 0x0010 (0x0398 - 0x0388)
class AFortNavGraphGoal : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavGraphGoal");
		return ptr;
	}

};


// Class FortniteGame.FortNavigationFilter_IgnoreSmashingCost
// 0x0000 (0x0048 - 0x0048)
class UFortNavigationFilter_IgnoreSmashingCost : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavigationFilter_IgnoreSmashingCost");
		return ptr;
	}

};


// Class FortniteGame.FortNavigationFilter_NoSmashing
// 0x0000 (0x0048 - 0x0048)
class UFortNavigationFilter_NoSmashing : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavigationFilter_NoSmashing");
		return ptr;
	}

};


// Class FortniteGame.FortNavigationFilter_NoSmashingIncludeLow
// 0x0000 (0x0048 - 0x0048)
class UFortNavigationFilter_NoSmashingIncludeLow : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavigationFilter_NoSmashingIncludeLow");
		return ptr;
	}

};


// Class FortniteGame.FortNavigationFilter_TetherZone
// 0x0000 (0x0048 - 0x0048)
class UFortNavigationFilter_TetherZone : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavigationFilter_TetherZone");
		return ptr;
	}

};


// Class FortniteGame.FortNavigationMetaFilter
// 0x0000 (0x0048 - 0x0048)
class UFortNavigationMetaFilter : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavigationMetaFilter");
		return ptr;
	}

};


// Class FortniteGame.FortNavigationFilter_Hunting
// 0x0000 (0x0048 - 0x0048)
class UFortNavigationFilter_Hunting : public UFortNavigationMetaFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavigationFilter_Hunting");
		return ptr;
	}

};


// Class FortniteGame.FortNavLinkBlockerComponent
// 0x0000 (0x06A0 - 0x06A0)
class UFortNavLinkBlockerComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavLinkBlockerComponent");
		return ptr;
	}

};


// Class FortniteGame.FortNavLinkContainer
// 0x0000 (0x0388 - 0x0388)
class AFortNavLinkContainer : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavLinkContainer");
		return ptr;
	}

};


// Class FortniteGame.FortNavLinkDefinition
// 0x0030 (0x0080 - 0x0050)
class UFortNavLinkDefinition : public UNavLinkDefinition
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavLinkDefinition");
		return ptr;
	}

};


// Class FortniteGame.FortNavMesh
// 0x0000 (0x0630 - 0x0630)
class AFortNavMesh : public ARecastNavMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavMesh");
		return ptr;
	}

};


// Class FortniteGame.FortNavObstacleComponent
// 0x0008 (0x0128 - 0x0120)
class UFortNavObstacleComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNavObstacleComponent");
		return ptr;
	}

};


// Class FortniteGame.FortDialogNotificationHandler
// 0x01A0 (0x01E0 - 0x0040)
class UFortDialogNotificationHandler : public UFortNotificationHandler
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0040(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDialogNotificationHandler");
		return ptr;
	}

};


// Class FortniteGame.FortNotificationMessage
// 0x0000 (0x0028 - 0x0028)
class UFortNotificationMessage : public ULocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNotificationMessage");
		return ptr;
	}

};


// Class FortniteGame.FortNotificationQueue
// 0x0020 (0x0048 - 0x0028)
class UFortNotificationQueue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortNotificationQueue");
		return ptr;
	}

};


// Class FortniteGame.FortOnlineAccountMobile
// 0x0000 (0x09B0 - 0x09B0)
class UFortOnlineAccountMobile : public UFortOnlineAccount
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOnlineAccountMobile");
		return ptr;
	}

};


// Class FortniteGame.FortOnlineBeaconHost
// 0x0000 (0x0468 - 0x0468)
class AFortOnlineBeaconHost : public AOnlineBeaconHost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOnlineBeaconHost");
		return ptr;
	}

};


// Class FortniteGame.FortOnlineSessionClient
// 0x0170 (0x0430 - 0x02C0)
class UFortOnlineSessionClient : public UOnlineSessionClient
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x02C0(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOnlineSessionClient");
		return ptr;
	}

};


// Class FortniteGame.FortOutpostContext
// 0x0040 (0x0068 - 0x0028)
class UFortOutpostContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOutpostContext");
		return ptr;
	}

};


// Class FortniteGame.FortOutpostFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortOutpostFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortOutpostFunctionLibrary");
		return ptr;
	}


	void STATIC_StorageVaultWithdrawItem(class AFortPlayerControllerOutpost* Player, class UFortWorldItem* Item);
	void STATIC_StorageVaultStoreItem(class AFortPlayerControllerOutpost* Player, class UFortWorldItem* Item);
	void STATIC_SetOutpostGameDifficultyRow();
	void STATIC_SetOutpostDefenseActive();
	void STATIC_SetCriticalMissionJoinability();
	void STATIC_IsCraftingTableActive();
	void STATIC_GetStorageVaultStoredItems(class AFortPlayerControllerOutpost* Player);
	void STATIC_GetStorageVaultPlayerItems(class AFortPlayerControllerOutpost* Player);
	void STATIC_GetStorageVaultNumItems(class AFortPlayerControllerOutpost* Player);
	void STATIC_GetStorageVaultCapacity(class AFortPlayerControllerOutpost* Player);
	void STATIC_GetPlacementTagFromOutpostBuildingTag();
	void STATIC_GetOutpostQuestMissionConfigData();
	void STATIC_GetOutpostOwner();
	void STATIC_GetOutpostBuildingTagFromPlacementTag();
	void STATIC_GetOutpostBuildingItemDefinition();
	void STATIC_GetNumberOfCraftingTableItemsRemaining();
	void STATIC_GetGooRequiredToFabricateItem(class UFortWorldItem* Item);
	void STATIC_GetGooFromDisintegrationOfItem(class UFortWorldItem* Item);
	void STATIC_GetFabricatorStoredGooAmount();
	void STATIC_GetFabricatorRecipes();
	void STATIC_GetFabricatorPlayerItems();
	void STATIC_GetFabricatorMaxGooCapacity();
	void STATIC_GetFabricatorItemDisintegrationDurationInSeconds(class UFortWorldItem* Item);
	void STATIC_GetFabricatorIncomingGooAmountProgress();
	void STATIC_GetFabricatorIncomingGooAmount();
	void STATIC_GetFabricatorDisintegrationStartTime();
	void STATIC_GetFabricatorDisintegrationSecondsRemaining();
	void STATIC_GetFabricatorDisintegrationMinutesRemaining();
	void STATIC_GetFabricatorDisintegrationDurationInSeconds();
	void STATIC_GetCraftingTableActivationItemCount();
	void STATIC_GetCraftingTableActivationCost();
	void STATIC_FabricatorIsDisintegrating();
	void STATIC_FabricatorDisintegrateItem();
	void STATIC_FabricatorCanDisintegrateItem();
	void STATIC_FabricatorAbortDisintegration();
	void STATIC_FabricateItem();
	void STATIC_DeployOutpostBuildingTagOnPlacementTag();
	void STATIC_DeactivateCraftingTable();
	void STATIC_CanActivateCraftingTable();
	void STATIC_ActivateCraftingTable();
};


// Class FortniteGame.FortPackPersonality
// 0x00E0 (0x0108 - 0x0028)
class UFortPackPersonality : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPackPersonality");
		return ptr;
	}

};


// Class FortniteGame.FortParty
// 0x0430 (0x08C0 - 0x0490)
class UFortParty : public UParty
{
public:
	unsigned char                                      UnknownData00[0x430];                                     // 0x0490(0x0430) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortParty");
		return ptr;
	}

};


// Class FortniteGame.FortPartyBeaconClient
// 0x00E0 (0x0650 - 0x0570)
class AFortPartyBeaconClient : public APartyBeaconClient
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0570(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPartyBeaconClient");
		return ptr;
	}

};


// Class FortniteGame.FortPartyBeaconHost
// 0x00D0 (0x05E0 - 0x0510)
class AFortPartyBeaconHost : public APartyBeaconHost
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0510(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPartyBeaconHost");
		return ptr;
	}

};


// Class FortniteGame.FortPartyGameState
// 0x0860 (0x0E40 - 0x05E0)
class UFortPartyGameState : public UPartyGameState
{
public:
	unsigned char                                      UnknownData00[0x860];                                     // 0x05E0(0x0860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPartyGameState");
		return ptr;
	}

};


// Class FortniteGame.FortPartyMemberState
// 0x0088 (0x0100 - 0x0078)
class UFortPartyMemberState : public UPartyMemberState
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0078(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPartyMemberState");
		return ptr;
	}

};


// Class FortniteGame.FortPathCostEstimator
// 0x0080 (0x00A8 - 0x0028)
class UFortPathCostEstimator : public UObject
{
public:
	class AActor*                                      GoalActor;                                                // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPathCostEstimator");
		return ptr;
	}

};


// Class FortniteGame.FortBotPawn
// 0x0000 (0x1AF0 - 0x1AF0)
class AFortBotPawn : public AFortAIPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBotPawn");
		return ptr;
	}

};


// Class FortniteGame.FortPawn_Flinger
// 0x0000 (0x1AF0 - 0x1AF0)
class AFortPawn_Flinger : public AFortAIPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPawn_Flinger");
		return ptr;
	}

};


// Class FortniteGame.FortPawn_InteractablePawn
// 0x0010 (0x1B00 - 0x1AF0)
class AFortPawn_InteractablePawn : public AFortAIPawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1AF0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPawn_InteractablePawn");
		return ptr;
	}

};


// Class FortniteGame.FortPawn_Taker
// 0x0010 (0x1B00 - 0x1AF0)
class AFortPawn_Taker : public AFortAIPawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1AF0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPawn_Taker");
		return ptr;
	}

};


// Class FortniteGame.FortPawn_FeedbackAnnouncer
// 0x0000 (0x0EE0 - 0x0EE0)
class AFortPawn_FeedbackAnnouncer : public AFortPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPawn_FeedbackAnnouncer");
		return ptr;
	}

};


// Class FortniteGame.FortPermaniteStructureInterface
// 0x0000 (0x0028 - 0x0028)
class UFortPermaniteStructureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPermaniteStructureInterface");
		return ptr;
	}


	void OnBoundariesChanged();
};


// Class FortniteGame.FortDeployableBasePickup
// 0x0018 (0x05A0 - 0x0588)
class AFortDeployableBasePickup : public AFortPickup
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0588(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDeployableBasePickup");
		return ptr;
	}

};


// Class FortniteGame.FortPickupAthena
// 0x0000 (0x0588 - 0x0588)
class AFortPickupAthena : public AFortPickup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPickupAthena");
		return ptr;
	}

};


// Class FortniteGame.FortPickupBackpack
// 0x0000 (0x0588 - 0x0588)
class AFortPickupBackpack : public AFortPickup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPickupBackpack");
		return ptr;
	}

};


// Class FortniteGame.FortPlacedPawnMarker
// 0x0000 (0x03B0 - 0x03B0)
class AFortPlacedPawnMarker : public ANavigationObjectBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlacedPawnMarker");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerState
// 0x06B0 (0x0AF0 - 0x0440)
class AFortPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x6B0];                                     // 0x0440(0x06B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerState");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerAttributesProxyActor
// 0x0058 (0x03E0 - 0x0388)
class AFortPlayerAttributesProxyActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0388(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerAttributesProxyActor");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerCameraBase
// 0x05B0 (0x1F80 - 0x19D0)
class AFortPlayerCameraBase : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x5B0];                                     // 0x19D0(0x05B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerCameraBase");
		return ptr;
	}

};


// Class FortniteGame.FortFrontEndCameraManager
// 0x0060 (0x1FE0 - 0x1F80)
class AFortFrontEndCameraManager : public AFortPlayerCameraBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x1F80(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortFrontEndCameraManager");
		return ptr;
	}

};


// Class FortniteGame.FortReplaySpectator
// 0x00A0 (0x2470 - 0x23D0)
class AFortReplaySpectator : public AFortPlayerControllerGameplay
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x23D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortReplaySpectator");
		return ptr;
	}

};


// Class FortniteGame.FortReplaySpectatorCameraComponent
// 0x0070 (0x0840 - 0x07D0)
class UFortReplaySpectatorCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x07D0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortReplaySpectatorCameraComponent");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerCameraSpectator
// 0x0010 (0x19E0 - 0x19D0)
class AFortPlayerCameraSpectator : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x19D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerCameraSpectator");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerControllerFrontEnd
// 0x0010 (0x2350 - 0x2340)
class AFortPlayerControllerFrontEnd : public AFortPlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x2340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerFrontEnd");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerControllerDeployableBase
// 0x0170 (0x29E0 - 0x2870)
class AFortPlayerControllerDeployableBase : public AFortPlayerControllerZone
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x2870(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerDeployableBase");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerControllerFOB
// 0x0000 (0x2870 - 0x2870)
class AFortPlayerControllerFOB : public AFortPlayerControllerZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerFOB");
		return ptr;
	}


	void ServerSaveFOB();
	void ServerResetFOB();
	void ServerReloadFOB();
	void ServerAttemptSelectFOBCore();
};


// Class FortniteGame.FortPlayerControllerKeep
// 0x0020 (0x2890 - 0x2870)
class AFortPlayerControllerKeep : public AFortPlayerControllerZone
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x2870(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerKeep");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerControllerManor
// 0x0040 (0x28B0 - 0x2870)
class AFortPlayerControllerManor : public AFortPlayerControllerZone
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x2870(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerManor");
		return ptr;
	}


	void ServerOnUnlockPortalComplete(class AManorPortal* ManorPortal);
	void ClientOpenManorPortalUnlockMenu(class AManorPortal* ManorPortal);
};


// Class FortniteGame.FortPlayerControllerOutpost
// 0x0080 (0x28F0 - 0x2870)
class AFortPlayerControllerOutpost : public AFortPlayerControllerZone
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x2870(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerOutpost");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerControllerPvPBaseDestruction
// 0x0000 (0x2870 - 0x2870)
class AFortPlayerControllerPvPBaseDestruction : public AFortPlayerControllerPvP
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerControllerPvPBaseDestruction");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerInputSettings
// 0x0058 (0x0080 - 0x0028)
class UFortPlayerInputSettings : public UObject
{
public:
	struct FText                                       FriendlyName;                                             // 0x0028(0x0018) (Config)
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0040(0x0010) (ZeroConstructor, Config)
	TArray<struct FFortInputActionKeyAlias>            ActionKeyAliases;                                         // 0x0050(0x0010) (ZeroConstructor, Config)
	float                                              HoldInputTime;                                            // 0x0060(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HoldCraftAmmoTime;                                        // 0x0064(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerInputSettings");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerMannequin
// 0x0190 (0x05A0 - 0x0410)
class AFortPlayerMannequin : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	class UFortHeroType*                               FortHeroType;                                             // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x180];                                     // 0x0420(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerMannequin");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStart
// 0x0008 (0x03C0 - 0x03B8)
class AFortPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStart");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStartWarmup
// 0x0008 (0x03C0 - 0x03B8)
class AFortPlayerStartWarmup : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStartWarmup");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStateFrontEnd
// 0x0000 (0x0AF0 - 0x0AF0)
class AFortPlayerStateFrontEnd : public AFortPlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStateFrontEnd");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStateZone
// 0x0250 (0x0D40 - 0x0AF0)
class AFortPlayerStateZone : public AFortPlayerState
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0AF0(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStateZone");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStateFOB
// 0x0000 (0x0D40 - 0x0D40)
class AFortPlayerStateFOB : public AFortPlayerStateZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStateFOB");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStateKeep
// 0x0000 (0x0D40 - 0x0D40)
class AFortPlayerStateKeep : public AFortPlayerStateZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStateKeep");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerInputAthena
// 0x0110 (0x0610 - 0x0500)
class UFortPlayerInputAthena : public UFortPlayerInput
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0500(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerInputAthena");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStateManor
// 0x0000 (0x0D40 - 0x0D40)
class AFortPlayerStateManor : public AFortPlayerStateZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStateManor");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStatePvP
// 0x0080 (0x0DC0 - 0x0D40)
class AFortPlayerStatePvP : public AFortPlayerStateZone
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0D40(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStatePvP");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStateAthena
// 0x0060 (0x0E20 - 0x0DC0)
class AFortPlayerStateAthena : public AFortPlayerStatePvP
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0DC0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStateAthena");
		return ptr;
	}

};


// Class FortniteGame.FortPlayerStateOutpost
// 0x0000 (0x0D40 - 0x0D40)
class AFortPlayerStateOutpost : public AFortPlayerStateZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPlayerStateOutpost");
		return ptr;
	}

};


// Class FortniteGame.FortPooledSkelMeshComponent
// 0x0040 (0x0F30 - 0x0EF0)
class UFortPooledSkelMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0EF0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPooledSkelMeshComponent");
		return ptr;
	}

};


// Class FortniteGame.FortProceduralFoliageComponent
// 0x0000 (0x0118 - 0x0118)
class UFortProceduralFoliageComponent : public UProceduralFoliageComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortProceduralFoliageComponent");
		return ptr;
	}

};


// Class FortniteGame.FortPrototypingContext
// 0x0040 (0x0068 - 0x0028)
class UFortPrototypingContext : public UBlueprintContextBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPrototypingContext");
		return ptr;
	}

};


// Class FortniteGame.FortPushNotificationManager
// 0x0008 (0x0030 - 0x0028)
class UFortPushNotificationManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPushNotificationManager");
		return ptr;
	}

};


// Class FortniteGame.FortPvPFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortPvPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPFunctionLibrary");
		return ptr;
	}


	void STATIC_SetMatchLevel();
	void STATIC_GetTeamStrategicBuildingActor();
	void STATIC_GetTeamCornerstone();
	void STATIC_GetRoundTimeAccumulated();
	void STATIC_GetMatchLevel();
	void STATIC_GetDifficultyRowNamesFromPvPRating();
	void STATIC_GetBaseDestructionTeamInfo();
	void STATIC_GetBaseBuildingCost(class ABuildingActor* BuildingActor);
	void STATIC_FirePvPVictoryMissionEvent();
	void STATIC_DestroyAllFortPickupsWithItem();
};


// Class FortniteGame.FortPvPPlayerStart
// 0x0010 (0x03C8 - 0x03B8)
class AFortPvPPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	TEnumAsByte<EFortTeam>                             Team;                                                     // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortPvPPlayerStart");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_AllEnemies
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_AllEnemies : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_AllEnemies");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_AllGoals
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_AllGoals : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_AllGoals");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_AllPlayers
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_AllPlayers : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_AllPlayers");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_EncounterFallbackTarget
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_EncounterFallbackTarget : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_EncounterFallbackTarget");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_EncounterGoalsCenterLocation
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_EncounterGoalsCenterLocation : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_EncounterGoalsCenterLocation");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_EncounterGoalsOnGround
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_EncounterGoalsOnGround : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_EncounterGoalsOnGround");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_EncounterPrimaryAssignmentGoals
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_EncounterPrimaryAssignmentGoals : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_EncounterPrimaryAssignmentGoals");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_EncounterQueryActor
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_EncounterQueryActor : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_EncounterQueryActor");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_EncounterRandomDirection
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_EncounterRandomDirection : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_EncounterRandomDirection");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_EncounterTargetObjective
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_EncounterTargetObjective : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_EncounterTargetObjective");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_Goal
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_Goal : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_Goal");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_GoalProviderRootAssignmentGoals
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_GoalProviderRootAssignmentGoals : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_GoalProviderRootAssignmentGoals");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_NearbyFriends
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_NearbyFriends : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_NearbyFriends");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_TwoPointSolverPointA
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_TwoPointSolverPointA : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_TwoPointSolverPointA");
		return ptr;
	}

};


// Class FortniteGame.FortQueryContext_TwoPointSolverRotationA
// 0x0000 (0x0028 - 0x0028)
class UFortQueryContext_TwoPointSolverRotationA : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryContext_TwoPointSolverRotationA");
		return ptr;
	}

};


// Class FortniteGame.FortQueryData_CurvesAroundLine
// 0x0060 (0x0088 - 0x0028)
class UFortQueryData_CurvesAroundLine : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryData_CurvesAroundLine");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_ActorsAround
// 0x0000 (0x00C0 - 0x00C0)
class UFortQueryGenerator_ActorsAround : public UEnvQueryGenerator_ActorsOfClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_ActorsAround");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_AssignmentGoal
// 0x0000 (0x0050 - 0x0050)
class UFortQueryGenerator_AssignmentGoal : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_AssignmentGoal");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_Buildings
// 0x0158 (0x01A8 - 0x0050)
class UFortQueryGenerator_Buildings : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0050(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_Buildings");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_BuildingsOnCachedPath
// 0x0098 (0x00E8 - 0x0050)
class UFortQueryGenerator_BuildingsOnCachedPath : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0050(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_BuildingsOnCachedPath");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_Enemies
// 0x0038 (0x0088 - 0x0050)
class UFortQueryGenerator_Enemies : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_Enemies");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_GoalOnCircle
// 0x0008 (0x01F0 - 0x01E8)
class UFortQueryGenerator_GoalOnCircle : public UEnvQueryGenerator_OnCircle
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_GoalOnCircle");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_HotspotSlots
// 0x0048 (0x0098 - 0x0050)
class UFortQueryGenerator_HotspotSlots : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_HotspotSlots");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_InfluenceMapPoints
// 0x0040 (0x00C0 - 0x0080)
class UFortQueryGenerator_InfluenceMapPoints : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0080(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_InfluenceMapPoints");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_MissionPlacementActors
// 0x0048 (0x0098 - 0x0050)
class UFortQueryGenerator_MissionPlacementActors : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_MissionPlacementActors");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_PointsAroundLine
// 0x0088 (0x0108 - 0x0080)
class UFortQueryGenerator_PointsAroundLine : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0080(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_PointsAroundLine");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_PointsFromNavGraph
// 0x0128 (0x01A8 - 0x0080)
class UFortQueryGenerator_PointsFromNavGraph : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0080(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_PointsFromNavGraph");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_PointsInVolume
// 0x0040 (0x0090 - 0x0050)
class UFortQueryGenerator_PointsInVolume : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_PointsInVolume");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_PointsOnBuildingGrid
// 0x0070 (0x00F0 - 0x0080)
class UFortQueryGenerator_PointsOnBuildingGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0080(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_PointsOnBuildingGrid");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_SpecificAssignmentGoals
// 0x0040 (0x0090 - 0x0050)
class UFortQueryGenerator_SpecificAssignmentGoals : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_SpecificAssignmentGoals");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_TerrainDonut
// 0x00D0 (0x0120 - 0x0050)
class UFortQueryGenerator_TerrainDonut : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0050(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_TerrainDonut");
		return ptr;
	}

};


// Class FortniteGame.FortQueryGenerator_ValidSpawnRiftActors
// 0x0030 (0x0080 - 0x0050)
class UFortQueryGenerator_ValidSpawnRiftActors : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryGenerator_ValidSpawnRiftActors");
		return ptr;
	}

};


// Class FortniteGame.FortQueryItemType_Goal
// 0x0000 (0x0030 - 0x0030)
class UFortQueryItemType_Goal : public UEnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryItemType_Goal");
		return ptr;
	}

};


// Class FortniteGame.FortQueryItemType_PointOrSlot
// 0x0000 (0x0030 - 0x0030)
class UFortQueryItemType_PointOrSlot : public UEnvQueryItemType_Point
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryItemType_PointOrSlot");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_CanHitWithGameplayAbility
// 0x0030 (0x01F0 - 0x01C0)
class UFortQueryTest_CanHitWithGameplayAbility : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_CanHitWithGameplayAbility");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_DecoyDistance
// 0x0008 (0x01C8 - 0x01C0)
class UFortQueryTest_DecoyDistance : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_DecoyDistance");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GameplayTagsPerDifficulty
// 0x0010 (0x01D0 - 0x01C0)
class UFortQueryTest_GameplayTagsPerDifficulty : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GameplayTagsPerDifficulty");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalBase
// 0x0018 (0x01D8 - 0x01C0)
class UFortQueryTest_GoalBase : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalBase");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_AssignmentTypeInterest
// 0x0180 (0x0358 - 0x01D8)
class UFortQueryTest_AssignmentTypeInterest : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x01D8(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_AssignmentTypeInterest");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_BuildingCriteria
// 0x0300 (0x04D8 - 0x01D8)
class UFortQueryTest_BuildingCriteria : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0x300];                                     // 0x01D8(0x0300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_BuildingCriteria");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_CanAttackTarget
// 0x0000 (0x01D8 - 0x01D8)
class UFortQueryTest_CanAttackTarget : public UFortQueryTest_GoalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_CanAttackTarget");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_CanBeDamaged
// 0x0000 (0x01D8 - 0x01D8)
class UFortQueryTest_CanBeDamaged : public UFortQueryTest_GoalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_CanBeDamaged");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalActorDot
// 0x0018 (0x01F0 - 0x01D8)
class UFortQueryTest_GoalActorDot : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalActorDot");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalDiscouragement
// 0x0030 (0x0208 - 0x01D8)
class UFortQueryTest_GoalDiscouragement : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalDiscouragement");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalDistance
// 0x0018 (0x01F0 - 0x01D8)
class UFortQueryTest_GoalDistance : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalDistance");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalDistanceRanges
// 0x0028 (0x0200 - 0x01D8)
class UFortQueryTest_GoalDistanceRanges : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalDistanceRanges");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalFrustrationDiscouragement
// 0x0000 (0x01D8 - 0x01D8)
class UFortQueryTest_GoalFrustrationDiscouragement : public UFortQueryTest_GoalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalFrustrationDiscouragement");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalMarkedByPlayer
// 0x0000 (0x01D8 - 0x01D8)
class UFortQueryTest_GoalMarkedByPlayer : public UFortQueryTest_GoalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalMarkedByPlayer");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalNumberOfAIAssigned
// 0x0008 (0x01E0 - 0x01D8)
class UFortQueryTest_GoalNumberOfAIAssigned : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalNumberOfAIAssigned");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalOverallDamageCaused
// 0x0000 (0x01D8 - 0x01D8)
class UFortQueryTest_GoalOverallDamageCaused : public UFortQueryTest_GoalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalOverallDamageCaused");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalStickiness
// 0x00F0 (0x02C8 - 0x01D8)
class UFortQueryTest_GoalStickiness : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x01D8(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalStickiness");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalType
// 0x0000 (0x01D8 - 0x01D8)
class UFortQueryTest_GoalType : public UFortQueryTest_GoalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalType");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_GoalWithinTetheredBounds
// 0x0000 (0x01D8 - 0x01D8)
class UFortQueryTest_GoalWithinTetheredBounds : public UFortQueryTest_GoalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_GoalWithinTetheredBounds");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_PerceptionAll
// 0x0180 (0x0358 - 0x01D8)
class UFortQueryTest_PerceptionAll : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x01D8(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_PerceptionAll");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_PrimaryAssignment
// 0x00F8 (0x02D0 - 0x01D8)
class UFortQueryTest_PrimaryAssignment : public UFortQueryTest_GoalBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x01D8(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_PrimaryAssignment");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_HasNearbyBuildings
// 0x0010 (0x01D0 - 0x01C0)
class UFortQueryTest_HasNearbyBuildings : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_HasNearbyBuildings");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_HasNearbyEncounterGoals
// 0x0038 (0x01F8 - 0x01C0)
class UFortQueryTest_HasNearbyEncounterGoals : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x01C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_HasNearbyEncounterGoals");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_HotspotSlotOrientation
// 0x0038 (0x01F8 - 0x01C0)
class UFortQueryTest_HotspotSlotOrientation : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x01C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_HotspotSlotOrientation");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_HotspotSlotState
// 0x0008 (0x01C8 - 0x01C0)
class UFortQueryTest_HotspotSlotState : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_HotspotSlotState");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_InfluenceScore
// 0x0000 (0x01C0 - 0x01C0)
class UFortQueryTest_InfluenceScore : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_InfluenceScore");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_InsideBuilding
// 0x0000 (0x01C0 - 0x01C0)
class UFortQueryTest_InsideBuilding : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_InsideBuilding");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_InsideWater
// 0x0008 (0x01C8 - 0x01C0)
class UFortQueryTest_InsideWater : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_InsideWater");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_IsCloseToHotspotSlot
// 0x0040 (0x0200 - 0x01C0)
class UFortQueryTest_IsCloseToHotspotSlot : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01C0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_IsCloseToHotspotSlot");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_IsCloseToPatrolWard
// 0x0008 (0x01C8 - 0x01C0)
class UFortQueryTest_IsCloseToPatrolWard : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_IsCloseToPatrolWard");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_IsGoalForAssignment
// 0x0038 (0x01F8 - 0x01C0)
class UFortQueryTest_IsGoalForAssignment : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x01C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_IsGoalForAssignment");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_MissionGameplayTagMatch
// 0x0068 (0x0228 - 0x01C0)
class UFortQueryTest_MissionGameplayTagMatch : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x01C0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_MissionGameplayTagMatch");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_MissionSameMap
// 0x0048 (0x0208 - 0x01C0)
class UFortQueryTest_MissionSameMap : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01C0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_MissionSameMap");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_NavGraphDistance
// 0x0008 (0x01C8 - 0x01C0)
class UFortQueryTest_NavGraphDistance : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_NavGraphDistance");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_OnFlatSurface
// 0x0010 (0x01D0 - 0x01C0)
class UFortQueryTest_OnFlatSurface : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_OnFlatSurface");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_PerceptionAge
// 0x0010 (0x01D0 - 0x01C0)
class UFortQueryTest_PerceptionAge : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_PerceptionAge");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_PerceptionExists
// 0x0010 (0x01D0 - 0x01C0)
class UFortQueryTest_PerceptionExists : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_PerceptionExists");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTest_Random
// 0x0008 (0x01C8 - 0x01C0)
class UFortQueryTest_Random : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTest_Random");
		return ptr;
	}

};


// Class FortniteGame.FortQueryTwoPointSolver
// 0x00C8 (0x00F0 - 0x0028)
class UFortQueryTwoPointSolver : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQueryTwoPointSolver");
		return ptr;
	}

};


// Class FortniteGame.FortQuestObjectiveInfo
// 0x0080 (0x00A8 - 0x0028)
class UFortQuestObjectiveInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuestObjectiveInfo");
		return ptr;
	}

};


// Class FortniteGame.FortRarityData
// 0x0500 (0x0528 - 0x0028)
class UFortRarityData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x500];                                     // 0x0028(0x0500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortRarityData");
		return ptr;
	}

};


// Class FortniteGame.FortRegisteredPlayerInfo
// 0x01B0 (0x01D8 - 0x0028)
class UFortRegisteredPlayerInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0028(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortRegisteredPlayerInfo");
		return ptr;
	}

};


// Class FortniteGame.FortHoverDroneCameraComponent
// 0x0020 (0x0860 - 0x0840)
class UFortHoverDroneCameraComponent : public UFortReplaySpectatorCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0840(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHoverDroneCameraComponent");
		return ptr;
	}

};


// Class FortniteGame.FortReplaySpectatorPawnBase
// 0x0008 (0x0418 - 0x0410)
class AFortReplaySpectatorPawnBase : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortReplaySpectatorPawnBase");
		return ptr;
	}

};


// Class FortniteGame.HoverDronePawn
// 0x0010 (0x0428 - 0x0418)
class AHoverDronePawn : public AFortReplaySpectatorPawnBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0418(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.HoverDronePawn");
		return ptr;
	}


	void IsMaintainingConstantAltitude();
	void GetAltitude();
};


// Class FortniteGame.FortRiftBlockerComponent
// 0x0010 (0x06B0 - 0x06A0)
class UFortRiftBlockerComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortRiftBlockerComponent");
		return ptr;
	}

};


// Class FortniteGame.FortSaveFileBuildingInstructionsHandler
// 0x02F8 (0x0680 - 0x0388)
class AFortSaveFileBuildingInstructionsHandler : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x0388(0x02F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSaveFileBuildingInstructionsHandler");
		return ptr;
	}

};


// Class FortniteGame.FOBSaveFileBuildingInstructionsHandler
// 0x0000 (0x0680 - 0x0680)
class AFOBSaveFileBuildingInstructionsHandler : public AFortSaveFileBuildingInstructionsHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FOBSaveFileBuildingInstructionsHandler");
		return ptr;
	}

};


// Class FortniteGame.FortScoreStylingData
// 0x1530 (0x1558 - 0x0028)
class UFortScoreStylingData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1530];                                    // 0x0028(0x1530) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortScoreStylingData");
		return ptr;
	}

};


// Class FortniteGame.FortScriptedAction
// 0x0060 (0x03E8 - 0x0388)
class AFortScriptedAction : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	EFortScriptedActionEnvironment                     ActionEnvironment;                                        // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0391(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortScriptedAction");
		return ptr;
	}

};


// Class FortniteGame.FortScriptedActionManager
// 0x0050 (0x03D8 - 0x0388)
class AFortScriptedActionManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortScriptedActionManager");
		return ptr;
	}

};


// Class FortniteGame.FortSearchPass
// 0x0268 (0x0290 - 0x0028)
class UFortSearchPass : public UObject
{
public:
	unsigned char                                      UnknownData00[0x268];                                     // 0x0028(0x0268) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSearchPass");
		return ptr;
	}

};


// Class FortniteGame.FortServerBehaviorTrackerConfig
// 0x04C8 (0x04F0 - 0x0028)
class UFortServerBehaviorTrackerConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x4C8];                                     // 0x0028(0x04C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortServerBehaviorTrackerConfig");
		return ptr;
	}

};


// Class FortniteGame.FortServerBehaviorTrackerAthena
// 0x0080 (0x00A8 - 0x0028)
class UFortServerBehaviorTrackerAthena : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortServerBehaviorTrackerAthena");
		return ptr;
	}

};


// Class FortniteGame.FortSharedMissionLists
// 0x0130 (0x0158 - 0x0028)
class UFortSharedMissionLists : public UObject
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0028(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSharedMissionLists");
		return ptr;
	}

};


// Class FortniteGame.FortSignificanceManager
// 0x0650 (0x0740 - 0x00F0)
class UFortSignificanceManager : public USignificanceManager
{
public:
	unsigned char                                      UnknownData00[0x650];                                     // 0x00F0(0x0650) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSignificanceManager");
		return ptr;
	}

};


// Class FortniteGame.FortSpawnPointsPercentageCurveSequence
// 0x0018 (0x0040 - 0x0028)
class UFortSpawnPointsPercentageCurveSequence : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSpawnPointsPercentageCurveSequence");
		return ptr;
	}

};


// Class FortniteGame.FortStaticMeshActor
// 0x0018 (0x03B0 - 0x0398)
class AFortStaticMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0398(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortStaticMeshActor");
		return ptr;
	}

};


// Class FortniteGame.FortStaticMeshLinkComponent
// 0x0020 (0x0140 - 0x0120)
class UFortStaticMeshLinkComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortStaticMeshLinkComponent");
		return ptr;
	}

};


// Class FortniteGame.FortStaticMeshUserData
// 0x0010 (0x0038 - 0x0028)
class UFortStaticMeshUserData : public UAssetUserData
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortStaticMeshUserData");
		return ptr;
	}

};


// Class FortniteGame.FortTaggedActorsManager
// 0x03A8 (0x03D0 - 0x0028)
class UFortTaggedActorsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3A8];                                     // 0x0028(0x03A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTaggedActorsManager");
		return ptr;
	}

};


// Class FortniteGame.FortTeamIdentification
// 0x0010 (0x0038 - 0x0028)
class UFortTeamIdentification : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTeamIdentification");
		return ptr;
	}

};


// Class FortniteGame.FortTeamInfo
// 0x00F8 (0x0480 - 0x0388)
class AFortTeamInfo : public AInfo
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0388(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTeamInfo");
		return ptr;
	}

};


// Class FortniteGame.FortTeamInfoAthena
// 0x0000 (0x0480 - 0x0480)
class AFortTeamInfoAthena : public AFortTeamInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTeamInfoAthena");
		return ptr;
	}

};


// Class FortniteGame.FortTeamInfoPvPBaseDestruction
// 0x0250 (0x06D0 - 0x0480)
class AFortTeamInfoPvPBaseDestruction : public AFortTeamInfo
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0480(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTeamInfoPvPBaseDestruction");
		return ptr;
	}

};


// Class FortniteGame.FortTestControllerBase
// 0x0020 (0x0050 - 0x0030)
class UFortTestControllerBase : public UGauntletTestController
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTestControllerBase");
		return ptr;
	}

};


// Class FortniteGame.FortTestControllerAutoTest
// 0x0078 (0x00C8 - 0x0050)
class UFortTestControllerAutoTest : public UFortTestControllerBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0050(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTestControllerAutoTest");
		return ptr;
	}

};


// Class FortniteGame.FortTestControllerMemoryReport
// 0x0070 (0x00C0 - 0x0050)
class UFortTestControllerMemoryReport : public UFortTestControllerBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0050(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTestControllerMemoryReport");
		return ptr;
	}

};


// Class FortniteGame.FortTestControllerBootTest
// 0x0000 (0x0030 - 0x0030)
class UFortTestControllerBootTest : public UGauntletTestControllerBootTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTestControllerBootTest");
		return ptr;
	}

};


// Class FortniteGame.FortTestControllerPerfReplayTest
// 0x0008 (0x0038 - 0x0030)
class UFortTestControllerPerfReplayTest : public UGauntletTestController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTestControllerPerfReplayTest");
		return ptr;
	}

};


// Class FortniteGame.FortTheaterList
// 0x0010 (0x0038 - 0x0028)
class UFortTheaterList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTheaterList");
		return ptr;
	}

};


// Class FortniteGame.FortThreatParticleActor
// 0x0008 (0x0390 - 0x0388)
class AFortThreatParticleActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortThreatParticleActor");
		return ptr;
	}


	void OnWorldReady();
	void OnThreatCloudsChanged(TArray<struct FThreatLocationInfo> ThreatLocationInfo);
	void GetThreatClouds();
};


// Class FortniteGame.FortTips
// 0x0010 (0x0038 - 0x0028)
class UFortTips : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTips");
		return ptr;
	}

};


// Class FortniteGame.FortAbilitySystemComponentTooltipContext
// 0x0028 (0x0090 - 0x0068)
class UFortAbilitySystemComponentTooltipContext : public UFortTooltipContext
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySystemComponentTooltipContext");
		return ptr;
	}

};


// Class FortniteGame.FortAbilitySystemComponentTooltip
// 0x0008 (0x0098 - 0x0090)
class UFortAbilitySystemComponentTooltip : public UFortTooltip
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySystemComponentTooltip");
		return ptr;
	}

};


// Class FortniteGame.FortTokenToAttributeTable
// 0x0010 (0x0038 - 0x0028)
class UFortTokenToAttributeTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTokenToAttributeTable");
		return ptr;
	}

};


// Class FortniteGame.FortTokenToTextTable
// 0x0060 (0x0088 - 0x0028)
class UFortTokenToTextTable : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTokenToTextTable");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityKitTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortAbilityKitTooltip : public UFortTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityKitTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
};


// Class FortniteGame.FortAbilitySetTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortAbilitySetTooltip : public UFortTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilitySetTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
};


// Class FortniteGame.FortGameplayAbilityTooltip
// 0x0088 (0x0118 - 0x0090)
class UFortGameplayAbilityTooltip : public UFortTooltip
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0090(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGameplayAbilityTooltip");
		return ptr;
	}

};


// Class FortniteGame.FortItemDefinitionTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortItemDefinitionTooltip : public UFortTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemDefinitionTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
};


// Class FortniteGame.FortQuestItemDefinitionTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortQuestItemDefinitionTooltip : public UFortItemDefinitionTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuestItemDefinitionTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
};


// Class FortniteGame.FortWorldItemDefinitionTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortWorldItemDefinitionTooltip : public UFortItemDefinitionTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorldItemDefinitionTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
};


// Class FortniteGame.FortConsumableItemDefinitionTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortConsumableItemDefinitionTooltip : public UFortWorldItemDefinitionTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConsumableItemDefinitionTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
};


// Class FortniteGame.FortGadgetItemDefinitionTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortGadgetItemDefinitionTooltip : public UFortWorldItemDefinitionTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGadgetItemDefinitionTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortWeaponItemDefinitionTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortWeaponItemDefinitionTooltip : public UFortWorldItemDefinitionTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponItemDefinitionTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortTrapItemDefinitionTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortTrapItemDefinitionTooltip : public UFortWeaponItemDefinitionTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTrapItemDefinitionTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortWeaponMeleeItemDefinitionTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortWeaponMeleeItemDefinitionTooltip : public UFortWeaponItemDefinitionTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponMeleeItemDefinitionTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortWeaponRangedItemDefinitionTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortWeaponRangedItemDefinitionTooltip : public UFortWeaponItemDefinitionTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponRangedItemDefinitionTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortItemTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortItemTooltip : public UFortTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortItemTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortAccountItemTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortAccountItemTooltip : public UFortItemTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAccountItemTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortCharacterTooltip
// 0x0020 (0x00B0 - 0x0090)
class UFortCharacterTooltip : public UFortAccountItemTooltip
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCharacterTooltip");
		return ptr;
	}


	void GetValueData();
	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortHeroTooltip
// 0x0000 (0x00B0 - 0x00B0)
class UFortHeroTooltip : public UFortCharacterTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHeroTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortWorkerTooltip
// 0x0000 (0x00B0 - 0x00B0)
class UFortWorkerTooltip : public UFortCharacterTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorkerTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortSchematicTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortSchematicTooltip : public UFortAccountItemTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortSchematicTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortHomebaseNodeItemTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortHomebaseNodeItemTooltip : public UFortItemTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortHomebaseNodeItemTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortWorldItemTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortWorldItemTooltip : public UFortItemTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWorldItemTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortConsumableItemTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortConsumableItemTooltip : public UFortWorldItemTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortConsumableItemTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortGadgetItemTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortGadgetItemTooltip : public UFortWorldItemTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortGadgetItemTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortTrapTooltip
// 0x0020 (0x00B0 - 0x0090)
class UFortTrapTooltip : public UFortWorldItemTooltip
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTrapTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortWeaponTooltip
// 0x0088 (0x0118 - 0x0090)
class UFortWeaponTooltip : public UFortWorldItemTooltip
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0090(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponTooltip");
		return ptr;
	}

};


// Class FortniteGame.FortWeaponRangedTooltip
// 0x0000 (0x0118 - 0x0118)
class UFortWeaponRangedTooltip : public UFortWeaponTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponRangedTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortQuestObjectiveTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortQuestObjectiveTooltip : public UFortTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortQuestObjectiveTooltip");
		return ptr;
	}


	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortRegisteredPlayerInfoTooltip
// 0x0000 (0x0090 - 0x0090)
class UFortRegisteredPlayerInfoTooltip : public UFortTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortRegisteredPlayerInfoTooltip");
		return ptr;
	}


	void GetValueData();
	void GetTokenizedDescriptionText();
	void GetTextForToken();
	void GetNumericValue();
};


// Class FortniteGame.FortTooltipLibrary
// 0x0000 (0x0028 - 0x0028)
class UFortTooltipLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTooltipLibrary");
		return ptr;
	}


	void STATIC_FormatAttributeBuffs(const struct FFortAttributeInfo& AttributeInfo);
};


// Class FortniteGame.FortTrackMovementComponent
// 0x0098 (0x01D0 - 0x0138)
class UFortTrackMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0138(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTrackMovementComponent");
		return ptr;
	}

};


// Class FortniteGame.FortUIBaseClass
// 0x0068 (0x04D8 - 0x0470)
class AFortUIBaseClass : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0470(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUIBaseClass");
		return ptr;
	}

};


// Class FortniteGame.FortUIZone
// 0x03E8 (0x08C0 - 0x04D8)
class AFortUIZone : public AFortUIBaseClass
{
public:
	unsigned char                                      UnknownData00[0x3E8];                                     // 0x04D8(0x03E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUIZone");
		return ptr;
	}

};


// Class FortniteGame.FortUIPvP
// 0x0000 (0x08C0 - 0x08C0)
class AFortUIPvP : public AFortUIZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUIPvP");
		return ptr;
	}

};


// Class FortniteGame.FortUIPvPBaseDestruction
// 0x0000 (0x08C0 - 0x08C0)
class AFortUIPvPBaseDestruction : public AFortUIPvP
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUIPvPBaseDestruction");
		return ptr;
	}

};


// Class FortniteGame.FortUIManagerInterface
// 0x0000 (0x0028 - 0x0028)
class UFortUIManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUIManagerInterface");
		return ptr;
	}


	void KillConfirmation();
};


// Class FortniteGame.FortUIFriendNotification
// 0x0008 (0x0098 - 0x0090)
class UFortUIFriendNotification : public UFortUINotification
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUIFriendNotification");
		return ptr;
	}

};


// Class FortniteGame.FortUIProxyActor
// 0x0098 (0x0420 - 0x0388)
class AFortUIProxyActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0388(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortUIProxyActor");
		return ptr;
	}

};


// Class FortniteGame.FortValidationInterface
// 0x0000 (0x0028 - 0x0028)
class UFortValidationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortValidationInterface");
		return ptr;
	}

};


// Class FortniteGame.FortWeapon
// 0x0700 (0x0A88 - 0x0388)
class AFortWeapon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x700];                                     // 0x0388(0x0700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeapon");
		return ptr;
	}

};


// Class FortniteGame.FortDecoTool
// 0x0048 (0x0AD0 - 0x0A88)
class AFortDecoTool : public AFortWeapon
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0A88(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDecoTool");
		return ptr;
	}

};


// Class FortniteGame.FortAbilityDecoTool
// 0x0028 (0x0AF8 - 0x0AD0)
class AFortAbilityDecoTool : public AFortDecoTool
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0AD0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortAbilityDecoTool");
		return ptr;
	}

};


// Class FortniteGame.FortCustomizableAbilityDecoTool
// 0x0000 (0x0AF8 - 0x0AF8)
class AFortCustomizableAbilityDecoTool : public AFortAbilityDecoTool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortCustomizableAbilityDecoTool");
		return ptr;
	}


	void ServerReleaseTrigger();
	void ServerReleaseSecondaryFire();
	void ServerPressTrigger();
	void ServerPressSecondaryFire();
	void BPServerReleaseSecondaryFire();
	void BPServerPressSecondaryFire();
	void BPReleaseTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPOnUnEquip();
	void BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper);
	void BPOnEquip();
};


// Class FortniteGame.FortDecoTool_ContextTrap
// 0x0008 (0x0AD8 - 0x0AD0)
class AFortDecoTool_ContextTrap : public AFortDecoTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AD0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortDecoTool_ContextTrap");
		return ptr;
	}

};


// Class FortniteGame.FortTrapTool
// 0x0000 (0x0AD0 - 0x0AD0)
class AFortTrapTool : public AFortDecoTool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortTrapTool");
		return ptr;
	}

};


// Class FortniteGame.FortWeap_BuildingToolBase
// 0x0020 (0x0AA8 - 0x0A88)
class AFortWeap_BuildingToolBase : public AFortWeapon
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0A88(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeap_BuildingToolBase");
		return ptr;
	}

};


// Class FortniteGame.FortWeap_BuildingTool
// 0x0158 (0x0C00 - 0x0AA8)
class AFortWeap_BuildingTool : public AFortWeap_BuildingToolBase
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0AA8(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeap_BuildingTool");
		return ptr;
	}

};


// Class FortniteGame.FortWeap_EditingTool
// 0x0010 (0x0AB8 - 0x0AA8)
class AFortWeap_EditingTool : public AFortWeap_BuildingToolBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0AA8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeap_EditingTool");
		return ptr;
	}

};


// Class FortniteGame.FortWeaponRanged
// 0x0218 (0x0CA0 - 0x0A88)
class AFortWeaponRanged : public AFortWeapon
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x0A88(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeaponRanged");
		return ptr;
	}

};


// Class FortniteGame.FortWeap_WannaGun
// 0x0060 (0x0D00 - 0x0CA0)
class AFortWeap_WannaGun : public AFortWeaponRanged
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0CA0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortWeap_WannaGun");
		return ptr;
	}

};


// Class FortniteGame.FrontEndSettings
// 0x0010 (0x0398 - 0x0388)
class AFrontEndSettings : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FrontEndSettings");
		return ptr;
	}

};


// Class FortniteGame.HeartbeatManager
// 0x0040 (0x0068 - 0x0028)
class UHeartbeatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.HeartbeatManager");
		return ptr;
	}

};


// Class FortniteGame.HoverDroneMovementComponent
// 0x00C8 (0x0260 - 0x0198)
class UHoverDroneMovementComponent : public USpectatorPawnMovement
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0198(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.HoverDroneMovementComponent");
		return ptr;
	}

};


// Class FortniteGame.LevelTestingActorBase
// 0x0000 (0x0388 - 0x0388)
class ALevelTestingActorBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.LevelTestingActorBase");
		return ptr;
	}


	void STATIC_ExtractSkeletalMeshScale();
	void STATIC_ExtractSkeletalMesh();
};


// Class FortniteGame.ManorPortal
// 0x0048 (0x03D0 - 0x0388)
class AManorPortal : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0388(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.ManorPortal");
		return ptr;
	}


	void UnlockPortal(class AFortPlayerController* Player);
	void OpenUnlockMenu(class AFortPlayerController* Player);
	void IsProfileValidToReadPortalAvailability(class AFortPlayerController* Player);
	void IsPortalUnlocked(class AFortPlayerController* Player);
	void GetPlayerCurrencyAmount(class AFortPlayerController* Player);
	void GetCurrencyCost(class AFortPlayerController* Player);
	void BlueprintOnUnlockPortalComplete();
};


// Class FortniteGame.MatchHeartbeatManager
// 0x0030 (0x0058 - 0x0028)
class UMatchHeartbeatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.MatchHeartbeatManager");
		return ptr;
	}

};


// Class FortniteGame.MovementComp_Tracer
// 0x0008 (0x0140 - 0x0138)
class UMovementComp_Tracer : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.MovementComp_Tracer");
		return ptr;
	}

};


// Class FortniteGame.NavGraphDebugActor
// 0x0000 (0x0388 - 0x0388)
class ANavGraphDebugActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.NavGraphDebugActor");
		return ptr;
	}

};


// Class FortniteGame.StatManager
// 0x0078 (0x00A0 - 0x0028)
class UStatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.StatManager");
		return ptr;
	}

};


// Class FortniteGame.TimeOfDayController_BlueprintBase
// 0x00D0 (0x0458 - 0x0388)
class ATimeOfDayController_BlueprintBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0388(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.TimeOfDayController_BlueprintBase");
		return ptr;
	}

};


// Class FortniteGame.WaterVolume_Deep
// 0x0018 (0x03E8 - 0x03D0)
class AWaterVolume_Deep : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.WaterVolume_Deep");
		return ptr;
	}

};


// Class FortniteGame.WaterVolume_Shallow
// 0x0010 (0x03E0 - 0x03D0)
class AWaterVolume_Shallow : public APhysicsVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.WaterVolume_Shallow");
		return ptr;
	}

};


// Class FortniteGame.WorldMapPinManager
// 0x0020 (0x03A8 - 0x0388)
class AWorldMapPinManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0388(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.WorldMapPinManager");
		return ptr;
	}

};


// Class FortniteGame.WorldTheme
// 0x01C0 (0x01E8 - 0x0028)
class UWorldTheme : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0028(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.WorldTheme");
		return ptr;
	}

};


// Class FortniteGame.WorldTileGroup
// 0x00D8 (0x0100 - 0x0028)
class UWorldTileGroup : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.WorldTileGroup");
		return ptr;
	}

};


// Class FortniteGame.WorldTileType
// 0x0038 (0x0060 - 0x0028)
class UWorldTileType : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.WorldTileType");
		return ptr;
	}

};


// Class FortniteGame.FortBehaviorTreeComponent
// 0x0000 (0x0288 - 0x0288)
class UFortBehaviorTreeComponent : public UBehaviorTreeComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteGame.FortBehaviorTreeComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
