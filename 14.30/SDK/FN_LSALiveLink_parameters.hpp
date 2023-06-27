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

// Function LSALiveLink.LSALiveLinkDataHandler.StopTrackingLiveLinkSubject
struct ULSALiveLinkDataHandler_StopTrackingLiveLinkSubject_Params
{
	struct FLiveStreamAnimationHandleWrapper           RegisteredName;                                           // (ConstParm, Parm)
};

// Function LSALiveLink.LSALiveLinkDataHandler.StartTrackingLiveLinkSubject
struct ULSALiveLinkDataHandler_StartTrackingLiveLinkSubject_Params
{
	struct FName                                       LiveLinkSubject;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLiveStreamAnimationHandleWrapper           RegisteredName;                                           // (ConstParm, Parm)
	struct FLSALiveLinkSourceOptions                   Options;                                                  // (ConstParm, Parm)
	struct FLiveStreamAnimationHandleWrapper           TranslationProfile;                                       // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StopTrackingSkelMesh
struct ULiveLinkTestSkelMeshTrackerComponent_StopTrackingSkelMesh_Params
{
};

// Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StartTrackingSkelMesh
struct ULiveLinkTestSkelMeshTrackerComponent_StartTrackingSkelMesh_Params
{
	struct FName                                       InSubjectName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
