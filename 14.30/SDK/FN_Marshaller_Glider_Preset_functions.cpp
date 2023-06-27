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

// Function Marshaller_Glider_Preset.Marshaller_Glider_Preset_C.ExecuteUbergraph_Marshaller_Glider_Preset
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMarshaller_Glider_Preset_C::ExecuteUbergraph_Marshaller_Glider_Preset(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Marshaller_Glider_Preset.Marshaller_Glider_Preset_C.ExecuteUbergraph_Marshaller_Glider_Preset");

	UMarshaller_Glider_Preset_C_ExecuteUbergraph_Marshaller_Glider_Preset_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
