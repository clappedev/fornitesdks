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
// 0x20 (0x20 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText
struct UAthenaMatchmakingModeButton_C_RefreshFillText_Params
{
public:
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMatchmakingFillText_ReturnValue;       // 0x8(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText
struct UAthenaMatchmakingModeButton_C_SetSquadFillText_Params
{
public:
	bool                                         bFill;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x190 (0x190 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged
struct UAthenaMatchmakingModeButton_C_PlaylistChanged_Params
{
public:
	class UFortPlaylistAthena*                   NewPlaylist;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  OverrideName;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CD5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x28(0x88)()
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue1;        // 0xB0(0x88)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x138(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue1;                 // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x153(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x155(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x156(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x157(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable5;                               // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CD6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select3_Default;                            // 0x160(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue1;                 // 0x178(0x18)()
};

// 0xA0 (0xA0 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo
struct UAthenaMatchmakingModeButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3C (0x3C - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.Tick
struct UAthenaMatchmakingModeButton_C_Tick_Params
{
public:
	//struct FGeometry                           MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	//float                                      InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE4 (0xE4 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton
struct UAthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x8(0xA0)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xA8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
