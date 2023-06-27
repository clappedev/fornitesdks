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

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		
		return ptr;
	}


	void STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin);
	void STATIC_StopARSession();
	void STATIC_StartARSession(class UARSessionConfig* SessionConfig);
	void STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
	void STATIC_RemovePin(class UARPin* PinToRemove);
	class UARPin* STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName);
	class UARPin* STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName);
	void STATIC_PauseARSession();
	TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	bool STATIC_IsSessionTypeSupported(EARSessionType SessionType);
	bool STATIC_IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
	bool STATIC_IsARSupported();
	EARWorldMappingState STATIC_GetWorldMappingStatus();
	EARTrackingQualityReason STATIC_GetTrackingQualityReason();
	EARTrackingQuality STATIC_GetTrackingQuality();
	TArray<struct FARVideoFormat> STATIC_GetSupportedVideoFormats(EARSessionType SessionType);
	class UARSessionConfig* STATIC_GetSessionConfig();
	TArray<struct FVector> STATIC_GetPointCloud();
	class UARTextureCameraImage* STATIC_GetPersonSegmentationImage();
	class UARTextureCameraImage* STATIC_GetPersonSegmentationDepthImage();
	class UARLightEstimate* STATIC_GetCurrentLightEstimate();
	class UARTextureCameraImage* STATIC_GetCameraImage();
	class UARTextureCameraDepth* STATIC_GetCameraDepth();
	struct FARSessionStatus STATIC_GetARSessionStatus();
	TArray<class UARTrackedPose*> STATIC_GetAllTrackedPoses();
	TArray<class UARTrackedPoint*> STATIC_GetAllTrackedPoints();
	TArray<class UARPlaneGeometry*> STATIC_GetAllTrackedPlanes();
	TArray<class UARTrackedImage*> STATIC_GetAllTrackedImages();
	TArray<class UAREnvironmentCaptureProbe*> STATIC_GetAllTrackedEnvironmentCaptureProbes();
	TArray<struct FARPose2D> STATIC_GetAllTracked2DPoses();
	TArray<class UARPin*> STATIC_GetAllPins();
	TArray<class UARTrackedGeometry*> STATIC_GetAllGeometries();
	void STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
	void STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
	class UARCandidateImage* STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth);
	bool STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
};


// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (0x0028 - 0x0028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		
		return ptr;
	}


	class UARTrackedGeometry* STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult);
	EARLineTraceChannels STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult);
	struct FTransform STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);
	struct FTransform STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);
	float STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
};


// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0020 (0x0050 - 0x0030)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		
		return ptr;
	}

};


// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0030 (0x0080 - 0x0050)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.OnFailed
	unsigned char                                      UnknownData02[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		
		return ptr;
	}


	class UARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(class UObject* WorldContextObject);
};


// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0048 (0x0098 - 0x0050)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.OnFailed
	unsigned char                                      UnknownData02[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		
		return ptr;
	}


	class UARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
};


// Class AugmentedReality.ARLightEstimate
// 0x0000 (0x0028 - 0x0028)
class UARLightEstimate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		
		return ptr;
	}

};


// Class AugmentedReality.ARBasicLightEstimate
// 0x0018 (0x0040 - 0x0028)
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                              AmbientIntensityLumens;                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AmbientColorTemperatureKelvin;                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientColor;                                             // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		
		return ptr;
	}


	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};


// Class AugmentedReality.AROriginActor
// 0x0000 (0x0220 - 0x0220)
class AAROriginActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AROriginActor");
		
		return ptr;
	}

};


// Class AugmentedReality.ARPin
// 0x00C8 (0x00F0 - 0x0028)
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PinnedComponent;                                          // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0030) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0070(0x0030) (IsPlainOldData)
	EARTrackingState                                   TrackingState;                                            // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x00A1(0x001F) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A1(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARPin.OnARTrackingStateChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x00D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARPin.OnARTransformUpdated
	unsigned char                                      UnknownData04[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		
		return ptr;
	}


	EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	struct FName GetDebugName();
	void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
};


