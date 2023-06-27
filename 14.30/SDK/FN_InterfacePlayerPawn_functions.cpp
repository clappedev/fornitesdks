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

// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft_End
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfacePlayerPawn_C::MeleeSwingLeft_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft_End");

	UInterfacePlayerPawn_C_MeleeSwingLeft_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight_End
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfacePlayerPawn_C::MeleeSwingRight_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight_End");

	UInterfacePlayerPawn_C_MeleeSwingRight_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfacePlayerPawn_C::FootStepRight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight");

	UInterfacePlayerPawn_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UInterfacePlayerPawn_C::FootStepLeft()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft");

	UInterfacePlayerPawn_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterfacePlayerPawn_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color");

	UInterfacePlayerPawn_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           First_Left                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfacePlayerPawn_C::MeleeSwingLeft(bool First_Left)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft");

	UInterfacePlayerPawn_C_MeleeSwingLeft_Params params;
	params.First_Left = First_Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           First_Right                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInterfacePlayerPawn_C::MeleeSwingRight(bool First_Right)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight");

	UInterfacePlayerPawn_C_MeleeSwingRight_Params params;
	params.First_Right = First_Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
