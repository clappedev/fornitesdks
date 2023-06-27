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

// Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
struct UVirtualHeightfieldMeshComponent_GatherHideFlags_Params
{
	bool                                               InOutHidePrimitivesInEditor;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               InOutHidePrimitivesInGame;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
