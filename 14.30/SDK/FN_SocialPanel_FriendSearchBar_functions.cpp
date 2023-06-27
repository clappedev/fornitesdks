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

// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.On_ClickCapture_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USocialPanel_FriendSearchBar_C::On_ClickCapture_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.On_ClickCapture_MouseButtonDown_1");

	USocialPanel_FriendSearchBar_C_On_ClickCapture_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_FriendSearchBar_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnHovered");

	USocialPanel_FriendSearchBar_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_FriendSearchBar_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnUnhovered");

	USocialPanel_FriendSearchBar_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.ExecuteUbergraph_SocialPanel_FriendSearchBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialPanel_FriendSearchBar_C::ExecuteUbergraph_SocialPanel_FriendSearchBar(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.ExecuteUbergraph_SocialPanel_FriendSearchBar");

	USocialPanel_FriendSearchBar_C_ExecuteUbergraph_SocialPanel_FriendSearchBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
