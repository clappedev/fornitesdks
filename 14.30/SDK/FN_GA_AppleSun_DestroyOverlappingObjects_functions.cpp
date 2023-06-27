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

// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGA_AppleSun_DestroyOverlappingObjects_C::GetCustomAbilitySourceTransform()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.GetCustomAbilitySourceTransform");

	UGA_AppleSun_DestroyOverlappingObjects_C_GetCustomAbilitySourceTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Cancelled_96BA3C644E573EAE0D8760B88ABB3969
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_AppleSun_DestroyOverlappingObjects_C::Cancelled_96BA3C644E573EAE0D8760B88ABB3969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Cancelled_96BA3C644E573EAE0D8760B88ABB3969");

	UGA_AppleSun_DestroyOverlappingObjects_C_Cancelled_96BA3C644E573EAE0D8760B88ABB3969_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Targeted_96BA3C644E573EAE0D8760B88ABB3969
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_AppleSun_DestroyOverlappingObjects_C::Targeted_96BA3C644E573EAE0D8760B88ABB3969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Targeted_96BA3C644E573EAE0D8760B88ABB3969");

	UGA_AppleSun_DestroyOverlappingObjects_C_Targeted_96BA3C644E573EAE0D8760B88ABB3969_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AppleSun_DestroyOverlappingObjects_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.K2_ActivateAbility");

	UGA_AppleSun_DestroyOverlappingObjects_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_AppleSun_DestroyOverlappingObjects_C::ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects");

	UGA_AppleSun_DestroyOverlappingObjects_C_ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
