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
// 0x2E (0x2E - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Category Navigation Visibility
struct UBP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility_Params
{
public:
	enum class ESlateVisibility                  LocalVisibility;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C05[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_Select_Default;                             // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index_Params
{
public:
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index_Params
{
public:
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x62 (0x62 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Color Category Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State_Params
{
public:
	int32                                        NextIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUnseen;                                           // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C06[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C07[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Next_Color_Category_Index_ReturnValue; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItem*>              CallFunc_GetBannerColorsForCategory_BannerColors;  // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class UFortAccountItem*                      CallFunc_Array_Get_Item1;                          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C0A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Color Category Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State_Params
{
public:
	int32                                        PrevIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUnseen;                                           // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C0B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Prev_Color_Category_Index_ReturnValue; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItem*>              CallFunc_GetBannerColorsForCategory_BannerColors;  // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class UFortAccountItem*                      CallFunc_Array_Get_Item1;                          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Icon Category Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State_Params
{
public:
	int32                                        NextIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUnseen;                                           // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C0F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Next_Icon_Category_Index_ReturnValue; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C12[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItem*>              CallFunc_GetBannerIconsForCategory_BannerIcons;    // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class UFortAccountItem*                      CallFunc_Array_Get_Item1;                          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Icon Category Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State_Params
{
public:
	int32                                        PrevIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUnseen;                                           // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C13[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Prev_Icon_Category_Index_ReturnValue; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItem*>              CallFunc_GetBannerIconsForCategory_BannerIcons;    // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class UFortAccountItem*                      CallFunc_Array_Get_Item1;                          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue1;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue1;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C1C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Color Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State_Params
{
public:
	bool                                         bUnseen;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C1F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>              CallFunc_GetAccountItemsByType_Items;              // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Icon Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State_Params
{
public:
	bool                                         bUnseen;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C23[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInventoryContext*                 CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>              CallFunc_GetAccountItemsByType_Items;              // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBeenSeenLocally_ReturnValue;           // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Bang States
struct UBP_LocalPlayerBannerEditor_C_Update_Bang_States_Params
{
public:
};

// 0x1E (0x1E - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.FoundsPackTextUpdate
struct UBP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable12;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable123;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFrontEndFeatureState         CallFunc_GetFeatureState_OutFeatureState;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFrontEndFeatureStateReason   CallFunc_GetFeatureState_OutReason;                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          Temp_byte_Variable1234;                            // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Pickers and Views
struct UBP_LocalPlayerBannerEditor_C_Reset_Pickers_and_Views_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset for Keyboard and Mouse
struct UBP_LocalPlayerBannerEditor_C_Reset_for_Keyboard_and_Mouse_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Temp State On Item Selected
struct UBP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHomebaseBannerColorItem*          K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseBannerIconItem*           K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetRowNameForBannerColorItem_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRowNameForBannerIconItem_ReturnValue;  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Refresh Apply Button State
struct UBP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State_Params
{
public:
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue1;           // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Apply Chosen Item
struct UBP_LocalPlayerBannerEditor_C_Apply_Chosen_Item_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Picking Tile State
struct UBP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State_Params
{
public:
	bool                                         bPickingTile;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C2A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x20(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)()
};

// 0x21 (0x21 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Attempt Leave Picker
struct UBP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker_Params
{
public:
	bool                                         Left;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LeftPicker;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C2B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default;                             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_DynamicCast_AsCommon_Button;                // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Color
struct UBP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C2C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseBannerColorItem*          CallFunc_GetBannerColorItemFromRowName_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedItem_ReturnValue;              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Icon
struct UBP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon_Params
{
public:
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseBannerIconItem*           CallFunc_GetBannerIconItemFromRowName_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedItem_ReturnValue;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetDeactivated
struct UBP_LocalPlayerBannerEditor_C_OnWidgetDeactivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Icon Tileview
struct UBP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview_Params
{
public:
	class FName                                  CurrentCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Color Tileview
struct UBP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview_Params
{
public:
	class FName                                  CurrentCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index_Params
{
public:
	int32                                        CallFunc_Get_Next_Color_Category_Index_ReturnValue; // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index_Params
{
public:
	int32                                        CallFunc_Get_Next_Icon_Category_Index_ReturnValue; // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index_Params
{
public:
	int32                                        CallFunc_Get_Prev_Color_Category_Index_ReturnValue; // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index_Params
{
public:
	int32                                        CallFunc_Get_Prev_Icon_Category_Index_ReturnValue; // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Previous Category
struct UBP_LocalPlayerBannerEditor_C_Previous_Category_Params
{
public:
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C31[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item1;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Next Category
struct UBP_LocalPlayerBannerEditor_C_Next_Category_Params
{
public:
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C32[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item1;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Current Category
struct UBP_LocalPlayerBannerEditor_C_Set_Current_Category_Params
{
public:
	class FName                                  CurrentCategory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CategoryDisplayName;                               // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  CallFunc_GetBannerIconCategoryName_ReturnValue;    // 0x20(0x18)()
	class FText                                  CallFunc_GetBannerColorCategoryName_ReturnValue;   // 0x38(0x18)()
};

// 0x89 (0x89 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Colorswatches
struct UBP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches_Params
{
public:
	class FName                                  CategoryRowName;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetSelectedItem_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedIndex_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x20(0x10)(IsPlainOldData, NoDestructor)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseBannerColorItem*          CallFunc_GetBannerColorItemFromRowName_ReturnValue; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedItem_ReturnValue;              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C35[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue1;             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller1;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAccountItem*>              CallFunc_GetBannerColorsForCategory_BannerColors;  // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6A (0x6A - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Icons
struct UBP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons_Params
{
public:
	class FName                                  CategoryRowName;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetSelectedItem_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedIndex_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C38[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue1;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller1;      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHomebaseBannerIconItem*           CallFunc_GetBannerIconItemFromRowName_ReturnValue; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>              CallFunc_GetBannerIconsForCategory_BannerIcons;    // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_SetSelectedItem_ReturnValue;              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetActivated
struct UBP_LocalPlayerBannerEditor_C_OnWidgetActivated_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Construct
struct UBP_LocalPlayerBannerEditor_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CloseEditorButton_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__CloseEditorButton_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.RefreshBannerEditor
struct UBP_LocalPlayerBannerEditor_C_RefreshBannerEditor_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSelected;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.HandleInputMethodChanged
struct UBP_LocalPlayerBannerEditor_C_HandleInputMethodChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BannerTileBangUpdated_Event_0
struct UBP_LocalPlayerBannerEditor_C_BannerTileBangUpdated_Event_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Handle Bang State Changed
struct UBP_LocalPlayerBannerEditor_C_Handle_Bang_State_Changed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowPreviousCategory
struct UBP_LocalPlayerBannerEditor_C_OnShowPreviousCategory_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowNextCategory
struct UBP_LocalPlayerBannerEditor_C_OnShowNextCategory_Params
{
public:
};

// 0x123 (0x123 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.ExecuteUbergraph_BP_LocalPlayerBannerEditor
struct UBP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1234567;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button123456;           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button12345;            // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1234;             // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button123;              // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button12;               // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_ComponentBoundEvent_Item1;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsSelected;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bUsingGamepad;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x70(0x10)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue1;      // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_ComponentBoundEvent_Item;                   // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Attempt_Leave_Picker_Left;                // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C3E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_ComponentBoundEvent_Widget;                 // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BannerEditorTile_C*                K2Node_DynamicCast_AsBP_Banner_Editor_Tile;        // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xD8(0x8)(NoDestructor)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C40[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue12;                 // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue1;         // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue12;                // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C41[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue123;                // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue12;        // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue12;        // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C42[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue1234;               // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue123;       // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue123;       // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C43[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable12;                              // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select1_Default;                            // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.CloseBannerEditor__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_CloseBannerEditor__DelegateSignature_Params
{
public:
	class FName                                  IconId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ColorId;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
