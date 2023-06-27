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
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft
struct UGamepadMappingInfo_v3_C_GamepadMappingInfoNavLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab
struct UGamepadMappingInfo_v3_C_ShowEditModeTab_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab
struct UGamepadMappingInfo_v3_C_HideEditModeTab_Params
{
public:
	bool                                         CallFunc_SelectTabByID_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_544D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x218 (0x218 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown_0
struct UGamepadMappingInfo_v3_C_On_Image_LightBox_MouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
};

// 0x110 (0x110 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey
struct UGamepadMappingInfo_v3_C_GetCustomButtonDataForKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                  ActionName;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DescText;                                          // 0x20(0x18)(Parm, OutParm)
	enum class EFortInputActionGroup             InputActionGroup_Local;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_544E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DescText_Local;                                    // 0x40(0x18)(Edit, BlueprintVisible)
	class FName                                  ActionName_Local;                                  // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PresetName_Local;                                  // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Key_Local;                                         // 0x68(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCustomGamepadInputPresetName_ReturnValue; // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_544F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5450[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5451[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetScreenLabel_ReturnValue;               // 0xD0(0x18)()
	class FName                                  CallFunc_GetActionForKey_ReturnValue;              // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1;         // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5452[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetActionForKey_ReturnValue1;             // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue3;                  // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetActionForKey_ReturnValue2;             // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode
struct UGamepadMappingInfo_v3_C_SetTextForMode_Params
{
public:
	enum class EFortInputActionGroup             Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray
struct UGamepadMappingInfo_v3_C_SetButtonTextLabelsFromTextArray_Params
{
public:
	TArray<class FText>                          Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4E4 (0x4E4 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTW_BuilderProBuild_Params
{
public:
	TArray<class FText>                          ButtonTextLabels;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(ConstParm)
	class FText                                  Temp_text_Variable1;                               // 0x28(0x18)(ConstParm)
	class FText                                  Temp_text_Variable2;                               // 0x40(0x18)(ConstParm)
	class FText                                  Temp_text_Variable3;                               // 0x58(0x18)(ConstParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x70(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue1;                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue3;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue4;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5453[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue1; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetBuildingEditResetLabel_ReturnValue;    // 0xB0(0x18)()
	class FText                                  CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue; // 0xC8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue5;                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue6;                   // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue2; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue3; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLookLabel_ReturnValue;                 // 0xF8(0x18)()
	class FText                                  CallFunc_GetJumpLabel_ReturnValue;                 // 0x110(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue7;                   // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue8;                   // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue4; // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue5; // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue; // 0x140(0x18)()
	class FText                                  CallFunc_GetSwitchQuickbarLabel_ReturnValue;       // 0x158(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue9;                   // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue10;                  // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue6; // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue7; // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue; // 0x188(0x18)()
	class FText                                  CallFunc_GetInteractTapHoldLabel_ReturnValue;      // 0x1A0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue11;                  // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue12;                  // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue8; // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue9; // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue; // 0x1D0(0x18)()
	class FText                                  CallFunc_GetHarvestWeaponLabel_ReturnValue;        // 0x1E8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue13;                  // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue14;                  // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue10; // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue11; // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue; // 0x218(0x18)()
	class FText                                  CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue; // 0x230(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue15;                  // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue16;                  // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue12; // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue13; // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameMenuLabel_ReturnValue;             // 0x260(0x18)()
	class FText                                  CallFunc_GetToggleFullScreenMapLabel_ReturnValue;  // 0x278(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue17;                  // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue18;                  // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue14; // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue15; // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue; // 0x2A8(0x18)()
	class FText                                  CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue1; // 0x2C0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue19;                  // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue20;                  // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue16; // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue17; // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue;      // 0x2F0(0x18)()
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue1;     // 0x308(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue21;                  // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue22;                  // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue18; // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue19; // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;     // 0x338(0x18)()
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1;    // 0x350(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue23;                  // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue24;                  // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue20; // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue21; // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue;           // 0x380(0x18)()
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue1;          // 0x398(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue25;                  // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue26;                  // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue22; // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue23; // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue;               // 0x3C8(0x18)()
	class FText                                  CallFunc_GetSprintLabel_ReturnValue1;              // 0x3E0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue27;                  // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue28;                  // 0x3FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue24; // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue25; // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue;                 // 0x410(0x18)()
	class FText                                  CallFunc_GetMoveLabel_ReturnValue1;                // 0x428(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue29;                  // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue30;                  // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue26; // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue27; // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue; // 0x458(0x18)()
	class FText                                  CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue; // 0x470(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue31;                  // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue32;                  // 0x48C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable4;                               // 0x490(0x18)(ConstParm)
	class FText                                  Temp_text_Variable5;                               // 0x4A8(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue33;                  // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue34;                  // 0x4C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable6;                               // 0x4C8(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue35;                  // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage
struct UGamepadMappingInfo_v3_C_GetControllerImage_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5454[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Array_Get_Item;                           // 0x30(0x28)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines
struct UGamepadMappingInfo_v3_C_ClearAllComboTextLines_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)()
};

// 0x50C (0x50C - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProCombat_Params
{
public:
	TArray<class FText>                          ButtonTextLabels;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAbility2Label_ReturnValue;             // 0x18(0x18)()
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue1; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue2; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAbility1Label_ReturnValue;             // 0x40(0x18)()
	class FText                                  CallFunc_GetAbility3Label_ReturnValue;             // 0x58(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue1;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5455[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue3; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue4; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue; // 0x90(0x18)()
	class FText                                  CallFunc_GetLookLabel_ReturnValue;                 // 0xA8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue3;                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue4;                   // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue5; // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue6; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetJumpLabel_ReturnValue;                 // 0xD8(0x18)()
	class FText                                  CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue; // 0xF0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue5;                   // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue6;                   // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue7; // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue8; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDeployHoverboardLabel_ReturnValue;     // 0x120(0x18)()
	class FText                                  CallFunc_GetSwitchQuickbarLabel_ReturnValue;       // 0x138(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue7;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue8;                   // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue9; // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue10; // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCraftAmmoHoldLabel_ReturnValue;        // 0x168(0x18)()
	class FText                                  CallFunc_GetInteractTapHoldLabel_ReturnValue;      // 0x180(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue9;                   // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue10;                  // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue11; // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue12; // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetReloadTapLabel_ReturnValue;            // 0x1B0(0x18)()
	class FText                                  CallFunc_GetHarvestWeaponLabel_ReturnValue;        // 0x1C8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue11;                  // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue12;                  // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue13; // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue14; // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetNextWeaponTapLabel_ReturnValue;        // 0x1F8(0x18)()
	class FText                                  CallFunc_GetAttackConfirmLabel_ReturnValue;        // 0x210(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue13;                  // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue14;                  // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue15; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue16; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameMenuLabel_ReturnValue;             // 0x240(0x18)()
	class FText                                  CallFunc_GetToggleFullScreenMapLabel_ReturnValue;  // 0x258(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue15;                  // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue16;                  // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue17; // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue18; // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGadget2Label_ReturnValue;              // 0x288(0x18)()
	class FText                                  CallFunc_GetGadget2Label_ReturnValue1;             // 0x2A0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue17;                  // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue18;                  // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue19; // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue20; // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGadget1Label_ReturnValue;              // 0x2D0(0x18)()
	class FText                                  CallFunc_GetGadget1Label_ReturnValue1;             // 0x2E8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue19;                  // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue20;                  // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue21; // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue22; // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue;      // 0x318(0x18)()
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue1;     // 0x330(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue21;                  // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue22;                  // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue23; // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue24; // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;     // 0x360(0x18)()
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1;    // 0x378(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue23;                  // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue24;                  // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue25; // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue26; // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue;           // 0x3A8(0x18)()
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue1;          // 0x3C0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue25;                  // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue26;                  // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue27; // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue28; // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue;               // 0x3F0(0x18)()
	class FText                                  CallFunc_GetSprintLabel_ReturnValue1;              // 0x408(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue27;                  // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue28;                  // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue29; // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue30; // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue;                 // 0x438(0x18)()
	class FText                                  CallFunc_GetMoveLabel_ReturnValue1;                // 0x450(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue29;                  // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue30;                  // 0x46C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue31; // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue32; // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPreviousWeaponTapLabel_ReturnValue;    // 0x480(0x18)()
	class FText                                  CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue; // 0x498(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue31;                  // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue32;                  // 0x4B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x4B8(0x18)()
	class FText                                  Temp_text_Variable;                                // 0x4D0(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue33;                  // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue34;                  // 0x4EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable1;                               // 0x4F0(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue35;                  // 0x508(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine
struct UGamepadMappingInfo_v3_C_SetTextFieldVisibilityForExtraLine_Params
{
public:
	class UTextBlock*                            TextWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5456[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)()
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5457[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)()
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
struct UGamepadMappingInfo_v3_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params
{
public:
	class UTextBlock*                            TextWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  DesiredSlateVisibility;                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5458[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)()
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5459[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)()
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D4 (0x4D4 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProBuild_Params
{
public:
	TArray<class FText>                          ButtonTextLabels;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(ConstParm)
	class FText                                  Temp_text_Variable1;                               // 0x28(0x18)(ConstParm)
	class FText                                  Temp_text_Variable2;                               // 0x40(0x18)(ConstParm)
	class FText                                  Temp_text_Variable3;                               // 0x58(0x18)(ConstParm)
	class FText                                  Temp_text_Variable4;                               // 0x70(0x18)(ConstParm)
	class FText                                  Temp_text_Variable5;                               // 0x88(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue1;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue3;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue4;                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue5;                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue1; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetBuildingEditResetLabel_ReturnValue;    // 0xC8(0x18)()
	class FText                                  CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue; // 0xE0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue6;                   // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue7;                   // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue2; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue3; // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLookLabel_ReturnValue;                 // 0x110(0x18)()
	class FText                                  CallFunc_GetJumpLabel_ReturnValue;                 // 0x128(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue8;                   // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue9;                   // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue4; // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue5; // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue; // 0x158(0x18)()
	class FText                                  CallFunc_GetSwitchQuickbarLabel_ReturnValue;       // 0x170(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue10;                  // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue11;                  // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue6; // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue7; // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTrapInventoryHoldLabel_ReturnValue;    // 0x1A0(0x18)()
	class FText                                  CallFunc_GetInteractTapHoldLabel_ReturnValue;      // 0x1B8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue12;                  // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue13;                  // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue8; // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue9; // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPickTrapTapHoldLabel_ReturnValue;      // 0x1E8(0x18)()
	class FText                                  CallFunc_GetHarvestWeaponLabel_ReturnValue;        // 0x200(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue14;                  // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue15;                  // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue10; // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue11; // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetNextBuildingPieceLabel_ReturnValue;    // 0x230(0x18)()
	class FText                                  CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue; // 0x248(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue16;                  // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue17;                  // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue12; // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue13; // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameMenuLabel_ReturnValue;             // 0x278(0x18)()
	class FText                                  CallFunc_GetToggleFullScreenMapLabel_ReturnValue;  // 0x290(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue18;                  // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue19;                  // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue14; // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue15; // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue;      // 0x2C0(0x18)()
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue1;     // 0x2D8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue20;                  // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue21;                  // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue16; // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue17; // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;     // 0x308(0x18)()
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue1;    // 0x320(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue22;                  // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue23;                  // 0x33C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue18; // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue19; // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue;           // 0x350(0x18)()
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue1;          // 0x368(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue24;                  // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue25;                  // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue20; // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue21; // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue;               // 0x398(0x18)()
	class FText                                  CallFunc_GetSprintLabel_ReturnValue1;              // 0x3B0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue26;                  // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue27;                  // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue22; // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue23; // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue;                 // 0x3E0(0x18)()
	class FText                                  CallFunc_GetMoveLabel_ReturnValue1;                // 0x3F8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue28;                  // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue29;                  // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue24; // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue25; // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPreviousBuildingPieceLabel_ReturnValue; // 0x428(0x18)()
	class FText                                  CallFunc_GetChangeMaterialLabel_ReturnValue;       // 0x440(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue30;                  // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue31;                  // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable6;                               // 0x460(0x18)(ConstParm)
	class FText                                  Temp_text_Variable7;                               // 0x478(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue32;                  // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue33;                  // 0x494(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable8;                               // 0x498(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue34;                  // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x4B8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue35;                  // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonLabelTextWidgets_Params
{
public:
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCommonTextBlock*>              K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UCommonTextBlock*>              K2Node_MakeArray_Array1;                           // 0x18(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue1;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue2;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue3;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue4;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue5;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue6;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue7;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue8;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue9;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue10;                  // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue11;                  // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue12;                  // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue13;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue14;                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue15;                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue16;                  // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue17;                  // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCommonTextBlock*>              K2Node_MakeArray_Array2;                           // 0x70(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
};

// 0xA (0xA - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility; // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility1; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility2; // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7E8 (0x7E8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Combat_Mode_Params
{
public:
	int32                                        Config;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_545D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x28(0x18)()
	int32                                        Temp_int_Variable1;                                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x60(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x78(0x18)()
	int32                                        Temp_int_Variable2;                                // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select1_Default;                            // 0x98(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0xB0(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0xC8(0x18)()
	int32                                        Temp_int_Variable3;                                // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5460[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select2_Default;                            // 0xE8(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x100(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0x118(0x18)()
	int32                                        Temp_int_Variable4;                                // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5461[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select3_Default;                            // 0x138(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0x150(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0x168(0x18)()
	int32                                        Temp_int_Variable5;                                // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5462[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select4_Default;                            // 0x188(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0x1A0(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x1B8(0x18)()
	int32                                        Temp_int_Variable6;                                // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5463[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select5_Default;                            // 0x1D8(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x1F0(0x18)()
	class FText                                  Temp_text_Variable13;                              // 0x208(0x18)()
	int32                                        Temp_int_Variable7;                                // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5464[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select6_Default;                            // 0x228(0x18)()
	class FText                                  Temp_text_Variable14;                              // 0x240(0x18)()
	class FText                                  Temp_text_Variable15;                              // 0x258(0x18)()
	int32                                        Temp_int_Variable8;                                // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5465[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select7_Default;                            // 0x278(0x18)()
	class FText                                  Temp_text_Variable16;                              // 0x290(0x18)()
	class FText                                  Temp_text_Variable17;                              // 0x2A8(0x18)()
	int32                                        Temp_int_Variable9;                                // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5466[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select8_Default;                            // 0x2C8(0x18)()
	class FText                                  Temp_text_Variable18;                              // 0x2E0(0x18)()
	class FText                                  Temp_text_Variable19;                              // 0x2F8(0x18)()
	int32                                        Temp_int_Variable10;                               // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5467[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select9_Default;                            // 0x318(0x18)()
	class FText                                  Temp_text_Variable20;                              // 0x330(0x18)()
	class FText                                  Temp_text_Variable21;                              // 0x348(0x18)()
	int32                                        Temp_int_Variable11;                               // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5468[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select10_Default;                           // 0x368(0x18)()
	class FText                                  Temp_text_Variable22;                              // 0x380(0x18)()
	class FText                                  Temp_text_Variable23;                              // 0x398(0x18)()
	int32                                        Temp_int_Variable12;                               // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5469[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select11_Default;                           // 0x3B8(0x18)()
	class FText                                  Temp_text_Variable24;                              // 0x3D0(0x18)()
	class FText                                  Temp_text_Variable25;                              // 0x3E8(0x18)()
	int32                                        Temp_int_Variable13;                               // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_546A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select12_Default;                           // 0x408(0x18)()
	class FText                                  Temp_text_Variable26;                              // 0x420(0x18)()
	class FText                                  Temp_text_Variable27;                              // 0x438(0x18)()
	int32                                        Temp_int_Variable14;                               // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_546B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select13_Default;                           // 0x458(0x18)()
	class FText                                  Temp_text_Variable28;                              // 0x470(0x18)()
	class FText                                  Temp_text_Variable29;                              // 0x488(0x18)()
	int32                                        Temp_int_Variable15;                               // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_546C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select14_Default;                           // 0x4A8(0x18)()
	class FText                                  Temp_text_Variable30;                              // 0x4C0(0x18)()
	class FText                                  Temp_text_Variable31;                              // 0x4D8(0x18)()
	int32                                        Temp_int_Variable16;                               // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_546D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select15_Default;                           // 0x4F8(0x18)()
	class FText                                  Temp_text_Variable32;                              // 0x510(0x18)()
	class FText                                  Temp_text_Variable33;                              // 0x528(0x18)()
	int32                                        Temp_int_Variable17;                               // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_546E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select16_Default;                           // 0x548(0x18)()
	class FText                                  Temp_text_Variable34;                              // 0x560(0x18)()
	class FText                                  Temp_text_Variable35;                              // 0x578(0x18)()
	int32                                        Temp_int_Variable18;                               // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_546F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select17_Default;                           // 0x598(0x18)()
	class FText                                  Temp_text_Variable36;                              // 0x5B0(0x18)()
	class FText                                  Temp_text_Variable37;                              // 0x5C8(0x18)()
	int32                                        Temp_int_Variable19;                               // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5470[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select18_Default;                           // 0x5E8(0x18)()
	class FText                                  Temp_text_Variable38;                              // 0x600(0x18)()
	class FText                                  Temp_text_Variable39;                              // 0x618(0x18)()
	int32                                        Temp_int_Variable20;                               // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5471[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select19_Default;                           // 0x638(0x18)()
	class FText                                  Temp_text_Variable40;                              // 0x650(0x18)()
	class FText                                  Temp_text_Variable41;                              // 0x668(0x18)()
	int32                                        Temp_int_Variable21;                               // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5472[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select20_Default;                           // 0x688(0x18)()
	class FText                                  Temp_text_Variable42;                              // 0x6A0(0x18)()
	class FText                                  Temp_text_Variable43;                              // 0x6B8(0x18)()
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select21_Default;                           // 0x6D8(0x18)()
	class FText                                  CallFunc_GetAbility2Label_ReturnValue;             // 0x6F0(0x18)()
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue1; // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue2; // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAbility1Label_ReturnValue;             // 0x718(0x18)()
	class FText                                  CallFunc_GetAbility3Label_ReturnValue;             // 0x730(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x748(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x760(0x18)()
	class FText                                  Temp_text_Variable44;                              // 0x778(0x18)()
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue3; // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable45;                              // 0x798(0x18)()
	class FText                                  CallFunc_GetDeployHoverboardLabel_ReturnValue;     // 0x7B0(0x18)()
	int32                                        Temp_int_Variable22;                               // 0x7C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5473[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select22_Default;                           // 0x7D0(0x18)()
};

// 0x7D8 (0x7D8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Build_Mode_Params
{
public:
	int32                                        Config;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5474[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x28(0x18)()
	int32                                        Temp_int_Variable1;                                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5475[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x60(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x78(0x18)()
	int32                                        Temp_int_Variable2;                                // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5476[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select1_Default;                            // 0x98(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0xB0(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0xC8(0x18)()
	int32                                        Temp_int_Variable3;                                // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5477[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select2_Default;                            // 0xE8(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x100(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0x118(0x18)()
	int32                                        Temp_int_Variable4;                                // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5478[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select3_Default;                            // 0x138(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0x150(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0x168(0x18)()
	int32                                        Temp_int_Variable5;                                // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5479[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select4_Default;                            // 0x188(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0x1A0(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x1B8(0x18)()
	int32                                        Temp_int_Variable6;                                // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_547A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select5_Default;                            // 0x1D8(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x1F0(0x18)()
	class FText                                  Temp_text_Variable13;                              // 0x208(0x18)()
	int32                                        Temp_int_Variable7;                                // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_547B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select6_Default;                            // 0x228(0x18)()
	class FText                                  Temp_text_Variable14;                              // 0x240(0x18)()
	class FText                                  Temp_text_Variable15;                              // 0x258(0x18)()
	int32                                        Temp_int_Variable8;                                // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_547C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select7_Default;                            // 0x278(0x18)()
	class FText                                  Temp_text_Variable16;                              // 0x290(0x18)()
	class FText                                  Temp_text_Variable17;                              // 0x2A8(0x18)()
	int32                                        Temp_int_Variable9;                                // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_547D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select8_Default;                            // 0x2C8(0x18)()
	class FText                                  Temp_text_Variable18;                              // 0x2E0(0x18)()
	class FText                                  Temp_text_Variable19;                              // 0x2F8(0x18)()
	int32                                        Temp_int_Variable10;                               // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_547E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select9_Default;                            // 0x318(0x18)()
	class FText                                  Temp_text_Variable20;                              // 0x330(0x18)()
	class FText                                  Temp_text_Variable21;                              // 0x348(0x18)()
	int32                                        Temp_int_Variable11;                               // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_547F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select10_Default;                           // 0x368(0x18)()
	class FText                                  Temp_text_Variable22;                              // 0x380(0x18)()
	class FText                                  Temp_text_Variable23;                              // 0x398(0x18)()
	int32                                        Temp_int_Variable12;                               // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5480[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select11_Default;                           // 0x3B8(0x18)()
	class FText                                  Temp_text_Variable24;                              // 0x3D0(0x18)()
	class FText                                  Temp_text_Variable25;                              // 0x3E8(0x18)()
	int32                                        Temp_int_Variable13;                               // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5481[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select12_Default;                           // 0x408(0x18)()
	class FText                                  Temp_text_Variable26;                              // 0x420(0x18)()
	class FText                                  Temp_text_Variable27;                              // 0x438(0x18)()
	int32                                        Temp_int_Variable14;                               // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5482[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select13_Default;                           // 0x458(0x18)()
	class FText                                  Temp_text_Variable28;                              // 0x470(0x18)()
	class FText                                  Temp_text_Variable29;                              // 0x488(0x18)()
	int32                                        Temp_int_Variable15;                               // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5483[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select14_Default;                           // 0x4A8(0x18)()
	class FText                                  Temp_text_Variable30;                              // 0x4C0(0x18)()
	class FText                                  Temp_text_Variable31;                              // 0x4D8(0x18)()
	int32                                        Temp_int_Variable16;                               // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5484[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select15_Default;                           // 0x4F8(0x18)()
	class FText                                  Temp_text_Variable32;                              // 0x510(0x18)()
	class FText                                  Temp_text_Variable33;                              // 0x528(0x18)()
	int32                                        Temp_int_Variable17;                               // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5485[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select16_Default;                           // 0x548(0x18)()
	class FText                                  Temp_text_Variable34;                              // 0x560(0x18)()
	class FText                                  Temp_text_Variable35;                              // 0x578(0x18)()
	int32                                        Temp_int_Variable18;                               // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5486[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select17_Default;                           // 0x598(0x18)()
	class FText                                  Temp_text_Variable36;                              // 0x5B0(0x18)()
	class FText                                  Temp_text_Variable37;                              // 0x5C8(0x18)()
	int32                                        Temp_int_Variable19;                               // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5487[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select18_Default;                           // 0x5E8(0x18)()
	class FText                                  Temp_text_Variable38;                              // 0x600(0x18)()
	class FText                                  Temp_text_Variable39;                              // 0x618(0x18)()
	int32                                        Temp_int_Variable20;                               // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5488[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select19_Default;                           // 0x638(0x18)()
	class FText                                  Temp_text_Variable40;                              // 0x650(0x18)()
	class FText                                  Temp_text_Variable41;                              // 0x668(0x18)()
	int32                                        Temp_int_Variable21;                               // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5489[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select20_Default;                           // 0x688(0x18)()
	class FText                                  Temp_text_Variable42;                              // 0x6A0(0x18)()
	class FText                                  Temp_text_Variable43;                              // 0x6B8(0x18)()
	int32                                        Temp_int_Variable22;                               // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_548A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select21_Default;                           // 0x6D8(0x18)()
	class FText                                  Temp_text_Variable44;                              // 0x6F0(0x18)()
	class FText                                  Temp_text_Variable45;                              // 0x708(0x18)()
	int32                                        Temp_int_Variable23;                               // 0x720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_548B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select22_Default;                           // 0x728(0x18)()
	class FText                                  Temp_text_Variable46;                              // 0x740(0x18)()
	class FText                                  Temp_text_Variable47;                              // 0x758(0x18)()
	class FText                                  Temp_text_Variable48;                              // 0x770(0x18)()
	class FText                                  K2Node_Select23_Default;                           // 0x788(0x18)()
	class FText                                  Temp_text_Variable49;                              // 0x7A0(0x18)()
	int32                                        Temp_int_Variable24;                               // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_548C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select24_Default;                           // 0x7C0(0x18)()
};

// 0x9 (0x9 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged
struct UGamepadMappingInfo_v3_C_HandleConfigChanged_Params
{
public:
	enum class EFortInputActionGroup             Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_548D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Config;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1940 (0x1940 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena
struct UGamepadMappingInfo_v3_C_HandleConfigChanged_Athena_Params
{
public:
	enum class EFortInputActionGroup             Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_548E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Config;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_548F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable1;                               // 0x28(0x18)()
	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5490[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable2;                               // 0x48(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x60(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0x78(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x90(0x18)()
	int32                                        Temp_int_Variable1;                                // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5491[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0xB0(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0xC8(0x18)()
	class FText                                  Temp_text_Variable7;                               // 0xE0(0x18)()
	class FText                                  Temp_text_Variable8;                               // 0xF8(0x18)()
	class FText                                  Temp_text_Variable9;                               // 0x110(0x18)()
	int32                                        Temp_int_Variable2;                                // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5492[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select1_Default;                            // 0x130(0x18)()
	class FText                                  Temp_text_Variable10;                              // 0x148(0x18)()
	class FText                                  Temp_text_Variable11;                              // 0x160(0x18)()
	class FText                                  Temp_text_Variable12;                              // 0x178(0x18)()
	class FText                                  Temp_text_Variable13;                              // 0x190(0x18)()
	int32                                        Temp_int_Variable3;                                // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5493[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select2_Default;                            // 0x1B0(0x18)()
	class FText                                  Temp_text_Variable14;                              // 0x1C8(0x18)()
	class FText                                  Temp_text_Variable15;                              // 0x1E0(0x18)()
	class FText                                  Temp_text_Variable16;                              // 0x1F8(0x18)()
	class FText                                  Temp_text_Variable17;                              // 0x210(0x18)()
	int32                                        Temp_int_Variable4;                                // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5494[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select3_Default;                            // 0x230(0x18)()
	class FText                                  Temp_text_Variable18;                              // 0x248(0x18)()
	class FText                                  Temp_text_Variable19;                              // 0x260(0x18)()
	class FText                                  Temp_text_Variable20;                              // 0x278(0x18)()
	class FText                                  Temp_text_Variable21;                              // 0x290(0x18)()
	int32                                        Temp_int_Variable5;                                // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5495[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select4_Default;                            // 0x2B0(0x18)()
	class FText                                  Temp_text_Variable22;                              // 0x2C8(0x18)()
	class FText                                  Temp_text_Variable23;                              // 0x2E0(0x18)()
	class FText                                  Temp_text_Variable24;                              // 0x2F8(0x18)()
	class FText                                  Temp_text_Variable25;                              // 0x310(0x18)()
	int32                                        Temp_int_Variable6;                                // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5496[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select5_Default;                            // 0x330(0x18)()
	class FText                                  Temp_text_Variable26;                              // 0x348(0x18)()
	class FText                                  Temp_text_Variable27;                              // 0x360(0x18)()
	class FText                                  Temp_text_Variable28;                              // 0x378(0x18)()
	class FText                                  Temp_text_Variable29;                              // 0x390(0x18)()
	int32                                        Temp_int_Variable7;                                // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5497[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select6_Default;                            // 0x3B0(0x18)()
	class FText                                  Temp_text_Variable30;                              // 0x3C8(0x18)()
	class FText                                  Temp_text_Variable31;                              // 0x3E0(0x18)()
	class FText                                  Temp_text_Variable32;                              // 0x3F8(0x18)()
	class FText                                  Temp_text_Variable33;                              // 0x410(0x18)()
	int32                                        Temp_int_Variable8;                                // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5498[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select7_Default;                            // 0x430(0x18)()
	class FText                                  Temp_text_Variable34;                              // 0x448(0x18)()
	class FText                                  Temp_text_Variable35;                              // 0x460(0x18)()
	class FText                                  Temp_text_Variable36;                              // 0x478(0x18)()
	class FText                                  Temp_text_Variable37;                              // 0x490(0x18)()
	int32                                        Temp_int_Variable9;                                // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5499[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select8_Default;                            // 0x4B0(0x18)()
	class FText                                  Temp_text_Variable38;                              // 0x4C8(0x18)()
	class FText                                  Temp_text_Variable39;                              // 0x4E0(0x18)()
	class FText                                  Temp_text_Variable40;                              // 0x4F8(0x18)()
	class FText                                  Temp_text_Variable41;                              // 0x510(0x18)()
	int32                                        Temp_int_Variable10;                               // 0x528(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select9_Default;                            // 0x530(0x18)()
	class FText                                  Temp_text_Variable42;                              // 0x548(0x18)()
	class FText                                  Temp_text_Variable43;                              // 0x560(0x18)()
	class FText                                  Temp_text_Variable44;                              // 0x578(0x18)()
	class FText                                  Temp_text_Variable45;                              // 0x590(0x18)()
	int32                                        Temp_int_Variable11;                               // 0x5A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select10_Default;                           // 0x5B0(0x18)()
	class FText                                  Temp_text_Variable46;                              // 0x5C8(0x18)()
	class FText                                  Temp_text_Variable47;                              // 0x5E0(0x18)()
	class FText                                  Temp_text_Variable48;                              // 0x5F8(0x18)()
	class FText                                  Temp_text_Variable49;                              // 0x610(0x18)()
	int32                                        Temp_int_Variable12;                               // 0x628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select11_Default;                           // 0x630(0x18)()
	class FText                                  Temp_text_Variable50;                              // 0x648(0x18)()
	class FText                                  Temp_text_Variable51;                              // 0x660(0x18)()
	class FText                                  Temp_text_Variable52;                              // 0x678(0x18)()
	class FText                                  Temp_text_Variable53;                              // 0x690(0x18)()
	int32                                        Temp_int_Variable13;                               // 0x6A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select12_Default;                           // 0x6B0(0x18)()
	class FText                                  Temp_text_Variable54;                              // 0x6C8(0x18)()
	class FText                                  Temp_text_Variable55;                              // 0x6E0(0x18)()
	class FText                                  Temp_text_Variable56;                              // 0x6F8(0x18)()
	class FText                                  Temp_text_Variable57;                              // 0x710(0x18)()
	int32                                        Temp_int_Variable14;                               // 0x728(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select13_Default;                           // 0x730(0x18)()
	class FText                                  Temp_text_Variable58;                              // 0x748(0x18)()
	class FText                                  Temp_text_Variable59;                              // 0x760(0x18)()
	class FText                                  Temp_text_Variable60;                              // 0x778(0x18)()
	class FText                                  Temp_text_Variable61;                              // 0x790(0x18)()
	int32                                        Temp_int_Variable15;                               // 0x7A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select14_Default;                           // 0x7B0(0x18)()
	class FText                                  Temp_text_Variable62;                              // 0x7C8(0x18)()
	class FText                                  Temp_text_Variable63;                              // 0x7E0(0x18)()
	class FText                                  Temp_text_Variable64;                              // 0x7F8(0x18)()
	class FText                                  Temp_text_Variable65;                              // 0x810(0x18)()
	int32                                        Temp_int_Variable16;                               // 0x828(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select15_Default;                           // 0x830(0x18)()
	class FText                                  Temp_text_Variable66;                              // 0x848(0x18)()
	class FText                                  Temp_text_Variable67;                              // 0x860(0x18)()
	class FText                                  Temp_text_Variable68;                              // 0x878(0x18)()
	class FText                                  Temp_text_Variable69;                              // 0x890(0x18)()
	int32                                        Temp_int_Variable17;                               // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select16_Default;                           // 0x8B0(0x18)()
	class FText                                  Temp_text_Variable70;                              // 0x8C8(0x18)()
	class FText                                  Temp_text_Variable71;                              // 0x8E0(0x18)()
	class FText                                  Temp_text_Variable72;                              // 0x8F8(0x18)()
	class FText                                  Temp_text_Variable73;                              // 0x910(0x18)()
	int32                                        Temp_int_Variable18;                               // 0x928(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select17_Default;                           // 0x930(0x18)()
	class FText                                  Temp_text_Variable74;                              // 0x948(0x18)()
	class FText                                  Temp_text_Variable75;                              // 0x960(0x18)()
	class FText                                  Temp_text_Variable76;                              // 0x978(0x18)()
	class FText                                  Temp_text_Variable77;                              // 0x990(0x18)()
	int32                                        Temp_int_Variable19;                               // 0x9A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select18_Default;                           // 0x9B0(0x18)()
	class FText                                  Temp_text_Variable78;                              // 0x9C8(0x18)()
	class FText                                  Temp_text_Variable79;                              // 0x9E0(0x18)()
	class FText                                  Temp_text_Variable80;                              // 0x9F8(0x18)()
	class FText                                  Temp_text_Variable81;                              // 0xA10(0x18)()
	int32                                        Temp_int_Variable20;                               // 0xA28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select19_Default;                           // 0xA30(0x18)()
	class FText                                  Temp_text_Variable82;                              // 0xA48(0x18)()
	class FText                                  Temp_text_Variable83;                              // 0xA60(0x18)()
	class FText                                  Temp_text_Variable84;                              // 0xA78(0x18)()
	class FText                                  Temp_text_Variable85;                              // 0xA90(0x18)()
	int32                                        Temp_int_Variable21;                               // 0xAA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select20_Default;                           // 0xAB0(0x18)()
	class FText                                  Temp_text_Variable86;                              // 0xAC8(0x18)()
	class FText                                  Temp_text_Variable87;                              // 0xAE0(0x18)()
	class FText                                  Temp_text_Variable88;                              // 0xAF8(0x18)()
	class FText                                  Temp_text_Variable89;                              // 0xB10(0x18)()
	int32                                        Temp_int_Variable22;                               // 0xB28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select21_Default;                           // 0xB30(0x18)()
	class FText                                  Temp_text_Variable90;                              // 0xB48(0x18)()
	class FText                                  Temp_text_Variable91;                              // 0xB60(0x18)()
	class FText                                  Temp_text_Variable92;                              // 0xB78(0x18)()
	class FText                                  Temp_text_Variable93;                              // 0xB90(0x18)()
	int32                                        Temp_int_Variable23;                               // 0xBA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select22_Default;                           // 0xBB0(0x18)()
	class FText                                  Temp_text_Variable94;                              // 0xBC8(0x18)()
	class FText                                  Temp_text_Variable95;                              // 0xBE0(0x18)()
	class FText                                  Temp_text_Variable96;                              // 0xBF8(0x18)()
	class FText                                  Temp_text_Variable97;                              // 0xC10(0x18)()
	int32                                        Temp_int_Variable24;                               // 0xC28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select23_Default;                           // 0xC30(0x18)()
	class FText                                  Temp_text_Variable98;                              // 0xC48(0x18)()
	class FText                                  Temp_text_Variable99;                              // 0xC60(0x18)()
	class FText                                  Temp_text_Variable100;                             // 0xC78(0x18)()
	class FText                                  Temp_text_Variable101;                             // 0xC90(0x18)()
	int32                                        Temp_int_Variable25;                               // 0xCA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select24_Default;                           // 0xCB0(0x18)()
	class FText                                  Temp_text_Variable102;                             // 0xCC8(0x18)()
	class FText                                  Temp_text_Variable103;                             // 0xCE0(0x18)()
	class FText                                  Temp_text_Variable104;                             // 0xCF8(0x18)()
	class FText                                  Temp_text_Variable105;                             // 0xD10(0x18)()
	int32                                        Temp_int_Variable26;                               // 0xD28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select25_Default;                           // 0xD30(0x18)()
	class FText                                  Temp_text_Variable106;                             // 0xD48(0x18)()
	class FText                                  Temp_text_Variable107;                             // 0xD60(0x18)()
	class FText                                  Temp_text_Variable108;                             // 0xD78(0x18)()
	class FText                                  Temp_text_Variable109;                             // 0xD90(0x18)()
	int32                                        Temp_int_Variable27;                               // 0xDA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select26_Default;                           // 0xDB0(0x18)()
	class FText                                  Temp_text_Variable110;                             // 0xDC8(0x18)()
	class FText                                  Temp_text_Variable111;                             // 0xDE0(0x18)()
	class FText                                  Temp_text_Variable112;                             // 0xDF8(0x18)()
	class FText                                  Temp_text_Variable113;                             // 0xE10(0x18)()
	int32                                        Temp_int_Variable28;                               // 0xE28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select27_Default;                           // 0xE30(0x18)()
	class FText                                  Temp_text_Variable114;                             // 0xE48(0x18)()
	class FText                                  Temp_text_Variable115;                             // 0xE60(0x18)()
	class FText                                  Temp_text_Variable116;                             // 0xE78(0x18)()
	class FText                                  Temp_text_Variable117;                             // 0xE90(0x18)()
	int32                                        Temp_int_Variable29;                               // 0xEA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select28_Default;                           // 0xEB0(0x18)()
	class FText                                  Temp_text_Variable118;                             // 0xEC8(0x18)()
	class FText                                  Temp_text_Variable119;                             // 0xEE0(0x18)()
	class FText                                  Temp_text_Variable120;                             // 0xEF8(0x18)()
	class FText                                  Temp_text_Variable121;                             // 0xF10(0x18)()
	int32                                        Temp_int_Variable30;                               // 0xF28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select29_Default;                           // 0xF30(0x18)()
	class FText                                  Temp_text_Variable122;                             // 0xF48(0x18)()
	class FText                                  Temp_text_Variable123;                             // 0xF60(0x18)()
	class FText                                  Temp_text_Variable124;                             // 0xF78(0x18)()
	class FText                                  Temp_text_Variable125;                             // 0xF90(0x18)()
	int32                                        Temp_int_Variable31;                               // 0xFA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select30_Default;                           // 0xFB0(0x18)()
	class FText                                  Temp_text_Variable126;                             // 0xFC8(0x18)()
	class FText                                  Temp_text_Variable127;                             // 0xFE0(0x18)()
	class FText                                  Temp_text_Variable128;                             // 0xFF8(0x18)()
	class FText                                  Temp_text_Variable129;                             // 0x1010(0x18)()
	int32                                        Temp_int_Variable32;                               // 0x1028(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select31_Default;                           // 0x1030(0x18)()
	class FText                                  Temp_text_Variable130;                             // 0x1048(0x18)()
	class FText                                  Temp_text_Variable131;                             // 0x1060(0x18)()
	class FText                                  Temp_text_Variable132;                             // 0x1078(0x18)()
	class FText                                  Temp_text_Variable133;                             // 0x1090(0x18)()
	int32                                        Temp_int_Variable33;                               // 0x10A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select32_Default;                           // 0x10B0(0x18)()
	class FText                                  Temp_text_Variable134;                             // 0x10C8(0x18)()
	class FText                                  Temp_text_Variable135;                             // 0x10E0(0x18)()
	class FText                                  Temp_text_Variable136;                             // 0x10F8(0x18)()
	class FText                                  Temp_text_Variable137;                             // 0x1110(0x18)()
	int32                                        Temp_int_Variable34;                               // 0x1128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select33_Default;                           // 0x1130(0x18)()
	class FText                                  Temp_text_Variable138;                             // 0x1148(0x18)()
	class FText                                  Temp_text_Variable139;                             // 0x1160(0x18)()
	class FText                                  Temp_text_Variable140;                             // 0x1178(0x18)()
	class FText                                  Temp_text_Variable141;                             // 0x1190(0x18)()
	int32                                        Temp_int_Variable35;                               // 0x11A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select34_Default;                           // 0x11B0(0x18)()
	class FText                                  Temp_text_Variable142;                             // 0x11C8(0x18)()
	class FText                                  Temp_text_Variable143;                             // 0x11E0(0x18)()
	class FText                                  Temp_text_Variable144;                             // 0x11F8(0x18)()
	class FText                                  Temp_text_Variable145;                             // 0x1210(0x18)()
	int32                                        Temp_int_Variable36;                               // 0x1228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select35_Default;                           // 0x1230(0x18)()
	class FText                                  Temp_text_Variable146;                             // 0x1248(0x18)()
	class FText                                  Temp_text_Variable147;                             // 0x1260(0x18)()
	class FText                                  Temp_text_Variable148;                             // 0x1278(0x18)()
	class FText                                  Temp_text_Variable149;                             // 0x1290(0x18)()
	int32                                        Temp_int_Variable37;                               // 0x12A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select36_Default;                           // 0x12B0(0x18)()
	class FText                                  Temp_text_Variable150;                             // 0x12C8(0x18)()
	class FText                                  Temp_text_Variable151;                             // 0x12E0(0x18)()
	class FText                                  Temp_text_Variable152;                             // 0x12F8(0x18)()
	class FText                                  Temp_text_Variable153;                             // 0x1310(0x18)()
	int32                                        Temp_int_Variable38;                               // 0x1328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select37_Default;                           // 0x1330(0x18)()
	class FText                                  Temp_text_Variable154;                             // 0x1348(0x18)()
	class FText                                  Temp_text_Variable155;                             // 0x1360(0x18)()
	class FText                                  Temp_text_Variable156;                             // 0x1378(0x18)()
	class FText                                  Temp_text_Variable157;                             // 0x1390(0x18)()
	int32                                        Temp_int_Variable39;                               // 0x13A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select38_Default;                           // 0x13B0(0x18)()
	class FText                                  Temp_text_Variable158;                             // 0x13C8(0x18)()
	class FText                                  Temp_text_Variable159;                             // 0x13E0(0x18)()
	class FText                                  Temp_text_Variable160;                             // 0x13F8(0x18)()
	class FText                                  Temp_text_Variable161;                             // 0x1410(0x18)()
	int32                                        Temp_int_Variable40;                               // 0x1428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select39_Default;                           // 0x1430(0x18)()
	class FText                                  Temp_text_Variable162;                             // 0x1448(0x18)()
	class FText                                  Temp_text_Variable163;                             // 0x1460(0x18)()
	class FText                                  Temp_text_Variable164;                             // 0x1478(0x18)()
	class FText                                  Temp_text_Variable165;                             // 0x1490(0x18)()
	int32                                        Temp_int_Variable41;                               // 0x14A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select40_Default;                           // 0x14B0(0x18)()
	class FText                                  Temp_text_Variable166;                             // 0x14C8(0x18)()
	class FText                                  Temp_text_Variable167;                             // 0x14E0(0x18)()
	class FText                                  Temp_text_Variable168;                             // 0x14F8(0x18)()
	class FText                                  Temp_text_Variable169;                             // 0x1510(0x18)()
	int32                                        Temp_int_Variable42;                               // 0x1528(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select41_Default;                           // 0x1530(0x18)()
	class FText                                  Temp_text_Variable170;                             // 0x1548(0x18)()
	class FText                                  Temp_text_Variable171;                             // 0x1560(0x18)()
	class FText                                  Temp_text_Variable172;                             // 0x1578(0x18)()
	class FText                                  Temp_text_Variable173;                             // 0x1590(0x18)()
	int32                                        Temp_int_Variable43;                               // 0x15A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select42_Default;                           // 0x15B0(0x18)()
	class FText                                  Temp_text_Variable174;                             // 0x15C8(0x18)()
	class FText                                  Temp_text_Variable175;                             // 0x15E0(0x18)()
	class FText                                  Temp_text_Variable176;                             // 0x15F8(0x18)()
	class FText                                  Temp_text_Variable177;                             // 0x1610(0x18)()
	int32                                        Temp_int_Variable44;                               // 0x1628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select43_Default;                           // 0x1630(0x18)()
	class FText                                  Temp_text_Variable178;                             // 0x1648(0x18)()
	class FText                                  Temp_text_Variable179;                             // 0x1660(0x18)()
	class FText                                  Temp_text_Variable180;                             // 0x1678(0x18)()
	class FText                                  Temp_text_Variable181;                             // 0x1690(0x18)()
	int32                                        Temp_int_Variable45;                               // 0x16A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select44_Default;                           // 0x16B0(0x18)()
	class FText                                  Temp_text_Variable182;                             // 0x16C8(0x18)()
	class FText                                  Temp_text_Variable183;                             // 0x16E0(0x18)()
	class FText                                  Temp_text_Variable184;                             // 0x16F8(0x18)()
	class FText                                  Temp_text_Variable185;                             // 0x1710(0x18)()
	int32                                        Temp_int_Variable46;                               // 0x1728(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select45_Default;                           // 0x1730(0x18)()
	class FText                                  Temp_text_Variable186;                             // 0x1748(0x18)()
	class FText                                  Temp_text_Variable187;                             // 0x1760(0x18)()
	class FText                                  Temp_text_Variable188;                             // 0x1778(0x18)()
	class FText                                  Temp_text_Variable189;                             // 0x1790(0x18)()
	int32                                        Temp_int_Variable47;                               // 0x17A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select46_Default;                           // 0x17B0(0x18)()
	class FText                                  Temp_text_Variable190;                             // 0x17C8(0x18)()
	class FText                                  Temp_text_Variable191;                             // 0x17E0(0x18)()
	class FText                                  Temp_text_Variable192;                             // 0x17F8(0x18)()
	class FText                                  Temp_text_Variable193;                             // 0x1810(0x18)()
	int32                                        Temp_int_Variable48;                               // 0x1828(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select47_Default;                           // 0x1830(0x18)()
	class FText                                  Temp_text_Variable194;                             // 0x1848(0x18)()
	class FText                                  Temp_text_Variable195;                             // 0x1860(0x18)()
	class FText                                  Temp_text_Variable196;                             // 0x1878(0x18)()
	class FText                                  Temp_text_Variable197;                             // 0x1890(0x18)()
	class FText                                  K2Node_Select48_Default;                           // 0x18A8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x18C0(0x18)()
	class FText                                  Temp_text_Variable198;                             // 0x18D8(0x18)()
	class FText                                  Temp_text_Variable199;                             // 0x18F0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x1908(0x18)()
	int32                                        Temp_int_Variable49;                               // 0x1920(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select49_Default;                           // 0x1928(0x18)()
};

// 0x21 (0x21 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged
struct UGamepadMappingInfo_v3_C_OnConfigChanged_Params
{
public:
	enum class EFortInputActionGroup             Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Config;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCustomGamepadConfig_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping
struct UGamepadMappingInfo_v3_C_Update_Displayed_Mapping_Params
{
public:
	int32                                        Platform;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             Mode;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Configuration;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable5;                               // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable2;                                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UTexture2D>>     K2Node_Select2_Default;                            // 0x28(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D
struct UGamepadMappingInfo_v3_C_OnLoaded_CDBC1B27496027B96D10BC9A64224F3D_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct
struct UGamepadMappingInfo_v3_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images
struct UGamepadMappingInfo_v3_C_Update_Controller_Images_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_OnButtonClicked_Bind_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons
struct UGamepadMappingInfo_v3_C_UpdateCustomButtons_Params
{
public:
};

// 0x15A (0x15A - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3
struct UGamepadMappingInfo_v3_C_ExecuteUbergraph_GamepadMappingInfo_v3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable1;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetControllerImage_Texture;               // 0x20(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0x10)(ZeroConstructor, NoDestructor)
	class UGamepadKeyTextButton_C*               K2Node_DynamicCast_AsGamepad_Key_Text_Button;      // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x78(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGamepadKeyTextButton_C*>       K2Node_MakeArray_Array;                            // 0x98(0x10)(ZeroConstructor, ReferenceParm)
	class UGamepadKeyTextButton_C*               CallFunc_Array_Get_Item;                           // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCustomButtonDataForKey_ActionName;     // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCustomButtonDataForKey_DescText;       // 0xB8(0x18)()
	class FName                                  CallFunc_GetCustomButtonDataForKey_ActionName1;    // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCustomButtonDataForKey_DescText1;      // 0xD8(0x18)()
	int32                                        Temp_int_Array_Index_Variable1;                    // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue;              // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue1;             // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue2;             // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTabCount_ReturnValue;                  // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGamepadKeyTextButton_C*               CallFunc_Array_Get_Item1;                          // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCustomButtonDataForKey_ActionName2;    // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCustomButtonDataForKey_DescText2;      // 0x128(0x18)()
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue1;                 // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature
struct UGamepadMappingInfo_v3_C_CustomButtonNavLeft__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature
struct UGamepadMappingInfo_v3_C_Image_LightboxClicked__DelegateSignature_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature
struct UGamepadMappingInfo_v3_C_CustomKeySelected__DelegateSignature_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
