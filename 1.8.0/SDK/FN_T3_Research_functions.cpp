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

// Function T3_Research.T3_Research_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UT3_Research_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function T3_Research.T3_Research_C.PreConstruct");

	UT3_Research_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T3_Research.T3_Research_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT3_Research_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function T3_Research.T3_Research_C.Construct");

	UT3_Research_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T3_Research.T3_Research_C.ExecuteUbergraph_T3_Research
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UT3_Research_C::ExecuteUbergraph_T3_Research(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function T3_Research.T3_Research_C.ExecuteUbergraph_T3_Research");

	UT3_Research_C_ExecuteUbergraph_T3_Research_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
