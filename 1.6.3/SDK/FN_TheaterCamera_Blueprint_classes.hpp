#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C
// 0x0205 (0x0AC5 - 0x08C0)
class ATheaterCamera_Blueprint_C : public AFortTheaterCamera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        MeshScreenPlane;                                          // 0x08C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             SceneInitializeFX;                                        // 0x08D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusTimeline_Float_Curve_ADC98EA5D14E24EC78DD4F80C5102578;// 0x08D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FocusTimeline__Direction_ADC98EA5D14E24EC78DD4F80C5102578;// 0x08DC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FocusTimeline;                                            // 0x08E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DEBUGFOVA_ggt443_69C3A05E440A88A12DB0BAA6A9375778;        // 0x08E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DEBUGFOVA__Direction_69C3A05E440A88A12DB0BAA6A9375778;    // 0x08EC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DEBUGFOVA;                                                // 0x08F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitializeFX_TL_FadeInitFX_21BA8C434B0965A323799DA5570E46CF;// 0x08F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    InitializeFX_TL__Direction_21BA8C434B0965A323799DA5570E46CF;// 0x08FC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          InitializeFX_TL;                                          // 0x0900(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugZoomTL_CameraRotLevelMax_41B63CEF445574B1F9D6F489004E4238;// 0x0908(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugZoomTL_CameraRotLevelZero_41B63CEF445574B1F9D6F489004E4238;// 0x090C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugZoomTL_CameraOffsetX___LevelMax_41B63CEF445574B1F9D6F489004E4238;// 0x0910(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugZoomTL_CameraOffsetX___LevelZero_41B63CEF445574B1F9D6F489004E4238;// 0x0914(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugZoomTL_TotalNumberOfZoomLevels_41B63CEF445574B1F9D6F489004E4238;// 0x0918(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugZoomTL_CameraHeight_LevelMax_41B63CEF445574B1F9D6F489004E4238;// 0x091C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugZoomTL_CameraHeight_LevelZero_41B63CEF445574B1F9D6F489004E4238;// 0x0920(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugZoomTL_FOV_In_41B63CEF445574B1F9D6F489004E4238;      // 0x0924(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugZoomTL_FOV_Out_41B63CEF445574B1F9D6F489004E4238;     // 0x0928(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DebugZoomTL__Direction_41B63CEF445574B1F9D6F489004E4238;  // 0x092C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DebugZoomTL;                                              // 0x0930(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WorldLocSnapSize;                                         // 0x0938(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraZHeightLevelZero;                                   // 0x093C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraXOffsetLevelZero;                                   // 0x0940(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	class AFortTheaterMapTile*                         TargetTile;                                               // 0x0948(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CurrentZoomPercentage;                                    // 0x0950(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NumberOfZoomLevels;                                       // 0x0954(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ZoomDistanceUnitZ;                                        // 0x0958(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CurrentZoomLevel;                                         // 0x095C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     FocusedTileLocWithOffset;                                 // 0x0960(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      MouseDown : 1;                                            // 0x096C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	float                                              CurrentOffsetAmountX;                                     // 0x0970(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraXOffsetLevelMax;                                    // 0x0974(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                InitialZoomLevels;                                        // 0x0978(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // 0x097C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraYRotationLevelZero;                                 // 0x0988(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     TargetTileLoc;                                            // 0x098C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OldOffsetAmountX;                                         // 0x0998(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CurrentFOV;                                               // 0x099C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FOVLevelZero;                                             // 0x09A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FOVLevelMax;                                              // 0x09A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraZHeightLevelMax;                                    // 0x09A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ZoomDistanceUnitX;                                        // 0x09AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DebugCameraZoom : 1;                                      // 0x09B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x09B1(0x0003) MISSED OFFSET
	float                                              CameraYRotationLevelMax;                                  // 0x09B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DebugCameraVariables : 1;                                 // 0x09B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      SnapCameraToFocusedTile : 1;                              // 0x09B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x09BA(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIDMeshScreenPlane;                                       // 0x09C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FVector2D>                           CloudMaskLocations;                                       // 0x09C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              CloudMaskScale;                                           // 0x09D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ReadyForPings : 1;                                        // 0x09DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x09DD(0x0003) MISSED OFFSET
	class ATVPostProcessBP_C*                          TVPostProcess;                                            // 0x09E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class ABP_Hex_PARENT_C*>                    AllHexesArray;                                            // 0x09E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<unsigned char>                              HexesPinged;                                              // 0x09F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      AllHexesHavePingedOnce : 1;                               // 0x0A08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      WaitForForceFocus : 1;                                    // 0x0A09(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      AQuestIsPinned : 1;                                       // 0x0A0A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x0A0B(0x0005) MISSED OFFSET
	TArray<unsigned char>                              PinnedQuestsArray;                                        // 0x0A10(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      WaitForPinned : 1;                                        // 0x0A20(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0A21(0x0003) MISSED OFFSET
	struct FVector                                     HexWorldLocFromBP_Hex_PARENT;                             // 0x0A24(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxCameraDistance;                                        // 0x0A30(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     CenterOfCameraBounds;                                     // 0x0A34(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HighestX_Value;                                           // 0x0A40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HighestY_Value;                                           // 0x0A44(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TotalWidthOfHexPlane;                                     // 0x0A48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HexPlaneBufferSize;                                       // 0x0A4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     CenterLocOfAllHexes;                                      // 0x0A50(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     AllHexesBoxExtent;                                        // 0x0A5C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FVector2D>                           RoadMaskLocations;                                        // 0x0A68(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      LightsBPSet : 1;                                          // 0x0A78(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0A79(0x0007) MISSED OFFSET
	class AHexmapLevelSettings_Temperate01_C*          LightsBP;                                                 // 0x0A80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HexPlaneLayersBufferSize;                                 // 0x0A88(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TotalWidthOfHexPlaneLayer;                                // 0x0A8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FVector2D>                           TileType0_Locs;                                           // 0x0A90(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FVector2D>                           TileType1_Locs;                                           // 0x0AA0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FVector2D>                           TileType2_Locs;                                           // 0x0AB0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              TileTypeMaskScale;                                        // 0x0AC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSuspendInput : 1;                                        // 0x0AC4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C");
		return ptr;
	}


	bool IsInputSuspended();
	struct FVector2D NewFunction_1(class AActor* self2);
	void PanCamera(float DeltaX, float DeltaY);
	void HandleTheaterSelected(const struct FString& TheaterId);
	void ZoomCameraStep(bool Forward);
	void UserConstructionScript();
	void FocusTimeline__FinishedFunc();
	void FocusTimeline__UpdateFunc();
	void DebugZoomTL__FinishedFunc();
	void DebugZoomTL__UpdateFunc();
	void InitializeFX_TL__FinishedFunc();
	void InitializeFX_TL__UpdateFunc();
	void DEBUGFOVA__FinishedFunc();
	void DEBUGFOVA__UpdateFunc();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void OnActivated();
	void OnDeactivated();
	void SetTileFocus(class AFortTheaterMapTile** TargetTile);
	void ReceiveTick(float* DeltaSeconds);
	void OnDragBegin();
	void OnDragEnd();
	void StopFocusTimeline();
	void ForceTileFocus(const struct FVector& HexWorldLoc);
	void PingFromHex();
	void RefreshCloudMask();
	void MaskFinished();
	void PinnedPing();
	void ExecuteUbergraph_TheaterCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
