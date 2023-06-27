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

// Class NavigationSystem.NavigationData
// 0x0208 (0x0428 - 0x0220)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         RenderingComp;                                            // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	struct FNavDataConfig                              NavDataConfig;                                            // 0x0230(0x0078)
	unsigned char                                      bEnableDrawing : 1;                                       // 0x02A8(0x0001) (Edit, Transient)
	unsigned char                                      bForceRebuildOnLoad : 1;                                  // 0x02A8(0x0001) (Edit, Config)
	unsigned char                                      bAutoDestroyWhenNoNavigation : 1;                         // 0x02A8(0x0001) (Edit, Config)
	unsigned char                                      bCanBeMainNavData : 1;                                    // 0x02A8(0x0001) (Edit, Config)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                   // 0x02A8(0x0001) (Edit, Config, EditConst)
	unsigned char                                      bRebuildAtRuntime : 1;                                    // 0x02A8(0x0001) (Config, Deprecated)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	ERuntimeGenerationType                             RuntimeGeneration;                                        // 0x02AC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	float                                              ObservedPathsTickInterval;                                // 0x02B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           DataVersion;                                              // 0x02B4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x108];                                     // 0x02B8(0x0108) MISSED OFFSET
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                           // 0x03C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x58];                                      // 0x03D0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMesh
// 0x00B0 (0x04D8 - 0x0428)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                   // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawPolyEdges : 1;                                       // 0x0428(0x0001) (Edit, Config)
	unsigned char                                      bDrawFilledPolys : 1;                                     // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawNavMeshEdges : 1;                                    // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawTileBounds : 1;                                      // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                           // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawTileLabels : 1;                                      // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawPolygonLabels : 1;                                   // 0x0428(0x0001) (Edit)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                              // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                               // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawNavLinks : 1;                                        // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawFailedNavLinks : 1;                                  // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawClusters : 1;                                        // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawOctree : 1;                                          // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawOctreeDetails : 1;                                   // 0x0429(0x0001) (Edit)
	unsigned char                                      bDrawMarkedForbiddenPolys : 1;                            // 0x0429(0x0001) (Edit)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                       // 0x042A(0x0001) (Config)
	unsigned char                                      bDrawNavMesh : 1;                                         // 0x042A(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x042B(0x0001) MISSED OFFSET
	float                                              DrawOffset;                                               // 0x042C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x0430(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                TilePoolSize;                                             // 0x0434(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TileSizeUU;                                               // 0x0438(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellSize;                                                 // 0x043C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CellHeight;                                               // 0x0440(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x0444(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0448(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x044C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              AgentMaxStepHeight;                                       // 0x0450(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0454(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MergeRegionSize;                                          // 0x0458(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSimplificationError;                                   // 0x045C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSimultaneousTileGenerationJobsCount;                   // 0x0460(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TileNumberHardLimit;                                      // 0x0464(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PolyRefTileBits;                                          // 0x0468(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefNavPolyBits;                                       // 0x046C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                PolyRefSaltBits;                                          // 0x0470(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     NavMeshOriginOffset;                                      // 0x0474(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultDrawDistance;                                      // 0x0480(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxSearchNodes;                                    // 0x0484(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultMaxHierarchicalSearchNodes;                        // 0x0488(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                       // 0x048C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                        // 0x048D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x048E(0x0002) MISSED OFFSET
	int                                                RegionChunkSplits;                                        // 0x0490(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                LayerChunkSplits;                                         // 0x0494(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bUseExtraTopCellWhenMarkingAreas : 1;                     // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                        // 0x0498(0x0001) (Edit, Config)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                         // 0x0498(0x0001) (Config)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                // 0x0499(0x0001) (Config)
	unsigned char                                      bUseVirtualFilters : 1;                                   // 0x0499(0x0001) (Config)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                               // 0x0499(0x0001) (Config)
	unsigned char                                      bUseVoxelCache : 1;                                       // 0x0499(0x0001) (Config)
	unsigned char                                      UnknownData03[0x2];                                       // 0x049A(0x0002) MISSED OFFSET
	float                                              TileSetUpdateInterval;                                    // 0x049C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HeuristicScale;                                           // 0x04A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VerticalDeviationFromGroundCompensation;                  // 0x04A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x04A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		
		return ptr;
	}


	bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UNavArea* OldArea, class UNavArea* NewArea, bool ReplaceLinks);
};


// Class NavigationSystem.NavMeshRenderingComponent
// 0x0010 (0x0450 - 0x0440)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		
		return ptr;
	}

};


