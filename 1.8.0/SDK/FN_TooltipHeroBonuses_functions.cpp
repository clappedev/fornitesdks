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

// Function TooltipHeroBonuses.TooltipHeroBonuses_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltipHeroBonuses_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipHeroBonuses.TooltipHeroBonuses_C.Construct");

	UTooltipHeroBonuses_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipHeroBonuses.TooltipHeroBonuses_C.ExecuteUbergraph_TooltipHeroBonuses
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTooltipHeroBonuses_C::ExecuteUbergraph_TooltipHeroBonuses(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipHeroBonuses.TooltipHeroBonuses_C.ExecuteUbergraph_TooltipHeroBonuses");

	UTooltipHeroBonuses_C_ExecuteUbergraph_TooltipHeroBonuses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
