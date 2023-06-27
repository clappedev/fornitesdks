// Fortnite (8.51) SDK
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

// Function LoveStorm_MenuMap.LoveStorm_MenuMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALoveStorm_MenuMap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoveStorm_MenuMap.LoveStorm_MenuMap_C.ReceiveBeginPlay");

	ALoveStorm_MenuMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoveStorm_MenuMap.LoveStorm_MenuMap_C.ExecuteUbergraph_LoveStorm_MenuMap
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALoveStorm_MenuMap_C::ExecuteUbergraph_LoveStorm_MenuMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoveStorm_MenuMap.LoveStorm_MenuMap_C.ExecuteUbergraph_LoveStorm_MenuMap");

	ALoveStorm_MenuMap_C_ExecuteUbergraph_LoveStorm_MenuMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
