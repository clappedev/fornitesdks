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

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Generic_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay");

	APlayerPawn_Generic_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_Parent_C::Entered_Water_Volume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume");

	APlayerPawn_Generic_Parent_C_Entered_Water_Volume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawn_Generic_Parent_C::Player_Creates_a_Splash(struct FTransform NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash");

	APlayerPawn_Generic_Parent_C_Player_Creates_a_Splash_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_Parent_C::ReinitializeWeaponMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials");

	APlayerPawn_Generic_Parent_C_ReinitializeWeaponMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Generic_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent");

	APlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
