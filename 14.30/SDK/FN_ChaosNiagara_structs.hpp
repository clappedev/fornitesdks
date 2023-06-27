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

// Enum ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8_t
{
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max               = 4
};


// Enum ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8_t
{
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max               = 4
};


// Enum ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8_t
{
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max               = 4
};


// Enum ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8_t
{
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max               = 2
};


// Enum ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8_t
{
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max               = 3
};


// Enum ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8_t
{
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max               = 3
};


// Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max               = 3
};


// Enum ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8_t
{
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max               = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChaosNiagara.ChaosDestructionEvent
// 0x0044
struct FChaosDestructionEvent
{
	struct FVector                                     position;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExtentMin;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExtentMax;                                                // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ParticleID;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
