#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientGameplayTag
struct UAmbientAudioStatics_RemoveAmbientGameplayTag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
};

// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientEntry
struct UAmbientAudioStatics_RemoveAmbientEntry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AmbientName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientAudio.AmbientAudioStatics.PlaySoundAtLocation
struct UAmbientAudioStatics_PlaySoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientAudio.AmbientAudioStatics.CreateAudioComponent
struct UAmbientAudioStatics_CreateAudioComponent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AmbientAudio.AmbientAudioStatics.AddAmbientGameplayTag
struct UAmbientAudioStatics_AddAmbientGameplayTag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
};

// Function AmbientAudio.AmbientAudioStatics.AddAmbientEntry
struct UAmbientAudioStatics_AddAmbientEntry_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AmbientName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAmbientAudioDataAsset*                      Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CrossfadeTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
struct UAmbientAudioSubsystem_RemoveGameplayTag_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
};

// Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
struct UAmbientAudioSubsystem_RemoveAmbientEntry_Params
{
	struct FName                                       AmbientName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
struct UAmbientAudioSubsystem_AddGameplayTag_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
};

// Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
struct UAmbientAudioSubsystem_AddAmbientEntry_Params
{
	struct FName                                       AmbientName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAmbientAudioDataAsset*                      Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CrossfadeTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientAudio.AmbientVolume.SetPriority
struct AAmbientVolume_SetPriority_Params
{
	int                                                NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientAudio.AmbientVolume.SetEnabled
struct AAmbientVolume_SetEnabled_Params
{
	bool                                               bNewEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientAudio.AmbientVolume.SetCrossfadeTime
struct AAmbientVolume_SetCrossfadeTime_Params
{
	float                                              NewCrossfadeTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientAudio.AmbientVolume.SetAmbientAsset
struct AAmbientVolume_SetAmbientAsset_Params
{
	class UAmbientAudioDataAsset*                      NewAmbientAsset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AmbientAudio.AmbientVolume.OnRep_bEnabled
struct AAmbientVolume_OnRep_bEnabled_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
