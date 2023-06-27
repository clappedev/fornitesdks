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

// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// TArray<struct FName>           TransformNames                 (Parm, OutParm, ZeroConstructor)

void ULiveLinkBlueprintLibrary::STATIC_TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformNames");

	ULiveLinkBlueprintLibrary_TransformNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (TransformNames != nullptr)
		*TransformNames = params.TransformNames;
}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULiveLinkBlueprintLibrary::STATIC_TransformName(struct FLiveLinkTransform* LiveLinkTransform, struct FName* Name)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformName");

	ULiveLinkBlueprintLibrary_TransformName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Name != nullptr)
		*Name = params.Name;
}


// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey     SubjectKey                     (ConstParm, Parm)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled");

	ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params params;
	params.SubjectKey = SubjectKey;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::STATIC_RemoveSource(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource");

	ULiveLinkBlueprintLibrary_RemoveSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ULiveLinkBlueprintLibrary::STATIC_ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform");

	ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULiveLinkBlueprintLibrary::STATIC_NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms");

	ULiveLinkBlueprintLibrary_NumberOfTransforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey     SubjectKey                     (ConstParm, Parm)
// bool                           bForThisFrame                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled");

	ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params params;
	params.SubjectKey = SubjectKey;
	params.bForThisFrame = bForThisFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::STATIC_IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid");

	ULiveLinkBlueprintLibrary_IsSourceStillValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled");

	ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::STATIC_HasParent(struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.HasParent");

	ULiveLinkBlueprintLibrary_HasParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// struct FName                   TransformName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm)

void ULiveLinkBlueprintLibrary::STATIC_GetTransformByName(const struct FName& TransformName, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName");

	ULiveLinkBlueprintLibrary_GetTransformByName_Params params;
	params.TransformName = TransformName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// int                            TransformIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm)

void ULiveLinkBlueprintLibrary::STATIC_GetTransformByIndex(int TransformIndex, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex");

	ULiveLinkBlueprintLibrary_GetTransformByIndex_Params params;
	params.TransformIndex = TransformIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey     SubjectKey                     (ConstParm, Parm)
// class ULiveLinkRole*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiveLinkRole* ULiveLinkBlueprintLibrary::STATIC_GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole");

	ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params params;
	params.SubjectKey = SubjectKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULiveLinkBlueprintLibrary::STATIC_GetSourceType(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType");

	ULiveLinkBlueprintLibrary_GetSourceType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULiveLinkBlueprintLibrary::STATIC_GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus");

	ULiveLinkBlueprintLibrary_GetSourceStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULiveLinkBlueprintLibrary::STATIC_GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName");

	ULiveLinkBlueprintLibrary_GetSourceMachineName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm)

void ULiveLinkBlueprintLibrary::STATIC_GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform");

	ULiveLinkBlueprintLibrary_GetRootTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkBasicBlueprintData BasicData                      (Parm, OutParm, ReferenceParm)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::STATIC_GetPropertyValue(const struct FName& PropertyName, struct FLiveLinkBasicBlueprintData* BasicData, float* Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue");

	ULiveLinkBlueprintLibrary_GetPropertyValue_Params params;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BasicData != nullptr)
		*BasicData = params.BasicData;
	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// struct FLiveLinkTransform      Parent                         (Parm, OutParm)

void ULiveLinkBlueprintLibrary::STATIC_GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetParent");

	ULiveLinkBlueprintLibrary_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Parent != nullptr)
		*Parent = params.Parent;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// struct FSubjectMetadata        MetaData                       (Parm, OutParm)

void ULiveLinkBlueprintLibrary::STATIC_GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata");

	ULiveLinkBlueprintLibrary_GetMetadata_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (MetaData != nullptr)
		*MetaData = params.MetaData;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIncludeDisabledSubject        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDisal                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLiveLinkSubjectKey> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary::STATIC_GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeDisal)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects");

	ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params params;
	params.bIncludeDisabledSubject = bIncludeDisabledSubject;
	params.bIncludeDisal = bIncludeDisal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (ConstParm, Parm)
// class ULiveLinkRole*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiveLinkRole* ULiveLinkBlueprintLibrary::STATIC_GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole");

	ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIncludeVirtualSubject         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLiveLinkSubjectName> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLiveLinkSubjectName> ULiveLinkBlueprintLibrary::STATIC_GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames");

	ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params params;
	params.bIncludeVirtualSubject = bIncludeVirtualSubject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// TMap<struct FName, float>      Curves                         (Parm, OutParm)

void ULiveLinkBlueprintLibrary::STATIC_GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetCurves");

	ULiveLinkBlueprintLibrary_GetCurves_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (Curves != nullptr)
		*Curves = params.Curves;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// TArray<struct FLiveLinkTransform> Children                       (Parm, OutParm, ZeroConstructor)

void ULiveLinkBlueprintLibrary::STATIC_GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetChildren");

	ULiveLinkBlueprintLibrary_GetChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Children != nullptr)
		*Children = params.Children;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm)
// struct FLiveLinkBasicBlueprintData BasicBlueprintData             (Parm, OutParm)

void ULiveLinkBlueprintLibrary::STATIC_GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData");

	ULiveLinkBlueprintLibrary_GetBasicData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (BasicBlueprintData != nullptr)
		*BasicBlueprintData = params.BasicBlueprintData;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (Parm)
