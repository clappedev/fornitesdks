
#include "../SDK.h"

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)

void UFoliageStatistics::STATIC_FoliageOverlappingSphereCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount");

	UFoliageStatistics_FoliageOverlappingSphereCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)

void UFoliageStatistics::STATIC_FoliageOverlappingBoxCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount");

	UFoliageStatistics_FoliageOverlappingBoxCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
