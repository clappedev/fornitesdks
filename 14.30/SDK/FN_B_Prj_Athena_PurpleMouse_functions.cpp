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

// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SpawnBGA_
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromWater                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AB_Prj_Athena_PurpleMouse_C::SpawnBGA_(const struct FVector& Normal, class AActor* HitActor, class UPrimitiveComponent* HitComp, const struct FVector& Pos, bool FromWater)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SpawnBGA_");

	AB_Prj_Athena_PurpleMouse_C_SpawnBGA__Params params;
	params.Normal = Normal;
	params.HitActor = HitActor;
	params.HitComp = HitComp;
	params.Pos = Pos;
	params.FromWater = FromWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_PurpleMouse_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ReceiveBeginPlay");

	AB_Prj_Athena_PurpleMouse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SetTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_PurpleMouse_C::SetTeam(unsigned char Team)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SetTeam");

	AB_Prj_Athena_PurpleMouse_C_SetTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ExecuteUbergraph_B_Prj_Athena_PurpleMouse
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_PurpleMouse_C::ExecuteUbergraph_B_Prj_Athena_PurpleMouse(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ExecuteUbergraph_B_Prj_Athena_PurpleMouse");

	AB_Prj_Athena_PurpleMouse_C_ExecuteUbergraph_B_Prj_Athena_PurpleMouse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
