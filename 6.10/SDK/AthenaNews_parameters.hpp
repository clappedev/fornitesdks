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
// Function AthenaNews.AthenaNews_C.BeginIntroSequence
struct UAthenaNews_C_BeginIntroSequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaNews.AthenaNews_C.SingleItemConfiguration
struct UAthenaNews_C_SingleItemConfiguration_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaNews.AthenaNews_C.ResetViewConfiguration
struct UAthenaNews_C_ResetViewConfiguration_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaNews.AthenaNews_C.HandleNewsStyle
struct UAthenaNews_C_HandleNewsStyle_Params
{
public:
	//enum class EAthenaNewsStyle                NewsStyle;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
struct UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAthenaNewsStyle                  K2Node_Event_NewsStyle;                            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaNews.AthenaNews_C.UpdateStyle__DelegateSignature
struct UAthenaNews_C_UpdateStyle__DelegateSignature_Params
{
public:
	enum class EAthenaNewsStyle                  NewStyle;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
