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

// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddMPCParameter
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialParameterCollection* Collection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Vec4Index                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AudioAnalysis_UI_C::AddMPCParameter(const struct FName& ParamName, class UMaterialParameterCollection* Collection, int Vec4Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddMPCParameter");

	UWB_AudioAnalysis_UI_C_AddMPCParameter_Params params;
	params.ParamName = ParamName;
	params.Collection = Collection;
	params.Vec4Index = Vec4Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AudioAnalysis_UI_C::ExecuteUbergraph_WB_AudioAnalysis_UI(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI");

	UWB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
