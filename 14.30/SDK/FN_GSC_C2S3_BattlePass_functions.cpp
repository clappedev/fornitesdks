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

// Function GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C.OnNavActorSelected
// (Event, Public, BlueprintEvent)

void UGSC_C2S3_BattlePass_C::OnNavActorSelected()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C.OnNavActorSelected");

	UGSC_C2S3_BattlePass_C_OnNavActorSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C.OnNavActorHovered
// (Event, Public, BlueprintEvent)

void UGSC_C2S3_BattlePass_C::OnNavActorHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C.OnNavActorHovered");

	UGSC_C2S3_BattlePass_C_OnNavActorHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C.ExecuteUbergraph_GSC_C2S3_BattlePass
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGSC_C2S3_BattlePass_C::ExecuteUbergraph_GSC_C2S3_BattlePass(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GSC_C2S3_BattlePass.GSC_C2S3_BattlePass_C.ExecuteUbergraph_GSC_C2S3_BattlePass");

	UGSC_C2S3_BattlePass_C_ExecuteUbergraph_GSC_C2S3_BattlePass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
