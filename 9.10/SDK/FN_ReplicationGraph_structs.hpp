#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// 0x0010
struct FConnectionAlwaysRelevantNodePair
{
	class UNetConnection*                              NetConnection;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// 0x0018
struct FAlwaysRelevantActorInfo
{
	class UNetConnection*                              Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      LastViewer;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      LastViewTarget;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
// 0x0018
struct FTearOffActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ReplicationGraph.LastLocationGatherInfo
// 0x0018
struct FLastLocationGatherInfo
{
	class UNetConnection*                              Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
