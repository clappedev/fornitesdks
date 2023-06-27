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

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.GetCharacterPartTypeMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Fort_Player_Pawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortCustomPartType> PartType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_GhostMode_C::GetCharacterPartTypeMaterials(class AFortPlayerPawn* Fort_Player_Pawn, TEnumAsByte<EFortCustomPartType> PartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.GetCharacterPartTypeMaterials");

	AGCN_Loop_GhostMode_C_GetCharacterPartTypeMaterials_Params params;
	params.Fort_Player_Pawn = Fort_Player_Pawn;
	params.PartType = PartType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__FinishedFunc
// (BlueprintEvent)

void AGCN_Loop_GhostMode_C::FadeMaterialsTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__FinishedFunc");

	AGCN_Loop_GhostMode_C_FadeMaterialsTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__UpdateFunc
// (BlueprintEvent)

void AGCN_Loop_GhostMode_C::FadeMaterialsTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__UpdateFunc");

	AGCN_Loop_GhostMode_C_FadeMaterialsTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_Loop_GhostMode_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnLoopingStart");

	AGCN_Loop_GhostMode_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnRemoval
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraShake*            BurstCameraShakeInstance       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADecalActor*             BurstDecalInstance             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_GhostMode_C::OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnRemoval");

	AGCN_Loop_GhostMode_C_OnRemoval_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;
	params.BurstCameraShakeInstance = BurstCameraShakeInstance;
	params.BurstDecalInstance = BurstDecalInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsIn
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_GhostMode_C::FadeMaterialsIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsIn");

	AGCN_Loop_GhostMode_C_FadeMaterialsIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsOut
// (BlueprintCallable, BlueprintEvent)

void AGCN_Loop_GhostMode_C::FadeMaterialsOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsOut");

	AGCN_Loop_GhostMode_C_FadeMaterialsOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.ExecuteUbergraph_GCN_Loop_GhostMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Loop_GhostMode_C::ExecuteUbergraph_GCN_Loop_GhostMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.ExecuteUbergraph_GCN_Loop_GhostMode");

	AGCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
