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

// Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color");

	AB_Melee_Generic_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;
}


// Function B_Melee_Generic.B_Melee_Generic_C.PlayCQCPickaxeEnemyAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_Melee_Generic_C::PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.PlayCQCPickaxeEnemyAudio");

	AB_Melee_Generic_C_PlayCQCPickaxeEnemyAudio_Params params;
	params.Hit_Result = Hit_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.SetActiveAlterationIdleParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::SetActiveAlterationIdleParticles(bool Active, bool Reset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.SetActiveAlterationIdleParticles");

	AB_Melee_Generic_C_SetActiveAlterationIdleParticles_Params params;
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::SetWpnRarity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity");

	AB_Melee_Generic_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript");

	AB_Melee_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48");

	AB_Melee_Generic_C_OnLoaded_CB594210420542B302428F8181D85E48_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           First_Right                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::MeleeSwingRight(bool First_Right)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight");

	AB_Melee_Generic_C_MeleeSwingRight_Params params;
	params.First_Right = First_Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           First_Left                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::MeleeSwingLeft(bool First_Left)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft");

	AB_Melee_Generic_C_MeleeSwingLeft_Params params;
	params.First_Left = First_Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::FootStepLeft()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft");

	AB_Melee_Generic_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::FootStepRight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight");

	AB_Melee_Generic_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight_End
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::MeleeSwingRight_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight_End");

	AB_Melee_Generic_C_MeleeSwingRight_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft_End
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::MeleeSwingLeft_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft_End");

	AB_Melee_Generic_C_MeleeSwingLeft_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Melee_Generic_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay");

	AB_Melee_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX");

	AB_Melee_Generic_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts
// (BlueprintCallable, BlueprintEvent)

void AB_Melee_Generic_C::PlayRClickImpacts()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts");

	AB_Melee_Generic_C_PlayRClickImpacts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  ImpactPhysicalSurface          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFXSystemComponent*      SpawnedPSC                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Melee_Generic_C::OnPlayImpactFX(const struct FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX");

	AB_Melee_Generic_C_OnPlayImpactFX_Params params;
	params.HitResult = HitResult;
	params.ImpactPhysicalSurface = ImpactPhysicalSurface;
	params.SpawnedPSC = SpawnedPSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Melee_Generic_C::OnEquippedWeaponDestory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory");

	AB_Melee_Generic_C_OnEquippedWeaponDestory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Melee_Generic_C::OnWeaponAttached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached");

	AB_Melee_Generic_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification CosmeticMod                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Melee_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations");

	AB_Melee_Generic_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetForLocalControllerOnly     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponVisibilityChanged");

	AB_Melee_Generic_C_OnWeaponVisibilityChanged_Params params;
	params.bVisible = bVisible;
	params.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponDetached
// (Event, Public, BlueprintEvent)

void AB_Melee_Generic_C::OnWeaponDetached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponDetached");

	AB_Melee_Generic_C_OnWeaponDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Generic_C::ExecuteUbergraph_B_Melee_Generic(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic");

	AB_Melee_Generic_C_ExecuteUbergraph_B_Melee_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
