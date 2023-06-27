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

// Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// bool                           InOutHidePrimitivesInEditor    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           InOutHidePrimitivesInGame      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVirtualHeightfieldMeshComponent::GatherHideFlags(bool* InOutHidePrimitivesInEditor, bool* InOutHidePrimitivesInGame)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags");

	UVirtualHeightfieldMeshComponent_GatherHideFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutHidePrimitivesInEditor != nullptr)
		*InOutHidePrimitivesInEditor = params.InOutHidePrimitivesInEditor;
	if (InOutHidePrimitivesInGame != nullptr)
		*InOutHidePrimitivesInGame = params.InOutHidePrimitivesInGame;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
