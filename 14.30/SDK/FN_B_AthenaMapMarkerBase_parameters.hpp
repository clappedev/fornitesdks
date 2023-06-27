#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript
struct AB_AthenaMapMarkerBase_C_UserConstructionScript_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__FinishedFunc
struct AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__FinishedFunc_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__UpdateFunc
struct AB_AthenaMapMarkerBase_C_SpawnMarkerAnim__UpdateFunc_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__FinishedFunc
struct AB_AthenaMapMarkerBase_C_OnProtoMarkerPlaced__FinishedFunc_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__UpdateFunc
struct AB_AthenaMapMarkerBase_C_OnProtoMarkerPlaced__UpdateFunc_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced
struct AB_AthenaMapMarkerBase_C_OnMarkerPlaced_Params
{
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker
struct AB_AthenaMapMarkerBase_C_OnSetupMarker_Params
{
	struct FFortWorldMarkerData                        MarkerData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerColorChanged
struct AB_AthenaMapMarkerBase_C_OnMarkerColorChanged_Params
{
	struct FLinearColor                                InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase
struct AB_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
