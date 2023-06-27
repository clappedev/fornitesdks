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
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ApplyText
struct UAthenaMatchStatusTextPlayer_C_ApplyText_Params
{
public:
};

// 0xF0 (0xF0 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialControl
struct UAthenaMatchStatusTextPlayer_C_HighlightMaterialControl_Params
{
public:
	struct FSlateFontInfo                        NewLocalVar_0;                                     // 0x0(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x50(0x50)(HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo1;                  // 0xA0(0x50)(HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetOpacityAndColor
struct UAthenaMatchStatusTextPlayer_C_SetOpacityAndColor_Params
{
public:
	struct FSlateColor                           ColorIn;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x50 (0x50 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.GetFont
struct UAthenaMatchStatusTextPlayer_C_GetFont_Params
{
public:
	struct FSlateFontInfo                        Output;                                            // 0x0(0x50)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetFont
struct UAthenaMatchStatusTextPlayer_C_SetFont_Params
{
public:
	struct FSlateFontInfo                        FontIn;                                            // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetText
struct UAthenaMatchStatusTextPlayer_C_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ApplyImmediately;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.PreConstruct
struct UAthenaMatchStatusTextPlayer_C_PreConstruct_Params
{
public:
	//bool                                       IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialOn
struct UAthenaMatchStatusTextPlayer_C_HighlightMaterialOn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialOff
struct UAthenaMatchStatusTextPlayer_C_HighlightMaterialOff_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ApplyNewText
struct UAthenaMatchStatusTextPlayer_C_ApplyNewText_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ExecuteUbergraph_AthenaMatchStatusTextPlayer
struct UAthenaMatchStatusTextPlayer_C_ExecuteUbergraph_AthenaMatchStatusTextPlayer_Params
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
