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
// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.Construct
struct UCMS_ML_BattlePass_LeftImageWidget1_C_Construct_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1
struct UCMS_ML_BattlePass_LeftImageWidget1_C_ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4555[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentSeasonName_ReturnValue;         // 0x10(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x28(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
