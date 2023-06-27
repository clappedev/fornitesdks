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

// Enum DataAssetDirectory.EDataAssetDirectoryUpdateStatus
enum class EDataAssetDirectoryUpdateStatus : uint8_t
{
	Failed                         = 0,
	Success                        = 1,
	SuccessNoChange                = 2,
	EDataAssetDirectoryUpdateStatus_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
