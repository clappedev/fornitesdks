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

// BlueprintGeneratedClass BP_FluidSim_01.BP_FluidSim_01_C
// 0x0229 (0x0449 - 0x0220)
class ABP_FluidSim_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RippleSimMID;                                             // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RenderNormalsMID;                                         // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DisplayMID;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DisplayBottomMID;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CrossSectionMID;                                          // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTextureRenderTarget2D*>              RippleRTs;                                                // 0x0258(0x0010) (Edit, BlueprintVisible)
	class UMaterialInterface*                          Display_Material;                                         // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Virtual_FPS;                                              // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Passes;                                                   // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAccumulator;                                          // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FixedStep;                                                // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              Fluid_Size;                                               // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Resolution;                                               // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFluidBoundary>                        Boundary_Condition;                                       // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	float                                              Travel_Speed;                                             // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      NormalRT;                                                 // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutPos;                                                   // 0x02A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PrevLoc;                                                  // 0x02AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrecLoc2;                                                 // 0x02B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevOffset;                                               // 0x02C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevOffset2;                                              // 0x02D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridCenter;                                               // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      TempRT;                                                   // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      ForcesRT;                                                 // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ApplyForces;                                              // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	class ALandscapeWaterInfo_C*                       LandscapeWaterInfo;                                       // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Renders_Per_Frame;                                        // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Show_Cross_Section;                                       // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Perf_Test_Mode;                                           // 0x030D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x030E(0x0002) MISSED OFFSET
	class UTextureRenderTarget2D*                      PerfRT;                                                   // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FFluidForceImpulsePerInstanceData>   ImpulseForces;                                            // 0x0318(0x0010) (Edit, BlueprintVisible)
	TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> DynamicForces;                                            // 0x0328(0x0050) (Edit, BlueprintVisible)
	TMap<class UMaterialInterface*, class UMaterialInstanceDynamic*> ForceParentAndMIDMap;                                     // 0x0378(0x0050) (Edit, BlueprintVisible)
	bool                                               Show_Simulation_Mesh;                                     // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        Fluid_Display_Mesh;                                       // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cross_Section_Mesh;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              FluidSizeSquared;                                         // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocalPawnRef;                                             // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_Text;                                               // 0x03E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	int                                                Pawn_Check_Every_N_Frames;                                // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> ProjectileForces;                                         // 0x03F0(0x0050) (Edit, BlueprintVisible)
	bool                                               Follow_Player_;                                           // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	int                                                Frames_Since_Last_Active_Force;                           // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Terrain_Water_System;                                 // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FluidSim_01.BP_FluidSim_01_C");
		
		return ptr;
	}


	void Get_Frames_Since_Last_Active_Forces();
	void Clear_Sim_from_Waterbody_MIDs();
	void Remove_Projectile_Force(class UActorComponent* Component);
	void Register_Projectile_Force(const struct FFluidForceDynamic& Dynamic_Fluid_Force, class USceneComponent* Tracked_Component);
	void GetPlayerPawnForces();
	void Validate_RTs(bool* RTs_All_Valid);
	void Set_Waterbody_MID_Params();
	void GetLocalPawn(class APawn** Pawn);
	void Draw_Dynamic_Force(class UCanvas** Canvas, struct FVector2D* Canvas_Size, struct FFluidForceDynamicPerInstanceData* Dynamic_Force_Settings);
	void Remove_Dynamic_Force(class UActorComponent* Component);
	void Register_Dynamic_Force(const struct FFluidForceDynamic& Dynamic_Fluid_Force, class USceneComponent* Tracked_Component, float WaterLevel);
	void Update_Dynamic_Forces();
	void Draw_Impulse_Force(class UCanvas* Canvas, const struct FVector2D& Canvas_Size, const struct FFluidForceImpulsePerInstanceData& Impulse_Settings);
	void Update_Impulse_Lifetimes();
	void Apply_Fluid_Force_Impulse(const struct FFluidForceImpulse& Impulse_Settings);
	void Get_LandscapeWaterInfo();
	void Get_Force_MID(class UMaterialInterface** Parent, class UMaterialInstanceDynamic** Mid);
	void GridMovement();
	void SetupSimMIDs();
	void SetupDisplayMIDs();
	void Convert_Force_Position(const struct FVector& Force_Location, float Sine_Bob, struct FVector* UV_Location);
	void Cycle_Render_Targets(class UTextureRenderTarget2D** Current_Target);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Clear_RTs();
	void Allocate_RTs();
	void ReCheckScalability();
	void Release_RTs();
	void FluidGridDebug();
	void ExecuteUbergraph_BP_FluidSim_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
