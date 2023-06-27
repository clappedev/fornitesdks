#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x0118 - 0x00F0)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

};


// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x09C0 - 0x09A0)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x09A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}


	void STATIC_FoliageOverlappingSphereCount();
	void STATIC_FoliageOverlappingBoxCount();
};


// Class Foliage.FoliageType
// 0x03F8 (0x0420 - 0x0028)
class UFoliageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3F8];                                     // 0x0028(0x03F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x0440 - 0x0420)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0420(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x03D8 - 0x0388)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x03F8 - 0x0398)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x03A0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageComponent
// 0x0010 (0x07F0 - 0x07E0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x03C8 - 0x03C0)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0048 (0x0070 - 0x0028)
class UProceduralFoliageSpawner : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageTile
// 0x0130 (0x0158 - 0x0028)
class UProceduralFoliageTile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0028(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x03C8 - 0x03C0)
class AProceduralFoliageVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
