// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Results_BonusXpType.Results_BonusXpType_C.setInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InXPAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   PlayerName                     (Parm)
// struct FName                   InType                         (Parm, ZeroConstructor, IsPlainOldData)

void UResults_BonusXpType_C::setInformation(int InXPAmount, const struct FText& PlayerName, const struct FName& InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BonusXpType.Results_BonusXpType_C.setInformation");

	UResults_BonusXpType_C_setInformation_Params params;
	params.InXPAmount = InXPAmount;
	params.PlayerName = PlayerName;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BonusXpType.Results_BonusXpType_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_BonusXpType_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BonusXpType.Results_BonusXpType_C.Construct");

	UResults_BonusXpType_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BonusXpType.Results_BonusXpType_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UResults_BonusXpType_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BonusXpType.Results_BonusXpType_C.PreConstruct");

	UResults_BonusXpType_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Results_BonusXpType.Results_BonusXpType_C.ExecuteUbergraph_Results_BonusXpType
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UResults_BonusXpType_C::ExecuteUbergraph_Results_BonusXpType(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Results_BonusXpType.Results_BonusXpType_C.ExecuteUbergraph_Results_BonusXpType");

	UResults_BonusXpType_C_ExecuteUbergraph_Results_BonusXpType_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
