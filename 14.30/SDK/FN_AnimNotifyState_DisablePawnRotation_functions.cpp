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

// Function AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyEnd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyState_DisablePawnRotation_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyEnd");

	UAnimNotifyState_DisablePawnRotation_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyBegin
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotifyState_DisablePawnRotation_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AnimNotifyState_DisablePawnRotation.AnimNotifyState_DisablePawnRotation_C.Received_NotifyBegin");

	UAnimNotifyState_DisablePawnRotation_C_Received_NotifyBegin_Params params;
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
