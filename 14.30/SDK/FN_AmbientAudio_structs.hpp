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

// Enum AmbientAudio.EAmbientAudioTagActionType
enum class EAmbientAudioTagActionType : uint8_t
{
	Added                          = 0,
	Removed                        = 1,
	Count                          = 2,
	EAmbientAudioTagActionType_MAX = 3
};


// Enum AmbientAudio.EAmbientAudioEntryActionType
enum class EAmbientAudioEntryActionType : uint8_t
{
	Added                          = 0,
	Updated                        = 1,
	Removed                        = 2,
	Count                          = 3,
	EAmbientAudioEntryActionType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AmbientAudio.AmbientAudioBase
// 0x0070
struct FAmbientAudioBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AmbientAudio.AmbientAudioBase.Sound
	struct FGameplayTagQuery                           Requirements;                                             // 0x0028(0x0048) (Edit)
};

// ScriptStruct AmbientAudio.AmbientAudioLoop
// 0x0000 (0x0070 - 0x0070)
struct FAmbientAudioLoop : public FAmbientAudioBase
{

};

// ScriptStruct AmbientAudio.AmbientAudioOneShot
// 0x0010 (0x0080 - 0x0070)
struct FAmbientAudioOneShot : public FAmbientAudioBase
{
	struct FVector2D                                   RetriggerTimeRange;                                       // 0x0070(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector2D                                   TriggerDistanceRange;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct AmbientAudio.AmbientProxy
// 0x0018
struct FAmbientProxy
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
