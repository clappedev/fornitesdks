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

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InStiffness                    (Parm, ZeroConstructor, IsPlainOldData)

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness");

	UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params params;
	params.InStiffness = InStiffness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// (Native, Public, BlueprintCallable)

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated");

	UClothingSimulationInteractor_PhysicsAssetUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UClothingSimulationInteractor::GetSimulationTime()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime");

	UClothingSimulationInteractor_GetSimulationTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumSubsteps()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps");

	UClothingSimulationInteractor_GetNumSubsteps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumKinematicParticles()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles");

	UClothingSimulationInteractor_GetNumKinematicParticles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumIterations()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations");

	UClothingSimulationInteractor_GetNumIterations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumDynamicParticles()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles");

	UClothingSimulationInteractor_GetNumDynamicParticles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UClothingSimulationInteractor::GetNumCloths()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths");

	UClothingSimulationInteractor_GetNumCloths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UClothingSimulationInteractor::EnableGravityOverride(const struct FVector& InVector)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride");

	UClothingSimulationInteractor_EnableGravityOverride_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
// (Native, Public, BlueprintCallable)

void UClothingSimulationInteractor::DisableGravityOverride()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride");

	UClothingSimulationInteractor_DisableGravityOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// (Native, Public, BlueprintCallable)

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated");

	UClothingSimulationInteractor_ClothConfigUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
