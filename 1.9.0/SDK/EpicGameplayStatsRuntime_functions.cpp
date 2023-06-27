
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

// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayStatTag        A                              (Parm)
// struct FGameplayStatTag        B                              (Parm)

void UBlueprintGameplayStatsLibrary::STATIC_NotEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag");

	UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayStatTag        A                              (Parm)
// struct FGameplayStatTag        B                              (Parm)

void UBlueprintGameplayStatsLibrary::STATIC_EqualEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag");

	UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
