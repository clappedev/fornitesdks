#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MeshNetwork.MeshBeaconClient
// 0x0038 (0x02F8 - 0x02C0)
class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02C0(0x0020) MISSED OFFSET
	bool                                               bConnectedToRoot;                                         // 0x02E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x02E1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconClient");
		return ptr;
	}


	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities);
	void ServerUpdateLevelVisibility(struct FName PackageName, bool bIsVisible);
	void OnRep_ConnectedToRoot();
};


// Class MeshNetwork.MeshBeaconHost
// 0x0008 (0x0330 - 0x0328)
class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int                                                MaxConnections;                                           // 0x0328(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconHost");
		return ptr;
	}

};


// Class MeshNetwork.MeshBeaconHostObject
// 0x0008 (0x0270 - 0x0268)
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconHostObject");
		return ptr;
	}

};


// Class MeshNetwork.MeshConnection
// 0x0000 (0x19E0 - 0x19E0)
class UMeshConnection : public UIpConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshConnection");
		return ptr;
	}

};


// Class MeshNetwork.MeshNetDriver
// 0x0000 (0x0778 - 0x0778)
class UMeshNetDriver : public UIpNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshNetDriver");
		return ptr;
	}

};


// Class MeshNetwork.MeshNetworkComponent
// 0x00A8 (0x0180 - 0x00D8)
class UMeshNetworkComponent : public UActorComponent
{
public:
	EMeshNetworkRelevancy                              MeshRelevancy;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	TMap<struct FName, double>                         AggregationTimeouts;                                      // 0x00E0(0x0050) (Edit, ZeroConstructor)
	TMap<struct FName, struct FAggregatedFunction>     AggregatedFunctions;                                      // 0x0130(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshNetworkComponent");
		return ptr;
	}


	EMeshNetworkNodeType GetMeshNetworkNodeType();
};


// Class MeshNetwork.MeshNetworkSubsystem
// 0x00B0 (0x00E0 - 0x0030)
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnMeshNodeTypeChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnConnectedToRootChanged
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnGameServerNodeTypeChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnMeshMetaDataUpdated
	unsigned char                                      UnknownData04[0x18];                                      // 0x0070(0x0018) MISSED OFFSET
	EMeshNetworkNodeType                               NodeType;                                                 // 0x0088(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EMeshNetworkNodeType                               GameServerNodeType;                                       // 0x0089(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bConnectedToRoot;                                         // 0x008A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x55];                                      // 0x008B(0x0055) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshNetworkSubsystem");
		return ptr;
	}


	void SetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct MetaData);
	void SetMetaData(struct FMeshMetaDataStruct MetaData);
	bool GetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct* MetaData);
	void GetMetadata(struct FMeshMetaDataStruct* MetaData);
	EMeshNetworkNodeType GetMeshNetworkNodeType();
	EMeshNetworkNodeType GetGameServerNodeType();
	bool GetConnectedToRoot();
};


// Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0028 (0x0120 - 0x00F8)
class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET
	class AActor*                                      LastViewer;                                               // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      LastViewTarget;                                           // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}

};


// Class MeshNetwork.MeshReplicationGraph
// 0x0000 (0x0490 - 0x0490)
class UMeshReplicationGraph : public UReplicationGraph
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshReplicationGraph");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
