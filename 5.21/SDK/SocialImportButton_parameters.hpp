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
// 0x18 (0x18 - 0x0)
// Function SocialImportButton.SocialImportButton_C.OnCaptionGenerated
struct USocialImportButton_C_OnCaptionGenerated_Params
{
public:
	//class FText                                Caption;                                           // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x61 (0x61 - 0x0)
// Function SocialImportButton.SocialImportButton_C.ExecuteUbergraph_SocialImportButton
struct USocialImportButton_C_ExecuteUbergraph_SocialImportButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_Caption;                              // 0x8(0x18)(ConstParm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayText_ReturnValue;               // 0x28(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue1;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select1_Default;                            // 0x48(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue2;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
