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

// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorBounds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override_Bounds                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Bounds                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_CreativeMoveToolOverrides_C::GetCreativeActorBounds(bool* Override_Bounds, struct FVector* Bounds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorBounds");

	UBPi_CreativeMoveToolOverrides_C_GetCreativeActorBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Override_Bounds != nullptr)
		*Override_Bounds = params.Override_Bounds;
	if (Bounds != nullptr)
		*Bounds = params.Bounds;
}


// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorOrigin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_CreativeMoveToolOverrides_C::GetCreativeActorOrigin(bool* Override, struct FVector* Center)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorOrigin");

	UBPi_CreativeMoveToolOverrides_C_GetCreativeActorOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Override != nullptr)
		*Override = params.Override;
	if (Center != nullptr)
		*Center = params.Center;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
