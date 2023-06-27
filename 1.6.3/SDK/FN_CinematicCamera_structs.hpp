#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod
{
	ECameraFocusMethod__None       = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__ECameraFocusMethod_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0030
struct FCameraLookatTrackingSettings
{
	unsigned char                                      bEnableLookAtTracking : 1;                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bDrawDebugLookAtTrackingPosition : 1;                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LookAtTrackingInterpSpeed;                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	class AActor*                                      ActorToTrack;                                             // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x000C
struct FCameraFilmbackSettings
{
	float                                              SensorWidth;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SensorHeight;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SensorAspectRatio;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x0014
struct FCameraLensSettings
{
	float                                              MinFocalLength;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFocalLength;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinFStop;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFStop;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumFocusDistance;                                     // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0018
struct FCameraTrackingFocusSettings
{
	class AActor*                                      ActorToTrack;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x0008(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      bDrawDebugTrackingFocusPoint : 1;                         // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient)
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0030
struct FCameraFocusSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty CinematicCamera.CameraFocusSettings.FocusMethod
	unsigned char                                      UnknownData01[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ManualFocusDistance;                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCameraTrackingFocusSettings                TrackingFocusSettings;                                    // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bSmoothFocusChanges : 1;                                  // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              FocusSmoothingInterpSpeed;                                // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusOffset;                                              // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0020
struct FNamedFilmbackPreset
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x0010(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0028
struct FNamedLensPreset
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FCameraLensSettings                         LensSettings;                                             // 0x0010(0x0014) (CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