// Class AugmentedReality.ARSessionConfig
// 0x0078 (0x00A8 - 0x0030)
class UARSessionConfig : public UDataAsset
{
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateCollisionForMeshData;                            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateNavMeshForMeshData;                              // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMeshDataForOcclusion;                                 // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRenderMeshDataInWireframe;                               // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTrackSceneObjects;                                       // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePersonSegmentationForOcclusion;                       // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARWorldAlignment                                  WorldAlignment;                                           // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARSessionType                                     SessionType;                                              // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARPlaneDetectionMode                              PlaneDetectionMode;                                       // 0x0039(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bHorizontalPlaneDetection;                                // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVerticalPlaneDetection;                                  // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutoFocus;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARLightEstimationMode                             LightEstimationMode;                                      // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARFrameSyncMode                                   FrameSyncMode;                                            // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraOverlay;                            // 0x003F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAutomaticCameraTracking;                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetCameraTracking;                                     // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bResetTrackedObjects;                                     // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
	TArray<class UARCandidateImage*>                   CandidateImages;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	int                                                MaxNumSimultaneousImagesTracked;                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<unsigned char>                              WorldMapData;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class UARCandidateObject*>                  CandidateObjects;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FARVideoFormat                              DesiredVideoFormat;                                       // 0x0080(0x000C) (Edit)
	EARFaceTrackingDirection                           FaceTrackingDirection;                                    // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                       // 0x008D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	TArray<unsigned char>                              SerializedARCandidateImageDatabase;                       // 0x0090(0x0010) (ZeroConstructor)
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                            // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		
		return ptr;
	}


	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(TArray<unsigned char> WorldMapData);
	void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
	void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);
	TArray<unsigned char> GetWorldMapData();
	EARWorldAlignment GetWorldAlignment();
	EARSessionType GetSessionType();
	EARPlaneDetectionMode GetPlaneDetectionMode();
	int GetMaxNumSimultaneousImagesTracked();
	EARLightEstimationMode GetLightEstimationMode();
	EARFrameSyncMode GetFrameSyncMode();
	EARFaceTrackingUpdate GetFaceTrackingUpdate();
	EARFaceTrackingDirection GetFaceTrackingDirection();
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
	struct FARVideoFormat GetDesiredVideoFormat();
	TArray<class UARCandidateObject*> GetCandidateObjectList();
	TArray<class UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UARCandidateObject* CandidateObject);
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};


// Class AugmentedReality.ARSharedWorldGameMode
// 0x0068 (0x0370 - 0x0308)
class AARSharedWorldGameMode : public AGameMode
{
public:
	int                                                BufferSizePerChunk;                                       // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x64];                                      // 0x030C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		
		return ptr;
	}


	void SetPreviewImageData(TArray<unsigned char> ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
	class AARSharedWorldGameState* GetARSharedWorldGameState();
};


// Class AugmentedReality.ARSharedWorldGameState
// 0x0038 (0x02C8 - 0x0290)
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<unsigned char>                              PreviewImageData;                                         // 0x0290(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<unsigned char>                              ARWorldData;                                              // 0x02A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PreviewImageBytesTotal;                                   // 0x02B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesTotal;                                        // 0x02B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreviewImageBytesDelivered;                               // 0x02B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldBytesDelivered;                                    // 0x02BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		
		return ptr;
	}


	void K2_OnARWorldMapIsReady();
};


// Class AugmentedReality.ARSharedWorldPlayerController
// 0x0008 (0x0578 - 0x0570)
class AARSharedWorldPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0570(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		
		return ptr;
	}


	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer);
	void ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer);
	void ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize);
};


// Class AugmentedReality.ARSkyLight
// 0x0010 (0x0240 - 0x0230)
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                             // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		
		return ptr;
	}


	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
};


