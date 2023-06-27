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

// Function BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_CurieFireMesh_FrostedTips_Fireball_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C.ReceiveBeginPlay");

	ABGA_CurieFireMesh_FrostedTips_Fireball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C.ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_CurieFireMesh_FrostedTips_Fireball_C::ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C.ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball");

	ABGA_CurieFireMesh_FrostedTips_Fireball_C_ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
