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
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct
struct UVoiceChannelChangePopup_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct
struct UVoiceChannelChangePopup_C_PreConstruct_Params
{
public:
	//bool                                       IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished
struct UVoiceChannelChangePopup_C_Popup_Animation_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation
struct UVoiceChannelChangePopup_C_OnPlayOpenAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation
struct UVoiceChannelChangePopup_C_OnPlayCloseAnimation_Params
{
public:
};

// 0x31 (0x31 - 0x0)
// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup
struct UVoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1670[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
