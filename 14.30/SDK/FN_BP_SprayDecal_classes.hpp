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

// BlueprintGeneratedClass BP_SprayDecal.BP_SprayDecal_C
// 0x00BE (0x0C5E - 0x0BA0)
class ABP_SprayDecal_C : public AFortSprayDecalInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DecalFadeoutTime;                                         // 0x0BA8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BAC(0x0004) MISSED OFFSET
	class UDecalComponent*                             EmissiveDecal;                                            // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             StainDecal;                                               // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    EmissiveDecalMID;                                         // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalSize;                                                // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0BCC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          EmissiveMatSource;                                        // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalDepth;                                               // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	class UAthenaSprayItemDefinition*                  SprayAsset;                                               // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoadsOutstanding;                                         // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0BEC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData04[0x28];                                      // 0x0BEC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_SprayDecal.BP_SprayDecal_C.DecalTextureOverrideSoft
	class UTexture2D*                                  DecalTextureOverride;                                     // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BannerPrimaryColor;                                       // 0x0C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BannerSecondaryColor;                                     // 0x0C30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       SpawningPlayerController;                                 // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              NearbyBuildingActors;                                     // 0x0C48(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              SpawnStartTimeDelay;                                      // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFrontEndPreview;                                       // 0x0C5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnTrapPlaced;                                     // 0x0C5D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SprayDecal.BP_SprayDecal_C");
		
		return ptr;
	}


	void AddBoxCollisionForCreative();
	void FindNearbyBuildingActorsAndBindDelegates();
	void UnbindAndClearNearbyBuildingActors();
	void OnRep_DecalFadeoutTime();
	struct FUniqueNetIdRepl GetInstigatorPlayerId();
	void CreateDecalComponents();
	void UserConstructionScript();
	void OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA(class UObject* Loaded);
	void OnLoaded_F925FF00475A018319C73E9FB1540BC6(class UObject* Loaded);
	void OnReady_B252FED346EAB98D54D786BD15C1CC7B(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void ReceiveBeginPlay();
	void OnSprayAssetReplicatedDown();
	void OnSprayInfoReady();
	void StartSprayFadeOutDueToNewPlacement();
	void OnNearbyWallDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void OnNearbyWallDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void OnBounceOccurs();
	void OnNearbyTrapPlaced(class ABuildingTrap* Trap, bool bDetatched);
	void PostLevelSaveSpawnCleanup();
	void OnWallDestoryed(class AActor* DestroyedActor);
	void ExecuteUbergraph_BP_SprayDecal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
