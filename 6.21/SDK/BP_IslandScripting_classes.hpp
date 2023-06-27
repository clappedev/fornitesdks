#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x188 (0x4B0 - 0x328)
// BlueprintGeneratedClass BP_IslandScripting.BP_IslandScripting_C
class ABP_IslandScripting_C : public AFortAlwaysRelevantReplicatedActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  IslandPositionUpdate;                              // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UStaticMeshComponent*                  DebugMesh;                                         // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                       EventBindingClass;                                 // 0x358(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                  ServerDataClassRef;                                // 0x370(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                               ServerOnlyDataObject;                              // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  DataAssetLoaded;                                   // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                EventString;                                       // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                IslandServerClassRef;                              // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        EventStrings;                                      // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                LastEventName;                                     // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                        EventBinding1;                                     // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        CrackProgress;                                     // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventBinding2;                                     // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ADudeBro_VortexMeshes_C*               VortexMeshesBP;                                    // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnPOISetup;                                        // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasSetupLevelOnBeginPlay;                          // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPOISwap;                                         // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ACUBE_Simple_C*                        CubeBP;                                            // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LevelActorsDeleted;                                // 0x448(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         IsDeimosActive;                                    // 0x449(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3BD4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IslandPosition;                                    // 0x44C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Butterfly_C*                       ButterflyBP;                                       // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Growth_HouseGlow_C*                HouseGlowBP;                                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EventInt;                                          // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortStaticMeshActor*                  GroundFog;                                         // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                EventBinding3;                                     // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         HasCubeTriggered;                                  // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BD6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinutesBeforeEvent;                                // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CubeDrainTotalTimespan;                            // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         UpdateMap;                                         // 0x498(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         DeimosAmbientEffectActive;                         // 0x499(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3BD7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LevelActorsDeletedInt;                             // 0x49C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        MapIconState;                                      // 0x4A0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableVortexGust;                                 // 0x4A4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3BD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ARainbowMesh_C*                        RainbowBP;                                         // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_IslandScripting_C");
		return Clss;
	}

	void OnRep_DisableVortexGust(const struct FLinearColor& CallFunc_MakeColor_ReturnValue);
	void OnRep_MapIconState(const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARainbowMesh_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnRep_LevelActorsDeletedInt(bool K2Node_SwitchInteger_CmpSuccess);
	void OnRep_DeimosAmbientEffectActive(bool CallFunc_HasAuthority_ReturnValue, TArray<class ABP_Growth_HouseGlow_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Growth_HouseGlow_C* CallFunc_Array_Get_Item);
	void OnRep_UpdateMap(bool CallFunc_HasAuthority_ReturnValue);
	void HideAndDestroyLevelActors(bool Hide);
	void OnRep_IsDeimosActive(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Growth_HouseGlow_C* CallFunc_FinishSpawningActor_ReturnValue);
	void OnRep_LevelActorsDeleted();
	float ConvertDebugPosToTime(float InputPin, bool Temp_bool_Variable, float CallFunc_Fraction_ReturnValue, float CallFunc_Fraction_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default);
	void OnRep_CachedTime();
	void SetupDebug(bool Debug);
	void OnRep_CubeletGrowthstage();
	void OnRep_BeaconActive();
	void SetupCrackProgress(float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void UserConstructionScript();
	void OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventEnded_0BA288F34CE353F34065D0BC1911B4F5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_0BA288F34CE353F34065D0BC1911B4F5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_0BA288F34CE353F34065D0BC1911B4F5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventEnded_C977A1164A1D496AD675BFB5790E8842(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_C977A1164A1D496AD675BFB5790E8842(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_C977A1164A1D496AD675BFB5790E8842(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnLoaded_55D3F973490D118E6671D19F32CF8F64(class UClass* Loaded);
	void BindCalendarEvents();
	void ReceiveBeginPlay();
	void LoadDynamicLevels();
	void CleanupLevelActors();
	void TrySetIslandLocation();
	void ButterflyScriptingReady();
	void ButterflyStart();
	void CubeEvent();
	void SetMutator(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void CubecrackLeadup();
	void TrySetMapMarker();
	void SetupMapMarker();
	void StartButterflyOnPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void ExecuteUbergraph_BP_IslandScripting(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_EventName7, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd7, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName6, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd6, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable1, float CallFunc_GetTotalSeconds_ReturnValue, float CallFunc_GetTotalMinutes_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FTimespan& CallFunc_Add_TimespanTimespan_ReturnValue, float CallFunc_TimespanRatio_ReturnValue, const class FString& Temp_string_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const class FString& K2Node_CustomEvent_EventName5, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd5, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin5, const class FString& K2Node_CustomEvent_EventName4, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd4, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const class FString& K2Node_CustomEvent_EventName3, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd3, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FTimespan& Temp_struct_Variable2, const struct FTimespan& Temp_struct_Variable3, float CallFunc_GetTotalSeconds_ReturnValue1, const class FString& Temp_string_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const class FString& CallFunc_Right_ReturnValue, const class FString& CallFunc_Right_ReturnValue1, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_Conv_IntToBool_ReturnValue, const class FString& K2Node_CustomEvent_EventName2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin2, const class FString& K2Node_CustomEvent_EventName1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FTimespan& Temp_struct_Variable4, const struct FTimespan& Temp_struct_Variable5, float CallFunc_GetTotalMinutes_ReturnValue1, const struct FTimespan& CallFunc_Add_TimespanTimespan_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetTotalHours_ReturnValue, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue1, float CallFunc_GetTotalSeconds_ReturnValue3, const class FString& Temp_string_Variable2, bool CallFunc_Less_FloatFloat_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_TimespanRatio_ReturnValue1, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsBP_Island_Server_Only, bool K2Node_ClassDynamicCast_bSuccess, int32 Temp_int_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, bool Temp_bool_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool Temp_bool_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UFortAsyncAction_CalendarMultiEventWatcher* CallFunc_WatchCalendarEvents_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue1, bool CallFunc_IsRunningNoMCP_ReturnValue, TArray<class FString>& Temp_string_Variable3, const class FString& K2Node_CustomEvent_EventName8, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd8, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin8, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State1, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, bool CallFunc_Conv_IntToBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue1, bool CallFunc_IsValid_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue3, TArray<class FString>& Temp_string_Variable4, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAthena_GameMode_C* K2Node_DynamicCast_AsAthena_Game_Mode, bool K2Node_DynamicCast_bSuccess2, class AGameStateBase* CallFunc_GetGameState_ReturnValue2, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State2, bool K2Node_DynamicCast_bSuccess3, class FName K2Node_CustomEvent_PlaylistName1, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags1, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent, const struct FTimespan& CallFunc_GetTimeUntilCalendarEventEnd_OutTime, float CallFunc_GetTotalSeconds_ReturnValue4, bool CallFunc_GetTimeUntilCalendarEventEnd_bFoundEvent1, const struct FTimespan& CallFunc_GetTimeUntilCalendarEventEnd_OutTime1, float CallFunc_Subtract_FloatFloat_ReturnValue1, class AGameStateBase* CallFunc_GetGameState_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess4, bool K2Node_Select_Default, bool CallFunc_HasAuthority_ReturnValue2, class FName K2Node_CustomEvent_PlaylistName, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags);
	void OnPOISwap__DelegateSignature();
	void OnPOISetup__DelegateSignature(bool NewParam);
	void DataAssetLoaded__DelegateSignature();
	void IslandPositionUpdate__DelegateSignature(const struct FVector& Position);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
