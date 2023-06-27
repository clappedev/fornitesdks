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
// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.Construct
struct UAthenaQuestUpdateEntry_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestIntro
struct UAthenaQuestUpdateEntry_C_StartQuestIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestOutro
struct UAthenaQuestUpdateEntry_C_StartQuestOutro_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.ExecuteUbergraph_AthenaQuestUpdateEntry
struct UAthenaQuestUpdateEntry_C_ExecuteUbergraph_AthenaQuestUpdateEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature
struct UAthenaQuestUpdateEntry_C_AllQuestUpdatesFinished_0__DelegateSignature_Params
{
public:
	class UQuestUpdateEntry_C*                   UpdateWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
