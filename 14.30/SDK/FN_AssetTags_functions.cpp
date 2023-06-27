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

// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 AssetPtr                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(class UObject* AssetPtr)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr");

	UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params params;
	params.AssetPtr = AssetPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAssetData              AssetData                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData(const struct FAssetData& AssetData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData");

	UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params params;
	params.AssetData = AssetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AssetPathName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAsset(const struct FName& AssetPathName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset");

	UAssetTagsSubsystem_GetCollectionsContainingAsset_Params params;
	params.AssetPathName = AssetPathName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetCollections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAssetTagsSubsystem::GetCollections()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollections");

	UAssetTagsSubsystem_GetCollections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAssetData>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(const struct FName& Name)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection");

	UAssetTagsSubsystem_GetAssetsInCollection_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AssetTags.AssetTagsSubsystem.CollectionExists
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAssetTagsSubsystem::CollectionExists(const struct FName& Name)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.CollectionExists");

	UAssetTagsSubsystem_CollectionExists_Params params;
	params.Name = Name;

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
