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

// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UUnderwaterAudioComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ReceiveBeginPlay");

	UUnderwaterAudioComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.On Camera Underwater State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsUnderWater                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DepthUnderwater                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnderwaterAudioComponent_C::On_Camera_Underwater_State_Changed(bool bIsUnderWater, float DepthUnderwater)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.On Camera Underwater State Changed");

	UUnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed_Params params;
	params.bIsUnderWater = bIsUnderWater;
	params.DepthUnderwater = DepthUnderwater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnderwaterAudioComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ReceiveEndPlay");

	UUnderwaterAudioComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ExecuteUbergraph_UnderwaterAudioComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnderwaterAudioComponent_C::ExecuteUbergraph_UnderwaterAudioComponent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnderwaterAudioComponent.UnderwaterAudioComponent_C.ExecuteUbergraph_UnderwaterAudioComponent");

	UUnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
