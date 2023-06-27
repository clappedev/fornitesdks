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

// Function Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C.Get Creative Effect Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFCreativeEffectColorIndex Effect_Color                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_Device_Effects_Interface_C::Get_Creative_Effect_Data(struct FFCreativeEffectColorIndex* Effect_Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C.Get Creative Effect Data");

	UCreative_Device_Effects_Interface_C_Get_Creative_Effect_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect_Color != nullptr)
		*Effect_Color = params.Effect_Color;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
