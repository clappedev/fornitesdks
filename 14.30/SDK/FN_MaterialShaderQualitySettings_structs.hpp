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

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	NoFiltering                    = 0,
	PCF_1x1                        = 1,
	PCF_2x2                        = 2,
	PCF_3x3                        = 3,
	EMobileCSMQuality_MAX          = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0009
struct FMaterialQualityOverrides
{
	bool                                               bDiscardQualityDuringCook;                                // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableOverride;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceFullyRough;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceNonMetal;                                           // 0x0003(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceDisableLMDirectionality;                            // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceLQReflections;                                      // 0x0005(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceDisablePreintegratedGF;                             // 0x0006(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisableMaterialNormalCalculation;                        // 0x0007(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EMobileCSMQuality                                  MobileCSMQuality;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
