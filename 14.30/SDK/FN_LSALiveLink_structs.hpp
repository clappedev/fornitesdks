#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LSALiveLink.LSALiveLinkSourceOptions
// 0x0001
struct FLSALiveLinkSourceOptions
{
	unsigned char                                      bWithSceneTime : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bWithStringMetaData : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bWithPropertyValues : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bWithTransformTranslation : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bWithTransformRotation : 1;                               // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bWithTransformScale : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct LSALiveLink.LSALiveLinkTranslationProfile
// 0x00E8
struct FLSALiveLinkTranslationProfile
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LSALiveLink.LSALiveLinkTranslationProfile.Skeleton
	TMap<struct FName, struct FName>                   BoneRemappings;                                           // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FName>                               BonesToUse;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0088(0x0060) MISSED OFFSET
};

// ScriptStruct LSALiveLink.LSALiveLinkFrameData
// 0x0008 (0x00B8 - 0x00B0)
struct FLSALiveLinkFrameData : public FLiveLinkAnimationFrameData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
};

// ScriptStruct LSALiveLink.LSALiveLinkStaticData
// 0x0000 (0x0030 - 0x0030)
struct FLSALiveLinkStaticData : public FLiveLinkSkeletonStaticData
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
