#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum LiveStreamAnimation.ELiveStreamAnimationRole
enum class ELiveStreamAnimationRole : uint8_t
{
	Proxy                          = 0,
	Processor                      = 1,
	Tracker                        = 2,
	ELiveStreamAnimationRole_MAX   = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveStreamAnimation.LiveStreamAnimationHandleWrapper
// 0x0008
struct FLiveStreamAnimationHandleWrapper
{
	struct FName                                       Handle;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
