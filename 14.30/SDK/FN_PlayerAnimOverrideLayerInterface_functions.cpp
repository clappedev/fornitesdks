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

// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.CharacterSkeletalControlPostLegIK
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPosePostLegIK                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               CharacterSkeletalControlPostLegIK (Parm, OutParm)

void UPlayerAnimOverrideLayerInterface_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.CharacterSkeletalControlPostLegIK");

	UPlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK_Params params;
	params.InPosePostLegIK = InPosePostLegIK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterSkeletalControlPostLegIK != nullptr)
		*CharacterSkeletalControlPostLegIK = params.CharacterSkeletalControlPostLegIK;
}


// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.FullBodyOverride
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               PassThroughFullBodyPose        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               FullBodyOverride               (Parm, OutParm)

void UPlayerAnimOverrideLayerInterface_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.FullBodyOverride");

	UPlayerAnimOverrideLayerInterface_C_FullBodyOverride_Params params;
	params.PassThroughFullBodyPose = PassThroughFullBodyPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = params.FullBodyOverride;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
