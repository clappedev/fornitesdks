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

// Function SmartObjectsModule.AITask_UseSmartObject.UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SmartObjectActor               (Parm, ZeroConstructor, IsPlainOldData)
// class USmartObjectComponent*   SmartObjectComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bLockAILogic                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAITask_UseSmartObject*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAITask_UseSmartObject* UAITask_UseSmartObject::STATIC_UseSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SmartObjectsModule.AITask_UseSmartObject.UseSmartObject");

	UAITask_UseSmartObject_UseSmartObject_Params params;
	params.Controller = Controller;
	params.SmartObjectActor = SmartObjectActor;
	params.SmartObjectComponent = SmartObjectComponent;
	params.bLockAILogic = bLockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Avatar                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USmartObjectBlueprintFunctionLibrary::STATIC_K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_UseSmartObject");

	USmartObjectBlueprintFunctionLibrary_K2_UseSmartObject_Params params;
	params.Avatar = Avatar;
	params.SmartObject = SmartObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USmartObjectBlueprintFunctionLibrary::STATIC_K2_SetSmartObjectEnabled(class AActor* SmartObject, bool bEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled");

	USmartObjectBlueprintFunctionLibrary_K2_SetSmartObjectEnabled_Params params;
	params.SmartObject = SmartObject;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_RemoveLooseGameplayTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   GameplayTags                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USmartObjectBlueprintFunctionLibrary::STATIC_K2_RemoveLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_RemoveLooseGameplayTags");

	USmartObjectBlueprintFunctionLibrary_K2_RemoveLooseGameplayTags_Params params;
	params.Actor = Actor;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_AddLooseGameplayTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   GameplayTags                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USmartObjectBlueprintFunctionLibrary::STATIC_K2_AddLooseGameplayTags(class AActor* Actor, const struct FGameplayTagContainer& GameplayTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_AddLooseGameplayTags");

	USmartObjectBlueprintFunctionLibrary_K2_AddLooseGameplayTags_Params params;
	params.Actor = Actor;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
