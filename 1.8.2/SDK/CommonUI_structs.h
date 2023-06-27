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

// Enum CommonUI.ECommonInputType
enum class ECommonInputType : uint8_t
{

};


// Enum CommonUI.EInputActionState
enum class EInputActionState : uint8_t
{

};


// Enum CommonUI.EItemAlignment
enum class EItemAlignment : uint8_t
{

};


// Enum CommonUI.ECommonPlatformType
enum class ECommonPlatformType : uint8_t
{

};


// Enum CommonUI.EOperation
enum class EOperation : uint8_t
{

};


// Enum CommonUI.ETransitionCurve
enum class ETransitionCurve : uint8_t
{

};


// Enum CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CommonUI.CommonNumberFormattingOptions
// 0x0014
struct FCommonNumberFormattingOptions
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct CommonUI.CommonRegisteredTabInfo
// 0x0018
struct FCommonRegisteredTabInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct CommonUI.CommonInputActionHandlerData
// 0x0018
struct FCommonInputActionHandlerData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct CommonUI.CommonInputActionData
// 0x02C8 (0x02D0 - 0x0008)
struct FCommonInputActionData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x2B0];                                     // 0x0020(0x02B0) MISSED OFFSET
};

// ScriptStruct CommonUI.CommonInputKeyDisplayData
// 0x0240
struct FCommonInputKeyDisplayData
{
	unsigned char                                      UnknownData00[0x240];                                     // 0x0000(0x0240) MISSED OFFSET
};

// ScriptStruct CommonUI.Operation
// 0x0018
struct FOperation
{
	EOperation                                         Operation;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct CommonUI.CommonInputKeyDisplayConfiguration
// 0x0258
struct FCommonInputKeyDisplayConfiguration
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x240];                                     // 0x0018(0x0240) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
