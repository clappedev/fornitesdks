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

// Function BP_DetailLevelMesh.BP_DetailLevelMesh_C.ExecuteUbergraph_BP_DetailLevelMesh
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DetailLevelMesh_C::ExecuteUbergraph_BP_DetailLevelMesh(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_DetailLevelMesh.BP_DetailLevelMesh_C.ExecuteUbergraph_BP_DetailLevelMesh");

	ABP_DetailLevelMesh_C_ExecuteUbergraph_BP_DetailLevelMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
