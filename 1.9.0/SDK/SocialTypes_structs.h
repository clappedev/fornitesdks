#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SocialTypes.ChatChromeColorScheme
// 0x0050
struct FChatChromeColorScheme
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct SocialTypes.ChatChromeMargins
// 0x0064
struct FChatChromeMargins
{
	unsigned char                                      UnknownData00[0x64];                                      // 0x0000(0x0064) MISSED OFFSET
};

// ScriptStruct SocialTypes.ChatChromeStyle
// 0x0850
struct FChatChromeStyle
{
	unsigned char                                      UnknownData00[0x850];                                     // 0x0000(0x0850) MISSED OFFSET
};

// ScriptStruct SocialTypes.ChatColorScheme
// 0x0120
struct FChatColorScheme
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0000(0x0120) MISSED OFFSET
};

// ScriptStruct SocialTypes.ChatMarkupStyle
// 0x0670
struct FChatMarkupStyle
{
	unsigned char                                      UnknownData00[0x670];                                     // 0x0000(0x0670) MISSED OFFSET
};

// ScriptStruct SocialTypes.ChatStyle
// 0x1490
struct FChatStyle
{
	unsigned char                                      UnknownData00[0x1490];                                    // 0x0000(0x1490) MISSED OFFSET
};

// ScriptStruct SocialTypes.SocialFontStyle
// 0x02A0
struct FSocialFontStyle
{
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0000(0x02A0) MISSED OFFSET
};

// ScriptStruct SocialTypes.SocialListMargins
// 0x0200
struct FSocialListMargins
{
	unsigned char                                      UnknownData00[0x200];                                     // 0x0000(0x0200) MISSED OFFSET
};

// ScriptStruct SocialTypes.SocialListStyle
// 0x2870
struct FSocialListStyle
{
	unsigned char                                      UnknownData00[0x2870];                                    // 0x0000(0x2870) MISSED OFFSET
};

// ScriptStruct SocialTypes.ProfanityData
// 0x0038
struct FProfanityData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct SocialTypes.SocialSoundSchema
// 0x0048
struct FSocialSoundSchema
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct SocialTypes.SocialStyle
// 0x6DE0
struct FSocialStyle
{
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0000(0x0518) (Edit)
	unsigned char                                      UnknownData00[0x68C8];                                    // 0x0518(0x68C8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
