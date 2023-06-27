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

// BlueprintGeneratedClass BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C
// 0x0268 (0x0488 - 0x0220)
class ABP_Gerstner_Wave_Controller_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh;                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWaterQualityLevel>                    Quality_Setting;                                          // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	int                                                MaxWavesPerWaterBody;                                     // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWaveSpectrumSettings                       Wave_Generation_Spectrum;                                 // 0x0248(0x0048) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRandomStream                               Seed;                                                     // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LastAlpha;                                                // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Detail_Normal_Intensity;                                  // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Detail_Normal_Scale;                                      // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	TArray<struct FOverrideScalarParam>                Override_Scalar_Params;                                   // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FOverrideVectorParam>                Override_Vector_Params;                                   // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Manual_Time;                                              // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Freeze_Time_Editor;                                       // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Tick_In_Game;                                             // 0x02CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02CE(0x0002) MISSED OFFSET
	float                                              Inscatter_Brightness;                                     // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Inscatter_Contrast;                                       // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Randomness;                                               // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	TArray<struct FWaveParams>                         Waves;                                                    // 0x02E8(0x0010) (Edit, BlueprintVisible)
	TArray<struct FWaveParams>                         Override_Waves;                                           // 0x02F8(0x0010) (Edit, BlueprintVisible)
	int                                                Display_Waves;                                            // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	class UTexture*                                    Detail_Normal;                                            // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enable_Overrides;                                         // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	class UTexture*                                    Cubemap;                                                  // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        BottomMesh;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Spawn_Water_Meshes;                                       // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	int                                                Grid_Size;                                                // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Grid_Cells_X;                                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Grid_Cells_Y;                                             // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_Water_HISMC_Grid_C*                      Grid;                                                     // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               UseOceanwaves;                                            // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      WaveParamsRT;                                             // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Target_Depth_for_Full_Waves;                              // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWaveSpectrumSettings                       Lake_Spectrum;                                            // 0x035C(0x0048) (Edit, BlueprintVisible, IsPlainOldData)
	struct FWaveSpectrumSettings                       Null_Spectrum;                                            // 0x03A4(0x0048) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	TArray<struct FWaterWaveParams>                    NullWaves;                                                // 0x03F0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FWaterWaveParams>                    OceanWaves;                                               // 0x0400(0x0010) (Edit, BlueprintVisible)
	TArray<struct FWaterWaveParams>                    WaterWaves;                                               // 0x0410(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FWaterWaveParams>                    LakeWaves;                                                // 0x0420(0x0010) (Edit, BlueprintVisible)
	class ALandscapeWaterInfo_C*                       LandscaleWaterINfo;                                       // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWaterMeshActor*                             WaterMeshActor;                                           // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FWaveSpectrumSettings                       Ocean_Spectrum;                                           // 0x0440(0x0048) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gerstner_Wave_Controller.BP_Gerstner_Wave_Controller_C");
		
		return ptr;
	}


	void Render_Standalone_Waves();
	void Generate_Spectrum(const struct FWaveSpectrumSettings& Spectrum, TArray<struct FWaterWaveParams>* Waves);
	void Set_Waves_On_WaterBodies();
	void RenderWaveTextureData();
	void GetWaterWaves(TArray<struct FWaterWaveParams>* WaterWaveParams, float* BigWaveDepth);
	void Set_Distance_Field(class UTexture* rt);
	void Set_Single_Wave_MPC_Parameters(const struct FWaveParams& WaveParams, int idx);
	void General_MPC_Params();
	void Manual_Parameter_Overrides();
	void Set_All_Wave_MPC_Params();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Harvest_Material_Params();
	void Spawn_Grid();
	void ExecuteUbergraph_BP_Gerstner_Wave_Controller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
