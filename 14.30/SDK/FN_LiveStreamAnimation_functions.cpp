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

// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetRole
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// ELiveStreamAnimationRole       NewRole                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULiveStreamAnimationSubsystem::SetRole(ELiveStreamAnimationRole NewRole)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetRole");

	ULiveStreamAnimationSubsystem_SetRole_Params params;
	params.NewRole = NewRole;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetAcceptClientPackets_Private
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                           bInShouldAcceptClientPackets   (Parm, ZeroConstructor, IsPlainOldData)

void ULiveStreamAnimationSubsystem::SetAcceptClientPackets_Private(bool bInShouldAcceptClientPackets)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetAcceptClientPackets_Private");

	ULiveStreamAnimationSubsystem_SetAcceptClientPackets_Private_Params params;
	params.bInShouldAcceptClientPackets = bInShouldAcceptClientPackets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetRole
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELiveStreamAnimationRole       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ELiveStreamAnimationRole ULiveStreamAnimationSubsystem::GetRole()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetRole");

	ULiveStreamAnimationSubsystem_GetRole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetDataHandler
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULiveStreamAnimationDataHandler* Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class ULiveStreamAnimationDataHandler* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiveStreamAnimationDataHandler* ULiveStreamAnimationSubsystem::GetDataHandler(class ULiveStreamAnimationDataHandler* Type)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetDataHandler");

	ULiveStreamAnimationSubsystem_GetDataHandler_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
