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

// Function BGA_CurieFireMesh_MolotovCocktail_AdditionalMesh.BGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_CurieFireMesh_MolotovCocktail_AdditionalMesh.BGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C.UserConstructionScript");

	ABGA_CurieFireMesh_MolotovCocktail_AdditionalMesh_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
