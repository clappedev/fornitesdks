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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		
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
// 0x0070 (0x0270 - 0x0200)
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET
	bool                                               ScanWorld;                                                // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNormals;                                           // 0x0209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestVertexConfidence;                                  // 0x020A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshTrackerVertexColorMode                        VertexColorMode;                                          // 0x020B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	TArray<struct FColor>                              BlockVertexColors;                                        // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                VertexColorFromConfidenceZero;                            // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VertexColorFromConfidenceOne;                             // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateInterval;                                           // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class UMRMeshComponent*                            MRMesh;                                                   // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0250(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		
		return ptr;
	}


	void OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};


// Class MRMesh.MRMeshComponent
// 0x0080 (0x04C0 - 0x0440)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateMeshProxySections;                                 // 0x0450(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateNavMeshOnMeshUpdate;                               // 0x0451(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverCreateCollisionMesh;                                // 0x0452(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0453(0x0005) MISSED OFFSET
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0458(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x0460(0x0010) (ZeroConstructor, Transient)
	class UMaterialInterface*                          WireframeMaterial;                                        // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0478(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		
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
