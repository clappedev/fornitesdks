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

// Function M_MED_Cupid_Dark_Backpack_AnimBlueprint.M_MED_Cupid_Dark_Backpack_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM_MED_Cupid_Dark_Backpack_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function M_MED_Cupid_Dark_Backpack_AnimBlueprint.M_MED_Cupid_Dark_Backpack_AnimBlueprint_C.BlueprintUpdateAnimation");

	UM_MED_Cupid_Dark_Backpack_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_MED_Cupid_Dark_Backpack_AnimBlueprint.M_MED_Cupid_Dark_Backpack_AnimBlueprint_C.ExecuteUbergraph_M_MED_Cupid_Dark_Backpack_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM_MED_Cupid_Dark_Backpack_AnimBlueprint_C::ExecuteUbergraph_M_MED_Cupid_Dark_Backpack_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M_MED_Cupid_Dark_Backpack_AnimBlueprint.M_MED_Cupid_Dark_Backpack_AnimBlueprint_C.ExecuteUbergraph_M_MED_Cupid_Dark_Backpack_AnimBlueprint");

	UM_MED_Cupid_Dark_Backpack_AnimBlueprint_C_ExecuteUbergraph_M_MED_Cupid_Dark_Backpack_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
