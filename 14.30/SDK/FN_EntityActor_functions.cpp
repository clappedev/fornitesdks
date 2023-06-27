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

// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UEntityActorCollisionComponent::OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorCollisionComponent.OnNativeComponentHit");

	UEntityActorCollisionComponent_OnNativeComponentHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorCollisionComponent::OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap");

	UEntityActorCollisionComponent_OnNativeComponentEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UEntityActorCollisionComponent::OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap");

	UEntityActorCollisionComponent_OnNativeComponentBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorPositionComponent.OnRootComponentChanged
// (Final, Native, Private)
// Parameters:
// class USceneComponent*         InRootComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsRootComponent               (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorPositionComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorPositionComponent.OnRootComponentChanged");

	UEntityActorPositionComponent_OnRootComponentChanged_Params params;
	params.InRootComponent = InRootComponent;
	params.bIsRootComponent = bIsRootComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorRotationComponent.OnRootComponentChanged
// (Final, Native, Private)
// Parameters:
// class USceneComponent*         InRootComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsRootComponent               (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorRotationComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorRotationComponent.OnRootComponentChanged");

	UEntityActorRotationComponent_OnRootComponentChanged_Params params;
	params.InRootComponent = InRootComponent;
	params.bIsRootComponent = bIsRootComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorScaleComponent.OnRootComponentChanged
// (Final, Native, Private)
// Parameters:
// class USceneComponent*         InRootComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsRootComponent               (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorScaleComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorScaleComponent.OnRootComponentChanged");

	UEntityActorScaleComponent_OnRootComponentChanged_Params params;
	params.InRootComponent = InRootComponent;
	params.bIsRootComponent = bIsRootComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorTextDisplayComponent.SetWorldSize
// (Final, Native, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorTextDisplayComponent::SetWorldSize(float Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.SetWorldSize");

	UEntityActorTextDisplayComponent_SetWorldSize_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EVerticalTextAligment> Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorTextDisplayComponent::SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment");

	UEntityActorTextDisplayComponent_SetVerticalAlignment_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FColor                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorTextDisplayComponent::SetTextRenderColor(const struct FColor& Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor");

	UEntityActorTextDisplayComponent_SetTextRenderColor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorTextDisplayComponent.SetText
// (Final, Native, Public)
// Parameters:
// struct FText                   Text                           (Parm)

void UEntityActorTextDisplayComponent::SetText(const struct FText& Text)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.SetText");

	UEntityActorTextDisplayComponent_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeScale
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 RelativeScale                  (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorTextDisplayComponent::SetRelativeScale(const struct FVector& RelativeScale)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.SetRelativeScale");

	UEntityActorTextDisplayComponent_SetRelativeScale_Params params;
	params.RelativeScale = RelativeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FRotator                RelativeRotation               (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorTextDisplayComponent::SetRelativeRotation(const struct FRotator& RelativeRotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation");

	UEntityActorTextDisplayComponent_SetRelativeRotation_Params params;
	params.RelativeRotation = RelativeRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 RelativeLocation               (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorTextDisplayComponent::SetRelativeLocation(const struct FVector& RelativeLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation");

	UEntityActorTextDisplayComponent_SetRelativeLocation_Params params;
	params.RelativeLocation = RelativeLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EHorizTextAligment> Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UEntityActorTextDisplayComponent::SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment");

	UEntityActorTextDisplayComponent_SetHorizontalAlignment_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityActorTextDisplayComponent.GetWorldSize
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEntityActorTextDisplayComponent::GetWorldSize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.GetWorldSize");

	UEntityActorTextDisplayComponent_GetWorldSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EVerticalTextAligment> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EVerticalTextAligment> UEntityActorTextDisplayComponent::GetVerticalAlignment()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment");

	UEntityActorTextDisplayComponent_GetVerticalAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor UEntityActorTextDisplayComponent::GetTextRenderColor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor");

	UEntityActorTextDisplayComponent_GetTextRenderColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EntityActor.EntityActorTextDisplayComponent.GetText
// (Final, Native, Public, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEntityActorTextDisplayComponent::GetText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.GetText");

	UEntityActorTextDisplayComponent_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEntityActorTextDisplayComponent::GetRelativeLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation");

	UEntityActorTextDisplayComponent_GetRelativeLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EHorizTextAligment> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EHorizTextAligment> UEntityActorTextDisplayComponent::GetHorizontalAlignment()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment");

	UEntityActorTextDisplayComponent_GetHorizontalAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget
// (Final, Native, Private)

void UEntityDynamicActivationComponent::OnRep_TransitionTarget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget");

	UEntityDynamicActivationComponent_OnRep_TransitionTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EntityActor.EntityDynamicActivationComponent.OnEnabledChanged
// (Final, Native, Public)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UEntityDynamicActivationComponent::OnEnabledChanged(bool bIsEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EntityActor.EntityDynamicActivationComponent.OnEnabledChanged");

	UEntityDynamicActivationComponent_OnEnabledChanged_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
