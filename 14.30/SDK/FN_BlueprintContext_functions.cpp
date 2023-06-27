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

// Function BlueprintContext.BlueprintContextLibrary.GetContext
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class USubsystem*              Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class USubsystem*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USubsystem* UBlueprintContextLibrary::STATIC_GetContext(class UObject* ContextObject, class USubsystem* Class)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BlueprintContext.BlueprintContextLibrary.GetContext");

	UBlueprintContextLibrary_GetContext_Params params;
	params.ContextObject = ContextObject;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
