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

// Function AthenaStoreReward.AthenaStoreReward_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaStoreReward_C::GetItem(class UFortItem** Result)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaStoreReward.AthenaStoreReward_C.GetItem");

	UAthenaStoreReward_C_GetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AthenaStoreReward.AthenaStoreReward_C.GetTemporaryItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FFortCosmeticVariantPreviewElement> Cosmetics                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UFortItem*>       Temporary_Items                (Parm, OutParm)

void UAthenaStoreReward_C::GetTemporaryItems(TArray<struct FFortCosmeticVariantPreviewElement>* Cosmetics, TArray<class UFortItem*>* Temporary_Items)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaStoreReward.AthenaStoreReward_C.GetTemporaryItems");

	UAthenaStoreReward_C_GetTemporaryItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cosmetics != nullptr)
		*Cosmetics = params.Cosmetics;
	if (Temporary_Items != nullptr)
		*Temporary_Items = params.Temporary_Items;
}


// Function AthenaStoreReward.AthenaStoreReward_C.GetAthenaCosmeticItemDefinition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaCosmeticItemDefinition* AsAthena_Cosmetic_Item_Definition (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaStoreReward_C::GetAthenaCosmeticItemDefinition(class UAthenaCosmeticItemDefinition** AsAthena_Cosmetic_Item_Definition)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaStoreReward.AthenaStoreReward_C.GetAthenaCosmeticItemDefinition");

	UAthenaStoreReward_C_GetAthenaCosmeticItemDefinition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsAthena_Cosmetic_Item_Definition != nullptr)
		*AsAthena_Cosmetic_Item_Definition = params.AsAthena_Cosmetic_Item_Definition;
}


// Function AthenaStoreReward.AthenaStoreReward_C.EnableRarityFlare
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaStoreReward_C::EnableRarityFlare()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaStoreReward.AthenaStoreReward_C.EnableRarityFlare");

	UAthenaStoreReward_C_EnableRarityFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStoreReward.AthenaStoreReward_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Claimed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelAchieved                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOwned                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStoreReward_C::SetState(bool Claimed, bool Locked, bool LevelAchieved, bool bOwned)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaStoreReward.AthenaStoreReward_C.SetState");

	UAthenaStoreReward_C_SetState_Params params;
	params.Claimed = Claimed;
	params.Locked = Locked;
	params.LevelAchieved = LevelAchieved;
	params.bOwned = bOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStoreReward.AthenaStoreReward_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               InItemToRepresent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Claimed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LevelAchieved                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOwned                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortItemCardSize              ItemCardSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStoreReward_C::Setup(class UFortItem* InItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved, bool bOwned, EFortItemCardSize ItemCardSize, int Quantity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaStoreReward.AthenaStoreReward_C.Setup");

	UAthenaStoreReward_C_Setup_Params params;
	params.InItemToRepresent = InItemToRepresent;
	params.Claimed = Claimed;
	params.Locked = Locked;
	params.LevelAchieved = LevelAchieved;
	params.bOwned = bOwned;
	params.ItemCardSize = ItemCardSize;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStoreReward.AthenaStoreReward_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)

void UAthenaStoreReward_C::PlayIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaStoreReward.AthenaStoreReward_C.PlayIntro");

	UAthenaStoreReward_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaStoreReward.AthenaStoreReward_C.ExecuteUbergraph_AthenaStoreReward
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaStoreReward_C::ExecuteUbergraph_AthenaStoreReward(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaStoreReward.AthenaStoreReward_C.ExecuteUbergraph_AthenaStoreReward");

	UAthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
