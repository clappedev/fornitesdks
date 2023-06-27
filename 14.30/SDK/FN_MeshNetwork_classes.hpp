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

// Class MeshNetwork.MeshBeaconClient
// 0x0070 (0x0320 - 0x02B0)
class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02B0(0x0040) MISSED OFFSET
	bool                                               bConnectedToRoot;                                         // 0x02F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct FDateTime                                   MeshPingTime;                                             // 0x02F8(0x0008) (Net, ZeroConstructor)
	TArray<struct FString>                             ParentIds;                                                // 0x0300(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconClient");
		
		return ptr;
	}


	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities);
	void ServerUpdateLevelVisibility(const struct FUpdateLevelVisibilityLevelInfo& LevelVisibility);
	void OnRep_ParentIds();
	void OnRep_MeshPingTime();
	void OnRep_ConnectedToRoot();
};


// Class MeshNetwork.MeshBeaconHost
// 0x0008 (0x0310 - 0x0308)
class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int                                                MaxConnections;                                           // 0x0308(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconHost");
		
		return ptr;
	}

};


// Class MeshNetwork.MeshBeaconHostObject
// 0x0018 (0x0260 - 0x0248)
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0248(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconHostObject");
		
		return ptr;
	}

};


// Class MeshNetwork.MeshConnection
// 0x0000 (0x1B50 - 0x1B50)
class UMeshConnection : public UIpConnection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshConnection");
		
		return ptr;
	}

};


// Class MeshNetwork.MeshNetDriver
// 0x0008 (0x07C0 - 0x07B8)
class UMeshNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshNetDriver");
		
		return ptr;
	}

};


// Class MeshNetwork.MeshNetworkComponent
// 0x0150 (0x0200 - 0x00B0)
class UMeshNetworkComponent : public UActorComponent
{
public:
	EMeshNetworkRelevancy                              MeshRelevancy;                                            // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TMap<struct FName, double>                         AggregationTimeouts;                                      // 0x00B8(0x0050) (Edit)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0108(0x0050) UNKNOWN PROPERTY: SetProperty MeshNetwork.MeshNetworkComponent.NoAggregationFunctions
	TMap<struct FName, struct FNoAggregationParameters> NoAggregationParameters;                                  // 0x0158(0x0050) (Edit)
	TMap<struct FString, struct FAggregatedFunction>   AggregatedFunctions;                                      // 0x01A8(0x0050) (Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshNetworkComponent");
		
		return ptr;
	}


	EMeshNetworkNodeType GetMeshNetworkNodeType();
};


// Class MeshNetwork.MeshNetworkSubsystem
// 0x00D8 (0x0108 - 0x0030)
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnMeshNodeTypeChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnConnectedToRootChanged
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnGameServerNodeTypeChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnMeshMetaDataUpdated
	unsigned char                                      UnknownData04[0x10];                                      // 0x0070(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnMeshPlayerRequested
	unsigned char                                      UnknownData05[0x30];                                      // 0x0080(0x0030) MISSED OFFSET
	EMeshNetworkNodeType                               NodeType;                                                 // 0x00B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EMeshNetworkNodeType                               GameServerNodeType;                                       // 0x00B1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bConnectedToRoot;                                         // 0x00B2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMetadataReceived;                                        // 0x00B3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x54];                                      // 0x00B4(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshNetworkSubsystem");
		
		return ptr;
	}


	void SetMetaDataWithKey(const struct FName& Key, const struct FMeshMetaDataStruct& MetaData);
	void SetMetaData(const struct FMeshMetaDataStruct& MetaData);
	bool GetMetaDataWithKey(const struct FName& Key, struct FMeshMetaDataStruct* MetaData);
	void GetMetadata(struct FMeshMetaDataStruct* MetaData);
	EMeshNetworkNodeType GetMeshNetworkNodeType();
	EMeshNetworkNodeType GetGameServerNodeType();
	bool GetConnectedToRoot();
	void EnableMeshReplication(class AActor* Actor, class UMeshNetworkComponent* MeshComponentClass);
	void DisableMeshReplication(class AActor* Actor);
};


// Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0020 (0x00F0 - 0x00D0)
class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	TArray<struct FAlwaysRelevantActorInfo>            PastRelevantActors;                                       // 0x00E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection");
		
		return ptr;
	}

};


// Class MeshNetwork.MeshReplicationGraphConnection
// 0x0000 (0x0238 - 0x0238)
class UMeshReplicationGraphConnection : public UNetReplicationGraphConnection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshReplicationGraphConnection");
		
		return ptr;
	}

};


// Class MeshNetwork.MeshReplicationGraph
// 0x0000 (0x04A0 - 0x04A0)
class UMeshReplicationGraph : public UReplicationGraph
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshNetwork.MeshReplicationGraph");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
