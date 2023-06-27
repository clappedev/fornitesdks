// Fortnite (9.1) SDK
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

// Function Bunker_Man.Bunker_Man.ExecuteUbergraph_Bunker_Man
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBunker_Man::ExecuteUbergraph_Bunker_Man(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bunker_Man.Bunker_Man.ExecuteUbergraph_Bunker_Man");

	UBunker_Man_ExecuteUbergraph_Bunker_Man_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
