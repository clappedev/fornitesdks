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

// Enum ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveMultiplier            = 4,
	EChaosWeightMapTarget_MAX      = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
