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

// Class LevelSequence.LevelSequence
// 0x0150 (0x01B0 - 0x0060)
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0068(0x0050)
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x00B8(0x00A0)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x0158(0x0050) (Deprecated)
	class UObject*                                     DirectorClass;                                            // 0x01A8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		
		return ptr;
	}


	void RemoveMetaDataByClass(class UObject* InClass);
	class UObject* FindOrAddMetaDataByClass(class UObject* InClass);
	class UObject* FindMetaDataByClass(class UObject* InClass);
	class UObject* CopyMetaData(class UObject* InMetaData);
};


// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (0x0070 - 0x0028)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class AActor*                                      TransformOriginActor;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  TransformOrigin;                                          // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceMetaData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (0x0050 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSoftClassPath                              BurnInClass;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		
		return ptr;
	}


	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
};


// Class LevelSequence.LevelSequenceActor
// 0x0080 (0x02A0 - 0x0220)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0230(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSoftObjectPath                             LevelSequence;                                            // 0x0250(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLevelSequenceCameraSettings                CameraSettings;                                           // 0x0268(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x6];                                       // 0x026A(0x0006) MISSED OFFSET
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bAutoPlay : 1;                                            // 0x0280(0x0001) (Deprecated)
	unsigned char                                      bOverrideInstanceData : 1;                                // 0x0280(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReplicatePlayback : 1;                                   // 0x0280(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UObject*                                     DefaultInstanceData;                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShowBurnin;                                              // 0x0298(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0299(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		
		return ptr;
	}


	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetBindingByTag(const struct FName& BindingTag, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBindingByTag(const struct FName& Tag, class AActor* Actor);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	void HideBurnin();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(const struct FName& Tag);
	struct FMovieSceneObjectBindingID FindNamedBinding(const struct FName& Tag);
	void AddBindingByTag(const struct FName& BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x00C0 (0x0320 - 0x0260)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         // 0x0260(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		
		return ptr;
	}


	void SetSettings(class UObject* InSettings);
	class ULevelSequenceBurnInInitSettings* GetSettingsClass();
};


// Class LevelSequence.LevelSequenceDirector
// 0x0008 (0x0030 - 0x0028)
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                        Player;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		
		return ptr;
	}


	void OnCreated();
};


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (0x00A0 - 0x00A0)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0118 (0x0790 - 0x0678)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0678(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty LevelSequence.LevelSequencePlayer.OnCameraCut
	unsigned char                                      UnknownData01[0x108];                                     // 0x0688(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		
		return ptr;
	}


	class UCameraComponent* GetActiveCameraComponent();
	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};


// Class LevelSequence.LevelSequenceMediaController
// 0x0028 (0x0248 - 0x0220)
class ALevelSequenceMediaController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class ALevelSequenceActor*                         Sequence;                                                 // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMediaComponent*                             MediaComponent;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              ServerStartTimeSeconds;                                   // 0x0238(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x023C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMediaController");
		
		return ptr;
	}


	void SynchronizeToServer(float DesyncThresholdSeconds);
	void Play();
	void OnRep_ServerStartTimeSeconds();
	class ALevelSequenceActor* GetSequence();
	class UMediaComponent* GetMediaComponent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
