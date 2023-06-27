#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	void STATIC_UpdateExternalTrackingHMDPosition(struct FTransform ExternalTrackingTransform);
	void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void STATIC_SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);
	void STATIC_SetSpectatorScreenTexture(class UTexture* InTexture);
	void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void STATIC_SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	void STATIC_SetClippingPlanes(float Near, float Far);
	void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);
	bool STATIC_IsSpectatorScreenModeControllable();
	bool STATIC_IsInLowPersistenceMode();
	bool STATIC_IsHeadMountedDisplayEnabled();
	bool STATIC_IsHeadMountedDisplayConnected();
	bool STATIC_IsDeviceTracking(struct FXRDeviceId XRDeviceId);
	bool STATIC_HasValidTrackingPosition();
	float STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	struct FTransform STATIC_GetTrackingToWorldTransform(class UObject* WorldContext);
	void STATIC_GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive);
	TEnumAsByte<EHMDTrackingOrigin> STATIC_GetTrackingOrigin();
	float STATIC_GetScreenPercentage();
	void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	float STATIC_GetPixelDensity();
	void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int STATIC_GetNumOfTrackingSensors();
	TEnumAsByte<EHMDWornState> STATIC_GetHMDWornState();
	struct FName STATIC_GetHMDDeviceName();
	void STATIC_GetDeviceWorldPose(class UObject* WorldContext, struct FXRDeviceId XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	void STATIC_GetDevicePose(struct FXRDeviceId XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	TArray<struct FXRDeviceId> STATIC_EnumerateTrackedDevices(struct FName SystemId, EXRTrackedDeviceType DeviceType);
	void STATIC_EnableLowPersistenceMode(bool bEnable);
	bool STATIC_EnableHMD(bool bEnable);
	void STATIC_CalibrateExternalTrackingToHMD(struct FTransform ExternalTrackingTransform);
};


// Class HeadMountedDisplay.MotionControllerComponent
// 0x00C0 (0x04B0 - 0x03F0)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int                                                PlayerIndex;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // 0x03F4(0x0001) (BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	struct FName                                       MotionSource;                                             // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x0400(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	ETrackingStatus                                    CurrentTrackingStatus;                                    // 0x0404(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayDeviceModel;                                      // 0x0405(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0406(0x0002) MISSED OFFSET
	struct FName                                       DisplayModelSource;                                       // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 CustomDisplayMesh;                                        // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                             // 0x0418(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0428(0x0068) MISSED OFFSET
	class UPrimitiveComponent*                         DisplayComponent;                                         // 0x0490(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0498(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}


	void SetTrackingSource(EControllerHand NewSource);
	void SetTrackingMotionSource(struct FName NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(struct FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	EControllerHand GetTrackingSource();
	float GetParameterValue(struct FName InName, bool* bValueFound);
};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}


	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool STATIC_IsMotionTrackingEnabledForSource(int PlayerIndex, struct FName SourceName);
	bool STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand);
	bool STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();
	bool STATIC_IsMotionSourceTracking(int PlayerIndex, struct FName SourceName);
	int STATIC_GetMotionTrackingEnabledControllerCount();
	int STATIC_GetMaximumMotionTrackedControllerCount();
	struct FName STATIC_GetActiveTrackingSystemName();
	TArray<struct FName> STATIC_EnumerateMotionSources();
	bool STATIC_EnableMotionTrackingOfSource(int PlayerIndex, struct FName SourceName);
	bool STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	bool STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void STATIC_DisableMotionTrackingOfSource(int PlayerIndex, struct FName SourceName);
	void STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	void STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	void STATIC_DisableMotionTrackingOfAllControllers();
	void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};


// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x0168 - 0x00D8)
class UVRNotificationsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate
	unsigned char                                      UnknownData01[0x10];                                      // 0x00E8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDTrackingInitializedDelegate
	unsigned char                                      UnknownData02[0x10];                                      // 0x00F8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDRecenteredDelegate
	unsigned char                                      UnknownData03[0x10];                                      // 0x0108(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDLostDelegate
	unsigned char                                      UnknownData04[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDReconnectedDelegate
	unsigned char                                      UnknownData05[0x10];                                      // 0x0128(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDConnectCanceledDelegate
	unsigned char                                      UnknownData06[0x10];                                      // 0x0138(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDPutOnHeadDelegate
	unsigned char                                      UnknownData07[0x10];                                      // 0x0148(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDRemovedFromHeadDelegate
	unsigned char                                      UnknownData08[0x10];                                      // 0x0158(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.VRControllerRecenteredDelegate

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}

};


// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		return ptr;
	}


	class UPrimitiveComponent* STATIC_AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform RelativeTransform, struct FXRDeviceId* XRDeviceId);
	class UPrimitiveComponent* STATIC_AddDeviceVisualizationComponentBlocking(class AActor* Target, struct FXRDeviceId XRDeviceId, bool bManualAttachment, struct FTransform RelativeTransform);
};


// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (0x0060 - 0x0030)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.OnModelLoaded
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.OnLoadFailure
	unsigned char                                      UnknownData02[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         SpawnedComponent;                                         // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		return ptr;
	}


	class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddNamedDeviceVisualizationComponentAsync(class AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
	class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddDeviceVisualizationComponentAsync(class AActor* Target, struct FXRDeviceId XRDeviceId, bool bManualAttachment, struct FTransform RelativeTransform, class UPrimitiveComponent** NewComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
