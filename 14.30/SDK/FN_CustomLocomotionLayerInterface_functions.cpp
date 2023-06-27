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

// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyAdditive
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseFullBodyAdditive         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               CustomLocomotionFullBodyAdditive (Parm, OutParm)

void UCustomLocomotionLayerInterface_C::CustomLocomotionFullBodyAdditive(const struct FPoseLink& InPoseFullBodyAdditive, struct FPoseLink* CustomLocomotionFullBodyAdditive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyAdditive");

	UCustomLocomotionLayerInterface_C_CustomLocomotionFullBodyAdditive_Params params;
	params.InPoseFullBodyAdditive = InPoseFullBodyAdditive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomLocomotionFullBodyAdditive != nullptr)
		*CustomLocomotionFullBodyAdditive = params.CustomLocomotionFullBodyAdditive;
}


// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionPreIKLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPosePreIK                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               CustomLocomotionPreIKLayer     (Parm, OutParm)

void UCustomLocomotionLayerInterface_C::CustomLocomotionPreIKLayer(const struct FPoseLink& InPosePreIK, struct FPoseLink* CustomLocomotionPreIKLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionPreIKLayer");

	UCustomLocomotionLayerInterface_C_CustomLocomotionPreIKLayer_Params params;
	params.InPosePreIK = InPosePreIK;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomLocomotionPreIKLayer != nullptr)
		*CustomLocomotionPreIKLayer = params.CustomLocomotionPreIKLayer;
}


// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyLayer
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               PassThroughCustomFullBody      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               CustomLocomotionFullBodyLayer  (Parm, OutParm)

void UCustomLocomotionLayerInterface_C::CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyLayer");

	UCustomLocomotionLayerInterface_C_CustomLocomotionFullBodyLayer_Params params;
	params.PassThroughCustomFullBody = PassThroughCustomFullBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomLocomotionFullBodyLayer != nullptr)
		*CustomLocomotionFullBodyLayer = params.CustomLocomotionFullBodyLayer;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
