#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{

};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A8
struct FInAppPurchaseProductInfo
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0030
struct FInAppPurchaseRestoreInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018
struct FInAppPurchaseProductRequest
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
