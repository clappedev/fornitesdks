#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}


	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
};


// Class MRMesh.MockDataMeshTrackerComponent
// 0x0070 (0x02A0 - 0x0230)
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MRMesh.MockDataMeshTrackerComponent.OnMeshTrackerUpdated
	bool                                               ScanWorld;                                                // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNormals;                                           // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestVertexConfidence;                                  // 0x0242(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshTrackerVertexColorMode                        VertexColorMode;                                          // 0x0243(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TArray<struct FColor>                              BlockVertexColors;                                        // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                VertexColorFromConfidenceZero;                            // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VertexColorFromConfidenceOne;                             // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateInterval;                                           // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UMRMeshComponent*                            MRMesh;                                                   // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0288(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		return ptr;
	}


	void OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};


// Class MRMesh.MRMeshComponent
// 0x0050 (0x0440 - 0x03F0)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateMeshProxySections;                                 // 0x0400(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateNavMeshOnMeshUpdate;                               // 0x0401(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverCreateCollisionMesh;                                // 0x0402(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0403(0x0005) MISSED OFFSET
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0408(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x0410(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0420(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}


	bool IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
