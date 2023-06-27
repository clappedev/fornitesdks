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

// Function Frontend.Frontend_C.PlaySpeech
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SampleRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundWave*              AssetFile                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_C::PlaySpeech(const struct FString& Filename, int SampleRate, class USoundWave* AssetFile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Frontend.Frontend_C.PlaySpeech");

	AFrontend_C_PlaySpeech_Params params;
	params.Filename = Filename;
	params.SampleRate = SampleRate;
	params.AssetFile = AssetFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.Frontend_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void AFrontend_C::OnMatchStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Frontend.Frontend_C.OnMatchStarted");

	AFrontend_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.Frontend_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)

void AFrontend_C::EnableTutorial()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Frontend.Frontend_C.EnableTutorial");

	AFrontend_C_EnableTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.Frontend_C.ExecuteUbergraph_Frontend
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_C::ExecuteUbergraph_Frontend(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Frontend.Frontend_C.ExecuteUbergraph_Frontend");

	AFrontend_C_ExecuteUbergraph_Frontend_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
