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
// 0xA0 (0xA0 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.UpdateStatusText
struct UAthenaEventMatchScoreboardPlayerWidget_C_UpdateStatusText_Params
{
public:
	class UTexture2D*                            Temp_object_Variable;                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable1;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x10(0x28)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsDisconnected_ReturnValue;            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsDead_ReturnValue;                    // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45FB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1;                     // 0x40(0x28)()
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45FC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_Select1_Default;                            // 0x78(0x28)()
};

// 0x5 (0x5 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetRowBordersVisibility
struct UAthenaEventMatchScoreboardPlayerWidget_C_SetRowBordersVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.PreConstruct
struct UAthenaEventMatchScoreboardPlayerWidget_C_PreConstruct_Params
{
public:
	//bool                                       IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ClearTextWidgets
struct UAthenaEventMatchScoreboardPlayerWidget_C_ClearTextWidgets_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamNumberChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnTeamNumberChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//int32                                      InTeamNumber;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamColorChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnTeamColorChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//struct FLinearColor                        InTeamColor;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerNameChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnPlayerNameChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//class FString                              InPlayerName;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDeadStateChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnDeadStateChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//bool                                       bIsDead;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDBNOStateChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnDBNOStateChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//bool                                       bIsDBNO;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnBeingRevivedStateChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnBeingRevivedStateChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//bool                                       bIsBeingRevived;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnKillScoreChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnKillScoreChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//int32                                      InKillScore;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDisconnectedChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnDisconnectedChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//bool                                       bIsDisconnected;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDistanceToStormChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnDistanceToStormChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//int32                                      InDistanceToStorm;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlaceChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnPlaceChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//int32                                      InPlace;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerDataChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnPlayerDataChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnEventScoreChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnEventScoreChanged_Params
{
public:
	//class UAthenaRemotePlayerViewData*         InPlayerData;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//int32                                      InScore;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetEventScoreVisible
struct UAthenaEventMatchScoreboardPlayerWidget_C_SetEventScoreVisible_Params
{
public:
	//bool                                       InVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetTeamNumberVisible
struct UAthenaEventMatchScoreboardPlayerWidget_C_SetTeamNumberVisible_Params
{
public:
	//bool                                       InVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetUsingAlternateRowStyle
struct UAthenaEventMatchScoreboardPlayerWidget_C_SetUsingAlternateRowStyle_Params
{
public:
	//bool                                       bUseAlternateStyle;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x318 (0x318 - 0x0)
// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget
struct UAthenaEventMatchScoreboardPlayerWidget_C_ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45FE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x28(0x28)()
	bool                                         K2Node_Event_IsDesignTime;                         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData11;                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InTeamNumber;                         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4600[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData10;                       // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_InTeamColor;                          // 0x70(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x80(0x18)()
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData9;                        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_InPlayerName;                         // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB0(0x18)()
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData8;                        // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsDead;                              // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4601[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData7;                        // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsDBNO;                              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4602[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData6;                        // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsBeingRevived;                      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4603[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData5;                        // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InKillScore;                          // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4604[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData4;                        // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsDisconnected;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4605[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue1;              // 0x118(0x18)()
	bool                                         Temp_bool_Variable3;                               // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4606[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData3;                        // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InDistanceToStorm;                    // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Abs_Int_ReturnValue;                      // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4607[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x150(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x168(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x180(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1C0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1D0(0x18)()
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData2;                        // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InPlace;                              // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue2;           // 0x1F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4608[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue3;              // 0x1F8(0x18)()
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4609[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData1;                        // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x220(0x18)()
	bool                                         Temp_bool_Variable4;                               // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_460A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select1_Default;                            // 0x240(0x18)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1;                     // 0x258(0x28)()
	bool                                         Temp_bool_Variable5;                               // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_460B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select2_Default;                            // 0x288(0x28)()
	class UAthenaRemotePlayerViewData*           K2Node_Event_InPlayerData;                         // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InScore;                              // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_460C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue4;              // 0x2C0(0x18)()
	bool                                         K2Node_Event_InVisible1;                           // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_InVisible;                            // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select3_Default;                            // 0x2DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select4_Default;                            // 0x2DB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bUseAlternateStyle;                   // 0x2DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_460D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x2E0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_Select5_Default;                            // 0x2F0(0x28)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
