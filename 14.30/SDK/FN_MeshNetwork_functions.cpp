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

// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility");

	AMeshBeaconClient_ServerUpdateMultipleLevelsVisibility_Params params;
	params.LevelVisibilities = LevelVisibilities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FUpdateLevelVisibilityLevelInfo LevelVisibility                (ConstParm, Parm, ReferenceParm)

void AMeshBeaconClient::ServerUpdateLevelVisibility(const struct FUpdateLevelVisibilityLevelInfo& LevelVisibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility");

	AMeshBeaconClient_ServerUpdateLevelVisibility_Params params;
	params.LevelVisibility = LevelVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshBeaconClient.OnRep_ParentIds
// (Final, Native, Protected)

void AMeshBeaconClient::OnRep_ParentIds()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.OnRep_ParentIds");

	AMeshBeaconClient_OnRep_ParentIds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime
// (Native, Protected)

void AMeshBeaconClient::OnRep_MeshPingTime()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime");

	AMeshBeaconClient_OnRep_MeshPingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
// (Final, Native, Protected)

void AMeshBeaconClient::OnRep_ConnectedToRoot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot");

	AMeshBeaconClient_OnRep_ConnectedToRoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMeshNetworkNodeType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMeshNetworkNodeType UMeshNetworkComponent::GetMeshNetworkNodeType()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType");

	UMeshNetworkComponent_GetMeshNetworkNodeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshMetaDataStruct     MetaData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMeshNetworkSubsystem::SetMetaDataWithKey(const struct FName& Key, const struct FMeshMetaDataStruct& MetaData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey");

	UMeshNetworkSubsystem_SetMetaDataWithKey_Params params;
	params.Key = Key;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct     MetaData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMeshNetworkSubsystem::SetMetaData(const struct FMeshMetaDataStruct& MetaData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.SetMetaData");

	UMeshNetworkSubsystem_SetMetaData_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FMeshMetaDataStruct     MetaData                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshNetworkSubsystem::GetMetaDataWithKey(const struct FName& Key, struct FMeshMetaDataStruct* MetaData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey");

	UMeshNetworkSubsystem_GetMetaDataWithKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MetaData != nullptr)
		*MetaData = params.MetaData;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct     MetaData                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMeshNetworkSubsystem::GetMetadata(struct FMeshMetaDataStruct* MetaData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetMetadata");

	UMeshNetworkSubsystem_GetMetadata_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MetaData != nullptr)
		*MetaData = params.MetaData;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMeshNetworkNodeType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMeshNetworkNodeType UMeshNetworkSubsystem::GetMeshNetworkNodeType()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType");

	UMeshNetworkSubsystem_GetMeshNetworkNodeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMeshNetworkNodeType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMeshNetworkNodeType UMeshNetworkSubsystem::GetGameServerNodeType()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType");

	UMeshNetworkSubsystem_GetGameServerNodeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshNetworkSubsystem::GetConnectedToRoot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot");

	UMeshNetworkSubsystem_GetConnectedToRoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMeshNetworkComponent*   MeshComponentClass             (Parm, ZeroConstructor, IsPlainOldData)

void UMeshNetworkSubsystem::EnableMeshReplication(class AActor* Actor, class UMeshNetworkComponent* MeshComponentClass)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication");

	UMeshNetworkSubsystem_EnableMeshReplication_Params params;
	params.Actor = Actor;
	params.MeshComponentClass = MeshComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UMeshNetworkSubsystem::DisableMeshReplication(class AActor* Actor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication");

	UMeshNetworkSubsystem_DisableMeshReplication_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif