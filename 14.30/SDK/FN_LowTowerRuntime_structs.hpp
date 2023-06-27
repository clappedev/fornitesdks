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

// Enum LowTowerRuntime.EHardyExtractionReason
enum class EHardyExtractionReason : uint8_t
{
	Death                          = 0,
	Storm                          = 1,
	InventoryFull                  = 2,
	TimerRunningOut                = 3,
	Unknown                        = 4,
	EHardyExtractionReason_MAX     = 5
};


// Enum LowTowerRuntime.ELaurelExtractionReason
enum class ELaurelExtractionReason : uint8_t
{
	Death                          = 0,
	HardyExtraction                = 1,
	Unknown                        = 2,
	ELaurelExtractionReason_MAX    = 3
};


// Enum LowTowerRuntime.ELaurelType
enum class ELaurelType : uint8_t
{
	Gatherer                       = 0,
	Defender                       = 1,
	Unknown                        = 2,
	ELaurelType_MAX                = 3
};


// Enum LowTowerRuntime.ELaurelDropItemReason
enum class ELaurelDropItemReason : uint8_t
{
	Combat                         = 0,
	Hardy                          = 1,
	MAX                            = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
