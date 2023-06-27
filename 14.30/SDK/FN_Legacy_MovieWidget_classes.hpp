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

// WidgetBlueprintGeneratedClass Legacy_MovieWidget.Legacy_MovieWidget_C
// 0x0040 (0x02E0 - 0x02A0)
class ULegacy_MovieWidget_C : public UFortMovieWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Video_Image;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   Video_ScaleBox;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               shouldloop;                                               // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPlay;                                                 // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MaintainAspectRatio;                                      // 0x02BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x02BB(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x02BB(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaReadyToPlay
	unsigned char                                      UnknownData02[0x10];                                      // 0x02D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaFailedToOpen

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Legacy_MovieWidget.Legacy_MovieWidget_C");
		
		return ptr;
	}


	void SetDelayedContentValues();
	void Play(bool ShouldRewind);
	void StopPlaying();
	void Init(class UMediaPlayer* InMediaPlayer, class UMediaSource* InMediaSource, class UObject* InMediaSoundWave, int AudioTrack);
	void Destruct();
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	void OnMediaLoaded();
	void ExecuteUbergraph_Legacy_MovieWidget(int EntryPoint);
	void OnMediaFailedToOpen__DelegateSignature();
	void OnMediaReadyToPlay__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
