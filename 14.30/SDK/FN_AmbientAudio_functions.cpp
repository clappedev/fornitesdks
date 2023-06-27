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

// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayTag                    (Parm)

void UAmbientAudioStatics::STATIC_RemoveAmbientGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioStatics.RemoveAmbientGameplayTag");

	UAmbientAudioStatics_RemoveAmbientGameplayTag_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AmbientName                    (Parm, ZeroConstructor, IsPlainOldData)

void UAmbientAudioStatics::STATIC_RemoveAmbientEntry(class UObject* WorldContextObject, const struct FName& AmbientName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioStatics.RemoveAmbientEntry");

	UAmbientAudioStatics_RemoveAmbientEntry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AmbientName = AmbientName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientAudioStatics.PlaySoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UAmbientAudioStatics::STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioStatics.PlaySoundAtLocation");

	UAmbientAudioStatics_PlaySoundAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientAudioStatics.CreateAudioComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* UAmbientAudioStatics::STATIC_CreateAudioComponent(class UObject* WorldContextObject, class USoundBase* Sound)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioStatics.CreateAudioComponent");

	UAmbientAudioStatics_CreateAudioComponent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AmbientAudio.AmbientAudioStatics.AddAmbientGameplayTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayTag                    (Parm)

void UAmbientAudioStatics::STATIC_AddAmbientGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioStatics.AddAmbientGameplayTag");

	UAmbientAudioStatics_AddAmbientGameplayTag_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientAudioStatics.AddAmbientEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AmbientName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAmbientAudioDataAsset*  Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CrossfadeTime                  (Parm, ZeroConstructor, IsPlainOldData)

void UAmbientAudioStatics::STATIC_AddAmbientEntry(class UObject* WorldContextObject, const struct FName& AmbientName, class UAmbientAudioDataAsset* Asset, int Priority, float CrossfadeTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioStatics.AddAmbientEntry");

	UAmbientAudioStatics_AddAmbientEntry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AmbientName = AmbientName;
	params.Asset = Asset;
	params.Priority = Priority;
	params.CrossfadeTime = CrossfadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)

void UAmbientAudioSubsystem::RemoveGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag");

	UAmbientAudioSubsystem_RemoveGameplayTag_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AmbientName                    (Parm, ZeroConstructor, IsPlainOldData)

void UAmbientAudioSubsystem::RemoveAmbientEntry(const struct FName& AmbientName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry");

	UAmbientAudioSubsystem_RemoveAmbientEntry_Params params;
	params.AmbientName = AmbientName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)

void UAmbientAudioSubsystem::AddGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag");

	UAmbientAudioSubsystem_AddGameplayTag_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AmbientName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAmbientAudioDataAsset*  Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          CrossfadeTime                  (Parm, ZeroConstructor, IsPlainOldData)

void UAmbientAudioSubsystem::AddAmbientEntry(const struct FName& AmbientName, class UAmbientAudioDataAsset* Asset, int Priority, float CrossfadeTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry");

	UAmbientAudioSubsystem_AddAmbientEntry_Params params;
	params.AmbientName = AmbientName;
	params.Asset = Asset;
	params.Priority = Priority;
	params.CrossfadeTime = CrossfadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientVolume.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewPriority                    (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientVolume::SetPriority(int NewPriority)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientVolume.SetPriority");

	AAmbientVolume_SetPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewEnabled                    (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientVolume::SetEnabled(bool bNewEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientVolume.SetEnabled");

	AAmbientVolume_SetEnabled_Params params;
	params.bNewEnabled = bNewEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientVolume.SetCrossfadeTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewCrossfadeTime               (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientVolume::SetCrossfadeTime(float NewCrossfadeTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientVolume.SetCrossfadeTime");

	AAmbientVolume_SetCrossfadeTime_Params params;
	params.NewCrossfadeTime = NewCrossfadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientVolume.SetAmbientAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAmbientAudioDataAsset*  NewAmbientAsset                (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientVolume::SetAmbientAsset(class UAmbientAudioDataAsset* NewAmbientAsset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientVolume.SetAmbientAsset");

	AAmbientVolume_SetAmbientAsset_Params params;
	params.NewAmbientAsset = NewAmbientAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientAudio.AmbientVolume.OnRep_bEnabled
// (Native, Protected)

void AAmbientVolume::OnRep_bEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AmbientAudio.AmbientVolume.OnRep_bEnabled");

	AAmbientVolume_OnRep_bEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
