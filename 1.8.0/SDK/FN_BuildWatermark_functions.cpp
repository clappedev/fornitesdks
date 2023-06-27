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

// Function BuildWatermark.BuildWatermark_C.Update Watermark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::Update_Watermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Update Watermark");

	UBuildWatermark_C_Update_Watermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.Construct");

	UBuildWatermark_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark");

	UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
