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

// Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnReady_8BE6ADB6479A5EF3145F32B245E584C6
struct AHotfix_Container_Parent_C_OnReady_8BE6ADB6479A5EF3145F32B245E584C6_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ReceiveBeginPlay
struct AHotfix_Container_Parent_C_ReceiveBeginPlay_Params
{
};

// Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnLoot
struct AHotfix_Container_Parent_C_OnLoot_Params
{
};

// Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ExecuteUbergraph_Hotfix_Container_Parent
struct AHotfix_Container_Parent_C_ExecuteUbergraph_Hotfix_Container_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
