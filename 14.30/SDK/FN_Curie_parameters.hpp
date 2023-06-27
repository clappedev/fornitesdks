#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Curie.CurieComponent.IsInteractingWithElement
struct UCurieComponent_IsInteractingWithElement_Params
{
	struct FGameplayTag                                Element;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Curie.CurieComponent.HasStateAttached
struct UCurieComponent_HasStateAttached_Params
{
	struct FGameplayTag                                StateIdentifier;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Curie.CurieComponent.HasElementAttached
struct UCurieComponent_HasElementAttached_Params
{
	struct FGameplayTag                                ElementIdentifier;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Curie.CurieComponent.HasAnyElementAttached
struct UCurieComponent_HasAnyElementAttached_Params
{
	struct FGameplayTagContainer                       ElementIdentifiers;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Curie.CurieComponent.HandleOwningActorDestroyed
struct UCurieComponent_HandleOwningActorDestroyed_Params
{
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Curie.CurieInterface.OnCurieStateDetached_BP
struct UCurieInterface_OnCurieStateDetached_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                StateTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieInterface.OnCurieStateConsumed_BP
struct UCurieInterface_OnCurieStateConsumed_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                StateTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieInterface.OnCurieStateAttached_BP
struct UCurieInterface_OnCurieStateAttached_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                StateTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieInterface.OnCurieElementInteractEnded_BP
struct UCurieInterface_OnCurieElementInteractEnded_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCurieInteractParamsHandle                  InteractParamsHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieInterface.OnCurieElementInteractBegun_BP
struct UCurieInterface_OnCurieElementInteractBegun_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCurieInteractParamsHandle                  InteractParamsHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieInterface.OnCurieElementInteract_BP
struct UCurieInterface_OnCurieElementInteract_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCurieInteractParamsHandle                  InteractParamsHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieInterface.OnCurieElementDetached_BP
struct UCurieInterface_OnCurieElementDetached_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieInterface.OnCurieElementAttached_BP
struct UCurieInterface_OnCurieElementAttached_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieInterface.OnCurieContainerShutdown_BP
struct UCurieInterface_OnCurieContainerShutdown_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieInterface.OnCurieContainerInitialized_BP
struct UCurieInterface_OnCurieContainerInitialized_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Curie.CurieManager.UnbindDelegateForCurieStateDetached
struct UCurieManager_UnbindDelegateForCurieStateDetached_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.UnbindDelegateForCurieStateAttached
struct UCurieManager_UnbindDelegateForCurieStateAttached_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.UnbindDelegateForCurieElementInteract
struct UCurieManager_UnbindDelegateForCurieElementInteract_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.UnbindDelegateForCurieElementEndInteract
struct UCurieManager_UnbindDelegateForCurieElementEndInteract_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.UnbindDelegateForCurieElementDetached
struct UCurieManager_UnbindDelegateForCurieElementDetached_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract
struct UCurieManager_UnbindDelegateForCurieElementBeginInteract_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.UnbindDelegateForCurieElementAttached
struct UCurieManager_UnbindDelegateForCurieElementAttached_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.BindDelegateForCurieStateDetached
struct UCurieManager_BindDelegateForCurieStateDetached_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.BindDelegateForCurieStateAttached
struct UCurieManager_BindDelegateForCurieStateAttached_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.BindDelegateForCurieElementInteract
struct UCurieManager_BindDelegateForCurieElementInteract_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.BindDelegateForCurieElementEndInteract
struct UCurieManager_BindDelegateForCurieElementEndInteract_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.BindDelegateForCurieElementDetached
struct UCurieManager_BindDelegateForCurieElementDetached_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.BindDelegateForCurieElementBeginInteract
struct UCurieManager_BindDelegateForCurieElementBeginInteract_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Curie.CurieManager.BindDelegateForCurieElementAttached
struct UCurieManager_BindDelegateForCurieElementAttached_Params
{
	class UObject*                                     CurieOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