// Class NavigationSystem.NavigationSystemV1
// 0x15B8 (0x15E0 - 0x0028)
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                             MainNavData;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ANavigationData*                             AbstractNavData;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       DefaultAgentName;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty NavigationSystem.NavigationSystemV1.CrowdManagerClass
	unsigned char                                      bAutoCreateNavigationData : 1;                            // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bAllowClientSideNavigation : 1;                           // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                        // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bTickWhilePaused : 1;                                     // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      bSupportRebuilding : 1;                                   // 0x0068(0x0001)
	unsigned char                                      bInitialBuildingLocked : 1;                               // 0x0068(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01 : 1;                                        // 0x0068(0x0001)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;              // 0x0069(0x0001) (Edit, Config)
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;      // 0x0069(0x0001) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	float                                              ActiveTilesUpdateInterval;                                // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ENavDataGatheringModeConfig                        DataGatheringMode;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              DirtyAreaWarningSizeThreshold;                            // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                          // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	struct FNavAgentSelector                           SupportedAgentsMask;                                      // 0x0088(0x0004) (Edit, Config)
	unsigned char                                      UnknownData04[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TArray<class ANavigationData*>                     NavDataSet;                                               // 0x0090(0x0010) (ZeroConstructor, Transient)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                 // 0x00A0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData06[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NavigationSystem.NavigationSystemV1.OnNavDataRegisteredEvent
	unsigned char                                      UnknownData07[0x10];                                      // 0x00D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NavigationSystem.NavigationSystemV1.OnNavigationGenerationFinishedDelegate
	unsigned char                                      UnknownData08[0xDC];                                      // 0x00E0(0x00DC) MISSED OFFSET
	EFNavigationSystemRunMode                          OperationMode;                                            // 0x01BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x13FF];                                    // 0x01BD(0x13FF) MISSED OFFSET
	float                                              DirtyAreasUpdateFreq;                                     // 0x15BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x20];                                      // 0x15C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		
		return ptr;
	}


	void UnregisterNavigationInvoker(class AActor* Invoker);
	void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	bool STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, class UNavigationQueryFilter* FilterClass, class AController* Querier, struct FVector* HitLocation);
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UNavArea* OldArea, class UNavArea* NewArea);
	bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, const struct FVector& QueryExtent, struct FVector* ProjectedLocation);
	bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, struct FVector* RandomLocation);
	bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, struct FVector* RandomLocation);
	bool STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, struct FVector* RandomLocation);
	bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject);
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass);
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, float* PathLength);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, float* PathCost);
	class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);
	class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UNavigationQueryFilter* FilterClass);
	class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UNavigationQueryFilter* FilterClass);
};


// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (0x0058 - 0x0050)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                      // 0x0050(0x0001) (Edit)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x0050(0x0001) (Edit)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                             // 0x0050(0x0001) (Edit)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		
		return ptr;
	}

};


// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (0x0230 - 0x0220)
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	ENavSystemOverridePolicy                           OverridePolicy;                                           // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLoadOnClient : 1;                                        // 0x0229(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x022A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		
		return ptr;
	}

};


// Class NavigationSystem.NavArea
// 0x0018 (0x0048 - 0x0030)
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              FixedAreaEnteringCost;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x003C(0x0004) (Edit, Config)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0040(0x0001) (Config)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0041(0x0001) (Config)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		
		return ptr;
	}

};


// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000 (0x0440 - 0x0440)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		
		return ptr;
	}

};


// Class NavigationSystem.CrowdManagerBase
// 0x0000 (0x0028 - 0x0028)
class UCrowdManagerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		
		return ptr;
	}

};


// Class NavigationSystem.NavRelevantComponent
// 0x0030 (0x00E0 - 0x00B0)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00B0(0x0024) MISSED OFFSET
	unsigned char                                      bAttachToOwnersRoot : 1;                                  // 0x00D4(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	class UObject*                                     CachedNavParent;                                          // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		
		return ptr;
	}


	void SetNavigationRelevancy(bool bRelevant);
};


// Class NavigationSystem.NavLinkCustomComponent
// 0x00B0 (0x0190 - 0x00E0)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	uint32_t                                           NavLinkUserId;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UNavArea*                                    EnabledAreaClass;                                         // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    DisabledAreaClass;                                        // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0100(0x0004) (Edit)
	struct FVector                                     LinkRelativeStart;                                        // 0x0104(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinkRelativeEnd;                                          // 0x0110(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                            // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	unsigned char                                      bLinkEnabled : 1;                                         // 0x0120(0x0001) (Edit)
	unsigned char                                      bNotifyWhenEnabled : 1;                                   // 0x0120(0x0001) (Edit)
	unsigned char                                      bNotifyWhenDisabled : 1;                                  // 0x0120(0x0001) (Edit)
	unsigned char                                      bCreateBoxObstacle : 1;                                   // 0x0120(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FVector                                     ObstacleOffset;                                           // 0x0124(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ObstacleExtent;                                           // 0x0130(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UNavArea*                                    ObstacleAreaClass;                                        // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastRadius;                                          // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BroadcastInterval;                                        // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                         // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3F];                                      // 0x0151(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta
// 0x0000 (0x0048 - 0x0048)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		
		return ptr;
	}

};


// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (0x0048 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FNavigationFilterFlags                      IncludeFlags;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavigationFilterFlags                      ExcludeFlags;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		
		return ptr;
	}

};


// Class NavigationSystem.AbstractNavData
// 0x0000 (0x0428 - 0x0428)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Default
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		
		return ptr;
	}

};


// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (0x0048 - 0x0048)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Null
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C8 - 0x0048)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UNavArea*                                    Agent0Area;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent1Area;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent2Area;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent3Area;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent4Area;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent5Area;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent6Area;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent7Area;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent8Area;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent9Area;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent10Area;                                              // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent11Area;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent12Area;                                              // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent13Area;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent14Area;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavArea*                                    Agent15Area;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		
		return ptr;
	}

};


// Class NavigationSystem.NavCollision
// 0x0068 (0x00D8 - 0x0070)
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                        // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                             // 0x0090(0x0010) (Edit, ZeroConstructor)
	class UNavArea*                                    AreaClass;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGatherConvexGeometry : 1;                                // 0x00A8(0x0001) (Edit, Config)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x00A8(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00A9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraph
// 0x0000 (0x0428 - 0x0428)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNode
// 0x0000 (0x0220 - 0x0220)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0020 (0x0220 - 0x0200)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                        // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                        // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		
		return ptr;
	}

};


// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (0x00B8 - 0x00B0)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                     // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TileRemovalRadius;                                        // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		
		return ptr;
	}

};


// Class NavigationSystem.NavigationPath
// 0x0060 (0x0088 - 0x0028)
class UNavigationPath : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NavigationSystem.NavigationPath.PathUpdatedNotifier
	TArray<struct FVector>                             PathPoints;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0049(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		
		return ptr;
	}


	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};


// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		
		return ptr;
	}

};


// Class NavigationSystem.NavigationTestingActor
// 0x00F0 (0x0310 - 0x0220)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationInvokerComponent*                 InvokerComponent;                                         // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bActAsNavigationInvoker : 1;                              // 0x0240(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x0248(0x0030) (Edit)
	struct FVector                                     QueryingExtent;                                           // 0x0278(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     ProjectedLocation;                                        // 0x0290(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bProjectedLocationValid : 1;                              // 0x029C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSearchStart : 1;                                         // 0x029C(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	float                                              CostLimitFactor;                                          // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumCostLimit;                                         // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBacktracking : 1;                                        // 0x02A8(0x0001) (Edit)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                          // 0x02A8(0x0001) (Edit)
	unsigned char                                      bGatherDetailedInfo : 1;                                  // 0x02A8(0x0001) (Edit)
	unsigned char                                      bDrawDistanceToWall : 1;                                  // 0x02A8(0x0001) (Edit)
	unsigned char                                      bShowNodePool : 1;                                        // 0x02A8(0x0001) (Edit)
	unsigned char                                      bShowBestPath : 1;                                        // 0x02A8(0x0001) (Edit)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                            // 0x02A8(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x02A8(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                          // 0x02AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	struct FVector2D                                   TextCanvasOffset;                                         // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPathExist : 1;                                           // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathIsPartial : 1;                                       // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	unsigned char                                      UnknownData06[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              PathfindingTime;                                          // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              PathCost;                                                 // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                PathfindingSteps;                                         // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class ANavigationTestingActor*                     OtherActor;                                               // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UNavigationQueryFilter*                      FilterClass;                                              // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowStepIndex;                                            // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	float                                              OffsetFromCornersDistance;                                // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x30];                                      // 0x02E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		
		return ptr;
	}

};


// Class NavigationSystem.NavLinkComponent
// 0x0020 (0x0460 - 0x0440)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	TArray<struct FNavigationLink>                     Links;                                                    // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		
		return ptr;
	}

};


// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		
		return ptr;
	}

};


// Class NavigationSystem.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		
		return ptr;
	}

};


// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (0x0260 - 0x0258)
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0258(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		
		return ptr;
	}

};


// Class NavigationSystem.NavModifierComponent
// 0x0060 (0x0140 - 0x00E0)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UNavArea*                                    AreaClass;                                                // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FailsafeExtent;                                           // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeAgentHeight : 1;                                  // 0x00F4(0x0001) (Edit, Config)
	unsigned char                                      UnknownData00[0x4B];                                      // 0x00F5(0x004B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		
		return ptr;
	}


	void SetAreaClass(class UNavArea* NewAreaClass);
};


// Class NavigationSystem.NavModifierVolume
// 0x0018 (0x0270 - 0x0258)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	class UNavArea*                                    AreaClass;                                                // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                   // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0269(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		
		return ptr;
	}


	void SetAreaClass(class UNavArea* NewAreaClass);
};


// Class NavigationSystem.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		
		return ptr;
	}

};


// Class NavigationSystem.NavTestRenderingComponent
// 0x0000 (0x0440 - 0x0440)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		
		return ptr;
	}

};


// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (0x0048 - 0x0048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
