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

// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
// 0x0038 (0x0060 - 0x0028)
class UHeightfieldMinMaxTexture : public UObject
{
public:
	class UTexture2D*                                  Texture;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxCPULevels;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           TextureData;                                              // 0x0038(0x0010) (ZeroConstructor)
	struct FIntPoint                                   TextureDataSize;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        TextureDataMips;                                          // 0x0050(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture");
		
		return ptr;
	}

};


// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{
public:
	class UHeightfieldMinMaxTexture*                   MinMaxTexture;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture");
		
		return ptr;
	}

};


// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
// 0x0008 (0x0228 - 0x0220)
class AVirtualHeightfieldMesh : public AActor
{
public:
	class UVirtualHeightfieldMeshComponent*            VirtualHeightfieldMeshComponent;                          // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class VirtualHeightfieldMesh.VirtualHeightfieldMesh");
		
		return ptr;
	}

};


// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
// 0x0080 (0x04C0 - 0x0440)
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0440(0x0028) UNKNOWN PROPERTY: SoftObjectProperty VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.VirtualTexture
	class ARuntimeVirtualTextureVolume*                VirtualTextureRef;                                        // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     VirtualTextureThumbnail;                                  // 0x0470(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bCopyBoundsButton;                                        // 0x0478(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	class UHeightfieldMinMaxTexture*                   MinMaxTexture;                                            // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumMinMaxTextureBuildLevels;                              // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBuildMinMaxTextureButton;                                // 0x048C(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Lod0ScreenSize;                                           // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Lod0Distribution;                                         // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LodDistribution;                                          // 0x04A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSubdivisionLods;                                       // 0x04A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumTailLods;                                              // 0x04A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumOcclusionLods;                                         // 0x04AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHiddenInEditor;                                          // 0x04B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x04B1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent");
		
		return ptr;
	}


	void GatherHideFlags(bool* InOutHidePrimitivesInEditor, bool* InOutHidePrimitivesInGame);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