// Class AugmentedReality.ARTexture
// 0x0020 (0x00E8 - 0x00C8)
class UARTexture : public UTexture
{
public:
	EARTextureType                                     TextureType;                                              // 0x00C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x00CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraImage
// 0x0000 (0x00E8 - 0x00E8)
class UARTextureCameraImage : public UARTexture
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraDepth
// 0x0008 (0x00F0 - 0x00E8)
class UARTextureCameraDepth : public UARTexture
{
public:
	EARDepthQuality                                    DepthQuality;                                             // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EARDepthAccuracy                                   DepthAccuracy;                                            // 0x00E9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTemporallySmoothed;                                    // 0x00EA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00EB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		
		return ptr;
	}

};


// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0020 (0x0140 - 0x0120)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	EARTextureType                                     TextureType;                                              // 0x0120(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x0124(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		
		return ptr;
	}

};


// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (0x0028 - 0x0028)
class UARTraceResultDummy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedGeometry
// 0x00C8 (0x00F0 - 0x0028)
class UARTrackedGeometry : public UObject
{
public:
	struct FGuid                                       UniqueId;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0030) (IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0070(0x0030) (IsPlainOldData)
	EARTrackingState                                   TrackingState;                                            // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00A1(0x000F) MISSED OFFSET
	class UMRMeshComponent*                            UnderlyingMesh;                                           // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EARObjectClassification                            ObjectClassification;                                     // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x00B9(0x0017) MISSED OFFSET
	int                                                LastUpdateFrameNumber;                                    // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x00D4(0x000C) MISSED OFFSET
	struct FName                                       DebugName;                                                // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		
		return ptr;
	}


	bool IsTracked();
	class UMRMeshComponent* GetUnderlyingMesh();
	EARTrackingState GetTrackingState();
	EARObjectClassification GetObjectClassification();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	struct FName GetDebugName();
};


// Class AugmentedReality.ARPlaneGeometry
// 0x0030 (0x0120 - 0x00F0)
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	struct FVector                                     Extent;                                                   // 0x00F8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0104(0x0014) MISSED OFFSET
	class UARPlaneGeometry*                            SubsumedBy;                                               // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		
		return ptr;
	}


	class UARPlaneGeometry* GetSubsumedBy();
	EARPlaneOrientation GetOrientation();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};


// Class AugmentedReality.ARTrackedPoint
// 0x0000 (0x00F0 - 0x00F0)
class UARTrackedPoint : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedImage
// 0x0010 (0x0100 - 0x00F0)
class UARTrackedImage : public UARTrackedGeometry
{
public:
	struct FVector2D                                   EstimatedSize;                                            // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		
		return ptr;
	}


	struct FVector2D GetEstimateSize();
	class UARCandidateImage* GetDetectedImage();
};


// Class AugmentedReality.ARTrackedQRCode
// 0x0010 (0x0110 - 0x0100)
class UARTrackedQRCode : public UARTrackedImage
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	int                                                Version;                                                  // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedQRCode");
		
		return ptr;
	}

};


// Class AugmentedReality.ARFaceGeometry
// 0x00F0 (0x01E0 - 0x00F0)
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F0(0x0004) MISSED OFFSET
	bool                                               bIsTracked;                                               // 0x00F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                              // 0x00F8(0x0050)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0148(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		
		return ptr;
	}


	struct FTransform GetWorldSpaceEyeTransform(EAREye Eye);
	struct FTransform GetLocalSpaceEyeTransform(EAREye Eye);
	float GetBlendShapeValue(EARFaceBlendShape BlendShape);
	TMap<EARFaceBlendShape, float> GetBlendShapes();
};


// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0010 (0x0100 - 0x00F0)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		
		return ptr;
	}


	struct FVector GetExtent();
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};


