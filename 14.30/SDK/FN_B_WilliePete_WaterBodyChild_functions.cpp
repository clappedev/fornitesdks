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

// Function B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_WilliePete_WaterBodyChild_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C.ReceiveBeginPlay");

	AB_WilliePete_WaterBodyChild_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C.ExecuteUbergraph_B_WilliePete_WaterBodyChild
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_WilliePete_WaterBodyChild_C::ExecuteUbergraph_B_WilliePete_WaterBodyChild(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C.ExecuteUbergraph_B_WilliePete_WaterBodyChild");

	AB_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
