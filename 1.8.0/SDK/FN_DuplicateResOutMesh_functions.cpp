// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array
// (Public, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array");

	ADuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::Make_and_slave_internal_meshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes");

	ADuplicateResOutMesh_C_Make_and_slave_internal_meshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::Spawn__Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light");

	ADuplicateResOutMesh_C_Spawn__Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::Find_Bounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds");

	ADuplicateResOutMesh_C_Find_Bounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray
// (Public, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::initializeExternalSkeletalMeshArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray");

	ADuplicateResOutMesh_C_initializeExternalSkeletalMeshArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.UserConstructionScript");

	ADuplicateResOutMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc
// (BlueprintEvent)

void ADuplicateResOutMesh_C::CharacterSpawnInTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc");

	ADuplicateResOutMesh_C_CharacterSpawnInTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc
// (BlueprintEvent)

void ADuplicateResOutMesh_C::CharacterSpawnInTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc");

	ADuplicateResOutMesh_C_CharacterSpawnInTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADuplicateResOutMesh_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay");

	ADuplicateResOutMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADuplicateResOutMesh_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick");

	ADuplicateResOutMesh_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MID_Array                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class USkeletalMeshComponent*> External_MEsh_Component_Array  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADuplicateResOutMesh_C::UpdateExternalParameters(TArray<class UMaterialInstanceDynamic*> MID_Array, TArray<class USkeletalMeshComponent*> External_MEsh_Component_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters");

	ADuplicateResOutMesh_C_UpdateExternalParameters_Params params;
	params.MID_Array = MID_Array;
	params.External_MEsh_Component_Array = External_MEsh_Component_Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADuplicateResOutMesh_C::ExecuteUbergraph_DuplicateResOutMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh");

	ADuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
