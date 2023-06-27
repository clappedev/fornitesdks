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

// Function GooseUI.GooseInventoryWidget.OpenWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*              IconTexture                    (Parm, ZeroConstructor, IsPlainOldData)
// class UFortWorldItemDefinition* ItemDef                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGooseInventoryWidget::OpenWidget(class UTexture2D* IconTexture, class UFortWorldItemDefinition* ItemDef)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GooseInventoryWidget.OpenWidget");

	UGooseInventoryWidget_OpenWidget_Params params;
	params.IconTexture = IconTexture;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GooseInventoryWidget.CloseWidget
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGooseInventoryWidget::CloseWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GooseInventoryWidget.CloseWidget");

	UGooseInventoryWidget_CloseWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GooseWidgetBase.OnUpdateNumberOfPlanes
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            FriendlyPlaneCount             (Parm, ZeroConstructor, IsPlainOldData)
// int                            EnemyPlaneCount                (Parm, ZeroConstructor, IsPlainOldData)

void UGooseWidgetBase::OnUpdateNumberOfPlanes(int FriendlyPlaneCount, int EnemyPlaneCount)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GooseWidgetBase.OnUpdateNumberOfPlanes");

	UGooseWidgetBase_OnUpdateNumberOfPlanes_Params params;
	params.FriendlyPlaneCount = FriendlyPlaneCount;
	params.EnemyPlaneCount = EnemyPlaneCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GooseLeaderboardWidget.UpdateLeaderboardUI
// (BlueprintCosmetic, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FGooseLeaderboardData> SortedLeaderboardInfo          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGooseLeaderboardWidget::UpdateLeaderboardUI(TArray<struct FGooseLeaderboardData> SortedLeaderboardInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GooseLeaderboardWidget.UpdateLeaderboardUI");

	UGooseLeaderboardWidget_UpdateLeaderboardUI_Params params;
	params.SortedLeaderboardInfo = SortedLeaderboardInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GoosePlanePickupWidget.OpenWidget
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// int                            DisplayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ChestName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayText                    (ConstParm, Parm, OutParm, ReferenceParm)

void UGoosePlanePickupWidget::OpenWidget(int DisplayIndex, const struct FName& ChestName, const struct FText& DisplayText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GoosePlanePickupWidget.OpenWidget");

	UGoosePlanePickupWidget_OpenWidget_Params params;
	params.DisplayIndex = DisplayIndex;
	params.ChestName = ChestName;
	params.DisplayText = DisplayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GoosePlanePickupWidget.CloseWidget
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGoosePlanePickupWidget::CloseWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GoosePlanePickupWidget.CloseWidget");

	UGoosePlanePickupWidget_CloseWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GoosePlaneWeaponWidget.OpenWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DisplayIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGooseWeaponDisplayData InDisplayData                  (ConstParm, Parm, OutParm, ReferenceParm)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGoosePlaneWeaponWidget::OpenWidget(int DisplayIndex, const struct FGooseWeaponDisplayData& InDisplayData, float StartTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GoosePlaneWeaponWidget.OpenWidget");

	UGoosePlaneWeaponWidget_OpenWidget_Params params;
	params.DisplayIndex = DisplayIndex;
	params.InDisplayData = InDisplayData;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GoosePlaneWeaponWidget.CloseWidget
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGoosePlaneWeaponWidget::CloseWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GoosePlaneWeaponWidget.CloseWidget");

	UGoosePlaneWeaponWidget_CloseWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GooseRadarIconWidget.OnNewIconState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ERadarIconState                NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UGooseRadarIconWidget::OnNewIconState(ERadarIconState NewState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GooseRadarIconWidget.OnNewIconState");

	UGooseRadarIconWidget_OnNewIconState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GooseRadarWidgetBase.OnPlaneRep
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class AFortAthenaVehicle*> Planes                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGooseRadarWidgetBase::OnPlaneRep(TArray<class AFortAthenaVehicle*> Planes)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GooseRadarWidgetBase.OnPlaneRep");

	UGooseRadarWidgetBase_OnPlaneRep_Params params;
	params.Planes = Planes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GooseSkydivingWidget.OnStartSkydiving
// (Event, Protected, BlueprintEvent)

void UGooseSkydivingWidget::OnStartSkydiving()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GooseSkydivingWidget.OnStartSkydiving");

	UGooseSkydivingWidget_OnStartSkydiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseUI.GooseSkydivingWidget.OnEndSkydiving
// (Event, Protected, BlueprintEvent)

void UGooseSkydivingWidget::OnEndSkydiving()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseUI.GooseSkydivingWidget.OnEndSkydiving");

	UGooseSkydivingWidget_OnEndSkydiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
