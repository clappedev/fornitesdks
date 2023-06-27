
#include "../SDK.h"

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BlueprintContext.BlueprintContextLibrary.GetContext
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UBlueprintContextLibrary::STATIC_GetContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlueprintContext.BlueprintContextLibrary.GetContext");

	UBlueprintContextLibrary_GetContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
