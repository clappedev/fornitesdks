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

// BlueprintGeneratedClass VaultRotator.VaultRotator_C
// 0x0114 (0x042C - 0x0318)
class AVaultRotator_C : public AItemPreviewRotator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDirectionalLightComponent*                  DirectionalLightMobile;                                   // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight_LOWPC;                                   // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DirectionalLights;                                        // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          SkyLightLowMobile;                                        // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          SkyLight;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          SkyLight_LOWPC;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess_Mobile;                                       // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess_LOWPC;                                        // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GenericLighting;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39; // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39;// 0x0374(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Zoom;                                            // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714;// 0x0380(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714;// 0x038C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714;// 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714;// 0x039C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714;// 0x03A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          CameraTurn_180_to_361;                                    // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;// 0x03B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;// 0x03BC(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;// 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;// 0x03D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          CameraTurn_0_to_181;                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  InitialCameraTransform;                                   // 0x03E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ClockwiseSound;                                           // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CounterClockwiseSound;                                    // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugMobile_Lighting;                                     // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugLightingPC;                                          // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x0422(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysOn;                                                 // 0x0423(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugLighting_LOWDetailPC;                                // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	float                                              TargetZoomLevel;                                          // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VaultRotator.VaultRotator_C");
		
		return ptr;
	}


	void PlaySoundWhenEnabled(class USoundBase* Sound);
	void SetBackgroundColor(const struct FLinearColor& RGBA0, const struct FLinearColor& RGBA1);
	void ToggleBackgroundText(bool bDisplayText);
	void LightControl(bool Active);
	void SwitchPCLighting(bool Visibility);
	void SwitchPCLighting_LOWDetail(bool Visibility);
	void SwitchMobileLighting(bool Visibility);
	void SetBackgroundString(int StringIndex);
	void CameraTurn_0_to_180__FinishedFunc();
	void CameraTurn_0_to_180__UpdateFunc();
	void CameraTurn_180_to_360__FinishedFunc();
	void CameraTurn_180_to_360__UpdateFunc();
	void Timeline_Zoom__FinishedFunc();
	void Timeline_Zoom__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateSettings();
	void OnCameraTransitionReady(bool bPrimaryToSecondary, class UFortAccountItemDefinition* PrimaryRequestedItem, const struct FSceneTransitionOptions& Options);
	void OnTargetZoomLevelSet(float TargetZoomLevel);
	void ExecuteUbergraph_VaultRotator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
