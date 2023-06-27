#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	FavorTop                       = 0,
	FavorBottom                    = 1,
	EThreePlayerSplitScreenType_MAX = 2
};


// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	ETwoPlayerSplitScreenType_MAX  = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0028
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Desc;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct EngineSettings.GameModeName
// 0x0020
struct FGameModeName
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FStringClassReference                       GameMode;                                                 // 0x0010(0x0010) (CPF_Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
