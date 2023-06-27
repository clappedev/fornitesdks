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

// Class AssetTags.AssetTagsSubsystem
// 0x0000 (0x0030 - 0x0030)
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AssetTags.AssetTagsSubsystem");
		
		return ptr;
	}


	TArray<struct FName> GetCollectionsContainingAssetPtr(class UObject* AssetPtr);
	TArray<struct FName> GetCollectionsContainingAssetData(const struct FAssetData& AssetData);
	TArray<struct FName> GetCollectionsContainingAsset(const struct FName& AssetPathName);
	TArray<struct FName> GetCollections();
	TArray<struct FAssetData> GetAssetsInCollection(const struct FName& Name);
	bool CollectionExists(const struct FName& Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
