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

// Function Tooltip-Basic-S.Tooltip-Basic-S_C.Get Icon Brush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UTooltip_Basic_S_C::Get_Icon_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Basic-S.Tooltip-Basic-S_C.Get Icon Brush");

	UTooltip_Basic_S_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Basic-S.Tooltip-Basic-S_C.Get Header Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTooltip_Basic_S_C::Get_Header_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Basic-S.Tooltip-Basic-S_C.Get Header Text");

	UTooltip_Basic_S_C_Get_Header_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Basic-S.Tooltip-Basic-S_C.Get Body Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTooltip_Basic_S_C::Get_Body_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Basic-S.Tooltip-Basic-S_C.Get Body Text");

	UTooltip_Basic_S_C_Get_Body_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tooltip-Basic-S.Tooltip-Basic-S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltip_Basic_S_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Basic-S.Tooltip-Basic-S_C.Construct");

	UTooltip_Basic_S_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tooltip-Basic-S.Tooltip-Basic-S_C.ExecuteUbergraph_Tooltip-Basic-S
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTooltip_Basic_S_C::ExecuteUbergraph_Tooltip_Basic_S(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tooltip-Basic-S.Tooltip-Basic-S_C.ExecuteUbergraph_Tooltip-Basic-S");

	UTooltip_Basic_S_C_ExecuteUbergraph_Tooltip_Basic_S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
