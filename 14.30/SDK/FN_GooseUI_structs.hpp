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

// Enum GooseUI.ERadarIconState
enum class ERadarIconState : uint8_t
{
	Closed                         = 0,
	Open                           = 1,
	ERadarIconState_MAX            = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GooseUI.GooseLeaderboardData
// 0x0028
struct FGooseLeaderboardData
{
	struct FText                                       SquadName;                                                // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                PlanesRemaining;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumOfPlaneEliminations;                                   // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnemySquad;                                              // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GooseUI.GoosePickupDisplayData
// 0x0020
struct FGoosePickupDisplayData
{
	struct FName                                       ChestName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0008(0x0018) (Edit)
};

// ScriptStruct GooseUI.GooseWeaponDisplayData
// 0x0038
struct FGooseWeaponDisplayData
{
	struct FGameplayTag                                WeaponTag;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ChestName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconTexture;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          IconMaterial;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
