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

// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Melee_Effect_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Melee_Effect_Color");

	AB_Athena_Pickaxe_Generic_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UnbindSwingAnimTrailEvents
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::UnbindSwingAnimTrailEvents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UnbindSwingAnimTrailEvents");

	AB_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.BindSwingAnimTrailEvents
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::BindSwingAnimTrailEvents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.BindSwingAnimTrailEvents");

	AB_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayCQCPickaxeEnemyAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayCQCPickaxeEnemyAudio");

	AB_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio_Params params;
	params.Hit_Result = Hit_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetActiveAlterationIdleParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::SetActiveAlterationIdleParticles(bool Active, bool Reset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetActiveAlterationIdleParticles");

	AB_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles_Params params;
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::SetWpnRarity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetWpnRarity");

	AB_Athena_Pickaxe_Generic_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UserConstructionScript");

	AB_Athena_Pickaxe_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnStatChanged_F171C56748FEA3E19F93088E968D3E21
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   StatName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StatValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::OnStatChanged_F171C56748FEA3E19F93088E968D3E21(const struct FName& StatName, int StatValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnStatChanged_F171C56748FEA3E19F93088E968D3E21");

	AB_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2");

	AB_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           First_Right                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::MeleeSwingRight(bool First_Right)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight");

	AB_Athena_Pickaxe_Generic_C_MeleeSwingRight_Params params;
	params.First_Right = First_Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           First_Left                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::MeleeSwingLeft(bool First_Left)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft");

	AB_Athena_Pickaxe_Generic_C_MeleeSwingLeft_Params params;
	params.First_Left = First_Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::FootStepLeft()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepLeft");

	AB_Athena_Pickaxe_Generic_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::FootStepRight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepRight");

	AB_Athena_Pickaxe_Generic_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight_End
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::MeleeSwingRight_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight_End");

	AB_Athena_Pickaxe_Generic_C_MeleeSwingRight_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft_End
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::MeleeSwingLeft_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft_End");

	AB_Athena_Pickaxe_Generic_C_MeleeSwingLeft_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayWeaponFireFX");

	AB_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayRClickImpacts
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::PlayRClickImpacts()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayRClickImpacts");

	AB_Athena_Pickaxe_Generic_C_PlayRClickImpacts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::OnEquippedWeaponDestory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnEquippedWeaponDestory");

	AB_Athena_Pickaxe_Generic_C_OnEquippedWeaponDestory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::OnWeaponAttached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponAttached");

	AB_Athena_Pickaxe_Generic_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification CosmeticMod                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Athena_Pickaxe_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitCosmeticAlterations");

	AB_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations_Params params;
	params.CosmeticMod = CosmeticMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetForLocalControllerOnly     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponVisibilityChanged");

	AB_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged_Params params;
	params.bVisible = bVisible;
	params.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponDetached
// (Event, Public, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::OnWeaponDetached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponDetached");

	AB_Athena_Pickaxe_Generic_C_OnWeaponDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitWeaponCosmetics
// (Event, Protected, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::OnInitWeaponCosmetics()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitWeaponCosmetics");

	AB_Athena_Pickaxe_Generic_C_OnInitWeaponCosmetics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleKillWatch
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::HandleKillWatch()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleKillWatch");

	AB_Athena_Pickaxe_Generic_C_HandleKillWatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UpdateBasedOnKills
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::UpdateBasedOnKills()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UpdateBasedOnKills");

	AB_Athena_Pickaxe_Generic_C_UpdateBasedOnKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.CandyCaneUpdate
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::CandyCaneUpdate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.CandyCaneUpdate");

	AB_Athena_Pickaxe_Generic_C_CandyCaneUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Notify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::Anim_Trails_Notify(bool bActive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Notify");

	AB_Athena_Pickaxe_Generic_C_Anim_Trails_Notify_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Disable
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::Anim_Trails_Disable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Disable");

	AB_Athena_Pickaxe_Generic_C_Anim_Trails_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRight
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::SwingRight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRight");

	AB_Athena_Pickaxe_Generic_C_SwingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeft
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::SwingLeft()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeft");

	AB_Athena_Pickaxe_Generic_C_SwingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRightEnd
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::SwingRightEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRightEnd");

	AB_Athena_Pickaxe_Generic_C_SwingRightEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeftEnd
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::SwingLeftEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeftEnd");

	AB_Athena_Pickaxe_Generic_C_SwingLeftEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInstigatorSet
// (Event, Public, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::OnInstigatorSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInstigatorSet");

	AB_Athena_Pickaxe_Generic_C_OnInstigatorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Athena_Pickaxe_Generic_C::K2_OnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.K2_OnUnEquip");

	AB_Athena_Pickaxe_Generic_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_Generic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_Pickaxe_Generic_C::ExecuteUbergraph_B_Athena_Pickaxe_Generic(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_Generic");

	AB_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
