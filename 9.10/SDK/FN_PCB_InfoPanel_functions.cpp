// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PCB_InfoPanel.PCB_InfoPanel_C.CmsDataRead
// (Event, Public, BlueprintEvent)

void UPCB_InfoPanel_C::CmsDataRead()
{
	static auto fn = UObject::FindObject<UFunction>("Function PCB_InfoPanel.PCB_InfoPanel_C.CmsDataRead");

	UPCB_InfoPanel_C_CmsDataRead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PCB_InfoPanel.PCB_InfoPanel_C.ExecuteUbergraph_PCB_InfoPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPCB_InfoPanel_C::ExecuteUbergraph_PCB_InfoPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PCB_InfoPanel.PCB_InfoPanel_C.ExecuteUbergraph_PCB_InfoPanel");

	UPCB_InfoPanel_C_ExecuteUbergraph_PCB_InfoPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
