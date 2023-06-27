#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class SocialDefaults.ChatColorSchemeDataAsset
// 0x0120 (0x0148 - 0x0028)
class UChatColorSchemeDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0028(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.ChatColorSchemeDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialActionButtonStyleDataAsset
// 0x02A8 (0x02D0 - 0x0028)
class USocialActionButtonStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0028(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialActionButtonStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeColorSchemeDataAsset
// 0x0050 (0x0078 - 0x0028)
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatChromeColorSchemeDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeMarginsDataAsset
// 0x0068 (0x0090 - 0x0028)
class USocialChatChromeMarginsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatChromeMarginsDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatChromeStyleDataAsset
// 0x0850 (0x0878 - 0x0028)
class USocialChatChromeStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x850];                                     // 0x0028(0x0850) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatChromeStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatMarkupStyleDataAsset
// 0x0670 (0x0698 - 0x0028)
class USocialChatMarkupStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x670];                                     // 0x0028(0x0670) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatMarkupStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialChatStyleDataAsset
// 0x1490 (0x14B8 - 0x0028)
class USocialChatStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1490];                                    // 0x0028(0x1490) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialChatStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialCheckBoxStyleDataAsset
// 0x05E0 (0x0608 - 0x0028)
class USocialCheckBoxStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x5E0];                                     // 0x0028(0x05E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialCheckBoxStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialFontStyleDataAsset
// 0x02A0 (0x02C8 - 0x0028)
class USocialFontStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2A0];                                     // 0x0028(0x02A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialFontStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialListMarginsDataAsset
// 0x0200 (0x0228 - 0x0028)
class USocialListMarginsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0028(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialListMarginsDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialListStyleDataAsset
// 0x2870 (0x2898 - 0x0028)
class USocialListStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2870];                                    // 0x0028(0x2870) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialListStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialProfanityDataAsset
// 0x0010 (0x0038 - 0x0028)
class USocialProfanityDataAsset : public UDataAsset
{
public:
	TArray<struct FProfanityData>                      ProfanityData;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialProfanityDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialRadioBoxStyleDataAsset
// 0x05E0 (0x0608 - 0x0028)
class USocialRadioBoxStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x5E0];                                     // 0x0028(0x05E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialRadioBoxStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialScrollBarStyleDataAsset
// 0x0518 (0x0540 - 0x0028)
class USocialScrollBarStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x518];                                     // 0x0028(0x0518) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialScrollBarStyleDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialSoundSchemaDataAsset
// 0x0048 (0x0070 - 0x0028)
class USocialSoundSchemaDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialSoundSchemaDataAsset");
		return ptr;
	}

};


// Class SocialDefaults.SocialStyleDataAsset
// 0x6E70 (0x6E98 - 0x0028)
class USocialStyleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x6E70];                                    // 0x0028(0x6E70) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialDefaults.SocialStyleDataAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
