// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnReady_8BE6ADB6479A5EF3145F32B245E584C6
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortPlaylist*           Playlist                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AHotfix_Container_Parent_C::OnReady_8BE6ADB6479A5EF3145F32B245E584C6(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnReady_8BE6ADB6479A5EF3145F32B245E584C6");

	AHotfix_Container_Parent_C_OnReady_8BE6ADB6479A5EF3145F32B245E584C6_Params params;
	params.GameState = GameState;
	params.Playlist = Playlist;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHotfix_Container_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ReceiveBeginPlay");

	AHotfix_Container_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnLoot
// (Event, Public, BlueprintEvent)

void AHotfix_Container_Parent_C::OnLoot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.OnLoot");

	AHotfix_Container_Parent_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ExecuteUbergraph_Hotfix_Container_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHotfix_Container_Parent_C::ExecuteUbergraph_Hotfix_Container_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Hotfix_Container_Parent.Hotfix_Container_Parent_C.ExecuteUbergraph_Hotfix_Container_Parent");

	AHotfix_Container_Parent_C_ExecuteUbergraph_Hotfix_Container_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
