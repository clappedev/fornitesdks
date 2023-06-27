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

// Function F_LRG_Constructor.SK_F_LRG_Constructor.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor
// (BlueprintEvent)

void USK_F_LRG_Constructor::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor()
{
	static auto fn = UObject::FindObject<UFunction>("Function F_LRG_Constructor.SK_F_LRG_Constructor.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor");

	USK_F_LRG_Constructor_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function F_LRG_Constructor.SK_F_LRG_Constructor.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void USK_F_LRG_Constructor::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function F_LRG_Constructor.SK_F_LRG_Constructor.BlueprintInitializeAnimation");

	USK_F_LRG_Constructor_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function F_LRG_Constructor.SK_F_LRG_Constructor.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_F_LRG_Constructor::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function F_LRG_Constructor.SK_F_LRG_Constructor.BlueprintUpdateAnimation");

	USK_F_LRG_Constructor_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function F_LRG_Constructor.SK_F_LRG_Constructor.ExecuteUbergraph_SK_F_LRG_Constructor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_F_LRG_Constructor::ExecuteUbergraph_SK_F_LRG_Constructor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function F_LRG_Constructor.SK_F_LRG_Constructor.ExecuteUbergraph_SK_F_LRG_Constructor");

	USK_F_LRG_Constructor_ExecuteUbergraph_SK_F_LRG_Constructor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
