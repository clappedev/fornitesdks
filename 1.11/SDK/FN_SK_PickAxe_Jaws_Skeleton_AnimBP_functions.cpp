// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C.ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_PickAxe_Jaws_Skeleton_AnimBP_C::ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C.ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP");

	USK_PickAxe_Jaws_Skeleton_AnimBP_C_ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
