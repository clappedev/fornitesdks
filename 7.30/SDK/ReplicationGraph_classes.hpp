#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x438 (0x460 - 0x28)
// Class ReplicationGraph.ReplicationGraph
class UReplicationGraph : public UReplicationDriver
{
public:
	TSubclassOf<class UNetReplicationGraphConnection> ReplicationConnectionManagerClass;                 // 0x28(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                            NetDriver;                                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> Connections;                                       // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> PendingConnections;                                // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_135B[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UReplicationGraphNode*>         GlobalGraphNodes;                                  // 0x98(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UReplicationGraphNode*>         PrepareForReplicationNodes;                        // 0xA8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_135C[0x3A8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraph");
		return Clss;
	}

};

// 0x30 (0x490 - 0x460)
// Class ReplicationGraph.BasicReplicationGraph
class UBasicReplicationGraph : public UReplicationGraph
{
public:
	//class UReplicationGraphNode_GridSpatialization2D* GridNode;                                          // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_ActorList*       AlwaysRelevantNode;                                // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;                   // 0x468(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ActorsWithoutNetConnection;                        // 0x478(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_135D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BasicReplicationGraph");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class ReplicationGraph.ReplicationGraphNode
class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>         AllChildNodes;                                     // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_135E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode");
		return Clss;
	}

};

// 0xA8 (0xF8 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_ActorList
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	uint8                                        Pad_135F[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_ActorList");
		return Clss;
	}

};

// 0xE8 (0x138 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:
	uint8                                        Pad_1360[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_ActorListFrequencyBuckets");
		return Clss;
	}

};

// 0x30 (0x128 - 0xF8)
// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1361[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_DynamicSpatialFrequency");
		return Clss;
	}

};

// 0x98 (0x190 - 0xF8)
// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormanyNode
class UReplicationGraphNode_ConnectionDormanyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1362[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_ConnectionDormanyNode");
		return Clss;
	}

};

// 0x50 (0x148 - 0xF8)
// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1363[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_DormancyNode");
		return Clss;
	}

};

// 0x58 (0x150 - 0xF8)
// Class ReplicationGraph.ReplicationGraphNode_GridCell
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1364[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UReplicationGraphNode*                 DynamicNode;                                       // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_DormancyNode*    DormancyNode;                                      // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_GridCell");
		return Clss;
	}

};

// 0x1C0 (0x210 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	uint8                                        Pad_1365[0x1C0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_GridSpatialization2D");
		return Clss;
	}

};

// 0x18 (0x68 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                 ChildNode;                                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1366[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_AlwaysRelevant");
		return Clss;
	}

};

// 0x28 (0x120 - 0xF8)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1367[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LastViewer;                                        // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LastViewTarget;                                    // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_AlwaysRelevant_ForConnection");
		return Clss;
	}

};

// 0x28 (0x78 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:
	TArray<struct FTearOffActorInfo>             TearOffActors;                                     // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1368[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_TearOff_ForConnection");
		return Clss;
	}

};

// 0x1F0 (0x218 - 0x28)
// Class ReplicationGraph.NetReplicationGraphConnection
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1369[0x140];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class AReplicationGraphDebugActor*           DebugActor;                                        // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136A[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UReplicationGraphNode*>         ConnectionGraphNodes;                              // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                       // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_136B[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetReplicationGraphConnection");
		return Clss;
	}

};

// 0x10 (0x340 - 0x330)
// Class ReplicationGraph.ReplicationGraphDebugActor
class AReplicationGraphDebugActor : public AActor
{
public:
	class UReplicationGraph*                     ReplicationGraph;                                  // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetReplicationGraphConnection*        ConnectionManager;                                 // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphDebugActor");
		return Clss;
	}

	void ServerStopDebugging();
	void ServerStartDebugging();
	void ServerSetPeriodFrameForClass(class UClass* Class, int32 PeriodFrame);
	void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);
	void ServerSetConditionalActorBreakpoint(class AActor* Actor);
	void ServerPrintAllActorInfo(const class FString& Str);
	void ServerCellInfo();
	void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*>& Actors);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
