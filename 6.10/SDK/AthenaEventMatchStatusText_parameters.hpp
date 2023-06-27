#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x0 (0x0 - 0x0)
// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyText
struct UAthenaEventMatchStatusText_C_ApplyText_Params
{
public:
};

// 0xF0 (0xF0 - 0x0)
// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.HighlightMaterialControl
struct UAthenaEventMatchStatusText_C_HighlightMaterialControl_Params
{
public:
	struct FSlateFontInfo                        NewLocalVar_0;                                     // 0x0(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x50(0x50)(HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo1;                  // 0xA0(0x50)(HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetOpacityAndColor
struct UAthenaEventMatchStatusText_C_SetOpacityAndColor_Params
{
public:
	struct FSlateColor                           ColorIn;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x50 (0x50 - 0x0)
// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.GetFont
struct UAthenaEventMatchStatusText_C_GetFont_Params
{
public:
	struct FSlateFontInfo                        Output;                                            // 0x0(0x50)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetFont
struct UAthenaEventMatchStatusText_C_SetFont_Params
{
public:
	struct FSlateFontInfo                        FontIn;                                            // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetText
struct UAthenaEventMatchStatusText_C_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ApplyImmediately;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.PreConstruct
struct UAthenaEventMatchStatusText_C_PreConstruct_Params
{
public:
	//bool                                       IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyNewText
struct UAthenaEventMatchStatusText_C_ApplyNewText_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ExecuteUbergraph_AthenaEventMatchStatusText
struct UAthenaEventMatchStatusText_C_ExecuteUbergraph_AthenaEventMatchStatusText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
