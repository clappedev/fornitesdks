#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PackResource.PackResource_C.UpdateType
struct UPackResource_C_UpdateType_Params
{
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PackResource.PackResource_C.UpdateCount
struct UPackResource_C_UpdateCount_Params
{
};

// Function PackResource.PackResource_C.Construct
struct UPackResource_C_Construct_Params
{
};

// Function PackResource.PackResource_C.ExecuteUbergraph_PackResource
struct UPackResource_C_ExecuteUbergraph_PackResource_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
