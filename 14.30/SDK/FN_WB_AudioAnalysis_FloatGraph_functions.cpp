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

// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_AudioAnalysis_FloatGraph_C::OnPaint(struct FPaintContext* Context)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.OnPaint");

	UWB_AudioAnalysis_FloatGraph_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.calcWidgetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               geom                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWB_AudioAnalysis_FloatGraph_C::calcWidgetSize(const struct FGeometry& geom)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.calcWidgetSize");

	UWB_AudioAnalysis_FloatGraph_C_calcWidgetSize_Params params;
	params.geom = geom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Set Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AudioAnalysis_FloatGraph_C::Set_Value(float Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Set Value");

	UWB_AudioAnalysis_FloatGraph_C_Set_Value_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AudioAnalysis_FloatGraph_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.PreConstruct");

	UWB_AudioAnalysis_FloatGraph_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_AudioAnalysis_FloatGraph_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Construct");

	UWB_AudioAnalysis_FloatGraph_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AudioAnalysis_FloatGraph_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Tick");

	UWB_AudioAnalysis_FloatGraph_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Initialize MPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Parameter                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialParameterCollection* Collection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            VectorIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AudioAnalysis_FloatGraph_C::Initialize_MPC(const struct FName& Parameter, class UMaterialParameterCollection* Collection, int VectorIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Initialize MPC");

	UWB_AudioAnalysis_FloatGraph_C_Initialize_MPC_Params params;
	params.Parameter = Parameter;
	params.Collection = Collection;
	params.VectorIndex = VectorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.ExecuteUbergraph_WB_AudioAnalysis_FloatGraph
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AudioAnalysis_FloatGraph_C::ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.ExecuteUbergraph_WB_AudioAnalysis_FloatGraph");

	UWB_AudioAnalysis_FloatGraph_C_ExecuteUbergraph_WB_AudioAnalysis_FloatGraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
