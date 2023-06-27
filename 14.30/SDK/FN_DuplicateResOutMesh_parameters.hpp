#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.RestoreInProgressRes
struct ADuplicateResOutMesh_C_RestoreInProgressRes_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Store Original Material for Teleport In
struct ADuplicateResOutMesh_C_Store_Original_Material_for_Teleport_In_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.External Mesh Masked Setup
struct ADuplicateResOutMesh_C_External_Mesh_Masked_Setup_Params
{
	TArray<class USkeletalMeshComponent*>              External_MEsh_Component_Array;                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UMaterialInstanceDynamic*>            Corrected_Mid_Array;                                      // (Parm, OutParm)
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ProcessSpawnInTimeline
struct ADuplicateResOutMesh_C_ProcessSpawnInTimeline_Params
{
	float                                              ZHeight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LightIntensity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array
struct ADuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes
struct ADuplicateResOutMesh_C_Make_and_slave_internal_meshes_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light
struct ADuplicateResOutMesh_C_Spawn__Light_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds
struct ADuplicateResOutMesh_C_Find_Bounds_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray
struct ADuplicateResOutMesh_C_initializeExternalSkeletalMeshArray_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc
struct ADuplicateResOutMesh_C_CharacterSpawnInTimeline__FinishedFunc_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc
struct ADuplicateResOutMesh_C_CharacterSpawnInTimeline__UpdateFunc_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay
struct ADuplicateResOutMesh_C_ReceiveBeginPlay_Params
{
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick
struct ADuplicateResOutMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters
struct ADuplicateResOutMesh_C_UpdateExternalParameters_Params
{
	TArray<class UMaterialInstanceDynamic*>            MID_Array;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class USkeletalMeshComponent*>              External_MEsh_Component_Array;                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh
struct ADuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
