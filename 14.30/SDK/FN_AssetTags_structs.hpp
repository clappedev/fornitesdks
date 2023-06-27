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

// Enum AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
	Local                          = 0,
	Private                        = 1,
	Shared                         = 2,
	ECollectionScriptingShareType_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
