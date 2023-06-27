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

// Function LSALiveLink.LSALiveLinkDataHandler.StopTrackingLiveLinkSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveStreamAnimationHandleWrapper RegisteredName                 (ConstParm, Parm)

void ULSALiveLinkDataHandler::StopTrackingLiveLinkSubject(const struct FLiveStreamAnimationHandleWrapper& RegisteredName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LSALiveLink.LSALiveLinkDataHandler.StopTrackingLiveLinkSubject");

	ULSALiveLinkDataHandler_StopTrackingLiveLinkSubject_Params params;
	params.RegisteredName = RegisteredName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LSALiveLink.LSALiveLinkDataHandler.StartTrackingLiveLinkSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LiveLinkSubject                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveStreamAnimationHandleWrapper RegisteredName                 (ConstParm, Parm)
// struct FLSALiveLinkSourceOptions Options                        (ConstParm, Parm)
// struct FLiveStreamAnimationHandleWrapper TranslationProfile             (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULSALiveLinkDataHandler::StartTrackingLiveLinkSubject(const struct FName& LiveLinkSubject, const struct FLiveStreamAnimationHandleWrapper& RegisteredName, const struct FLSALiveLinkSourceOptions& Options, const struct FLiveStreamAnimationHandleWrapper& TranslationProfile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LSALiveLink.LSALiveLinkDataHandler.StartTrackingLiveLinkSubject");

	ULSALiveLinkDataHandler_StartTrackingLiveLinkSubject_Params params;
	params.LiveLinkSubject = LiveLinkSubject;
	params.RegisteredName = RegisteredName;
	params.Options = Options;
	params.TranslationProfile = TranslationProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StopTrackingSkelMesh
// (Final, Native, Public, BlueprintCallable)

void ULiveLinkTestSkelMeshTrackerComponent::StopTrackingSkelMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StopTrackingSkelMesh");

	ULiveLinkTestSkelMeshTrackerComponent_StopTrackingSkelMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StartTrackingSkelMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InSubjectName                  (Parm, ZeroConstructor, IsPlainOldData)

void ULiveLinkTestSkelMeshTrackerComponent::StartTrackingSkelMesh(const struct FName& InSubjectName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StartTrackingSkelMesh");

	ULiveLinkTestSkelMeshTrackerComponent_StartTrackingSkelMesh_Params params;
	params.InSubjectName = InSubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
