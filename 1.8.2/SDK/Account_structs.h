#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Account.EConsoleAuthLinkState
enum class EConsoleAuthLinkState : uint8_t
{

};


// Enum Account.ELoginResult
enum class ELoginResult : uint8_t
{

};


// Enum Account.ECreateAccountResult
enum class ECreateAccountResult : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Account.WebEnvUrl
// 0x0030
struct FWebEnvUrl
{
	struct FString                                     URL;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RedirectUrl;                                              // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Account.GiftMessage
// 0x0030
struct FGiftMessage
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Account.ExchangeAccessParams
// 0x0040
struct FExchangeAccessParams
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Account.OnlineAccountTexts_FailedLoginConsole
// 0x0138
struct FOnlineAccountTexts_FailedLoginConsole
{
	unsigned char                                      UnknownData00[0x138];                                     // 0x0000(0x0138) MISSED OFFSET
};

// ScriptStruct Account.OnlineAccountTexts
// 0x07B0
struct FOnlineAccountTexts
{
	unsigned char                                      UnknownData00[0x7B0];                                     // 0x0000(0x07B0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
