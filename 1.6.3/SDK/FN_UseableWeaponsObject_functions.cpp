// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UseableWeaponsObject.UseableWeaponsObject_C.ExecuteUbergraph_UseableWeaponsObject
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUseableWeaponsObject_C::ExecuteUbergraph_UseableWeaponsObject(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UseableWeaponsObject.UseableWeaponsObject_C.ExecuteUbergraph_UseableWeaponsObject");

	UUseableWeaponsObject_C_ExecuteUbergraph_UseableWeaponsObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
