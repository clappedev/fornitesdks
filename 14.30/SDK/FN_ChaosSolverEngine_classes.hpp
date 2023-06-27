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

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// 0x0008 (0x00B8 - 0x00B0)
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosDebugDrawComponent");
		
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (0x00B8 - 0x00B0)
class UChaosEventListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosEventListenerComponent");
		
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x01B8 (0x0270 - 0x00B8)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00B8(0x0110) MISSED OFFSET
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                              // 0x01C8(0x0050)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                  // 0x0218(0x0050)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosGameplayEventDispatcher");
		
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UChaosNotifyHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosNotifyHandlerInterface");
		
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
		
		return ptr;
	}


	struct FHitResult STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
};


// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
class UChaosSolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolver");
		
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverActor
// 0x00E0 (0x0300 - 0x0220)
class AChaosSolverActor : public AActor
{
public:
	struct FChaosSolverConfiguration                   Properties;                                               // 0x0220(0x0050) (Edit)
	float                                              TimeStepMultiplier;                                       // 0x0270(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                CollisionIterations;                                      // 0x0274(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                PushOutIterations;                                        // 0x0278(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                PushOutPairIterations;                                    // 0x027C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ClusterConnectionFactor;                                  // 0x0280(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                               // 0x0284(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               DoGenerateCollisionData;                                  // 0x0285(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0286(0x0002) MISSED OFFSET
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                  // 0x0288(0x0010) (Deprecated)
	bool                                               DoGenerateBreakingData;                                   // 0x0298(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                   // 0x029C(0x0010) (Deprecated)
	bool                                               DoGenerateTrailingData;                                   // 0x02AC(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                   // 0x02B0(0x0010) (Deprecated)
	float                                              MassScale;                                                // 0x02C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateContactGraph;                                    // 0x02C4(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bHasFloor;                                                // 0x02C5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02C6(0x0002) MISSED OFFSET
	float                                              FloorHeight;                                              // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FChaosDebugSubstepControl                   ChaosDebugSubstepControl;                                 // 0x02CC(0x0003) (Edit)
	unsigned char                                      UnknownData04[0x1];                                       // 0x02CF(0x0001) MISSED OFFSET
	class UBillboardComponent*                         SpriteComponent;                                          // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x02D8(0x0018) MISSED OFFSET
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                         // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverActor");
		
		return ptr;
	}


	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};


// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0020 (0x0058 - 0x0038)
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSoftClassPath                              DefaultChaosSolverActorClass;                             // 0x0040(0x0018) (Edit, ZeroConstructor, Config, NoClear)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverSettings");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