// Class AugmentedReality.ARTrackedObject
// 0x0000 (0x00F0 - 0x00F0)
class UARTrackedObject : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		
		return ptr;
	}


	class UARCandidateObject* GetDetectedObject();
};


// Class AugmentedReality.ARTrackedPose
// 0x0050 (0x0140 - 0x00F0)
class UARTrackedPose : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPose");
		
		return ptr;
	}


	struct FARPose3D GetTrackedPoseData();
};


// Class AugmentedReality.ARTrackableNotifyComponent
// 0x0150 (0x0200 - 0x00B0)
class UARTrackableNotifyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnAddTrackedGeometry
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnUpdateTrackedGeometry
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnRemoveTrackedGeometry
	unsigned char                                      UnknownData03[0x10];                                      // 0x00E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnAddTrackedPlane
	unsigned char                                      UnknownData04[0x10];                                      // 0x00F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnUpdateTrackedPlane
	unsigned char                                      UnknownData05[0x10];                                      // 0x0100(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnRemoveTrackedPlane
	unsigned char                                      UnknownData06[0x10];                                      // 0x0110(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnAddTrackedPoint
	unsigned char                                      UnknownData07[0x10];                                      // 0x0120(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnUpdateTrackedPoint
	unsigned char                                      UnknownData08[0x10];                                      // 0x0130(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnRemoveTrackedPoint
	unsigned char                                      UnknownData09[0x10];                                      // 0x0140(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnAddTrackedImage
	unsigned char                                      UnknownData10[0x10];                                      // 0x0150(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnUpdateTrackedImage
	unsigned char                                      UnknownData11[0x10];                                      // 0x0160(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnRemoveTrackedImage
	unsigned char                                      UnknownData12[0x10];                                      // 0x0170(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnAddTrackedFace
	unsigned char                                      UnknownData13[0x10];                                      // 0x0180(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnUpdateTrackedFace
	unsigned char                                      UnknownData14[0x10];                                      // 0x0190(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnRemoveTrackedFace
	unsigned char                                      UnknownData15[0x10];                                      // 0x01A0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnAddTrackedEnvProbe
	unsigned char                                      UnknownData16[0x10];                                      // 0x01B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnUpdateTrackedEnvProbe
	unsigned char                                      UnknownData17[0x10];                                      // 0x01C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnRemoveTrackedEnvProbe
	unsigned char                                      UnknownData18[0x10];                                      // 0x01D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnAddTrackedObject
	unsigned char                                      UnknownData19[0x10];                                      // 0x01E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnUpdateTrackedObject
	unsigned char                                      UnknownData20[0x10];                                      // 0x01F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARTrackableNotifyComponent.OnRemoveTrackedObject

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTrackableNotifyComponent");
		
		return ptr;
	}

};


// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (0x0028 - 0x0028)
class UARTypesDummyClass : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		
		return ptr;
	}

};


// Class AugmentedReality.ARCandidateImage
// 0x0028 (0x0058 - 0x0030)
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                                  CandidateTexture;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     FriendlyName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	float                                              Width;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EARCandidateImageOrientation                       Orientation;                                              // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		
		return ptr;
	}


	float GetPhysicalWidth();
	float GetPhysicalHeight();
	EARCandidateImageOrientation GetOrientation();
	struct FString GetFriendlyName();
	class UTexture2D* GetCandidateTexture();
};


// Class AugmentedReality.ARCandidateObject
// 0x0040 (0x0070 - 0x0030)
class UARCandidateObject : public UDataAsset
{
public:
	TArray<unsigned char>                              CandidateObjectData;                                      // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     FriendlyName;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FBox                                        BoundingBox;                                              // 0x0050(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		
		return ptr;
	}


	void SetFriendlyName(const struct FString& NewName);
	void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
	void SetBoundingBox(const struct FBox& InBoundingBox);
	struct FString GetFriendlyName();
	TArray<unsigned char> GetCandidateObjectData();
	struct FBox GetBoundingBox();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
