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
// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.Construct
struct UAthenaSpectatorMatchStatus_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateMatchTimeText
struct UAthenaSpectatorMatchStatus_C_UpdateMatchTimeText_Params
{
public:
	//class FText                                MatchTimeText;                                     // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateStormPhaseText
struct UAthenaSpectatorMatchStatus_C_UpdateStormPhaseText_Params
{
public:
	//class FText                                SafeZonePhaseTxt;                                  // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x38 (0x38 - 0x0)
// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.ExecuteUbergraph_AthenaSpectatorMatchStatus
struct UAthenaSpectatorMatchStatus_C_ExecuteUbergraph_AthenaSpectatorMatchStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_548A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_MatchTimeText;                        // 0x8(0x18)(ConstParm)
	class FText                                  K2Node_Event_SafeZonePhaseTxt;                     // 0x20(0x18)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
