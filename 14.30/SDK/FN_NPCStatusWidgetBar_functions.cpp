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

// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNPCStatusWidgetBar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.PreConstruct");

	UNPCStatusWidgetBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNPCStatusWidgetBar_C::SetPercent(float Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.SetPercent");

	UNPCStatusWidgetBar_C_SetPercent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.ExecuteUbergraph_NPCStatusWidgetBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNPCStatusWidgetBar_C::ExecuteUbergraph_NPCStatusWidgetBar(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.ExecuteUbergraph_NPCStatusWidgetBar");

	UNPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
