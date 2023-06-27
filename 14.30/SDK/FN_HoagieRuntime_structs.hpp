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

// Enum HoagieRuntime.EHoagieBoostState
enum class EHoagieBoostState : uint8_t
{
	Unknown                        = 0,
	Ready                          = 1,
	Started                        = 2,
	Finished                       = 3,
	Failed                         = 4,
	EHoagieBoostState_MAX          = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HoagieRuntime.FortHeliFlightModel
// 0x0110
struct FFortHeliFlightModel
{
	unsigned char                                      UnknownData00[0x108];                                     // 0x0000(0x0108) MISSED OFFSET
	class UFortHoagieVehicleConfigs*                   Configs;                                                  // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct HoagieRuntime.RotorHit
// 0x000C
struct FRotorHit
{
	TWeakObjectPtr<class AActor>                       HitActor;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastHitTimer;                                             // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct HoagieRuntime.CachedSeatCollision
// 0x0008
struct FCachedSeatCollision
{
	int                                                SeatIndex;                                                // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOccupied;                                                // 0x0004(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct HoagieRuntime.ReplicatedHeliControlState
// 0x0018
struct FReplicatedHeliControlState
{
	struct FVector_NetQuantizeNormal                   Up;                                                       // 0x0000(0x000C)
	struct FVector_NetQuantizeNormal                   Forward;                                                  // 0x000C(0x000C)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
