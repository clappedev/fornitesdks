// Fortnite (8.51) SDK
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

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   In_Name                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           In_Show_Name                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  In_Name_Text_Style             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   In_Description                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           In_Show_Description            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  In_Desc_Text_Style             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           In_Use_Small_Icon              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierRow_C::SetData(struct FText In_Name, bool In_Show_Name, class UClass* In_Name_Text_Style, struct FText In_Description, bool In_Show_Description, class UClass* In_Desc_Text_Style, bool In_Use_Small_Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetData");

	UMissionDetailsModifierRow_C_SetData_Params params;
	params.In_Name = In_Name;
	params.In_Show_Name = In_Show_Name;
	params.In_Name_Text_Style = In_Name_Text_Style;
	params.In_Description = In_Description;
	params.In_Show_Description = In_Show_Description;
	params.In_Desc_Text_Style = In_Desc_Text_Style;
	params.In_Use_Small_Icon = In_Use_Small_Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetLargeIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDetailsModifierRow_C::SetLargeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetLargeIcon");

	UMissionDetailsModifierRow_C_SetLargeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetSmallIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDetailsModifierRow_C::SetSmallIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetSmallIcon");

	UMissionDetailsModifierRow_C_SetSmallIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetUseSmallIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In_Use                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierRow_C::SetUseSmallIcon(bool In_Use)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetUseSmallIcon");

	UMissionDetailsModifierRow_C_SetUseSmallIcon_Params params;
	params.In_Use = In_Use;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescriptionTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  In_Style                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierRow_C::SetDescriptionTextStyle(class UClass* In_Style)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescriptionTextStyle");

	UMissionDetailsModifierRow_C_SetDescriptionTextStyle_Params params;
	params.In_Style = In_Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In_Show                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierRow_C::SetShowDescription(bool In_Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowDescription");

	UMissionDetailsModifierRow_C_SetShowDescription_Params params;
	params.In_Show = In_Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   In_Description                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMissionDetailsModifierRow_C::SetDescription(struct FText In_Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescription");

	UMissionDetailsModifierRow_C_SetDescription_Params params;
	params.In_Description = In_Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetNameTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  In_Style                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierRow_C::SetNameTextStyle(class UClass* In_Style)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetNameTextStyle");

	UMissionDetailsModifierRow_C_SetNameTextStyle_Params params;
	params.In_Style = In_Style;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In_Show                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierRow_C::SetShowName(bool In_Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowName");

	UMissionDetailsModifierRow_C_SetShowName_Params params;
	params.In_Show = In_Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   In_Name                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMissionDetailsModifierRow_C::SetName(struct FText In_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetName");

	UMissionDetailsModifierRow_C_SetName_Params params;
	params.In_Name = In_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDetailsModifierRow_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateIcon");

	UMissionDetailsModifierRow_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateDescription
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDetailsModifierRow_C::UpdateDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateDescription");

	UMissionDetailsModifierRow_C_UpdateDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateName
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDetailsModifierRow_C::UpdateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateName");

	UMissionDetailsModifierRow_C_UpdateName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDetailsModifierRow_C::PlayIntroAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation");

	UMissionDetailsModifierRow_C_PlayIntroAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDetailsModifierRow_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Update");

	UMissionDetailsModifierRow_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionDetailsModifierRow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct");

	UMissionDetailsModifierRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDetailsModifierRow_C::ExecuteUbergraph_MissionDetailsModifierRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow");

	UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
