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

// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortItemDefinition*     Item_Definition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SubslotIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrontendItemViewSettingsManager_C::Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition, int SubslotIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero");

	UFrontendItemViewSettingsManager_C_Is_Hero_or_Previews_on_Hero_Params params;
	params.Item_Definition = Item_Definition;
	params.SubslotIndex = SubslotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EFrontEndCamera                Camera                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESubGame                       GameMode                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItemDefinition*     ItemDefinition                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SubslotIndex                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortItemViewSettings   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFortItemViewSettings UFrontendItemViewSettingsManager_C::GetItemViewSettings(EFrontEndCamera Camera, ESubGame GameMode, class UFortItemDefinition* ItemDefinition, int SubslotIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings");

	UFrontendItemViewSettingsManager_C_GetItemViewSettings_Params params;
	params.Camera = Camera;
	params.GameMode = GameMode;
	params.ItemDefinition = ItemDefinition;
	params.SubslotIndex = SubslotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
