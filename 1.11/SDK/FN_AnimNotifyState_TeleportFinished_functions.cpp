// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyEnd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyState_TeleportFinished_C::Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyEnd");

	UAnimNotifyState_TeleportFinished_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyBegin
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyState_TeleportFinished_C::Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotifyState_TeleportFinished.AnimNotifyState_TeleportFinished_C.Received_NotifyBegin");

	UAnimNotifyState_TeleportFinished_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
