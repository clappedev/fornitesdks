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
// 0x98 (0x98 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.UpdateExternalNewsWidgets
struct UAthenaNewsModal_C_UpdateExternalNewsWidgets_Params
{
public:
	enum class ENewsExternalURLMode              Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)()
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A2D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetExternalNewsURL_bHasValidExternalURL;  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A2E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetExternalNewsURL_ExternalURL;           // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ENewsExternalURLMode              CallFunc_GetExternalNewsURL_ButtonMode;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A2F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x80(0x18)()
};

// 0x36 (0x36 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.ShouldShowSTWUpsellInBR
struct UAthenaNewsModal_C_ShouldShowSTWUpsellInBR_Params
{
public:
	bool                                         ShouldShow;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_CanPlay_DenialReason;                     // 0x18(0x18)()
	bool                                         CallFunc_CanPlay_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x218 (0x218 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.OnMouseButtonDown_0
struct UAthenaNewsModal_C_OnMouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
};

// 0xC (0xC - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.DialogResult_3BE479B64CDE5378C77A8DA453770A3B
struct UAthenaNewsModal_C_DialogResult_3BE479B64CDE5378C77A8DA453770A3B_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.ForceNewsClosed
struct UAthenaNewsModal_C_ForceNewsClosed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.OnActivated
struct UAthenaNewsModal_C_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaNewsModal_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature
struct UAthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.Construct
struct UAthenaNewsModal_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaNewsModal_C_BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__AthenaNews_K2Node_ComponentBoundEvent_2_UpdateStyle__DelegateSignature
struct UAthenaNewsModal_C_BndEvt__AthenaNews_K2Node_ComponentBoundEvent_2_UpdateStyle__DelegateSignature_Params
{
public:
	enum class EAthenaNewsStyle                  NewStyle;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UAthenaNewsModal_C_BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaNewsModal_C_BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A9 (0x1A9 - 0x0)
// Function AthenaNewsModal.AthenaNewsModal_C.ExecuteUbergraph_AthenaNewsModal
struct UAthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A33[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumPlayersInLocalParty_ReturnValue;    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A34[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue_1;     // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_4;               // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A35[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_3;               // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaNewsStyle                  K2Node_ComponentBoundEvent_NewStyle;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A36[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCMSContext*                           CallFunc_GetContext_ReturnValue_3;                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xB0(0x18)()
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue; // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A37[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A38[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0xE0(0x10)(ZeroConstructor, ReferenceParm)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue_1;         // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*     CallFunc_Array_Get_Item;                           // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USubgameSelectScreen_C*                K2Node_DynamicCast_AsSubgame_Select_Screen;        // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldShowSTWUpsellInBR_ShouldShow;       // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          Temp_byte_Variable_5;                              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetExternalNewsURL_bHasValidExternalURL;  // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A3A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetExternalNewsURL_ExternalURL;           // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ENewsExternalURLMode              CallFunc_GetExternalNewsURL_ButtonMode;            // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue_1;          // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x158(0x10)(ZeroConstructor, ReferenceParm)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_4;                 // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*     CallFunc_Array_Get_Item_1;                         // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue_1;                 // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A3C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_1;                           // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue_2;         // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue_1;            // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USubgameSelect_v2_C*                   K2Node_DynamicCast_AsSubgame_Select_V_2;           // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
