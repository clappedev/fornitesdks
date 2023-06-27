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

// Class LSALiveLink.LSALiveLinkDataHandler
// 0x0010 (0x0048 - 0x0038)
class ULSALiveLinkDataHandler : public ULiveStreamAnimationDataHandler
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LSALiveLink.LSALiveLinkDataHandler");
		
		return ptr;
	}


	void StopTrackingLiveLinkSubject(const struct FLiveStreamAnimationHandleWrapper& RegisteredName);
	bool StartTrackingLiveLinkSubject(const struct FName& LiveLinkSubject, const struct FLiveStreamAnimationHandleWrapper& RegisteredName, const struct FLSALiveLinkSourceOptions& Options, const struct FLiveStreamAnimationHandleWrapper& TranslationProfile);
};


// Class LSALiveLink.LSALiveLinkFrameTranslator
// 0x0060 (0x0088 - 0x0028)
class ULSALiveLinkFrameTranslator : public ULiveLinkFrameTranslator
{
public:
	TMap<struct FLiveStreamAnimationHandleWrapper, struct FLSALiveLinkTranslationProfile> TranslationProfiles;                                      // 0x0028(0x0050) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LSALiveLink.LSALiveLinkFrameTranslator");
		
		return ptr;
	}

};


// Class LSALiveLink.LSALiveLinkRole
// 0x0000 (0x0028 - 0x0028)
class ULSALiveLinkRole : public ULiveLinkBasicRole
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LSALiveLink.LSALiveLinkRole");
		
		return ptr;
	}

};


// Class LSALiveLink.LSALiveLinkSettings
// 0x0040 (0x0078 - 0x0038)
class ULSALiveLinkSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LSALiveLink.LSALiveLinkSettings.FrameTranslator
	unsigned char                                      UnknownData01[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LSALiveLink.LSALiveLinkSettings");
		
		return ptr;
	}

};


// Class LSALiveLink.LiveLinkTestSkelMeshTrackerComponent
// 0x00D0 (0x0180 - 0x00B0)
class ULiveLinkTestSkelMeshTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FName                                       TranslationProfile;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FComponentReference                         SkelMeshComp;                                             // 0x00C0(0x0028) (Edit)
	TWeakObjectPtr<class USkeletalMeshComponent>       WeakSkelMeshComp;                                         // 0x00E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBoneReference>                      BonesToTrack;                                             // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0100(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LSALiveLink.LiveLinkTestSkelMeshTrackerComponent");
		
		return ptr;
	}


	void StopTrackingSkelMesh();
	void StartTrackingSkelMesh(const struct FName& InSubjectName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
