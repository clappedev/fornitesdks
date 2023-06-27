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

// Function EQS_Phoebe_Context_Unstuck_Reachable_Goal.EQS_Phoebe_Context_Unstuck_Reachable_Goal_C.ProvideSingleLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  QuerierActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResultingLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEQS_Phoebe_Context_Unstuck_Reachable_Goal_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EQS_Phoebe_Context_Unstuck_Reachable_Goal.EQS_Phoebe_Context_Unstuck_Reachable_Goal_C.ProvideSingleLocation");

	UEQS_Phoebe_Context_Unstuck_Reachable_Goal_C_ProvideSingleLocation_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
