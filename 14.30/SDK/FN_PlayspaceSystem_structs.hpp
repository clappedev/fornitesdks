#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlayspaceSystem.PlayspaceUser
// 0x0044 (0x0050 - 0x000C)
struct FPlayspaceUser : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            UserId;                                                   // 0x0010(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class APlayspace*                                  LeafPlayspace;                                            // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerStateCached;                                        // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AController*                                 ControllerCached;                                         // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct PlayspaceSystem.PlayspaceUserList
// 0x0020 (0x0128 - 0x0108)
struct FPlayspaceUserList : public FFastArraySerializer
{
	TArray<struct FPlayspaceUser>                      PlayspaceUsers;                                           // 0x0108(0x0010) (ZeroConstructor, Transient)
	bool                                               bIsInitialized;                                           // 0x0118(0x0001) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	class APlayspace*                                  Playspace;                                                // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct PlayspaceSystem.ReplicatedSpawnInfo
// 0x002C
struct FReplicatedSpawnInfo
{
	struct FVector                                     SpawnLocation;                                            // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ServerSpawnTime;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeForCameraFadeTransition;                           // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlayspaceSystem.PlayspaceSpawningInfo
// 0x0068
struct FPlayspaceSpawningInfo
{
	struct FUniqueNetIdRepl                            UserId;                                                   // 0x0000(0x0028)
	TWeakObjectPtr<class APlayspace>                   RequestingPlayspace;                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       SpawnLocationActor;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnTimeServer;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              MinTimeForCameraFadeTransition;                           // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct PlayspaceSystem.ActorOverlapEvent
// 0x0010
struct FActorOverlapEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
