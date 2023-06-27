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

// Enum EventModeRuntime.EFortEventModeEmoteToPlay
enum class EFortEventModeEmoteToPlay : uint8_t
{
	Emote1                         = 0,
	Emote2                         = 1,
	Emote3                         = 2,
	RandomEmote                    = 3,
	QuickEmotes                    = 4,
	EFortEventModeEmoteToPlay_MAX  = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EventModeRuntime.EventModeFocusActor
// 0x0040
struct FEventModeFocusActor
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EventModeRuntime.EventModeFocusActor.Target
	float                                              Distance;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct EventModeRuntime.EventModeWidgetCachedData
// 0x000C
struct FEventModeWidgetCachedData
{
	EUIExtensionSlot                                   Slot;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UUserWidget>                  Widget;                                                   // 0x0004(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
