// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Decal_Burger_Splat.BP_Decal_Burger_Splat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Decal_Burger_Splat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal_Burger_Splat.BP_Decal_Burger_Splat_C.ReceiveBeginPlay");

	ABP_Decal_Burger_Splat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Decal_Burger_Splat.BP_Decal_Burger_Splat_C.ExecuteUbergraph_BP_Decal_Burger_Splat
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Decal_Burger_Splat_C::ExecuteUbergraph_BP_Decal_Burger_Splat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal_Burger_Splat.BP_Decal_Burger_Splat_C.ExecuteUbergraph_BP_Decal_Burger_Splat");

	ABP_Decal_Burger_Splat_C_ExecuteUbergraph_BP_Decal_Burger_Splat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
