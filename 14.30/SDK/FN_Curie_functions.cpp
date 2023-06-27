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

// Function Curie.CurieComponent.IsInteractingWithElement
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            Element                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCurieComponent::IsInteractingWithElement(const struct FGameplayTag& Element)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieComponent.IsInteractingWithElement");

	UCurieComponent_IsInteractingWithElement_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Curie.CurieComponent.HasStateAttached
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            StateIdentifier                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCurieComponent::HasStateAttached(const struct FGameplayTag& StateIdentifier)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieComponent.HasStateAttached");

	UCurieComponent_HasStateAttached_Params params;
	params.StateIdentifier = StateIdentifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Curie.CurieComponent.HasElementAttached
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ElementIdentifier              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCurieComponent::HasElementAttached(const struct FGameplayTag& ElementIdentifier)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieComponent.HasElementAttached");

	UCurieComponent_HasElementAttached_Params params;
	params.ElementIdentifier = ElementIdentifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Curie.CurieComponent.HasAnyElementAttached
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   ElementIdentifiers             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCurieComponent::HasAnyElementAttached(const struct FGameplayTagContainer& ElementIdentifiers)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieComponent.HasAnyElementAttached");

	UCurieComponent_HasAnyElementAttached_Params params;
	params.ElementIdentifiers = ElementIdentifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Curie.CurieComponent.HandleOwningActorDestroyed
// (Native, Protected)
// Parameters:
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UCurieComponent::HandleOwningActorDestroyed(class AActor* Owner)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieComponent.HandleOwningActorDestroyed");

	UCurieComponent_HandleOwningActorDestroyed_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieStateDetached_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            StateTag                       (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieStateDetached_BP");

	UCurieInterface_OnCurieStateDetached_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.StateTag = StateTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieStateConsumed_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            StateTag                       (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieStateConsumed_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieStateConsumed_BP");

	UCurieInterface_OnCurieStateConsumed_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.StateTag = StateTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieStateAttached_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            StateTag                       (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieStateAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieStateAttached_BP");

	UCurieInterface_OnCurieStateAttached_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.StateTag = StateTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieElementInteractEnded_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FCurieInteractParamsHandle InteractParamsHandle           (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieElementInteractEnded_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieElementInteractEnded_BP");

	UCurieInterface_OnCurieElementInteractEnded_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;
	params.InteractParamsHandle = InteractParamsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieElementInteractBegun_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FCurieInteractParamsHandle InteractParamsHandle           (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieElementInteractBegun_BP");

	UCurieInterface_OnCurieElementInteractBegun_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;
	params.InteractParamsHandle = InteractParamsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieElementInteract_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FCurieInteractParamsHandle InteractParamsHandle           (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieElementInteract_BP");

	UCurieInterface_OnCurieElementInteract_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;
	params.InteractParamsHandle = InteractParamsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieElementDetached_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieElementDetached_BP");

	UCurieInterface_OnCurieElementDetached_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieElementAttached_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieElementAttached_BP");

	UCurieInterface_OnCurieElementAttached_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieContainerShutdown_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieContainerShutdown_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieContainerShutdown_BP");

	UCurieInterface_OnCurieContainerShutdown_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieInterface.OnCurieContainerInitialized_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, Parm, OutParm, ReferenceParm)

void UCurieInterface::OnCurieContainerInitialized_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieInterface.OnCurieContainerInitialized_BP");

	UCurieInterface_OnCurieContainerInitialized_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.UnbindDelegateForCurieStateDetached
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::UnbindDelegateForCurieStateDetached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.UnbindDelegateForCurieStateDetached");

	UCurieManager_UnbindDelegateForCurieStateDetached_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.UnbindDelegateForCurieStateAttached
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::UnbindDelegateForCurieStateAttached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.UnbindDelegateForCurieStateAttached");

	UCurieManager_UnbindDelegateForCurieStateAttached_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementInteract
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::UnbindDelegateForCurieElementInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.UnbindDelegateForCurieElementInteract");

	UCurieManager_UnbindDelegateForCurieElementInteract_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementEndInteract
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::UnbindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.UnbindDelegateForCurieElementEndInteract");

	UCurieManager_UnbindDelegateForCurieElementEndInteract_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementDetached
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::UnbindDelegateForCurieElementDetached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.UnbindDelegateForCurieElementDetached");

	UCurieManager_UnbindDelegateForCurieElementDetached_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::UnbindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract");

	UCurieManager_UnbindDelegateForCurieElementBeginInteract_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.UnbindDelegateForCurieElementAttached
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::UnbindDelegateForCurieElementAttached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.UnbindDelegateForCurieElementAttached");

	UCurieManager_UnbindDelegateForCurieElementAttached_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.BindDelegateForCurieStateDetached
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::BindDelegateForCurieStateDetached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.BindDelegateForCurieStateDetached");

	UCurieManager_BindDelegateForCurieStateDetached_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.BindDelegateForCurieStateAttached
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::BindDelegateForCurieStateAttached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.BindDelegateForCurieStateAttached");

	UCurieManager_BindDelegateForCurieStateAttached_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.BindDelegateForCurieElementInteract
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::BindDelegateForCurieElementInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.BindDelegateForCurieElementInteract");

	UCurieManager_BindDelegateForCurieElementInteract_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.BindDelegateForCurieElementEndInteract
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::BindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.BindDelegateForCurieElementEndInteract");

	UCurieManager_BindDelegateForCurieElementEndInteract_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.BindDelegateForCurieElementDetached
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::BindDelegateForCurieElementDetached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.BindDelegateForCurieElementDetached");

	UCurieManager_BindDelegateForCurieElementDetached_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.BindDelegateForCurieElementBeginInteract
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::BindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.BindDelegateForCurieElementBeginInteract");

	UCurieManager_BindDelegateForCurieElementBeginInteract_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Curie.CurieManager.BindDelegateForCurieElementAttached
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 CurieOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCurieManager::BindDelegateForCurieElementAttached(class UObject* CurieOwner, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Curie.CurieManager.BindDelegateForCurieElementAttached");

	UCurieManager_BindDelegateForCurieElementAttached_Params params;
	params.CurieOwner = CurieOwner;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
