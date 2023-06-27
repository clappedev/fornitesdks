#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchStatusText_C::ApplyText()
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusText_C", "ApplyText");

	Params::UAthenaEventMatchStatusText_C_ApplyText_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.HighlightMaterialControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              NewLocalVar_0                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo1                                 (HasGetValueTypeHash)

void UAthenaEventMatchStatusText_C::HighlightMaterialControl(const struct FSlateFontInfo& NewLocalVar_0, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusText_C", "HighlightMaterialControl");

	Params::UAthenaEventMatchStatusText_C_HighlightMaterialControl_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_SlateFontInfo1 = K2Node_MakeStruct_SlateFontInfo1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetOpacityAndColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 ColorIn                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaEventMatchStatusText_C::SetOpacityAndColor(const struct FSlateColor& ColorIn)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusText_C", "SetOpacityAndColor");

	Params::UAthenaEventMatchStatusText_C_SetOpacityAndColor_Params Parms;
	Parms.ColorIn = ColorIn;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.GetFont
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              Output                                                           (Parm, OutParm, HasGetValueTypeHash)

void UAthenaEventMatchStatusText_C::GetFont(struct FSlateFontInfo* Output)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusText_C", "GetFont");

	Params::UAthenaEventMatchStatusText_C_GetFont_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (Output != nullptr)
		*Output = Parms.Output;

}

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              FontIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAthenaEventMatchStatusText_C::SetFont(const struct FSlateFontInfo& FontIn)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusText_C", "SetFont");

	Params::UAthenaEventMatchStatusText_C_SetFont_Params Parms;
	Parms.FontIn = FontIn;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ApplyImmediately                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchStatusText_C::SetText(class FText InText, bool ApplyImmediately)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusText_C", "SetText");

	Params::UAthenaEventMatchStatusText_C_SetText_Params Parms;
	Parms.InText = InText;
	Parms.ApplyImmediately = ApplyImmediately;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchStatusText_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusText_C", "PreConstruct");

	Params::UAthenaEventMatchStatusText_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyNewText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchStatusText_C::ApplyNewText()
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusText_C", "ApplyNewText");

	Params::UAthenaEventMatchStatusText_C_ApplyNewText_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ExecuteUbergraph_AthenaEventMatchStatusText
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchStatusText_C::ExecuteUbergraph_AthenaEventMatchStatusText(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaEventMatchStatusText_C", "ExecuteUbergraph_AthenaEventMatchStatusText");

	Params::UAthenaEventMatchStatusText_C_ExecuteUbergraph_AthenaEventMatchStatusText_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
