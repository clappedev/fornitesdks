#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x116 (0x6D6 - 0x5C0)
// BlueprintGeneratedClass BP_Hex_PARENT.BP_Hex_PARENT_C
class ABP_Hex_PARENT_C : public AFortTheaterMapTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_StrongStormAffected;                             // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      StormZoneIndicator;                                // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_StormAffected;                                   // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_CloudTwister_RandomLightning_01;                 // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PinnedQuestIcon;                                   // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MissionIconMesh;                                   // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MouseoverMesh;                                     // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SelectedIndicatorMesh;                             // 0x600(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HexTileSound;                                      // 0x608(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_12_NewTrack_2_9A9B376A4CE242AE90C66285F93293B7; // 0x610(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_12__Direction_9A9B376A4CE242AE90C66285F93293B7; // 0x614(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_12;                                       // 0x618(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_11_NewTrack_0_ABB0E704455E70C66E9A21979F9D10BE; // 0x620(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_11__Direction_ABB0E704455E70C66E9A21979F9D10BE; // 0x624(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_11;                                       // 0x628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HexAudioComponent;                                 // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HexMapSound;                                       // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StormChance;                                       // 0x640(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHexNeighborTextureBlending;                     // 0x644(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DoesTileHaveRoads;                                 // 0x645(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFirstOutpost;                                    // 0x646(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsOutpost;                                         // 0x647(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsQuickplayMission;                                // 0x648(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomIndex;                                       // 0x64C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  HexDecoMesh;                                       // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Mouseover;                                         // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MissionSelected;                                   // 0x659(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TileIsPlayable;                                    // 0x65A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TileIsLocked;                                      // 0x65B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TileIsHidden;                                      // 0x65C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TileIsVaildMission;                                // 0x65D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E33[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MIDMissionIcon;                                    // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Selected;                                      // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   Hex_Deco_Meshes;                                   // 0x670(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstanceDynamic*              MID_Mouseover;                                     // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RenderHexWithClouds;                               // 0x688(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MIDMissionPinnedIcon;                              // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DifficultyColor;                                   // 0x698(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PinnedQuest;                                       // 0x6A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATheaterCamera_Blueprint_C*            TheaterCamera;                                     // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CameraIsMissionControl;                            // 0x6B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTutorial;                                        // 0x6B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E36[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimesUpdated;                                      // 0x6BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TileIsBeingInitialized;                            // 0x6C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PauseUpdates;                                      // 0x6C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PinnedMissionExists;                               // 0x6C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         OppositePinnedQuest;                               // 0x6C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        OppositePinnedQuestOpacity;                        // 0x6C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseLightning;                                      // 0x6C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMainMission;                                     // 0x6C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBlockParty;                                      // 0x6CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E37[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TileTypeNumber;                                    // 0x6CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StormModLightningStrength;                         // 0x6D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StormLevel1;                                       // 0x6D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StormLevel2;                                       // 0x6D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Hex_PARENT_C");
		return Clss;
	}

	void HasPinnedQuest(bool* Pinned);
	void HandleUpdatingBannerMesh(class USceneComponent* Target, class UFortQuestItemDefinition* CompletedQuest, class UMaterialInstanceDynamic* Material_Instance_Dynamic, const struct FUniqueNetIdRepl& UniqueId, bool HasCompletedQuest, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue);
	void HandleMissionAlert(const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue1, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue2, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue2, const struct FGameplayTagContainer& CallFunc_GetMissionAlertVisualTags_ReturnValue3, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UMissionAlertIndicator_C* K2Node_DynamicCast_AsMission_Alert_Indicator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTileHidden_ReturnValue, bool CallFunc_IsMissionAlertTile_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB);
	void UserConstructionScript(const struct FTransform& Temp_struct_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void Timeline_11__FinishedFunc();
	void Timeline_11__UpdateFunc();
	void Timeline_12__FinishedFunc();
	void Timeline_12__UpdateFunc();
	void OnLoaded_192496DB41CC2100CC1C729DB594CEF8(class UObject* Loaded);
	void CheckFocus();
	void FireLightningA();
	void ForceDefocus();
	void OnMissionDataUpdated();
	void OnDefocus();
	void OnFocus();
	void OnHostDeselect();
	void OnHostSelect();
	void OnClientDeselect();
	void OnClientSelect();
	void HandleTeamPowerChanged(int32 TeamPower, int32 PersonalPower);
	void OnInitializeTile();
	void HandleFrontendCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera);
	void OnMarkedQuestChanged();
	void CheckIfQuestShouldBePinned();
	void CheckForPinnedInLevel();
	void RetryTileInitialized();
	void SetMissionPowerLevelDependencies();
	void ReceiveBeginPlay();
	void MissionLightning(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void MissionLightningOff(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction);
	void Unpause_Updates();
	void AsyncUpdateBanner(class UMaterialInstanceDynamic* Material_Instance_Dynamic, const struct FUniqueNetIdRepl& Unique_Net_Id);
	void HandlePartyTypeChanged(enum class EPartyType PartyType);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void HandleTeamMemberRemoved(int32 PlayerIndex);
	void RefreshTile();
	void HandlePartyChanged();
	void HandleTeamMemberPromoted();
	void ExecuteUbergraph_BP_Hex_PARENT(int32 EntryPoint, bool CallFunc_IsTilePlayable_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_CustomEvent_TeamPower, int32 K2Node_CustomEvent_PersonalPower, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, class UFortQuestItem* CallFunc_IsTileValidForMarkedQuest_OutMarkedQuest, bool CallFunc_IsTileValidForMarkedQuest_ReturnValue, bool CallFunc_HasValidMissionData_ReturnValue, TArray<class ATheaterCamera_Blueprint_C*>& CallFunc_GetAllActorsOfClass_OutActors, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsTileHidden_ReturnValue, bool CallFunc_IsTileLocked_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue2, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue2, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue3, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_NotEqual_ByteByte_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, int32 Temp_int_Array_Index_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4, class ATheaterCamera_Blueprint_C* CallFunc_Array_Get_Item, class UHomeBaseContext* CallFunc_GetContext_ReturnValue5, int32 CallFunc_GetTotalSkillPointsEarned_ReturnValue, class UTexture* Temp_object_Variable1, const struct FLinearColor& CallFunc_Get_Conning_Color_For_Specific_Difficulty_Difficulty_Linear_Color, bool CallFunc_Get_Conning_Color_For_Specific_Difficulty_Invalid, class UTexture* Temp_object_Variable2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default, const struct FFortMissionDetails& CallFunc_GetTileMissionDetails_MissionDetails, bool CallFunc_GetTileMissionDetails_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue6, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Get_Conning_Color_From_Difficulty_Value_Difficulty_Linear_Color, bool CallFunc_Get_Conning_Color_From_Difficulty_Value_Success, class FText CallFunc_Get_Conning_Color_From_Difficulty_Value_TooltipText, int32 CallFunc_Get_Conning_Color_From_Difficulty_Value_DifficultyValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName K2Node_CustomEvent_EventName1, float K2Node_CustomEvent_EmitterTime1, const struct FVector& K2Node_CustomEvent_Location1, const struct FVector& K2Node_CustomEvent_Velocity1, class FName K2Node_CustomEvent_EventName, float K2Node_CustomEvent_EmitterTime, int32 K2Node_CustomEvent_ParticleTime, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Velocity, const struct FVector& K2Node_CustomEvent_Direction, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class UMaterialInstanceDynamic* K2Node_CustomEvent_Material_Instance_Dynamic, const struct FUniqueNetIdRepl& K2Node_CustomEvent_Unique_Net_Id, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfoForPlayer_Result, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1, const struct FLinearColor& CallFunc_GetBannerColorPrimaryColorFromRowName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerLargeIconAssetFromRowName_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorSecondaryColorFromRowName_ReturnValue, enum class EPartyType K2Node_CustomEvent_PartyType, const struct FFortTeamMemberInfo& K2Node_CustomEvent_NewTeamMemberInfo, int32 K2Node_CustomEvent_PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue9, const struct FFortMissionDetails& CallFunc_GetTileMissionDetails_MissionDetails1, bool CallFunc_GetTileMissionDetails_ReturnValue1, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
