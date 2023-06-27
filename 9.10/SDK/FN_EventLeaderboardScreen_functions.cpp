// Fortnite (9.1) SDK
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

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UEventLeaderboardScreen_C::Init(struct FString EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init");

	UEventLeaderboardScreen_C_Init_Params params;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEventLeaderboardScreen_C::BndEvt__Button_Back2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent");

	UEventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo TournamentDisplayInfo          (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardScreen_C::EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize");

	UEventLeaderboardScreen_C_EventColorize_Params params;
	params.TournamentDisplayInfo = TournamentDisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro
// (BlueprintCallable, BlueprintEvent)

void UEventLeaderboardScreen_C::EventIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro");

	UEventLeaderboardScreen_C_EventIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData* EntryData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardScreen_C::OnLeaderboardEntrySelected(class UFortEventLeaderboardEntryData* EntryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected");

	UEventLeaderboardScreen_C_OnLeaderboardEntrySelected_Params params;
	params.EntryData = EntryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequestComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            EntryCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardScreen_C::OnLeaderboardPageRequestComplete(int EntryCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequestComplete");

	UEventLeaderboardScreen_C_OnLeaderboardPageRequestComplete_Params params;
	params.EntryCount = EntryCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequested
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardScreen_C::OnLeaderboardPageRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequested");

	UEventLeaderboardScreen_C_OnLeaderboardPageRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardScreen_C::BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent");

	UEventLeaderboardScreen_C_BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Event Leaderboard Screen On Activated
// (BlueprintCallable, BlueprintEvent)

void UEventLeaderboardScreen_C::Event_Leaderboard_Screen_On_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.Event Leaderboard Screen On Activated");

	UEventLeaderboardScreen_C_Event_Leaderboard_Screen_On_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventLeaderboardScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.Construct");

	UEventLeaderboardScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ShowMyStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEventLeaderboardScreen_C::ShowMyStats(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.ShowMyStats");

	UEventLeaderboardScreen_C_ShowMyStats_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__LiveGames_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEventLeaderboardScreen_C::BndEvt__LiveGames_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__LiveGames_K2Node_ComponentBoundEvent");

	UEventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardScreen_C::ExecuteUbergraph_EventLeaderboardScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen");

	UEventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventViewLiveGames__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEventLeaderboardScreen_C::EventViewLiveGames__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventViewLiveGames__DelegateSignature");

	UEventLeaderboardScreen_C_EventViewLiveGames__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEventLeaderboardScreen_C::EventCloseButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature");

	UEventLeaderboardScreen_C_EventCloseButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
