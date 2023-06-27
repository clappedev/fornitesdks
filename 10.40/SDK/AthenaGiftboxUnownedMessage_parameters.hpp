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
// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.RequestUpdateAnim
struct UAthenaGiftboxUnownedMessage_C_RequestUpdateAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.RequestIntroAnim
struct UAthenaGiftboxUnownedMessage_C_RequestIntroAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.RequestOutroAnim
struct UAthenaGiftboxUnownedMessage_C_RequestOutroAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.OutroFinished
struct UAthenaGiftboxUnownedMessage_C_OutroFinished_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function AthenaGiftboxUnownedMessage.AthenaGiftboxUnownedMessage_C.ExecuteUbergraph_AthenaGiftboxUnownedMessage
struct UAthenaGiftboxUnownedMessage_C_ExecuteUbergraph_AthenaGiftboxUnownedMessage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4F4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
