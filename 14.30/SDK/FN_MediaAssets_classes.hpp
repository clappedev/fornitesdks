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

// Class MediaAssets.MediaSource
// 0x0058 (0x0080 - 0x0028)
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		
		return ptr;
	}


	bool Validate();
	void SetMediaOptionString(const struct FName& Key, const struct FString& Value);
	void SetMediaOptionInt64(const struct FName& Key, int64_t Value);
	void SetMediaOptionFloat(const struct FName& Key, float Value);
	void SetMediaOptionBool(const struct FName& Key, bool Value);
	struct FString GetUrl();
};


// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0088 - 0x0080)
class UBaseMediaSource : public UMediaSource
{
public:
	struct FName                                       PlayerName;                                               // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		
		return ptr;
	}

};


// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0098 - 0x0088)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     StreamUrl;                                                // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		
		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x0028 (0x00B0 - 0x0088)
class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PrecacheFile;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0099(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		
		return ptr;
	}


	void SetFilePath(const struct FString& Path);
};


// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		
		return ptr;
	}


	void STATIC_EnumerateWebcamCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);
	void STATIC_EnumerateVideoCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);
	void STATIC_EnumerateAudioCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);
};


// Class MediaAssets.MediaComponent
// 0x0010 (0x00C0 - 0x00B0)
class UMediaComponent : public UActorComponent
{
public:
	class UMediaTexture*                               MediaTexture;                                             // 0x00B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaComponent");
		
		return ptr;
	}


	class UMediaTexture* GetMediaTexture();
	class UMediaPlayer* GetMediaPlayer();
};


// Class MediaAssets.MediaTimeStampInfo
// 0x0010 (0x0038 - 0x0028)
class UMediaTimeStampInfo : public UObject
{
public:
	struct FTimespan                                   Time;                                                     // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int64_t                                            SequenceIndex;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaTimeStampInfo");
		
		return ptr;
	}

};


// Class MediaAssets.MediaPlayer
// 0x0110 (0x0138 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MediaAssets.MediaPlayer.OnEndReached
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MediaAssets.MediaPlayer.OnMediaClosed
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MediaAssets.MediaPlayer.OnMediaOpened
	unsigned char                                      UnknownData03[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MediaAssets.MediaPlayer.OnMediaOpenFailed
	unsigned char                                      UnknownData04[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MediaAssets.MediaPlayer.OnPlaybackResumed
	unsigned char                                      UnknownData05[0x10];                                      // 0x0078(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MediaAssets.MediaPlayer.OnPlaybackSuspended
	unsigned char                                      UnknownData06[0x10];                                      // 0x0088(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MediaAssets.MediaPlayer.OnSeekCompleted
	unsigned char                                      UnknownData07[0x10];                                      // 0x0098(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MediaAssets.MediaPlayer.OnTracksChanged
	struct FTimespan                                   CacheAhead;                                               // 0x00A8(0x0008) (BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   CacheBehind;                                              // 0x00B0(0x0008) (BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   CacheBehindGame;                                          // 0x00B8(0x0008) (BlueprintVisible, ZeroConstructor)
	bool                                               NativeAudioOut;                                           // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnOpen;                                               // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	unsigned char                                      Shuffle : 1;                                              // 0x00C4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      Loop : 1;                                                 // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	class UMediaPlaylist*                              Playlist;                                                 // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                PlaylistIndex;                                            // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FTimespan                                   TimeDelay;                                                // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              HorizontalFieldOfView;                                    // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalFieldOfView;                                      // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ViewRotation;                                             // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2C];                                      // 0x00F4(0x002C) MISSED OFFSET
	struct FGuid                                       PlayerGuid;                                               // 0x0120(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate);
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex);
	void SetTimeDelay(const struct FTimespan& TimeDelay);
	bool SetRate(float Rate);
	bool SetNativeVolume(float Volume);
	void SetMediaOptions(class UMediaSource* Options);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(const struct FName& PlayerName);
	void SetBlockOnTime(const struct FTimespan& Time);
	bool SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex);
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	void PlayAndSeek();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& URL);
	bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);
	void OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const struct FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsClosed();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	struct FString GetVideoTrackType(int TrackIndex, int FormatIndex);
	struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex);
	float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex);
	struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex);
	float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex);
	float GetVerticalFieldOfView();
	struct FString GetUrl();
	struct FString GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex);
	int GetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex);
	class UMediaTimeStampInfo* GetTimeStamp();
	struct FTimespan GetTimeDelay();
	struct FTimespan GetTime();
	void GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates);
	int GetSelectedTrack(EMediaPlayerTrack TrackType);
	float GetRate();
	int GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	struct FName GetPlayerName();
	int GetNumTracks(EMediaPlayerTrack TrackType);
	int GetNumTrackFormats(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetMediaName();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	struct FName GetDesiredPlayerName();
	struct FString GetAudioTrackType(int TrackIndex, int FormatIndex);
	int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex);
	int GetAudioTrackChannels(int TrackIndex, int FormatIndex);
	void Close();
	bool CanPlayUrl(const struct FString& URL);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};


// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                        Items;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		
		return ptr;
	}


	bool Replace(int Index, class UMediaSource* Replacement);
	bool RemoveAt(int Index);
	bool Remove(class UMediaSource* MediaSource);
	int Num();
	void Insert(class UMediaSource* MediaSource, int Index);
	class UMediaSource* GetRandom(int* OutIndex);
	class UMediaSource* GetPrevious(int* InOutIndex);
	class UMediaSource* GetNext(int* InOutIndex);
	class UMediaSource* Get(int Index);
	bool AddUrl(const struct FString& URL);
	bool AddFile(const struct FString& FilePath);
	bool Add(class UMediaSource* MediaSource);
};


// Class MediaAssets.MediaSoundComponent
// 0x0220 (0x08F0 - 0x06D0)
class UMediaSoundComponent : public USynthComponent
{
public:
	EMediaSoundChannels                                Channels;                                                 // 0x06D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06D0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               DynamicRateAdjustment;                                    // 0x06D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06D5(0x0003) MISSED OFFSET
	float                                              RateAdjustmentFactor;                                     // 0x06D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 RateAdjustmentRange;                                      // 0x06DC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x06F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1F8];                                     // 0x06F8(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		
		return ptr;
	}


	void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();
	class UMediaPlayer* GetMediaPlayer();
	float GetEnvelopeValue();
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
};


// Class MediaAssets.MediaTexture
// 0x00D8 (0x01A0 - 0x00C8)
class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoClear;                                                // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	struct FLinearColor                                ClearColor;                                               // 0x00CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGenMips;                                            // 0x00DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumMips;                                                  // 0x00DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewStyleOutput;                                           // 0x00DE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMediaTextureOutputFormat>             OutputFormat;                                             // 0x00DF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAspectRatio;                                       // 0x00E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EMediaTextureOrientation>              CurrentOrientation;                                       // 0x00E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	class UMediaPlayer*                                MediaPlayer;                                              // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB0];                                      // 0x00F0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		
		return ptr;
	}


	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	int GetWidth();
	class UMediaPlayer* GetMediaPlayer();
	int GetHeight();
	float GetAspectRatio();
};


// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0088 - 0x0080)
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		
		return ptr;
	}

};


// Class MediaAssets.TimeSynchronizableMediaSource
// 0x0010 (0x0098 - 0x0088)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                               bUseTimeSynchronization;                                  // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                FrameDelay;                                               // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             TimeDelay;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MediaAssets.TimeSynchronizableMediaSource");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
