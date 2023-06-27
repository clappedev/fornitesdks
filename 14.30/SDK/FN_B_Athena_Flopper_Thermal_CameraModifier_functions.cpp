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

// Function B_Athena_Flopper_Thermal_CameraModifier.B_Athena_Flopper_Thermal_CameraModifier_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PostProcessBlendWeight         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPostProcessSettings    PostProcessSettings            (Parm, OutParm)

void UB_Athena_Flopper_Thermal_CameraModifier_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Flopper_Thermal_CameraModifier.B_Athena_Flopper_Thermal_CameraModifier_C.BlueprintModifyPostProcess");

	UB_Athena_Flopper_Thermal_CameraModifier_C_BlueprintModifyPostProcess_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = params.PostProcessBlendWeight;
	if (PostProcessSettings != nullptr)
		*PostProcessSettings = params.PostProcessSettings;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