// class ULiveLinkRole*           Role                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkBaseBlueprintData OutBlueprintData               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class ULiveLinkRole* Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole");

	ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params params;
	params.SubjectName = SubjectName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (Parm)
// class ULiveLinkRole*           Role                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          WorldTimeOffset                (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkBaseBlueprintData OutBlueprintData               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class ULiveLinkRole* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset");

	ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params params;
	params.SubjectName = SubjectName;
	params.Role = Role;
	params.WorldTimeOffset = WorldTimeOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (Parm)
// class ULiveLinkRole*           Role                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimecode               SceneTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLiveLinkBaseBlueprintData OutBlueprintData               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class ULiveLinkRole* Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime");

	ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params params;
	params.SubjectName = SubjectName;
	params.Role = Role;
	params.SceneTime = SceneTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentation SubjectRepresentation          (Parm)
// struct FLiveLinkBaseBlueprintData OutBlueprintData               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame");

	ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params params;
	params.SubjectRepresentation = SubjectRepresentation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = params.OutBlueprintData;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ULiveLinkBlueprintLibrary::STATIC_ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform");

	ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULiveLinkBlueprintLibrary::STATIC_ChildCount(struct FLiveLinkTransform* LiveLinkTransform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ChildCount");

	ULiveLinkBlueprintLibrary_ChildCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          WorldTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm)

void ULiveLinkComponent::GetSubjectDataAtWorldTime(const struct FName& SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime");

	ULiveLinkComponent_GetSubjectDataAtWorldTime_Params params;
	params.SubjectName = SubjectName;
	params.WorldTime = WorldTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimecode               SceneTime                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm)

void ULiveLinkComponent::GetSubjectDataAtSceneTime(const struct FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime");

	ULiveLinkComponent_GetSubjectDataAtSceneTime_Params params;
	params.SubjectName = SubjectName;
	params.SceneTime = SceneTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetSubjectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm)

void ULiveLinkComponent::GetSubjectData(const struct FName& SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectData");

	ULiveLinkComponent_GetSubjectData_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           SubjectNames                   (Parm, OutParm, ZeroConstructor)

void ULiveLinkComponent::GetAvailableSubjectNames(TArray<struct FName>* SubjectNames)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames");

	ULiveLinkComponent_GetAvailableSubjectNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectNames != nullptr)
		*SubjectNames = params.SubjectNames;
}


// Function LiveLink.LiveLinkInstance.SetSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName    SubjectName                    (Parm)

void ULiveLinkInstance::SetSubject(const struct FLiveLinkSubjectName& SubjectName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkInstance.SetSubject");

	ULiveLinkInstance_SetSubject_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveLink.LiveLinkInstance.SetRetargetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiveLinkRetargetAsset*  RetargetAsset                  (Parm, ZeroConstructor, IsPlainOldData)

void ULiveLinkInstance::SetRetargetAsset(class ULiveLinkRetargetAsset* RetargetAsset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkInstance.SetRetargetAsset");

	ULiveLinkInstance_SetRetargetAsset_Params params;
	params.RetargetAsset = RetargetAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FProviderPollResult> AvailableProviders             (Parm, OutParm, ZeroConstructor)

void ULiveLinkMessageBusFinder::GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders");

	ULiveLinkMessageBusFinder_GetAvailableProviders_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableProviders != nullptr)
		*AvailableProviders = params.AvailableProviders;
}


// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULiveLinkMessageBusFinder* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::STATIC_ConstructMessageBusFinder()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder");

	ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FProviderPollResult     Provider                       (Parm, OutParm, ReferenceParm)
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm)

void ULiveLinkMessageBusFinder::STATIC_ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider");

	ULiveLinkMessageBusFinder_ConnectToProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Provider != nullptr)
		*Provider = params.Provider;
	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;
}


// Function LiveLink.LiveLinkPreset.BuildFromClient
// (Final, Native, Public, BlueprintCallable)

void ULiveLinkPreset::BuildFromClient()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.BuildFromClient");

	ULiveLinkPreset_BuildFromClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveLink.LiveLinkPreset.ApplyToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkPreset::ApplyToClient()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.ApplyToClient");

	ULiveLinkPreset_ApplyToClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkPreset.AddToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           bRecreatePresets               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULiveLinkPreset::AddToClient(bool bRecreatePresets)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.AddToClient");

	ULiveLinkPreset_AddToClient_Params params;
	params.bRecreatePresets = bRecreatePresets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TMap<struct FName, float>      CurveItems                     (Parm, OutParm, ReferenceParm)

void ULiveLinkRemapAsset::RemapCurveElements(TMap<struct FName, float>* CurveItems)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.RemapCurveElements");

	ULiveLinkRemapAsset_RemapCurveElements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurveItems != nullptr)
		*CurveItems = params.CurveItems;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FName                   CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULiveLinkRemapAsset::GetRemappedCurveName(const struct FName& CurveName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName");

	ULiveLinkRemapAsset_GetRemappedCurveName_Params params;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULiveLinkRemapAsset::GetRemappedBoneName(const struct FName& BoneName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName");

	ULiveLinkRemapAsset_GetRemappedBoneName_Params params;
	params.BoneName = BoneName;

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
