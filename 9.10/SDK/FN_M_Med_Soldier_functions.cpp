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

// Function M_Med_Soldier.M_Med_Soldier.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UM_Med_Soldier::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_Med_Soldier.M_Med_Soldier.BlueprintInitializeAnimation");

	UM_Med_Soldier_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_Med_Soldier.M_Med_Soldier.ExecuteUbergraph_M_Med_Soldier
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM_Med_Soldier::ExecuteUbergraph_M_Med_Soldier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M_Med_Soldier.M_Med_Soldier.ExecuteUbergraph_M_Med_Soldier");

	UM_Med_Soldier_ExecuteUbergraph_M_Med_Soldier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
