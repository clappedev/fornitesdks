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

// Function FoleySound.FoleySoundSubsystem.RemoveLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UFoleySoundLibrary*      Library                        (Parm, ZeroConstructor, IsPlainOldData)

void UFoleySoundSubsystem::RemoveLibrary(class AActor* Actor, class UFoleySoundLibrary* Library)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FoleySound.FoleySoundSubsystem.RemoveLibrary");

	UFoleySoundSubsystem_RemoveLibrary_Params params;
	params.Actor = Actor;
	params.Library = Library;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FoleySound.FoleySoundSubsystem.AddLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UFoleySoundLibrary*      Library                        (Parm, ZeroConstructor, IsPlainOldData)

void UFoleySoundSubsystem::AddLibrary(class AActor* Actor, class UFoleySoundLibrary* Library)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FoleySound.FoleySoundSubsystem.AddLibrary");

	UFoleySoundSubsystem_AddLibrary_Params params;
	params.Actor = Actor;
	params.Library = Library;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
