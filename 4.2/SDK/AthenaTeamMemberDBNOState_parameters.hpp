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
// 0x22 (0x22 - 0x0)
// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.RefreshVisuals
struct UAthenaTeamMemberDBNOState_C_RefreshVisuals_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DBF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Temp_object_Variable1;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set Reviving
struct UAthenaTeamMemberDBNOState_C_Set_Reviving_Params
{
public:
	bool                                         Is_Reviving;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAccurateRealTime_Seconds;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAccurateRealTime_PartialSeconds;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DC1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Set DBNO
struct UAthenaTeamMemberDBNOState_C_Set_DBNO_Params
{
public:
	bool                                         Is_DBNO;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.Construct
struct UAthenaTeamMemberDBNOState_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AthenaTeamMemberDBNOState.AthenaTeamMemberDBNOState_C.ExecuteUbergraph_AthenaTeamMemberDBNOState
struct UAthenaTeamMemberDBNOState_C_ExecuteUbergraph_AthenaTeamMemberDBNOState_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
