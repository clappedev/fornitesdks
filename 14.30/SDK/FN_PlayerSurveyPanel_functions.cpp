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

// Function PlayerSurveyPanel.PlayerSurveyPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanel_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanel.PlayerSurveyPanel_C.Construct");

	UPlayerSurveyPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.OutroDone
// (BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanel_C::OutroDone()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanel.PlayerSurveyPanel_C.OutroDone");

	UPlayerSurveyPanel_C_OutroDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro
// (BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanel_C::StartIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro");

	UPlayerSurveyPanel_C_StartIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro_BP
// (Event, Public, BlueprintEvent)

void UPlayerSurveyPanel_C::StartIntro_BP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro_BP");

	UPlayerSurveyPanel_C_StartIntro_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.OnPlayerSurveyEnded
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyPanel_C::OnPlayerSurveyEnded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanel.PlayerSurveyPanel_C.OnPlayerSurveyEnded");

	UPlayerSurveyPanel_C_OnPlayerSurveyEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.ExecuteUbergraph_PlayerSurveyPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanel_C::ExecuteUbergraph_PlayerSurveyPanel(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanel.PlayerSurveyPanel_C.ExecuteUbergraph_PlayerSurveyPanel");

	UPlayerSurveyPanel_C_ExecuteUbergraph_PlayerSurveyPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
