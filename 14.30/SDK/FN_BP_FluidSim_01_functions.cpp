// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FluidSim_01.BP_FluidSim_01_C.Get Frames Since Last Active Forces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::Get_Frames_Since_Last_Active_Forces()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Get Frames Since Last Active Forces");

	ABP_FluidSim_01_C_Get_Frames_Since_Last_Active_Forces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Clear Sim from Waterbody MIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::Clear_Sim_from_Waterbody_MIDs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Clear Sim from Waterbody MIDs");

	ABP_FluidSim_01_C_Clear_Sim_from_Waterbody_MIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Projectile Force
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_FluidSim_01_C::Remove_Projectile_Force(class UActorComponent* Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Projectile Force");

	ABP_FluidSim_01_C_Remove_Projectile_Force_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Register Projectile Force
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFluidForceDynamic      Dynamic_Fluid_Force            (BlueprintVisible, BlueprintReadOnly, Parm)
// class USceneComponent*         Tracked_Component              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_FluidSim_01_C::Register_Projectile_Force(const struct FFluidForceDynamic& Dynamic_Fluid_Force, class USceneComponent* Tracked_Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Register Projectile Force");

	ABP_FluidSim_01_C_Register_Projectile_Force_Params params;
	params.Dynamic_Fluid_Force = Dynamic_Fluid_Force;
	params.Tracked_Component = Tracked_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.GetPlayerPawnForces
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::GetPlayerPawnForces()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.GetPlayerPawnForces");

	ABP_FluidSim_01_C_GetPlayerPawnForces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Validate RTs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RTs_All_Valid                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_01_C::Validate_RTs(bool* RTs_All_Valid)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Validate RTs");

	ABP_FluidSim_01_C_Validate_RTs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RTs_All_Valid != nullptr)
		*RTs_All_Valid = params.RTs_All_Valid;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Set Waterbody MID Params
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::Set_Waterbody_MID_Params()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Set Waterbody MID Params");

	ABP_FluidSim_01_C_Set_Waterbody_MID_Params_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.GetLocalPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_01_C::GetLocalPawn(class APawn** Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.GetLocalPawn");

	ABP_FluidSim_01_C_GetLocalPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Dynamic Force
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               Canvas_Size                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFluidForceDynamicPerInstanceData Dynamic_Force_Settings         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_FluidSim_01_C::Draw_Dynamic_Force(class UCanvas** Canvas, struct FVector2D* Canvas_Size, struct FFluidForceDynamicPerInstanceData* Dynamic_Force_Settings)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Dynamic Force");

	ABP_FluidSim_01_C_Draw_Dynamic_Force_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Canvas != nullptr)
		*Canvas = params.Canvas;
	if (Canvas_Size != nullptr)
		*Canvas_Size = params.Canvas_Size;
	if (Dynamic_Force_Settings != nullptr)
		*Dynamic_Force_Settings = params.Dynamic_Force_Settings;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Dynamic Force
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_FluidSim_01_C::Remove_Dynamic_Force(class UActorComponent* Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Dynamic Force");

	ABP_FluidSim_01_C_Remove_Dynamic_Force_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Register Dynamic Force
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFluidForceDynamic      Dynamic_Fluid_Force            (BlueprintVisible, BlueprintReadOnly, Parm)
// class USceneComponent*         Tracked_Component              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          WaterLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_01_C::Register_Dynamic_Force(const struct FFluidForceDynamic& Dynamic_Fluid_Force, class USceneComponent* Tracked_Component, float WaterLevel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Register Dynamic Force");

	ABP_FluidSim_01_C_Register_Dynamic_Force_Params params;
	params.Dynamic_Fluid_Force = Dynamic_Fluid_Force;
	params.Tracked_Component = Tracked_Component;
	params.WaterLevel = WaterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Update Dynamic Forces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::Update_Dynamic_Forces()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Update Dynamic Forces");

	ABP_FluidSim_01_C_Update_Dynamic_Forces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Impulse Force
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Canvas_Size                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFluidForceImpulsePerInstanceData Impulse_Settings               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_FluidSim_01_C::Draw_Impulse_Force(class UCanvas* Canvas, const struct FVector2D& Canvas_Size, const struct FFluidForceImpulsePerInstanceData& Impulse_Settings)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Impulse Force");

	ABP_FluidSim_01_C_Draw_Impulse_Force_Params params;
	params.Canvas = Canvas;
	params.Canvas_Size = Canvas_Size;
	params.Impulse_Settings = Impulse_Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Update Impulse Lifetimes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::Update_Impulse_Lifetimes()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Update Impulse Lifetimes");

	ABP_FluidSim_01_C_Update_Impulse_Lifetimes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Apply Fluid Force Impulse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFluidForceImpulse      Impulse_Settings               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_FluidSim_01_C::Apply_Fluid_Force_Impulse(const struct FFluidForceImpulse& Impulse_Settings)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Apply Fluid Force Impulse");

	ABP_FluidSim_01_C_Apply_Fluid_Force_Impulse_Params params;
	params.Impulse_Settings = Impulse_Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Get LandscapeWaterInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::Get_LandscapeWaterInfo()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Get LandscapeWaterInfo");

	ABP_FluidSim_01_C_Get_LandscapeWaterInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Get Force MID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* Mid                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_01_C::Get_Force_MID(class UMaterialInterface** Parent, class UMaterialInstanceDynamic** Mid)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Get Force MID");

	ABP_FluidSim_01_C_Get_Force_MID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parent != nullptr)
		*Parent = params.Parent;
	if (Mid != nullptr)
		*Mid = params.Mid;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.GridMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::GridMovement()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.GridMovement");

	ABP_FluidSim_01_C_GridMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.SetupSimMIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::SetupSimMIDs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.SetupSimMIDs");

	ABP_FluidSim_01_C_SetupSimMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.SetupDisplayMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::SetupDisplayMIDs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.SetupDisplayMIDs");

	ABP_FluidSim_01_C_SetupDisplayMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Convert Force Position
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Force_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Sine_Bob                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UV_Location                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_01_C::Convert_Force_Position(const struct FVector& Force_Location, float Sine_Bob, struct FVector* UV_Location)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Convert Force Position");

	ABP_FluidSim_01_C_Convert_Force_Position_Params params;
	params.Force_Location = Force_Location;
	params.Sine_Bob = Sine_Bob;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UV_Location != nullptr)
		*UV_Location = params.UV_Location;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Cycle Render Targets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  Current_Target                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_01_C::Cycle_Render_Targets(class UTextureRenderTarget2D** Current_Target)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Cycle Render Targets");

	ABP_FluidSim_01_C_Cycle_Render_Targets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Target != nullptr)
		*Current_Target = params.Current_Target;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.UserConstructionScript");

	ABP_FluidSim_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FluidSim_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveBeginPlay");

	ABP_FluidSim_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_01_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveTick");

	ABP_FluidSim_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Clear RTs
// (BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::Clear_RTs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Clear RTs");

	ABP_FluidSim_01_C_Clear_RTs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Allocate RTs
// (BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::Allocate_RTs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Allocate RTs");

	ABP_FluidSim_01_C_Allocate_RTs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.ReCheckScalability
// (BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::ReCheckScalability()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.ReCheckScalability");

	ABP_FluidSim_01_C_ReCheckScalability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.Release RTs
// (BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::Release_RTs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.Release RTs");

	ABP_FluidSim_01_C_Release_RTs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.FluidGridDebug
// (BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_01_C::FluidGridDebug()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.FluidGridDebug");

	ABP_FluidSim_01_C_FluidGridDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_01.BP_FluidSim_01_C.ExecuteUbergraph_BP_FluidSim_01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_01_C::ExecuteUbergraph_BP_FluidSim_01(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_01.BP_FluidSim_01_C.ExecuteUbergraph_BP_FluidSim_01");

	ABP_FluidSim_01_C_ExecuteUbergraph_BP_FluidSim_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
