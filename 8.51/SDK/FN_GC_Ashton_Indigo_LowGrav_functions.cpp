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

// Function GC_Ashton_Indigo_LowGrav.GC_Ashton_Indigo_LowGrav_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGC_Ashton_Indigo_LowGrav_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Ashton_Indigo_LowGrav.GC_Ashton_Indigo_LowGrav_C.OnLoopingStart");

	AGC_Ashton_Indigo_LowGrav_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Ashton_Indigo_LowGrav.GC_Ashton_Indigo_LowGrav_C.Activation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  My_Target                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Ashton_Indigo_LowGrav_C::Activation(class AActor* My_Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Ashton_Indigo_LowGrav.GC_Ashton_Indigo_LowGrav_C.Activation");

	AGC_Ashton_Indigo_LowGrav_C_Activation_Params params;
	params.My_Target = My_Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Ashton_Indigo_LowGrav.GC_Ashton_Indigo_LowGrav_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Ashton_Indigo_LowGrav_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Ashton_Indigo_LowGrav.GC_Ashton_Indigo_LowGrav_C.ReceiveTick");

	AGC_Ashton_Indigo_LowGrav_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Ashton_Indigo_LowGrav.GC_Ashton_Indigo_LowGrav_C.ExecuteUbergraph_GC_Ashton_Indigo_LowGrav
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Ashton_Indigo_LowGrav_C::ExecuteUbergraph_GC_Ashton_Indigo_LowGrav(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Ashton_Indigo_LowGrav.GC_Ashton_Indigo_LowGrav_C.ExecuteUbergraph_GC_Ashton_Indigo_LowGrav");

	AGC_Ashton_Indigo_LowGrav_C_ExecuteUbergraph_GC_Ashton_Indigo_LowGrav_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
