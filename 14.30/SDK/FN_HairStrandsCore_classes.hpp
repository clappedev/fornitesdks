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

// Class HairStrandsCore.GroomActor
// 0x0008 (0x0228 - 0x0220)
class AGroomActor : public AActor
{
public:
	class UGroomComponent*                             GroomComponent;                                           // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomActor");
		
		return ptr;
	}

};


// Class HairStrandsCore.GroomAsset
// 0x0060 (0x0088 - 0x0028)
class UGroomAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FHairGroupInfo>                      HairGroupsInfo;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FHairGroupsPhysics>                  HairGroupsPhysics;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	bool                                               EnableGlobalInterpolation;                                // 0x0050(0x0001) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData)
	EGroomInterpolationType                            HairInterpolationType;                                    // 0x0051(0x0001) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x0052(0x0016) MISSED OFFSET
	float                                              HairToGuideDensity;                                       // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x0070(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomAsset");
		
		return ptr;
	}

};


// Class HairStrandsCore.GroomBindingAsset
// 0x0078 (0x00A0 - 0x0028)
class UGroomBindingAsset : public UObject
{
public:
	class UGroomAsset*                                 Groom;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class USkeletalMesh*                               SourceSkeletalMesh;                                       // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class USkeletalMesh*                               TargetSkeletalMesh;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumInterpolationPoints;                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FGoomBindingGroupInfo>               GroupInfos;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomBindingAsset");
		
		return ptr;
	}

};


// Class HairStrandsCore.GroomAssetImportData
// 0x0008 (0x0030 - 0x0028)
class UGroomAssetImportData : public UAssetImportData
{
public:
	class UGroomImportOptions*                         ImportOptions;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomAssetImportData");
		
		return ptr;
	}

};


// Class HairStrandsCore.GroomComponent
// 0x00F0 (0x0560 - 0x0470)
class UGroomComponent : public UMeshComponent
{
public:
	TArray<class UNiagaraComponent*>                   NiagaraComponents;                                        // 0x0470(0x0010) (ExportObject, ZeroConstructor, Transient)
	bool                                               bBindGroomToSkeletalMesh;                                 // 0x0480(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class USkeletalMesh*                               SourceSkeletalMesh;                                       // 0x0488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGroomBindingAsset*                          BindingAsset;                                             // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HairDebugMaterial;                                        // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HairDefaultMaterial;                                      // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraSystem*                              AngularSpringsSystem;                                     // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraSystem*                              CosseratRodsSystem;                                       // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x04C0(0x0050) MISSED OFFSET
	TArray<struct FHairGroupDesc>                      GroomGroupsDesc;                                          // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0520(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomComponent");
		
		return ptr;
	}

};


// Class HairStrandsCore.GroomCreateBindingOptions
// 0x0018 (0x0040 - 0x0028)
class UGroomCreateBindingOptions : public UObject
{
public:
	class USkeletalMesh*                               SourceSkeletalMesh;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               TargetSkeletalMesh;                                       // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumInterpolationPoints;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomCreateBindingOptions");
		
		return ptr;
	}

};


// Class HairStrandsCore.GroomImportOptions
// 0x0028 (0x0050 - 0x0028)
class UGroomImportOptions : public UObject
{
public:
	struct FGroomConversionSettings                    ConversionSettings;                                       // 0x0028(0x0018) (Edit, BlueprintVisible, Config)
	struct FGroomBuildSettings                         BuildSettings;                                            // 0x0040(0x000C) (Edit, BlueprintVisible, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomImportOptions");
		
		return ptr;
	}

};


// Class HairStrandsCore.GroomHairGroupsPreview
// 0x0010 (0x0038 - 0x0028)
class UGroomHairGroupsPreview : public UObject
{
public:
	TArray<struct FGroomHairGroupPreview>              Groups;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HairStrandsCore.GroomHairGroupsPreview");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
