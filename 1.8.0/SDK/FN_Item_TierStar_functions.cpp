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

// Function Item_TierStar.Item_TierStar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItem_TierStar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_TierStar.Item_TierStar_C.Construct");

	UItem_TierStar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_TierStar.Item_TierStar_C.ExecuteUbergraph_Item_TierStar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItem_TierStar_C::ExecuteUbergraph_Item_TierStar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_TierStar.Item_TierStar_C.ExecuteUbergraph_Item_TierStar");

	UItem_TierStar_C_ExecuteUbergraph_Item_TierStar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
