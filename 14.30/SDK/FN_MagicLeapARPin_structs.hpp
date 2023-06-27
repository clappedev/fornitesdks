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

// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8_t
{
	OnlyOnDataRestoration          = 0,
	Always                         = 1,
	Never                          = 2,
	EMagicLeapAutoPinType_MAX      = 3
};


// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8_t
{
	None                           = 0,
	LowMapQuality                  = 1,
	UnableToLocalize               = 2,
	Unavailable                    = 3,
	PrivilegeDenied                = 4,
	InvalidParam                   = 5,
	UnspecifiedFailure             = 6,
	PrivilegeRequestPending        = 7,
	StartupPending                 = 8,
	NotImplemented                 = 9,
	PinNotFound                    = 10,
	EMagicLeapPassableWorldError_MAX = 11
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
// 0x0010
struct FMagicLeapARPinState
{
	float                                              Confidence;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ValidRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RotationError;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TranslationError;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
