// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function T4_Research.T4_Research_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UT4_Research_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function T4_Research.T4_Research_C.PreConstruct");

	UT4_Research_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T4_Research.T4_Research_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT4_Research_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function T4_Research.T4_Research_C.Construct");

	UT4_Research_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T4_Research.T4_Research_C.ExecuteUbergraph_T4_Research
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UT4_Research_C::ExecuteUbergraph_T4_Research(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function T4_Research.T4_Research_C.ExecuteUbergraph_T4_Research");

	UT4_Research_C_ExecuteUbergraph_T4_Research_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
